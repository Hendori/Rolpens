
/* MultiplayerAPI::get_default_interface() */

MultiplayerAPI * __thiscall MultiplayerAPI::get_default_interface(MultiplayerAPI *this)

{
  StringName::StringName((StringName *)this,(StringName *)&default_interface);
  return this;
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant_const*>::_copy_on_write(CowData<Variant_const*> *this)

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
  __n = lVar2 * 8;
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



/* MultiplayerAPI::create_default_interface() */

MultiplayerAPI * __thiscall MultiplayerAPI::create_default_interface(MultiplayerAPI *this)

{
  char cVar1;
  long lVar2;
  RefCounted *this_00;
  
  if (default_interface == 0) {
    this_00 = (RefCounted *)operator_new(600,"");
    RefCounted::RefCounted(this_00);
    *(undefined ***)this_00 = &PTR__initialize_classv_00114218;
    StringName::StringName((StringName *)(this_00 + 0x180),"_poll",false);
    this_00[0x188] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 400) = 0;
    StringName::StringName((StringName *)(this_00 + 0x198),"_set_multiplayer_peer",false);
    this_00[0x1a0] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1a8) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1b0),"_get_multiplayer_peer",false);
    this_00[0x1b8] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1c0) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1c8),"_get_unique_id",false);
    this_00[0x1d0] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1d8) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1e0),"_get_peer_ids",false);
    this_00[0x1e8] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1f0) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1f8),"_rpc",false);
    this_00[0x200] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x208) = 0;
    StringName::StringName((StringName *)(this_00 + 0x210),"_get_remote_sender_id",false);
    this_00[0x218] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x220) = 0;
    StringName::StringName((StringName *)(this_00 + 0x228),"_object_configuration_add",false);
    this_00[0x230] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x238) = 0;
    StringName::StringName((StringName *)(this_00 + 0x240),"_object_configuration_remove",false);
    this_00[0x248] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x250) = 0;
    postinitialize_handler((Object *)this_00);
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
  }
  else {
    lVar2 = ClassDB::instantiate((StringName *)&default_interface);
    if ((lVar2 != 0) && (lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&typeinfo,0), lVar2 != 0)) {
      *(long *)this = lVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 != '\0') {
        return this;
      }
    }
    *(undefined8 *)this = 0;
  }
  return this;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* MultiplayerAPI::encode_and_compress_variant(Variant const&, unsigned char*, int&, bool) */

undefined8
MultiplayerAPI::encode_and_compress_variant
          (Variant *param_1,uchar *param_2,int *param_3,bool param_4)

{
  Variant VVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  uchar *puVar9;
  
  iVar5 = *(int *)param_1;
  if (0x3f < iVar5) {
    _err_print_error("encode_and_compress_variant","scene/main/multiplayer_api.cpp",0x42,
                     "FATAL: Condition \"p_variant.get_type() > 0x3F\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *param_3 = 0;
  if (iVar5 == 1) {
    iVar5 = 1;
    if (param_2 != (uchar *)0x0) {
      bVar4 = Variant::operator_cast_to_bool(param_1);
      *param_2 = bVar4 << 7;
      *param_2 = bVar4 << 7 | (byte)*param_1;
      iVar5 = *param_3 + 1;
    }
    *param_3 = iVar5;
    return 0;
  }
  if (iVar5 == 2) {
    *param_3 = 1;
    if (param_2 == (uchar *)0x0) {
      lVar8 = Variant::operator_cast_to_long(param_1);
      if (lVar8 + 0x80U < 0x100) {
        *param_3 = *param_3 + 1;
        return 0;
      }
      if (lVar8 + 0x8000U < 0x10000) {
        *param_3 = *param_3 + 2;
        return 0;
      }
      if (lVar8 + 0x80000000U >> 0x20 == 0) {
        *param_3 = *param_3 + 4;
        return 0;
      }
      *param_3 = *param_3 + 8;
      return 0;
    }
    uVar6 = Variant::operator_cast_to_long(param_1);
    if (uVar6 + 0x80 < 0x100) {
      param_2[1] = (uchar)uVar6;
      iVar5 = *param_3 + 1;
      bVar3 = 0;
    }
    else if (uVar6 + 0x8000 < 0x10000) {
      *(short *)(param_2 + 1) = (short)uVar6;
      iVar5 = *param_3 + 2;
      bVar3 = 0x40;
    }
    else {
      puVar9 = param_2 + 1;
      if (uVar6 + 0x80000000 >> 0x20 == 0) {
        do {
          *puVar9 = (uchar)uVar6;
          puVar9 = puVar9 + 1;
          uVar6 = uVar6 >> 8 & 0xffffff;
        } while (puVar9 != param_2 + 5);
        iVar5 = *param_3 + 4;
        bVar3 = 0x80;
      }
      else {
        do {
          *puVar9 = (uchar)uVar6;
          puVar9 = puVar9 + 1;
          uVar6 = uVar6 >> 8;
        } while (puVar9 != param_2 + 9);
        iVar5 = *param_3 + 8;
        bVar3 = 0xc0;
      }
    }
    VVar1 = *param_1;
    *param_3 = iVar5;
    *param_2 = bVar3 | (byte)VVar1;
  }
  else {
    uVar7 = encode_variant(param_1,param_2,param_3,param_4,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (param_2 != (uchar *)0x0) {
      *param_2 = (uchar)*(undefined4 *)param_1;
      return 0;
    }
  }
  return 0;
}



/* MultiplayerAPI::decode_and_decompress_variant(Variant&, unsigned char const*, int, int*, bool) */

undefined8
MultiplayerAPI::decode_and_decompress_variant
          (Variant *param_1,uchar *param_2,int param_3,int *param_4,bool param_5)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
    _err_print_error("decode_and_decompress_variant","scene/main/multiplayer_api.cpp",0x8f,
                     "Condition \"len < 1\" is true. Returning: ERR_INVALID_DATA",0,0);
LAB_00100a25:
    uVar4 = 0x1e;
  }
  else {
    bVar1 = *param_2;
    bVar6 = bVar1 & 0x3f;
    if (0x26 < bVar6) {
      _err_print_error("decode_and_decompress_variant","scene/main/multiplayer_api.cpp",0x93,
                       "Condition \"type >= Variant::VARIANT_MAX\" is true. Returning: ERR_INVALID_DATA"
                       ,0,0);
      goto LAB_00100a25;
    }
    if (bVar6 == 1) {
      Variant::Variant((Variant *)local_38,(bool)((byte)((char)bVar1 >> 7) >> 7));
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_38[0];
      *(undefined8 *)(param_1 + 8) = local_30;
      *(undefined8 *)(param_1 + 0x10) = uStack_28;
      if (param_4 != (int *)0x0) {
        *param_4 = 1;
      }
    }
    else {
      if (bVar6 != 2) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = decode_variant(param_1,param_2,param_3,param_4,param_5,0);
          return uVar4;
        }
        goto LAB_00100c0d;
      }
      iVar8 = param_3 + -1;
      if (param_4 != (int *)0x0) {
        *param_4 = 1;
      }
      if ((bVar1 & 0xc0) == 0) {
        if (param_3 == 1) {
          _err_print_error("decode_and_decompress_variant","scene/main/multiplayer_api.cpp",0xa5,
                           "Condition \"len < 1\" is true. Returning: ERR_INVALID_DATA",0,0);
          goto LAB_00100a25;
        }
        Variant::Variant((Variant *)local_38,(int)(char)param_2[1]);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_38[0];
        *(undefined8 *)(param_1 + 8) = local_30;
        *(undefined8 *)(param_1 + 0x10) = uStack_28;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 1;
        }
      }
      else if ((bVar1 & 0xc0) == 0x40) {
        if (iVar8 < 2) {
          _err_print_error("decode_and_decompress_variant","scene/main/multiplayer_api.cpp",0xad,
                           "Condition \"len < 2\" is true. Returning: ERR_INVALID_DATA",0,0);
          goto LAB_00100a25;
        }
        Variant::Variant((Variant *)local_38,*(short *)(param_2 + 1));
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_38[0];
        *(undefined8 *)(param_1 + 8) = local_30;
        *(undefined8 *)(param_1 + 0x10) = uStack_28;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 2;
        }
      }
      else if ((bVar1 & 0xc0) == 0x80) {
        lVar5 = 0;
        uVar10 = 0;
        if (iVar8 < 4) {
          _err_print_error("decode_and_decompress_variant","scene/main/multiplayer_api.cpp",0xb5,
                           "Condition \"len < 4\" is true. Returning: ERR_INVALID_DATA",0,0);
          goto LAB_00100a25;
        }
        do {
          lVar3 = lVar5 + 1;
          cVar2 = (char)lVar5;
          lVar5 = lVar5 + 1;
          uVar10 = uVar10 | (uint)param_2[lVar3] << (cVar2 * '\b' & 0x1fU);
        } while (lVar5 != 4);
        Variant::Variant((Variant *)local_38,uVar10);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_38[0];
        *(undefined8 *)(param_1 + 8) = local_30;
        *(undefined8 *)(param_1 + 0x10) = uStack_28;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 4;
        }
      }
      else {
        pbVar9 = param_2 + 1;
        iVar7 = 0;
        uVar11 = 0;
        if (iVar8 < 8) {
          _err_print_error("decode_and_decompress_variant","scene/main/multiplayer_api.cpp",0xbd,
                           "Condition \"len < 8\" is true. Returning: ERR_INVALID_DATA",0,0);
          goto LAB_00100a25;
        }
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          bVar6 = (byte)iVar7;
          iVar7 = iVar7 + 8;
          uVar11 = uVar11 | (ulong)bVar1 << (bVar6 & 0x3f);
        } while (iVar7 != 0x40);
        Variant::Variant((Variant *)local_38,uVar11);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_1 = local_38[0];
        *(undefined8 *)(param_1 + 8) = local_30;
        *(undefined8 *)(param_1 + 0x10) = uStack_28;
        if (param_4 != (int *)0x0) {
          *param_4 = *param_4 + 8;
        }
      }
    }
    uVar4 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00100c0d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerAPI::encode_and_compress_variants(Variant const**, int, unsigned char*, int&, bool*,
   bool) */

undefined8
MultiplayerAPI::encode_and_compress_variants
          (Variant **param_1,int param_2,uchar *param_3,int *param_4,bool *param_5,bool param_6)

{
  long *plVar1;
  Variant **ppVVar2;
  Variant *pVVar3;
  void *pvVar4;
  void *pvVar5;
  size_t __n;
  uchar *puVar6;
  long in_FS_OFFSET;
  int local_5c;
  Variant local_58 [8];
  void *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  local_5c = 0;
  if (param_2 == 0) {
    if (param_5 != (bool *)0x0) {
      *param_5 = true;
    }
  }
  else if ((param_5 == (bool *)0x0) || (param_2 != 1)) {
    if (0 < param_2) {
      ppVVar2 = param_1 + param_2;
      do {
        pVVar3 = *param_1;
        puVar6 = (uchar *)0x0;
        if (param_3 != (uchar *)0x0) {
          puVar6 = param_3 + *param_4;
        }
        param_1 = param_1 + 1;
        encode_and_compress_variant(pVVar3,puVar6,&local_5c,param_6);
        *param_4 = *param_4 + local_5c;
      } while (ppVVar2 != param_1);
    }
  }
  else {
    pVVar3 = *param_1;
    *param_5 = false;
    if (*(int *)pVVar3 == 0x1d) {
      *param_5 = true;
      Variant::operator_cast_to_Vector(local_58);
      pvVar4 = local_50;
      if (param_3 == (uchar *)0x0) {
        if (local_50 == (void *)0x0) goto LAB_00100ca0;
      }
      else {
        if (local_50 == (void *)0x0) {
          __n = 0;
        }
        else {
          __n = *(size_t *)((long)local_50 + -8);
        }
        memcpy(param_3,local_50,__n);
      }
      pvVar5 = local_50;
      *param_4 = *param_4 + (int)*(undefined8 *)((long)pvVar4 + -8);
      LOCK();
      plVar1 = (long *)((long)pvVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = (void *)0x0;
        Memory::free_static((void *)((long)pvVar5 + -0x10),false);
      }
    }
    else {
      encode_and_compress_variant(pVVar3,param_3,&local_5c,param_6);
      *param_4 = *param_4 + local_5c;
    }
  }
LAB_00100ca0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* MultiplayerAPI::set_default_interface(StringName const&) */

void MultiplayerAPI::set_default_interface(StringName *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "MultiplayerAPI";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  cVar3 = ClassDB::is_parent_class(param_1,(StringName *)&local_48);
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
  if (cVar3 == '\0') {
    StringName::StringName((StringName *)&local_50,param_1);
    local_40 = 0x58;
    local_48 = 
    "Can\'t make %s the default multiplayer interface since it does not extend MultiplayerAPI.";
    local_58 = 0;
    String::parse_latin1((StrRange *)&local_58);
    vformat<StringName>((StringName *)&local_48,&local_58,(StrRange *)&local_50);
    _err_print_error("set_default_interface","scene/main/multiplayer_api.cpp",0x25,
                     "Condition \"!ClassDB::is_parent_class(p_interface, MultiplayerAPI::get_class_static())\" is true."
                     ,(StringName *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
  }
  else {
    lVar2 = *(long *)param_1;
    if (lVar2 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    StringName::StringName((StringName *)&local_48,(String *)&local_50,true);
    if (default_interface == local_48) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      default_interface = local_48;
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar1 * 4;
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



/* MultiplayerAPI::_bind_methods() */

void MultiplayerAPI::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  MethodBind *pMVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  undefined *local_188;
  int local_180;
  undefined8 local_178;
  undefined4 local_170;
  char *local_168;
  undefined8 local_160;
  long *plStack_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  char *local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  char *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  Variant *local_a8;
  char *pcStack_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar4 = PTR__LC66_00114878;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_168,(char ***)"has_multiplayer_peer",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,bool>(has_multiplayer_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_multiplayer_peer",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,Ref<MultiplayerPeer>>((_func_Ref *)0x161);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_f8 = &_LC66;
  local_78 = (Variant **)&local_f8;
  local_f0 = 0;
  uVar7 = (uint)(Variant *)&local_78;
  D_METHODP((char *)&local_168,(char ***)"set_multiplayer_peer",uVar7);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,Ref<MultiplayerPeer>const&>
                     ((_func_void_Ref_ptr *)0x159);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_unique_id",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,int>((_func_int *)0x169);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"is_server",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,bool>(is_server);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_remote_sender_id",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,int>((_func_int *)0x181);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)&_LC75,0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,Error>((_func_Error *)0x151);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  Array::Array((Array *)&local_198);
  local_a8 = (Variant *)puVar4;
  pcStack_a0 = "object";
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &pcStack_a0;
  local_98 = "method";
  pcStack_90 = "arguments";
  local_88 = 0;
  local_78 = &local_a8;
  ppcStack_60 = &pcStack_90;
  D_METHODP((char *)&local_168,(char ***)&_LC76,uVar7);
  Variant::Variant((Variant *)&local_78,(Array *)&local_198);
  local_58 = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_a8 = (Variant *)&local_78;
  pMVar6 = create_method_bind<MultiplayerAPI,Error,int,Object*,StringName_const&,Array>(_rpc_bind);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,&local_a8,1);
  if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_198);
  local_b8 = 0;
  local_c8 = "object";
  pcStack_c0 = "configuration";
  auStack_70._0_8_ = &pcStack_c0;
  local_78 = (Variant **)&local_c8;
  D_METHODP((char *)&local_168,(char ***)"object_configuration_add",uVar7);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,Error,Object*,Variant>
                     ((_func_Error_Object_ptr_Variant *)0x189);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = 0;
  local_e8 = "object";
  pcStack_e0 = "configuration";
  auStack_70._0_8_ = &pcStack_e0;
  local_78 = (Variant **)&local_e8;
  D_METHODP((char *)&local_168,(char ***)"object_configuration_remove",uVar7);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,Error,Object*,Variant>
                     ((_func_Error_Object_ptr_Variant *)0x191);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_peers",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<MultiplayerAPI,Vector<int>>((_func_Vector *)0x171);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_1a8,true);
  _scs_create((char *)&local_1b0,true);
  local_1b8 = 0;
  local_168 = "MultiplayerPeer";
  local_1c0 = 0;
  local_160 = 0xf;
  String::parse_latin1((StrRange *)&local_1c0);
  local_1c8 = 0;
  local_168 = "multiplayer_peer";
  local_160 = 0x10;
  String::parse_latin1((StrRange *)&local_1c8);
  local_168 = (char *)CONCAT44(local_168._4_4_,0x18);
  local_160 = 0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)&local_1c8);
  }
  plStack_158 = (long *)0x0;
  iStack_150 = 0x11;
  local_148 = 0;
  if (local_1c0 == 0) {
    local_140 = (ulong)local_140._4_4_ << 0x20;
LAB_0010372b:
    StringName::StringName((StringName *)&local_198,(String *)&local_148,false);
    if (plStack_158 == local_198) {
      if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      plStack_158 = local_198;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)&local_1c0);
    local_140 = (ulong)local_140._4_4_ << 0x20;
    if (iStack_150 == 0x11) goto LAB_0010372b;
    StringName::operator=((StringName *)&plStack_158,(StringName *)&local_1b8);
  }
  local_1d0 = 0;
  local_198 = (long *)0x10ae7d;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1d0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1d0,false);
  ClassDB::add_property
            ((StringName *)&local_198,(PropertyInfo *)&local_168,(StringName *)&local_1b0,
             (StringName *)&local_1a8,-1);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((((StringName::configured != '\0') &&
       ((local_1b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_1b0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)0x10a076;
  pcStack_a0 = (char *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)&local_168,(char ***)"set_default_interface",uVar7);
  StringName::StringName((StringName *)&local_198,"MultiplayerAPI",false);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_001146c0;
  *(code **)(pMVar6 + 0x58) = set_default_interface;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_198);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_default_interface",0);
  StringName::StringName((StringName *)&local_198,"MultiplayerAPI",false);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_00114720;
  *(undefined8 *)(pMVar6 + 0x58) = 0x100000;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 0;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_198);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"create_default_interface",0);
  StringName::StringName((StringName *)&local_198,"MultiplayerAPI",false);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar6);
  *(undefined ***)pMVar6 = &PTR__gen_argument_type_00114780;
  *(code **)(pMVar6 + 0x58) = create_default_interface;
  MethodBind::_generate_argument_types((int)pMVar6);
  *(undefined4 *)(pMVar6 + 0x34) = 0;
  MethodBind::_set_static(SUB81(pMVar6,0));
  MethodBind::_set_returns(SUB81(pMVar6,0));
  StringName::operator=((StringName *)(pMVar6 + 0x18),(StringName *)&local_198);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  plVar5 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_158 + -2;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      if (plStack_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plStack_158[-1];
      lVar9 = 0;
      plStack_158 = (long *)0x0;
      plVar8 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar8 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_168 = "";
  local_1c0 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_1c8 = 0;
  local_168 = "id";
  local_160 = 2;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = (long *)CONCAT44(local_198._4_4_,2);
  local_190 = 0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)&local_1c8);
  }
  local_188 = (undefined *)0x0;
  local_180 = 0;
  local_178 = 0;
  if (local_1c0 == 0) {
LAB_0010282b:
    local_170 = 6;
    StringName::operator=((StringName *)&local_188,(StringName *)&local_1b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
    local_170 = 6;
    if (local_180 != 0x11) goto LAB_0010282b;
    StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
    if (local_188 == local_168) {
      if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_188 = local_168;
    }
  }
  local_1b0 = 0;
  local_168 = "peer_connected";
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_1b0);
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  plStack_158 = (long *)0x0;
  iStack_150 = 0;
  uStack_14c = 0;
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1b0);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)&local_198);
  local_1a8 = "MultiplayerAPI";
  local_1d0 = 0;
  local_1a0 = 0xe;
  String::parse_latin1((StrRange *)&local_1d0);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d0,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_168 = "";
  local_1c0 = 0;
  local_160 = 0;
  String::parse_latin1((StrRange *)&local_1c0);
  local_168 = "id";
  local_1c8 = 0;
  local_160 = 2;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = (long *)CONCAT44(local_198._4_4_,2);
  local_190 = 0;
  if (local_1c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)&local_1c8);
  }
  local_188 = (undefined *)0x0;
  local_180 = 0;
  local_178 = 0;
  if (local_1c0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_1c0);
    local_170 = 6;
    if (local_180 == 0x11) {
      StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
      if (local_188 == local_168) {
        if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_188 = local_168;
      }
      goto LAB_00102b3b;
    }
  }
  local_170 = 6;
  StringName::operator=((StringName *)&local_188,(StringName *)&local_1b8);
LAB_00102b3b:
  local_1b0 = 0;
  local_168 = "peer_disconnected";
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_1b0);
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  plStack_158 = (long *)0x0;
  iStack_150 = 0;
  uStack_14c = 0;
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1b0);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_128,(PropertyInfo *)&local_198);
  local_1a8 = "MultiplayerAPI";
  local_1d0 = 0;
  local_1a0 = 0xe;
  String::parse_latin1((StrRange *)&local_1d0);
  StringName::StringName((StringName *)&local_1a8,(String *)&local_1d0,false);
  ClassDB::add_signal((StringName *)&local_1a8,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_1a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_1a8 = (char *)0x0;
  local_168 = "connected_to_server";
  local_160 = 0x13;
  String::parse_latin1((StrRange *)&local_1a8);
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  plStack_158 = (long *)0x0;
  iStack_150 = 0;
  uStack_14c = 0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1a8);
  }
  local_1b0 = 0;
  local_198 = (long *)0x10ae7d;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1b0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1b0,false);
  ClassDB::add_signal((StringName *)&local_198,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_1a8 = (char *)0x0;
  local_168 = "connection_failed";
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_1a8);
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  plStack_158 = (long *)0x0;
  iStack_150 = 0;
  uStack_14c = 0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1a8);
  }
  local_1b0 = 0;
  local_198 = (long *)0x10ae7d;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1b0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1b0,false);
  ClassDB::add_signal((StringName *)&local_198,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  local_1a8 = (char *)0x0;
  local_168 = "server_disconnected";
  local_160 = 0x13;
  String::parse_latin1((StrRange *)&local_1a8);
  local_168 = (char *)0x0;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 6;
  local_130 = 1;
  local_128[0] = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  plStack_158 = (long *)0x0;
  iStack_150 = 0;
  uStack_14c = 0;
  if (local_1a8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)&local_1a8);
  }
  local_1b0 = 0;
  local_198 = (long *)0x10ae7d;
  local_190 = 0xe;
  String::parse_latin1((StrRange *)&local_1b0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1b0,false);
  ClassDB::add_signal((StringName *)&local_198,(MethodInfo *)&local_168);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  StringName::StringName((StringName *)&local_1c8,"RPC_MODE_DISABLED",false);
  local_168 = "RPC_MODE_DISABLED";
  local_1d0 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1b0 = 0;
  local_168 = "MultiplayerAPI::RPCMode";
  local_160 = 0x17;
  String::parse_latin1((StrRange *)&local_1b0);
  godot::details::enum_qualified_name_to_class_info_name
            ((details *)&local_1a8,(StringName *)&local_1b0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1a8,false);
  local_160 = 0;
  plStack_158 = (long *)0x0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_168 = (char *)0x2;
  iStack_150 = 0;
  uStack_14c = 0;
  local_148 = 0;
  local_140 = CONCAT44(local_140._4_4_,0x10006);
  StringName::operator=((StringName *)&plStack_158,(StringName *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  local_198 = plStack_158;
  plStack_158 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "MultiplayerAPI";
  local_1a8 = (char *)0x0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_168,(String *)&local_1a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_198,(StringName *)&local_1c8,0,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1c8,"RPC_MODE_ANY_PEER",false);
  local_168 = "RPC_MODE_ANY_PEER";
  local_1d0 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_1d0);
  local_1b0 = 0;
  local_168 = "MultiplayerAPI::RPCMode";
  local_160 = 0x17;
  String::parse_latin1((StrRange *)&local_1b0);
  godot::details::enum_qualified_name_to_class_info_name
            ((details *)&local_1a8,(StringName *)&local_1b0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1a8,false);
  local_160 = 0;
  plStack_158 = (long *)0x0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_168 = (char *)0x2;
  iStack_150 = 0;
  uStack_14c = 0;
  local_148 = 0;
  local_140 = CONCAT44(local_140._4_4_,0x10006);
  StringName::operator=((StringName *)&plStack_158,(StringName *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  local_198 = plStack_158;
  plStack_158 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "MultiplayerAPI";
  local_1a8 = (char *)0x0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_168,(String *)&local_1a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_198,(StringName *)&local_1c8,1,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_1c8,"RPC_MODE_AUTHORITY",false);
  local_168 = "RPC_MODE_AUTHORITY";
  local_1d0 = 0;
  local_160 = 0x12;
  String::parse_latin1((StrRange *)&local_1d0);
  local_168 = "MultiplayerAPI::RPCMode";
  local_1b0 = 0;
  local_160 = 0x17;
  String::parse_latin1((StrRange *)&local_1b0);
  godot::details::enum_qualified_name_to_class_info_name
            ((details *)&local_1a8,(StringName *)&local_1b0);
  StringName::StringName((StringName *)&local_198,(String *)&local_1a8,false);
  local_160 = 0;
  plStack_158 = (long *)0x0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_168 = (char *)0x2;
  iStack_150 = 0;
  uStack_14c = 0;
  local_148 = 0;
  local_140 = CONCAT44(local_140._4_4_,0x10006);
  StringName::operator=((StringName *)&plStack_158,(StringName *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  local_198 = plStack_158;
  plStack_158 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
  local_168 = "MultiplayerAPI";
  local_1a8 = (char *)0x0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_1a8);
  StringName::StringName((StringName *)&local_168,(String *)&local_1a8,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_198,(StringName *)&local_1c8,2,false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_198 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1d0);
  if ((StringName::configured != '\0') && (local_1c8 != 0)) {
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



/* MultiplayerAPIExtension::poll() */

ulong __thiscall MultiplayerAPIExtension::poll(MultiplayerAPIExtension *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<Error,void> local_f8 [8];
  long local_f0 [5];
  uint local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x180,0,0,local_c8);
    if (local_c8[0] == 0) {
      uVar2 = Variant::operator_cast_to_long((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        uVar2 = uVar2 & 0xffffffff;
      }
      goto LAB_00103c13;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x188] == (MultiplayerAPIExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
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
    String::parse_latin1((String *)local_c8,"_poll");
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<Error,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 400) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerAPIExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00103e48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00103e5d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00103d98;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x180);
        *(undefined8 *)(this + 400) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103e48:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00103e5d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x180,uVar1);
      *(undefined8 *)(this + 400) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00103d98:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 400);
      plVar5[1] = (long)(this + 0x188);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x188] = (MultiplayerAPIExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 400);
  uVar2 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      uVar2 = (ulong)local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x180,pcVar6,0,local_c8);
      uVar2 = (ulong)local_c8[0];
    }
  }
LAB_00103c13:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerAPIExtension::get_multiplayer_peer() */

void MultiplayerAPIExtension::get_multiplayer_peer(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  Object *pOVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  Object *pOVar9;
  long in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<Ref<MultiplayerPeer>,void> local_f8 [8];
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar7 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *in_RDI = 0;
  if (plVar7 != (long *)0x0) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar7 + 0x60))(local_58,plVar7,in_RSI + 0x1b0,0,0,&local_c8);
    if (local_c8 == 0) {
      lVar4 = Variant::get_validated_object();
      if (lVar4 == 0) {
        pOVar9 = (Object *)*in_RDI;
        if (pOVar9 != (Object *)0x0) {
          *in_RDI = 0;
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar9);
            pOVar5 = (Object *)0x0;
            if (cVar2 == '\0') goto LAB_001041a0;
LAB_001041fa:
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
            if (pOVar5 != (Object *)0x0) goto LAB_0010416f;
          }
        }
      }
      else {
        pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&MultiplayerPeer::typeinfo,0);
        if (pOVar5 == (Object *)0x0) {
          pOVar9 = (Object *)*in_RDI;
LAB_001041d3:
          if (pOVar9 != (Object *)0x0) {
            *in_RDI = 0;
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              pOVar5 = (Object *)0x0;
              cVar2 = predelete_handler(pOVar9);
              if (cVar2 != '\0') goto LAB_001041fa;
            }
          }
        }
        else {
          cVar2 = RefCounted::reference();
          pOVar9 = (Object *)*in_RDI;
          if (cVar2 == '\0') goto LAB_001041d3;
          if (pOVar9 != pOVar5) {
            *in_RDI = (long)pOVar5;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              *in_RDI = 0;
            }
            if (((pOVar9 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
               (cVar2 = predelete_handler(pOVar9), cVar2 != '\0')) goto LAB_001041fa;
          }
LAB_0010416f:
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
LAB_001041a0:
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001040a8;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1b8) == '\0')) {
    local_c8 = 0;
    uStack_c4 = 0;
    local_b8 = (undefined1  [16])0x0;
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
    String::parse_latin1((String *)&local_c8,"_get_multiplayer_peer");
    local_90 = CONCAT44(local_90._4_4_,8);
    GetTypeInfo<Ref<MultiplayerPeer>,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x1c0) = 0;
    pcVar8 = *(code **)(lVar4 + 0xd8);
    if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar8 = *(code **)(lVar4 + 0xd0), pcVar8 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerAPIExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001044eb;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00104500:
        lVar4 = *(long *)(in_RSI + 8);
        pcVar8 = *(code **)(lVar4 + 200);
        if (((pcVar8 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar8 = *(code **)(lVar4 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_001043a1;
        uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0));
        *(undefined8 *)(in_RSI + 0x1c0) = uVar6;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001044eb:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00104500;
      }
      lVar4 = *(long *)(in_RSI + 8);
    }
    else {
      uVar6 = (*pcVar8)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x1b0,uVar3);
      *(undefined8 *)(in_RSI + 0x1c0) = uVar6;
      lVar4 = *(long *)(in_RSI + 8);
    }
LAB_001043a1:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = in_RSI + 0x1c0;
      plVar7[1] = in_RSI + 0x1b8;
      plVar7[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar7;
    }
    *(undefined1 *)(in_RSI + 0x1b8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar8 = *(code **)(in_RSI + 0x1c0);
  if (pcVar8 == (code *)0x0) goto LAB_001040a8;
  local_c8 = 0;
  uStack_c4 = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 == (code *)0x0) {
    (*pcVar8)(*(undefined8 *)(in_RSI + 0x10),0,&local_c8);
    pOVar9 = (Object *)CONCAT44(uStack_c4,local_c8);
    if (pOVar9 != (Object *)0x0) goto LAB_00104017;
LAB_00104237:
    pOVar9 = (Object *)*in_RDI;
    if (pOVar9 == (Object *)0x0) goto LAB_001040a8;
LAB_001040e0:
    *in_RDI = 0;
LAB_0010405a:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar9), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  else {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x1b0,pcVar8,0,&local_c8);
    pOVar9 = (Object *)CONCAT44(uStack_c4,local_c8);
    if (pOVar9 == (Object *)0x0) goto LAB_00104237;
LAB_00104017:
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pOVar5 = (Object *)*in_RDI;
      if (pOVar5 != pOVar9) {
        *in_RDI = (long)pOVar9;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *in_RDI = 0;
        }
        if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
      goto LAB_0010405a;
    }
    pOVar9 = (Object *)*in_RDI;
    if (pOVar9 != (Object *)0x0) goto LAB_001040e0;
  }
  if ((CONCAT44(uStack_c4,local_c8) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar9 = (Object *)CONCAT44(uStack_c4,local_c8);
    cVar2 = predelete_handler(pOVar9);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
LAB_001040a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerAPIExtension::get_unique_id() */

int __thiscall MultiplayerAPIExtension::get_unique_id(MultiplayerAPIExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x1c8,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104696;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1d0] == (MultiplayerAPIExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
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
    String::parse_latin1((String *)local_c8,"_get_unique_id");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1d8) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerAPIExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001048c8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001048dd:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00104818;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1c8);
        *(undefined8 *)(this + 0x1d8) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001048c8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001048dd;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1c8,uVar2);
      *(undefined8 *)(this + 0x1d8) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00104818:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x1d8);
      plVar5[1] = (long)(this + 0x1d0);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x1d0] = (MultiplayerAPIExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x1d8);
  iVar1 = 1;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1c8,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00104696:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerAPIExtension::get_peer_ids() */

void MultiplayerAPIExtension::get_peer_ids(void)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_108;
  long local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (plVar6 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,in_RSI + 0x1e0,0,0,local_f8);
    if (local_f8[0] == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      if (*(long *)(in_RDI + 8) != local_c0) {
        CowData<int>::_unref((CowData<int> *)(in_RDI + 8));
        lVar5 = local_c0;
        local_c0 = 0;
        *(long *)(in_RDI + 8) = lVar5;
      }
      CowData<int>::_unref((CowData<int> *)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104b08;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1e8) == '\0')) {
    local_c8 = 0;
    local_b8 = (undefined1  [16])0x0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)&local_c8,"_get_peer_ids");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<Vector<int>,void>::get_class_info((GetTypeInfo<Vector<int>,void> *)local_f8);
    PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar5 = *(long *)(in_RSI + 8);
    *(undefined8 *)(in_RSI + 0x1f0) = 0;
    pcVar7 = *(code **)(lVar5 + 0xd8);
    if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
       (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerAPIExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        lVar5 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if (StringName::configured != '\0') goto LAB_00104dd7;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00104df4:
        lVar5 = *(long *)(in_RSI + 8);
        pcVar7 = *(code **)(lVar5 + 200);
        if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
           (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00104d31;
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0));
        *(undefined8 *)(in_RSI + 0x1f0) = uVar4;
      }
      else {
        lVar5 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if (StringName::configured != '\0') {
LAB_00104dd7:
          if (local_100 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar5 == 0) goto LAB_00104df4;
      }
      lVar5 = *(long *)(in_RSI + 8);
    }
    else {
      uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),in_RSI + 0x1e0,uVar2);
      *(undefined8 *)(in_RSI + 0x1f0) = uVar4;
      lVar5 = *(long *)(in_RSI + 8);
    }
LAB_00104d31:
    if (*(char *)(lVar5 + 0x29) != '\0') {
      plVar6 = (long *)operator_new(0x18,"");
      *plVar6 = in_RSI + 0x1f0;
      plVar6[1] = in_RSI + 0x1e8;
      plVar6[2] = *(long *)(in_RSI + 0x168);
      *(long **)(in_RSI + 0x168) = plVar6;
    }
    *(undefined1 *)(in_RSI + 0x1e8) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar7 = *(code **)(in_RSI + 0x1f0);
  if (pcVar7 == (code *)0x0) goto LAB_00104b08;
  uStack_f0 = 0;
  uStack_ec = 0;
  pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
  if (pcVar1 == (code *)0x0) {
    (*pcVar7)(*(undefined8 *)(in_RSI + 0x10),0,local_f8);
    lVar5 = CONCAT44(uStack_ec,uStack_f0);
    local_c0 = 0;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + -0x10);
      do {
        lVar5 = *plVar6;
        if (lVar5 == 0) goto LAB_00104b58;
        LOCK();
        lVar3 = *plVar6;
        bVar8 = lVar5 == lVar3;
        if (bVar8) {
          *plVar6 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
      goto LAB_00104ab8;
    }
  }
  else {
    (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x1e0,pcVar7,0,local_f8);
    lVar5 = CONCAT44(uStack_ec,uStack_f0);
    local_c0 = 0;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + -0x10);
      do {
        lVar5 = *plVar6;
        if (lVar5 == 0) goto LAB_00104b58;
        LOCK();
        lVar3 = *plVar6;
        bVar8 = lVar5 == lVar3;
        if (bVar8) {
          *plVar6 = lVar5 + 1;
          lVar3 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
LAB_00104ab8:
      if (lVar3 == -1) {
LAB_00104b58:
        local_c0 = 0;
        lVar5 = 0;
      }
      else {
        lVar5 = CONCAT44(uStack_ec,uStack_f0);
        local_c0 = lVar5;
      }
    }
  }
  if (lVar5 != *(long *)(in_RDI + 8)) {
    CowData<int>::_unref((CowData<int> *)(in_RDI + 8));
    *(long *)(in_RDI + 8) = lVar5;
    local_c0 = 0;
  }
  CowData<int>::_unref((CowData<int> *)&local_c0);
  if (CONCAT44(uStack_ec,uStack_f0) != 0) {
    LOCK();
    plVar6 = (long *)(CONCAT44(uStack_ec,uStack_f0) + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar5 = CONCAT44(uStack_ec,uStack_f0);
      uStack_f0 = 0;
      uStack_ec = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
LAB_00104b08:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerAPIExtension::get_remote_sender_id() */

int __thiscall MultiplayerAPIExtension::get_remote_sender_id(MultiplayerAPIExtension *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x210,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104f83;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x218] == (MultiplayerAPIExtension)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
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
    String::parse_latin1((String *)local_c8,"_get_remote_sender_id");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x220) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"MultiplayerAPIExtension");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001051b8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001051cd:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00105108;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x210);
        *(undefined8 *)(this + 0x220) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001051b8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001051cd;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x210,uVar2);
      *(undefined8 *)(this + 0x220) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00105108:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x220);
      plVar5[1] = (long)(this + 0x218);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x218] = (MultiplayerAPIExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x220);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x210,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00104f83:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* MultiplayerAPI::decode_and_decompress_variants(Vector<Variant>&, unsigned char const*, int, int&,
   bool, bool) */

int MultiplayerAPI::decode_and_decompress_variants
              (Vector *param_1,uchar *param_2,int param_3,int *param_4,bool param_5,bool param_6)

{
  long *plVar1;
  Variant *pVVar2;
  size_t __n;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  size_t __n_00;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  int local_68 [2];
  undefined8 *local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = *(long *)(param_1 + 8);
  *param_4 = 0;
  if (lVar11 == 0) {
    iVar9 = 0;
    cVar5 = param_5;
  }
  else {
    iVar9 = (int)*(undefined8 *)(lVar11 + -8);
    cVar5 = iVar9 == 0 && param_5;
  }
  if (cVar5 == '\0') {
    if (iVar9 == 1) {
      if (param_5) {
        __n_00 = (size_t)param_3;
        *param_4 = param_3;
        local_60 = (undefined8 *)0x0;
        if ((long)__n_00 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
          ;
LAB_00105635:
          if (local_60 != (undefined8 *)0x0) goto LAB_0010543c;
LAB_00105643:
          puVar7 = (undefined8 *)0x0;
        }
        else {
          if (__n_00 == 0) goto LAB_00105643;
          uVar10 = __n_00 - 1 | __n_00 - 1 >> 1;
          uVar10 = uVar10 | uVar10 >> 2;
          uVar10 = uVar10 | uVar10 >> 4;
          uVar10 = uVar10 | uVar10 >> 8;
          puVar7 = (undefined8 *)Memory::alloc_static((uVar10 | uVar10 >> 0x10) + 0x11,false);
          if (puVar7 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
            goto LAB_00105635;
          }
          local_60 = puVar7 + 2;
          *puVar7 = 1;
          puVar7[1] = __n_00;
LAB_0010543c:
          puVar7 = local_60;
          if (1 < (ulong)local_60[-2]) {
            if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            __n = local_60[-1];
            uVar10 = 0x10;
            if (__n != 0) {
              uVar10 = __n - 1 | __n - 1 >> 1;
              uVar10 = uVar10 | uVar10 >> 2;
              uVar10 = uVar10 | uVar10 >> 4;
              uVar10 = uVar10 | uVar10 >> 8;
              uVar10 = uVar10 | uVar10 >> 0x10;
              uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
            }
            puVar8 = (undefined8 *)Memory::alloc_static(uVar10,false);
            puVar4 = local_60;
            if (puVar8 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0,0);
              puVar7 = local_60;
            }
            else {
              puVar7 = puVar8 + 2;
              *puVar8 = 1;
              puVar8[1] = __n;
              memcpy(puVar7,local_60,__n);
              puVar8 = local_60;
              LOCK();
              plVar1 = puVar4 + -2;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              local_60 = puVar7;
              if (*plVar1 == 0) {
                local_60 = (undefined8 *)0x0;
                Memory::free_static(puVar8 + -2,false);
                local_60 = puVar7;
              }
            }
          }
        }
        memcpy(puVar7,param_2,__n_00);
        Variant::Variant((Variant *)local_58,(Vector *)local_68);
        if (*(long *)(param_1 + 8) == 0) {
          lVar11 = 0;
LAB_00105653:
          lVar12 = 0;
LAB_00105569:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar12,lVar11,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar11 = *(long *)(*(long *)(param_1 + 8) + -8);
        if (lVar11 < 1) goto LAB_00105653;
        CowData<Variant>::_copy_on_write((CowData<Variant> *)(param_1 + 8));
        pVVar2 = *(Variant **)(param_1 + 8);
        if (pVVar2 == (Variant *)local_58) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar2 = 0;
          *(int *)pVVar2 = local_58[0];
          *(undefined8 *)(pVVar2 + 8) = local_50;
          *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
        }
        puVar7 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          LOCK();
          plVar1 = local_60 + -2;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = (undefined8 *)0x0;
            Memory::free_static(puVar7 + -2,false);
          }
        }
        goto LAB_00105390;
      }
    }
    else if (param_5) {
      _err_print_error("decode_and_decompress_variants","scene/main/multiplayer_api.cpp",0xfb,
                       "Condition \"p_raw && argc != 1\" is true. Returning: ERR_INVALID_DATA",0,0);
      iVar6 = 0x1e;
      goto LAB_00105392;
    }
    lVar12 = 0;
    iVar6 = 0;
    if (0 < iVar9) {
      do {
        if (param_3 <= iVar6) {
          _err_print_error("decode_and_decompress_variants","scene/main/multiplayer_api.cpp",0x106,
                           "Condition \"r_len >= p_len\" is true. Returning: ERR_INVALID_DATA",
                           "Invalid packet received. Size too small.",0,0);
          iVar6 = 0x1e;
          goto LAB_00105392;
        }
        if (*(long *)(param_1 + 8) == 0) {
          lVar11 = 0;
          goto LAB_00105569;
        }
        lVar11 = *(long *)(*(long *)(param_1 + 8) + -8);
        if (lVar11 <= lVar12) goto LAB_00105569;
        CowData<Variant>::_copy_on_write((CowData<Variant> *)(param_1 + 8));
        iVar6 = decode_and_decompress_variant
                          ((Variant *)(*(long *)(param_1 + 8) + lVar12 * 0x18),param_2 + iVar6,
                           param_3 - iVar6,local_68,param_6);
        if (iVar6 != 0) {
          _err_print_error("decode_and_decompress_variants","scene/main/multiplayer_api.cpp",0x10a,
                           "Condition \"err != OK\" is true. Returning: err",
                           "Invalid packet received. Unable to decode state variable.",0,0);
          goto LAB_00105392;
        }
        iVar6 = local_68[0] + *param_4;
        lVar12 = lVar12 + 1;
        *param_4 = iVar6;
      } while (iVar9 != lVar12);
    }
  }
LAB_00105390:
  iVar6 = 0;
LAB_00105392:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MultiplayerAPI::_rpc_bind(int, Object*, StringName const&, Array) */

ulong __thiscall
MultiplayerAPI::_rpc_bind
          (MultiplayerAPI *this,undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_5
          )

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Variant *pVVar7;
  long lVar8;
  Variant *pVVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  CowData<Variant_const*> *local_90;
  Variant *local_60 [2];
  undefined8 *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = (Variant *)0x0;
  local_50[0] = (undefined8 *)0x0;
  iVar3 = Array::size();
  lVar8 = (long)iVar3;
  if (lVar8 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    iVar3 = Array::size();
    lVar8 = (long)iVar3;
    if (-1 < lVar8) goto LAB_001058cf;
LAB_00105c00:
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else {
    if (lVar8 != 0) {
      CowData<Variant>::_copy_on_write((CowData<Variant> *)local_60);
      uVar11 = lVar8 * 0x18 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      puVar5 = (undefined8 *)Memory::alloc_static((uVar11 | uVar11 >> 0x20) + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_60[0] = (Variant *)(puVar5 + 2);
        *puVar5 = 1;
        pVVar9 = local_60[0];
        do {
          *(undefined4 *)pVVar9 = 0;
          pVVar7 = pVVar9 + 0x18;
          *(undefined1 (*) [16])(pVVar9 + 8) = (undefined1  [16])0x0;
          pVVar9 = pVVar7;
        } while ((Variant *)(puVar5 + lVar8 * 3 + 2) != pVVar7);
        puVar5[1] = lVar8;
      }
    }
    iVar3 = Array::size();
    lVar8 = (long)iVar3;
    if (lVar8 < 0) goto LAB_00105c00;
LAB_001058cf:
    if (local_50[0] == (undefined8 *)0x0) {
      if (lVar8 != 0) {
        lVar12 = 0;
        CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)local_50);
LAB_00105b16:
        uVar11 = lVar8 * 8 - 1;
        uVar11 = uVar11 >> 1 | uVar11;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 >> 4 | uVar11;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        lVar10 = (uVar11 >> 0x20 | uVar11) + 1;
        if (lVar12 < lVar8) {
LAB_00105b80:
          local_90 = (CowData<Variant_const*> *)local_50;
          if (lVar12 == 0) {
            puVar5 = (undefined8 *)Memory::alloc_static(lVar10 + 0x10,false);
            if (puVar5 != (undefined8 *)0x0) {
              local_50[0] = puVar5 + 2;
              *puVar5 = 1;
              puVar5[1] = 0;
              goto LAB_001059af;
            }
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            iVar3 = CowData<Variant_const*>::_realloc(local_90,lVar10);
            if (iVar3 == 0) goto LAB_001059a1;
          }
        }
        else {
LAB_00105b62:
          local_90 = (CowData<Variant_const*> *)local_50;
          iVar3 = CowData<Variant_const*>::_realloc(local_90,lVar10);
          if (iVar3 == 0) {
LAB_00105ae1:
            if (local_50[0] == (undefined8 *)0x0) {
              uVar11 = FUN_0010a264();
              return uVar11;
            }
            local_50[0][-1] = lVar8;
          }
        }
      }
    }
    else {
      lVar12 = local_50[0][-1];
      if (lVar8 != lVar12) {
        CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*> *)local_50);
        uVar11 = lVar8 * 8 - 1;
        uVar11 = uVar11 >> 1 | uVar11;
        uVar11 = uVar11 >> 2 | uVar11;
        uVar11 = uVar11 >> 4 | uVar11;
        uVar11 = uVar11 >> 8 | uVar11;
        uVar11 = uVar11 >> 0x10 | uVar11;
        uVar11 = uVar11 >> 0x20 | uVar11;
        lVar10 = uVar11 + 1;
        if (lVar12 * 8 == 0) goto LAB_00105b16;
        uVar6 = lVar12 * 8 - 1;
        uVar6 = uVar6 | uVar6 >> 1;
        uVar6 = uVar6 | uVar6 >> 2;
        uVar6 = uVar6 | uVar6 >> 4;
        uVar6 = uVar6 | uVar6 >> 8;
        uVar6 = uVar6 | uVar6 >> 0x10;
        uVar6 = uVar6 | uVar6 >> 0x20;
        if (lVar8 <= lVar12) {
          if (uVar11 != uVar6) goto LAB_00105b62;
          goto LAB_00105ae1;
        }
        if (uVar11 != uVar6) goto LAB_00105b80;
LAB_001059a1:
        if (local_50[0] == (undefined8 *)0x0) {
          _DAT_00000000 = 0;
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
LAB_001059af:
        local_50[0][-1] = lVar8;
      }
    }
  }
  local_90 = (CowData<Variant_const*> *)local_50;
  CowData<Variant>::_copy_on_write((CowData<Variant> *)local_60);
  pVVar9 = local_60[0];
  CowData<Variant_const*>::_copy_on_write(local_90);
  puVar5 = local_50[0];
  for (lVar8 = 0; iVar3 = Array::size(), (int)lVar8 < iVar3; lVar8 = lVar8 + 1) {
    pVVar7 = (Variant *)Array::operator[](param_5);
    Variant::operator=(pVVar9,pVVar7);
    puVar5[lVar8] = pVVar9;
    pVVar9 = pVVar9 + 0x18;
  }
  pcVar2 = *(code **)(*(long *)this + 0x178);
  if (puVar5 == (undefined8 *)0x0) {
    uVar4 = (*pcVar2)(this,param_2,param_1,param_3,0,0);
    uVar11 = (ulong)uVar4;
  }
  else {
    uVar11 = puVar5[-1];
    if (uVar11 == 0) {
      uVar4 = (*pcVar2)(this,param_2,param_1,param_3,0,0);
      uVar11 = (ulong)uVar4;
    }
    else {
      CowData<Variant_const*>::_copy_on_write(local_90);
      puVar5 = local_50[0];
      uVar4 = (*pcVar2)(this,param_2,param_1,param_3,local_50[0],uVar11 & 0xffffffff);
      uVar11 = (ulong)uVar4;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00105a54;
    }
    LOCK();
    plVar1 = puVar5 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_50[0] + -2,false);
    }
  }
LAB_00105a54:
  CowData<Variant>::_unref((CowData<Variant> *)local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
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



/* MultiplayerAPIExtension::_bind_methods() */

void MultiplayerAPIExtension::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  long in_FS_OFFSET;
  StringName *local_128;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulong local_60;
  Vector<int> local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_e0._8_8_ = local_e0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_f0 = 0;
  local_e8 = "_poll";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "MultiplayerAPIExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "multiplayer_peer";
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_set_multiplayer_peer";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Ref<MultiplayerPeer>,void>::get_class_info
            ((GetTypeInfo<Ref<MultiplayerPeer>,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "MultiplayerAPIExtension";
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_multiplayer_peer";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Ref<MultiplayerPeer>,void>::get_class_info
            ((GetTypeInfo<Ref<MultiplayerPeer>,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "MultiplayerAPIExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_unique_id";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "MultiplayerAPIExtension";
  local_60 = CONCAT44(local_60._4_4_,3);
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_peer_ids";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  local_118 = 0;
  local_110 = 0;
  local_e8 = "";
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_e0._8_8_;
  local_e0 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_110);
  local_108 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1e);
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 == 0) {
LAB_001065b3:
    local_c0 = 6;
    StringName::operator=((StringName *)(local_e0 + 8),(StringName *)&local_118);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if ((int)local_d0 != 0x11) goto LAB_001065b3;
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
  local_128 = (StringName *)(local_e0 + 8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "MultiplayerAPIExtension";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "peer";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_110 = 0;
  local_b8 = "object";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = (char *)0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_110);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "method";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_108 = 0;
  local_b8 = "args";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_108);
  local_b8 = (char *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_rpc";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 4;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_60 = local_60 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,3);
  local_e8 = "Object";
  local_100 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_108,(String *)&local_100,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_e0._8_8_;
  local_e0 = auVar5 << 0x40;
  StringName::StringName(local_128,(StringName *)&local_108);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar8 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_118 = 0;
  local_110 = 0;
  local_e8 = "";
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_e0._8_8_;
  local_e0 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_110);
  local_108 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x15);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 == 0) {
LAB_00106ae3:
    local_c0 = 6;
    StringName::operator=(local_128,(StringName *)&local_118);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if ((int)local_d0 != 0x11) goto LAB_00106ae3;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_118 = 0;
  local_110 = 0;
  local_e8 = "";
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_e0._8_8_;
  local_e0 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_110);
  local_108 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1c);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_e0 = (undefined1  [16])0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if ((int)local_d0 == 0x11) {
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
      goto LAB_00106c22;
    }
  }
  local_c0 = 6;
  StringName::operator=(local_128,(StringName *)&local_118);
LAB_00106c22:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "MultiplayerAPIExtension";
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_get_remote_sender_id";
  local_f0 = 0;
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x15;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "MultiplayerAPIExtension";
  local_60 = CONCAT44(local_60._4_4_,3);
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "object";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "configuration";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_object_configuration_add";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x19;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "Object";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_108,(String *)&local_100,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_e0._8_8_;
  local_e0 = auVar6 << 0x40;
  StringName::StringName(local_128,(StringName *)&local_108);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar8 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e0 = (undefined1  [16])0x0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x20006;
  StringName::operator=(local_128,(StringName *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "MultiplayerAPIExtension";
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_b8 = "object";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_e8);
  local_b8 = (char *)0x0;
  if (local_e8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_100 = 0;
  local_b8 = "configuration";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  local_b8 = (char *)0x0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  }
  Vector<String>::push_back((Vector<String> *)local_f8,(StrRange *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_a8 = (undefined1  [16])0x0;
  local_e8 = "_object_configuration_remove";
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0._0_8_ = 0x1c;
  String::parse_latin1((StrRange *)&local_b8);
  local_80 = CONCAT44(local_80._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_e8);
  PropertyInfo::operator=((PropertyInfo *)&local_b0,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "Object";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_108,(String *)&local_100,false);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x18);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_e0._8_8_;
  local_e0 = auVar7 << 0x40;
  StringName::StringName(local_128,(StringName *)&local_108);
  local_d0 = local_d0 & 0xffffffff00000000;
  local_c8 = 0;
  local_c0 = 6;
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  lVar8 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e0 = (undefined1  [16])0x0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x20006;
  StringName::operator=(local_128,(StringName *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  Vector<int>::push_back(local_58,0);
  local_e8 = "MultiplayerAPIExtension";
  local_100 = 0;
  local_e0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  MethodInfo::~MethodInfo((MethodInfo *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MultiplayerAPIExtension::set_multiplayer_peer(Ref<MultiplayerPeer> const&) */

void __thiscall
MultiplayerAPIExtension::set_multiplayer_peer(MultiplayerAPIExtension *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  undefined8 local_138;
  long local_130;
  GetTypeInfo<Ref<MultiplayerPeer>,void> local_128 [8];
  long local_120 [5];
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  int *local_58 [3];
  long local_40;
  
  pOVar8 = *(Object **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar8 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    pOVar8 = (Object *)0x0;
  }
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 != (long *)0x0) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,pOVar8);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar7 + 0x60))(local_58,plVar7,this + 0x198,&local_80,1,&local_f8);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_f8 == 0) {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00107783;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1a0] == (MultiplayerAPIExtension)0x0)) {
    local_f8 = 0;
    uStack_f4 = 0;
    local_e8 = (undefined1  [16])0x0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 6;
    local_c0 = 1;
    local_b8[0] = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_90 = 0;
    String::parse_latin1((String *)&local_f8,"_set_multiplayer_peer");
    local_c0 = CONCAT44(local_c0._4_4_,8);
    GetTypeInfo<Ref<MultiplayerPeer>,void>::get_class_info(local_128);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_128);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_128);
    Vector<int>::push_back(local_98,0);
    uVar3 = MethodInfo::get_compatibility_hash();
    lVar6 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1a8) = 0;
    pcVar4 = *(code **)(lVar6 + 0xd8);
    if (((pcVar4 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
       (pcVar4 = *(code **)(lVar6 + 0xd0), pcVar4 == (code *)0x0)) {
      local_138 = 0;
      String::parse_latin1((String *)&local_138,"MultiplayerAPIExtension");
      StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_128,(StringName *)&local_130);
      if (local_120[0] == 0) {
        lVar6 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') goto LAB_00107b07;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_00107b24:
        lVar6 = *(long *)(this + 8);
        pcVar4 = *(code **)(lVar6 + 200);
        if (((pcVar4 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
           (pcVar4 = *(code **)(lVar6 + 0xc0), pcVar4 == (code *)0x0)) goto LAB_00107a48;
        uVar5 = (*pcVar4)(*(undefined8 *)(lVar6 + 0xa0));
        *(undefined8 *)(this + 0x1a8) = uVar5;
      }
      else {
        lVar6 = *(long *)(local_120[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
        if (StringName::configured != '\0') {
LAB_00107b07:
          if (local_130 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        if (lVar6 == 0) goto LAB_00107b24;
      }
      lVar6 = *(long *)(this + 8);
    }
    else {
      uVar5 = (*pcVar4)(*(undefined8 *)(lVar6 + 0xa0),this + 0x198,uVar3);
      *(undefined8 *)(this + 0x1a8) = uVar5;
      lVar6 = *(long *)(this + 8);
    }
LAB_00107a48:
    if (*(char *)(lVar6 + 0x29) != '\0') {
      plVar7 = (long *)operator_new(0x18,"");
      *plVar7 = (long)(this + 0x1a8);
      plVar7[1] = (long)(this + 0x1a0);
      plVar7[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar7;
    }
    this[0x1a0] = (MultiplayerAPIExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
  }
  pcVar4 = *(code **)(this + 0x1a8);
  if (pcVar4 != (code *)0x0) {
    if (pOVar8 == (Object *)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
    }
    else {
      local_f8 = (int)pOVar8;
      uStack_f4 = (undefined4)((ulong)pOVar8 >> 0x20);
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_f8 = 0;
        uStack_f4 = 0;
      }
      pcVar4 = *(code **)(this + 0x1a8);
    }
    local_58[0] = &local_f8;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar4)(*(undefined8 *)(this + 0x10),local_58,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x198,pcVar4,local_58,0);
    }
    if ((CONCAT44(uStack_f4,local_f8) != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
      pOVar1 = (Object *)CONCAT44(uStack_f4,local_f8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00107783:
  if (((pOVar8 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
     (cVar2 = predelete_handler(pOVar8), cVar2 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pOVar8,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerAPIExtension::object_configuration_remove(Object*, Variant) */

ulong __thiscall
MultiplayerAPIExtension::object_configuration_remove
          (MultiplayerAPIExtension *this,Object *param_1,Variant *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_178;
  long local_170;
  Object *local_168;
  long local_160 [5];
  uint local_138 [2];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  int local_b8 [8];
  Object **local_98;
  Variant *pVStack_90;
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_b8,param_3);
  plVar5 = *(long **)(this + 0x98);
  if (plVar5 == (long *)0x0) {
LAB_00107cf9:
    if ((*(long *)(this + 8) != 0) && (this[0x248] == (MultiplayerAPIExtension)0x0)) {
      local_138[0] = 0;
      local_138[1] = 0;
      local_128 = (undefined1  [16])0x0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String *)local_138,"_object_configuration_remove");
      local_100 = CONCAT44(local_100._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_168);
      PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Object*,void>::get_class_info((GetTypeInfo<Object*,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      GetTypeInfo<Variant,void>::get_class_info((GetTypeInfo<Variant,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x250) = 0;
      lVar4 = *(long *)(this + 8);
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_178 = 0;
        String::parse_latin1((String *)&local_178,"MultiplayerAPIExtension");
        StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_168,(StringName *)&local_170);
        if (local_160[0] == 0) {
          lVar4 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') goto LAB_00108100;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_00108121:
          lVar4 = *(long *)(this + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010800f;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x240);
          *(undefined8 *)(this + 0x250) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_160[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') {
LAB_00108100:
            if (local_170 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
          if (lVar4 == 0) goto LAB_00108121;
        }
        lVar4 = *(long *)(this + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x240,uVar1);
        *(undefined8 *)(this + 0x250) = uVar3;
        lVar4 = *(long *)(this + 8);
      }
LAB_0010800f:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = (long)(this + 0x250);
        plVar5[1] = (long)(this + 0x248);
        plVar5[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar5;
      }
      this[0x248] = (MultiplayerAPIExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_138);
    }
    uVar2 = 2;
    if (*(long *)(this + 0x250) == 0) goto LAB_00107d13;
    local_168 = param_1;
    Variant::Variant((Variant *)local_78,(Variant *)local_b8);
    local_98 = &local_168;
    pVStack_90 = (Variant *)local_78;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x250))(*(undefined8 *)(this + 0x10),&local_98,local_138);
      uVar2 = (ulong)local_138[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x240,*(undefined8 *)(this + 0x250),&local_98,
                 local_138);
      uVar2 = (ulong)local_138[0];
    }
  }
  else {
    local_138[0] = 0;
    local_138[1] = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    Variant::Variant((Variant *)local_60,(Variant *)local_b8);
    local_c8 = (Variant *)local_78;
    pVStack_c0 = (Variant *)local_60;
    (**(code **)(*plVar5 + 0x60))((Variant *)&local_98,plVar5,this + 0x240,&local_c8,2,local_138);
    if (local_138[0] != 0) {
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00107cf9;
    }
    uVar2 = Variant::operator_cast_to_long((Variant *)&local_98);
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
      uVar2 = uVar2 & 0xffffffff;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
    uVar2 = uVar2 & 0xffffffff;
  }
LAB_00107d13:
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
    uVar2 = uVar2 & 0xffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerAPIExtension::object_configuration_add(Object*, Variant) */

ulong __thiscall
MultiplayerAPIExtension::object_configuration_add
          (MultiplayerAPIExtension *this,Object *param_1,Variant *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_178;
  long local_170;
  Object *local_168;
  long local_160 [5];
  uint local_138 [2];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  int local_b8 [8];
  Object **local_98;
  Variant *pVStack_90;
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_b8,param_3);
  plVar5 = *(long **)(this + 0x98);
  if (plVar5 == (long *)0x0) {
LAB_001082f9:
    if ((*(long *)(this + 8) != 0) && (this[0x230] == (MultiplayerAPIExtension)0x0)) {
      local_138[0] = 0;
      local_138[1] = 0;
      local_128 = (undefined1  [16])0x0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String *)local_138,"_object_configuration_add");
      local_100 = CONCAT44(local_100._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_168);
      PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Object*,void>::get_class_info((GetTypeInfo<Object*,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      GetTypeInfo<Variant,void>::get_class_info((GetTypeInfo<Variant,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x238) = 0;
      lVar4 = *(long *)(this + 8);
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_178 = 0;
        String::parse_latin1((String *)&local_178,"MultiplayerAPIExtension");
        StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_168,(StringName *)&local_170);
        if (local_160[0] == 0) {
          lVar4 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') goto LAB_00108700;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_00108721:
          lVar4 = *(long *)(this + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010860f;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x228);
          *(undefined8 *)(this + 0x238) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_160[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') {
LAB_00108700:
            if (local_170 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
          if (lVar4 == 0) goto LAB_00108721;
        }
        lVar4 = *(long *)(this + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x228,uVar1);
        *(undefined8 *)(this + 0x238) = uVar3;
        lVar4 = *(long *)(this + 8);
      }
LAB_0010860f:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = (long)(this + 0x238);
        plVar5[1] = (long)(this + 0x230);
        plVar5[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar5;
      }
      this[0x230] = (MultiplayerAPIExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_138);
    }
    uVar2 = 2;
    if (*(long *)(this + 0x238) == 0) goto LAB_00108313;
    local_168 = param_1;
    Variant::Variant((Variant *)local_78,(Variant *)local_b8);
    local_98 = &local_168;
    pVStack_90 = (Variant *)local_78;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x238))(*(undefined8 *)(this + 0x10),&local_98,local_138);
      uVar2 = (ulong)local_138[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x228,*(undefined8 *)(this + 0x238),&local_98,
                 local_138);
      uVar2 = (ulong)local_138[0];
    }
  }
  else {
    local_138[0] = 0;
    local_138[1] = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)local_78,param_1);
    Variant::Variant((Variant *)local_60,(Variant *)local_b8);
    local_c8 = (Variant *)local_78;
    pVStack_c0 = (Variant *)local_60;
    (**(code **)(*plVar5 + 0x60))((Variant *)&local_98,plVar5,this + 0x228,&local_c8,2,local_138);
    if (local_138[0] != 0) {
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001082f9;
    }
    uVar2 = Variant::operator_cast_to_long((Variant *)&local_98);
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
      uVar2 = uVar2 & 0xffffffff;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
    uVar2 = uVar2 & 0xffffffff;
  }
LAB_00108313:
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
    uVar2 = uVar2 & 0xffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* MultiplayerAPIExtension::rpcp(Object*, int, StringName const&, Variant const**, int) */

ulong __thiscall
MultiplayerAPIExtension::rpcp
          (MultiplayerAPIExtension *this,Object *param_1,int param_2,StringName *param_3,
          Variant **param_4,int param_5)

{
  Variant *pVVar1;
  Variant **ppVVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  Array local_1b8 [8];
  long local_1b0;
  Array local_1a8 [8];
  long local_1a0;
  Object *local_198;
  long local_190;
  Array local_188 [8];
  long local_180 [5];
  uint local_158 [2];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined8 local_108;
  ulong local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  long *local_a8;
  Object **ppOStack_a0;
  StringName *local_98;
  Array *apAStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  plVar7 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((plVar7 == (long *)0x0) ||
     (cVar3 = (**(code **)(*plVar7 + 0x50))(plVar7,this + 0x1f8), cVar3 == '\0')) {
    if ((*(long *)(this + 8) != 0) && (this[0x200] == (MultiplayerAPIExtension)0x0)) {
      local_158[0] = 0;
      local_158[1] = 0;
      local_148 = (undefined1  [16])0x0;
      uStack_150 = 0;
      uStack_14c = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 6;
      local_120 = 1;
      local_118[0] = 0;
      local_108 = 0;
      local_100 = 0;
      local_f0 = 0;
      String::parse_latin1((String *)local_158,"_rpc");
      local_120 = CONCAT44(local_120._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)local_188);
      PropertyInfo::operator=((PropertyInfo *)&uStack_150,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      local_100 = local_100 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,3);
      GetTypeInfo<Object*,void>::get_class_info((GetTypeInfo<Object*,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,0);
      GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,0);
      GetTypeInfo<Array,void>::get_class_info((GetTypeInfo<Array,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x208) = 0;
      lVar6 = *(long *)(this + 8);
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_198 = (Object *)0x0;
        String::parse_latin1((String *)&local_198,"MultiplayerAPIExtension");
        StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_188,(StringName *)&local_190);
        if (local_180[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
          if (StringName::configured != '\0') goto LAB_001090cd;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_001090ee:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00108d7d;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1f8);
          *(undefined8 *)(this + 0x208) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_180[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
          if (StringName::configured != '\0') {
LAB_001090cd:
            if (local_190 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          if (lVar6 == 0) goto LAB_001090ee;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1f8,uVar4);
        *(undefined8 *)(this + 0x208) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_00108d7d:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x208);
        plVar7[1] = (long)(this + 0x200);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x200] = (MultiplayerAPIExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_158);
    }
    if (*(long *)(this + 0x208) == 0) {
      uVar9 = 2;
      goto LAB_00108a10;
    }
  }
  Array::Array(local_1b8);
  if (0 < param_5) {
    ppVVar2 = param_4 + param_5;
    do {
      param_4 = param_4 + 1;
      Array::push_back((Variant *)local_1b8);
    } while (ppVVar2 != param_4);
  }
  Array::Array(local_1a8,local_1b8);
  StringName::StringName((StringName *)&local_1b0,param_3);
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_001089cb:
    if ((*(long *)(this + 8) != 0) && (this[0x200] == (MultiplayerAPIExtension)0x0)) {
      local_158[0] = 0;
      local_158[1] = 0;
      local_148 = (undefined1  [16])0x0;
      uStack_150 = 0;
      uStack_14c = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 6;
      local_120 = 1;
      local_118[0] = 0;
      local_108 = 0;
      local_100 = 0;
      local_f0 = 0;
      String::parse_latin1((String *)local_158,"_rpc");
      local_120 = CONCAT44(local_120._4_4_,8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)local_188);
      PropertyInfo::operator=((PropertyInfo *)&uStack_150,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      local_100 = local_100 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,3);
      GetTypeInfo<Object*,void>::get_class_info((GetTypeInfo<Object*,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,0);
      GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,0);
      GetTypeInfo<Array,void>::get_class_info((GetTypeInfo<Array,void> *)local_188);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)local_188);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_188);
      Vector<int>::push_back(local_f8,0);
      uVar4 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x208) = 0;
      lVar6 = *(long *)(this + 8);
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_198 = (Object *)0x0;
        String::parse_latin1((String *)&local_198,"MultiplayerAPIExtension");
        StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_188,(StringName *)&local_190);
        if (local_180[0] == 0) {
          lVar6 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
          if (StringName::configured != '\0') goto LAB_001091b9;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_001091da:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00108fdd;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1f8);
          *(undefined8 *)(this + 0x208) = uVar5;
        }
        else {
          lVar6 = *(long *)(local_180[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_180);
          if (StringName::configured != '\0') {
LAB_001091b9:
            if (local_190 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
          if (lVar6 == 0) goto LAB_001091da;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x1f8,uVar4);
        *(undefined8 *)(this + 0x208) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_00108fdd:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x208);
        plVar7[1] = (long)(this + 0x200);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x200] = (MultiplayerAPIExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_158);
    }
    if (*(long *)(this + 0x208) == 0) {
      uVar9 = 1;
      goto LAB_001089ec;
    }
    local_1a0 = (long)param_2;
    local_198 = param_1;
    StringName::StringName((StringName *)&local_190,(StringName *)&local_1b0);
    Array::Array(local_188,local_1a8);
    local_a8 = &local_1a0;
    ppOStack_a0 = &local_198;
    local_98 = (StringName *)&local_190;
    apAStack_90[0] = local_188;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x208))(*(undefined8 *)(this + 0x10),&local_a8,local_158);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1f8,*(undefined8 *)(this + 0x208),&local_a8,
                 local_158);
    }
    uVar9 = (ulong)local_158[0];
    Array::~Array(local_188);
    if (StringName::configured != '\0') {
      if (local_190 != 0) {
        StringName::unref();
        goto LAB_001089ec;
      }
      goto LAB_001089f0;
    }
  }
  else {
    local_158[0] = 0;
    local_158[1] = 0;
    uStack_150 = 0;
    Variant::Variant((Variant *)&local_a8,param_2);
    Variant::Variant((Variant *)apAStack_90,param_1);
    Variant::Variant(local_78,(StringName *)&local_1b0);
    Variant::Variant(local_60,local_1a8);
    local_c8 = (Variant *)&local_a8;
    pVStack_c0 = (Variant *)apAStack_90;
    local_b8 = local_78;
    pVStack_b0 = local_60;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_e8,plVar7,this + 0x1f8,&local_c8,4,local_158);
    if (local_158[0] != 0) {
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar10 = local_48;
      do {
        pVVar1 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)&local_a8);
      goto LAB_001089cb;
    }
    uVar9 = Variant::operator_cast_to_long((Variant *)local_e8);
    uVar9 = uVar9 & 0xffffffff;
    if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar10 = local_48;
    do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar10 != (Variant *)&local_a8);
LAB_001089ec:
    if (StringName::configured != '\0') {
LAB_001089f0:
      if (local_1b0 != 0) {
        StringName::unref();
      }
    }
  }
  Array::~Array(local_1a8);
  Array::~Array(local_1b8);
LAB_00108a10:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
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
  return (uint)CONCAT71(0x1148,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1147,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* MultiplayerAPI::is_server() */

bool __thiscall MultiplayerAPI::is_server(MultiplayerAPI *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x168))();
  return iVar1 == 1;
}



/* MultiplayerAPIExtension::is_class_ptr(void*) const */

uint __thiscall MultiplayerAPIExtension::is_class_ptr(MultiplayerAPIExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x1147,(undefined4 *)param_1 == &MultiplayerAPI::get_class_ptr_static()::ptr
                       ) |
         (uint)CONCAT71(0x1147,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1147,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1148,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* MultiplayerAPIExtension::_getv(StringName const&, Variant&) const */

undefined8 MultiplayerAPIExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerAPIExtension::_setv(StringName const&, Variant const&) */

undefined8 MultiplayerAPIExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerAPIExtension::_validate_propertyv(PropertyInfo&) const */

void MultiplayerAPIExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* MultiplayerAPIExtension::_property_can_revertv(StringName const&) const */

undefined8 MultiplayerAPIExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* MultiplayerAPIExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 MultiplayerAPIExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MultiplayerAPIExtension::_notificationv(int, bool) */

void MultiplayerAPIExtension::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::_gen_argument_type(int) const */

undefined8 MethodBindTRS<Ref<MultiplayerAPI>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Ref<MultiplayerAPI>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<StringName>::_gen_argument_type(int) const */

undefined8 MethodBindTRS<StringName>::_gen_argument_type(int param_1)

{
  return 0x15;
}



/* MethodBindTRS<StringName>::get_argument_meta(int) const */

undefined8 MethodBindTRS<StringName>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTS<StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTS<StringName_const&>::_gen_argument_type
          (MethodBindTS<StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindTS<StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTS<StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTS<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindTS<StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0010957e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(*(long *)param_3 + 8);
  return;
}



/* MethodBindTS<StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindTS<StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010959a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(*param_3);
  return;
}



/* MethodBindTR<Vector<int>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Vector<int>>::_gen_argument_type(int param_1)

{
  return 0x1e;
}



/* MethodBindTR<Vector<int>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Vector<int>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, Object*, Variant>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTR<Error,Object*,Variant>::_gen_argument_type
          (MethodBindTR<Error,Object*,Variant> *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 2;
  if ((uint)param_1 < 2) {
    bVar1 = -(param_1 == 0) & 0x18;
  }
  return bVar1;
}



/* MethodBindTR<Error, Object*, Variant>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,Object*,Variant>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::_gen_argument_type
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (((param_1 - 1U < 3) && (uVar1 = 0x18, param_1 != 1)) && (uVar1 = 0x1c, param_1 == 2)) {
    uVar1 = 0x15;
  }
  return uVar1;
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::get_argument_meta
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Error>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error>::get_argument_meta(int param_1)

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



/* MethodBindT<Ref<MultiplayerPeer> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<MultiplayerPeer>const&>::_gen_argument_type
          (MethodBindT<Ref<MultiplayerPeer>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<MultiplayerPeer>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<MultiplayerPeer>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<MultiplayerPeer>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<MultiplayerPeer>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<MultiplayerPeer>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001140b8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001140b8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MultiplayerAPIExtension::~MultiplayerAPIExtension() */

void __thiscall MultiplayerAPIExtension::~MultiplayerAPIExtension(MultiplayerAPIExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00114218;
  if (bVar1) {
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010985d;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010985d:
  *(undefined ***)this = &PTR__initialize_classv_001140b8;
  Object::~Object((Object *)this);
  return;
}



/* MethodBindTR<Ref<MultiplayerPeer>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MultiplayerPeer>>::~MethodBindTR(MethodBindTR<Ref<MultiplayerPeer>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114420;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<MultiplayerPeer>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MultiplayerPeer>>::~MethodBindTR(MethodBindTR<Ref<MultiplayerPeer>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114420;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<MultiplayerPeer>const&>::~MethodBindT(MethodBindT<Ref<MultiplayerPeer>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114480;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<MultiplayerPeer>const&>::~MethodBindT(MethodBindT<Ref<MultiplayerPeer>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114480;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001143c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001143c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001144e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001144e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114540;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114540;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::~MethodBindTR
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001145a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::~MethodBindTR
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001145a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, Object*, Variant>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Object*,Variant>::~MethodBindTR(MethodBindTR<Error,Object*,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114600;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, Object*, Variant>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Object*,Variant>::~MethodBindTR(MethodBindTR<Error,Object*,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114600;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114660;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114660;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTS<StringName const&>::~MethodBindTS() */

void __thiscall
MethodBindTS<StringName_const&>::~MethodBindTS(MethodBindTS<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001146c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTS<StringName const&>::~MethodBindTS() */

void __thiscall
MethodBindTS<StringName_const&>::~MethodBindTS(MethodBindTS<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001146c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<StringName>::~MethodBindTRS() */

void __thiscall MethodBindTRS<StringName>::~MethodBindTRS(MethodBindTRS<StringName> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114720;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<StringName>::~MethodBindTRS() */

void __thiscall MethodBindTRS<StringName>::~MethodBindTRS(MethodBindTRS<StringName> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114720;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<MultiplayerAPI>>::~MethodBindTRS(MethodBindTRS<Ref<MultiplayerAPI>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114780;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<MultiplayerAPI>>::~MethodBindTRS(MethodBindTRS<Ref<MultiplayerAPI>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114780;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTS<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTS<StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar8;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  pVVar1 = param_2[0xb];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_R8D < 2) {
    pVVar8 = param_2[5];
    if (pVVar8 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00109d80;
LAB_00109cf0:
      pVVar8 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar8 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109d80:
        uVar6 = 4;
        goto LAB_00109cfd;
      }
      if (in_R8D == 1) goto LAB_00109cf0;
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
      pVVar8 = pVVar8 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar8,0x15);
    uVar4 = _LC5;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_38);
    (*(code *)pVVar1)(&local_38);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_00109cfd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRS<StringName>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<StringName>::ptrcall
          (MethodBindTRS<StringName> *this,Object *param_1,void **param_2,void *param_3)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,param_1,0);
  StringName::operator=((StringName *)param_3,(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<StringName>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<StringName>::validated_call
          (MethodBindTRS<StringName> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,param_1,0);
  StringName::operator=((StringName *)(param_3 + 8),(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant_const*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MultiplayerAPI::_bind_methods() [clone .cold] */

void MultiplayerAPI::_bind_methods(void)

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



/* MultiplayerAPI::decode_and_decompress_variants(Vector<Variant>&, unsigned char const*, int, int&,
   bool, bool) [clone .cold] */

void MultiplayerAPI::decode_and_decompress_variants
               (Vector *param_1,uchar *param_2,int param_3,int *param_4,bool param_5,bool param_6)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MultiplayerAPI::_rpc_bind(int, Object*, StringName const&, Array) [clone .cold] */

void MultiplayerAPI::_rpc_bind(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a264(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<Ref<MultiplayerAPI>>::validated_call
          (MethodBindTRS<Ref<MultiplayerAPI>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  Object *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,param_1,0);
  if (local_30 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_30 + 0x140))(local_30);
        Memory::free_static(local_30,false);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<Ref<MultiplayerAPI>>::ptrcall
          (MethodBindTRS<Ref<MultiplayerAPI>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,param_1,0);
  if (local_28 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_0010a3ae;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010a41f;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_0010a41f;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_0010a41f:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (Object *)0x0) goto LAB_0010a3ae;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_28);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
  }
LAB_0010a3ae:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerAPI::has_multiplayer_peer() */

ulong __thiscall MultiplayerAPI::has_multiplayer_peer(MultiplayerAPI *this)

{
  char cVar1;
  undefined8 unaff_RBX;
  long in_FS_OFFSET;
  bool bVar2;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x160))(&local_28);
  bVar2 = local_28 != (Object *)0x0;
  if (bVar2) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010a533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010a59e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010a59e:
  return &_get_class_namev()::_class_name_static;
}



/* MultiplayerAPIExtension::_get_class_namev() const */

undefined8 * MultiplayerAPIExtension::_get_class_namev(void)

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
LAB_0010a623:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a623;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerAPIExtension");
      goto LAB_0010a68e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"MultiplayerAPIExtension");
LAB_0010a68e:
  return &_get_class_namev()::_class_name_static;
}



/* MethodBindTRS<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRS<StringName>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  bool bVar2;
  long local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      (*(code *)pVVar1)((StringName *)&local_40);
      Variant::Variant((Variant *)local_38,(StringName *)&local_40);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar2 = StringName::configured != '\0';
      *(undefined4 *)param_1 = local_38[0];
      *(undefined8 *)(param_1 + 8) = local_30;
      *(undefined8 *)(param_1 + 0x10) = uStack_28;
      if ((bVar2) && (local_40 != 0)) {
        StringName::unref();
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<MultiplayerAPI>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRS<Ref<MultiplayerAPI>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char cVar2;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Object *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      (*(code *)pVVar1)(&local_40);
      Variant::Variant((Variant *)local_38,local_40);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_38[0];
      *(undefined8 *)(param_1 + 8) = local_30;
      *(undefined8 *)(param_1 + 0x10) = uStack_28;
      if (local_40 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_40);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_40 + 0x140))(local_40);
            Memory::free_static(local_40,false);
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerAPIExtension::~MultiplayerAPIExtension() */

void __thiscall MultiplayerAPIExtension::~MultiplayerAPIExtension(MultiplayerAPIExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00114218;
  if (bVar1) {
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa4d;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010aa4d:
  *(undefined ***)this = &PTR__initialize_classv_001140b8;
  Object::~Object((Object *)this);
  operator_delete(this,600);
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



/* MultiplayerAPIExtension::get_class() const */

void MultiplayerAPIExtension::get_class(void)

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
            if (lVar3 == 0) goto LAB_0010ac8f;
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
LAB_0010ac8f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010ad43;
  }
  cVar6 = String::operator==((String *)param_1,"RefCounted");
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
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010ad43;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==((String *)param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010ad43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MultiplayerAPIExtension::is_class(String const&) const */

undefined8 __thiscall
MultiplayerAPIExtension::is_class(MultiplayerAPIExtension *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010aeff;
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
LAB_0010aeff:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0010afb3;
  }
  cVar6 = String::operator==((String *)param_1,"MultiplayerAPIExtension");
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
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010afb3;
    }
    cVar6 = String::operator==((String *)param_1,"MultiplayerAPI");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_0010b0f8;
    }
  }
LAB_0010afb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b0f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MultiplayerPeer>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<MultiplayerPeer>>::_gen_argument_type_info(int param_1)

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
  local_48 = "MultiplayerPeer";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010b1c0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010b1c0:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<StringName>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<StringName>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x15;
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
      goto joined_r0x0010b3dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b3dc:
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
  local_48 = &_LC3;
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
      goto joined_r0x0010b55c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b55c:
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



/* MethodBindTR<Vector<int>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Vector<int>>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1e;
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
      goto joined_r0x0010b6dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b6dc:
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



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
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
      goto joined_r0x0010b85c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b85c:
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



/* MethodBindTRS<Ref<MultiplayerAPI>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRS<Ref<MultiplayerAPI>>::_gen_argument_type_info(int param_1)

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
  local_48 = "MultiplayerAPI";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010b950;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010b950:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

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
  local_48 = &_LC3;
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
      goto joined_r0x0010bc4c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010bc4c:
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



/* GetTypeInfo<StringName, void>::get_class_info() */

GetTypeInfo<StringName,void> * __thiscall
GetTypeInfo<StringName,void>::get_class_info(GetTypeInfo<StringName,void> *this)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
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
      goto joined_r0x0010bdcc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010bdcc:
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



/* GetTypeInfo<Array, void>::get_class_info() */

GetTypeInfo<Array,void> * __thiscall
GetTypeInfo<Array,void>::get_class_info(GetTypeInfo<Array,void> *this)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1c;
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
      goto joined_r0x0010bf4c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010bf4c:
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



/* GetTypeInfo<Vector<int>, void>::get_class_info() */

GetTypeInfo<Vector<int>,void> * __thiscall
GetTypeInfo<Vector<int>,void>::get_class_info(GetTypeInfo<Vector<int>,void> *this)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1e;
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
      goto joined_r0x0010c0cc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010c0cc:
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



/* GetTypeInfo<Variant, void>::get_class_info() */

GetTypeInfo<Variant,void> * __thiscall
GetTypeInfo<Variant,void>::get_class_info(GetTypeInfo<Variant,void> *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x20006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_28 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Ref<MultiplayerPeer>, void>::get_class_info() */

GetTypeInfo<Ref<MultiplayerPeer>,void> * __thiscall
GetTypeInfo<Ref<MultiplayerPeer>,void>::get_class_info(GetTypeInfo<Ref<MultiplayerPeer>,void> *this)

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
  local_50 = 0;
  local_58 = 0;
  local_48 = "MultiplayerPeer";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_0010c660;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_0010c660:
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Object*, void>::get_class_info() */

GetTypeInfo<Object*,void> * __thiscall
GetTypeInfo<Object*,void>::get_class_info(GetTypeInfo<Object*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "Object";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (char *)0x0)) {
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



/* WARNING: Removing unreachable block (ram,0x0010ca18) */
/* WARNING: Removing unreachable block (ram,0x0010cbad) */
/* WARNING: Removing unreachable block (ram,0x0010cbb9) */
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



/* MethodBindTR<Vector<int>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Vector<int>>::validated_call
          (MethodBindTR<Vector<int>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
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
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10cc08;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cd8b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010cd8b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Vector<int>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Vector<int>>::ptrcall
          (MethodBindTR<Vector<int>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
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
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10cc08;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cf97;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<int>::_ref((CowData<int> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar1 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar3 = (long *)(local_40[0] + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010cf97:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Object*, Variant>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Error,Object*,Variant>::validated_call
          (MethodBindTR<Error,Object*,Variant> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d17e;
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
  Variant::Variant((Variant *)local_48,param_2[1]);
  uVar2 = (*pcVar4)(param_1 + lVar1,*(undefined8 *)(*param_2 + 0x10),(Variant *)local_48);
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010d17e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::validated_call
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d388;
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
  Array::Array((Array *)&local_58,(Array *)(param_2[3] + 8));
  uVar2 = (*pcVar4)(param_1 + lVar1,*(undefined4 *)(*param_2 + 8),*(undefined8 *)(param_2[1] + 0x10)
                    ,param_2[2] + 8,(Array *)&local_58);
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
  Array::~Array((Array *)&local_58);
LAB_0010d388:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d650;
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
LAB_0010d650:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error>::validated_call
          (MethodBindTR<Error> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d864;
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
LAB_0010d864:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error>::ptrcall(MethodBindTR<Error> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010da13;
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
LAB_0010da13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dc40;
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
LAB_0010dc40:
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010de54;
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
LAB_0010de54:
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e003;
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
LAB_0010e003:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MultiplayerPeer>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Ref<MultiplayerPeer>>::call
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
      local_58 = (Object *)0x10cc08;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e280;
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
LAB_0010e280:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e510;
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
LAB_0010e510:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e722;
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
LAB_0010e722:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e8d1;
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
LAB_0010e8d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::ptrcall
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eac3;
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
  Array::Array((Array *)&local_58,(Array *)param_2[3]);
  plVar3 = (long *)param_2[1];
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = (*pcVar4)(param_1 + lVar1,**param_2,plVar3,param_2[2],(Array *)&local_58);
  *(ulong *)param_3 = (ulong)uVar2;
  Array::~Array((Array *)&local_58);
LAB_0010eac3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Object*, Variant>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,Object*,Variant>::ptrcall
          (MethodBindTR<Error,Object*,Variant> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ecc5;
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
  Variant::Variant((Variant *)local_48,(Variant *)param_2[1]);
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
  }
  uVar2 = (*pcVar4)(param_1 + lVar1,plVar3,(Variant *)local_48);
  *(ulong *)param_3 = (ulong)uVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010ecc5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<MultiplayerPeer>const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *this;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010ee9b;
  local_78 = 0;
  local_80 = 0;
  local_68 = "MultiplayerPeer";
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010efad:
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
    if (local_50 == 0x11) goto LAB_0010efad;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=(this,(PropertyInfo *)&local_68);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_0010ee9b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<MultiplayerPeer>const&>::validated_call
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
      local_58 = (Object *)0x10cc08;
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
      goto LAB_0010f108;
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
LAB_0010f0c6:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&MultiplayerPeer::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010f0c6;
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
LAB_0010f108:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<MultiplayerPeer>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10cc08;
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
      goto LAB_0010f3cc;
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
LAB_0010f3a8:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010f3a8;
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
LAB_0010f3cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MultiplayerPeer>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<MultiplayerPeer>>::ptrcall
          (MethodBindTR<Ref<MultiplayerPeer>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10cc08;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f636;
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
    if (pOVar5 == (Object *)0x0) goto LAB_0010f636;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010f679;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010f679;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010f679:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010f636;
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
LAB_0010f636:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Object*, Variant>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<Error,Object*,Variant>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  Object *pOVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_88 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f9d8;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar7 = 3;
LAB_0010fa0d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
    goto LAB_0010f9d8;
  }
  pVVar15 = param_2[5];
  iVar6 = 2 - in_R8D;
  if (pVVar15 == (Variant *)0x0) {
    if (iVar6 != 0) goto LAB_0010fa20;
    this = *(Variant **)param_4;
LAB_0010fa3d:
    pVVar15 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar15 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar6) {
LAB_0010fa20:
      uVar7 = 4;
      goto LAB_0010fa0d;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_0010fb50;
      this = pVVar15 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010fa3d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
    if (lVar2 <= lVar11) {
LAB_0010fb50:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar15 = pVVar15 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,0);
  if (cVar5 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = 1;
  }
  Variant::Variant((Variant *)local_58,pVVar15);
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,0x18);
  if (cVar5 == '\0') {
LAB_0010f96a:
    uVar4 = _LC50;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(this);
    pOVar10 = Variant::operator_cast_to_Object_(this);
    if ((pOVar10 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010f96a;
  }
  pOVar8 = Variant::operator_cast_to_Object_(this);
  iVar6 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),pOVar8,(Variant *)local_58);
  Variant::Variant((Variant *)local_78,iVar6);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_78[0];
  *(undefined8 *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_68;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010f9d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,int,Object*,StringName_const&,Array>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  Object *pOVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  bool bVar16;
  Variant *local_b8;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_98 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ff11;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar15;
    }
    if ((int)(4 - in_R8D) <= iVar6) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar12 = iVar6 + -4 + (int)lVar8;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_68[lVar8] = pVVar14;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)local_b8 & 1) != 0) {
        local_b8 = *(Variant **)(local_b8 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],0x1c);
      uVar4 = _LC51;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Array((Variant *)&local_a0);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],0x15);
      uVar4 = _LC52;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_98);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0x18);
      if (cVar5 == '\0') {
LAB_0010fe18:
        uVar4 = _LC53;
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      else {
        pOVar9 = Variant::operator_cast_to_Object_(local_68[1]);
        pOVar11 = Variant::operator_cast_to_Object_(local_68[1]);
        if ((pOVar9 != (Object *)0x0) && (pOVar11 == (Object *)0x0)) goto LAB_0010fe18;
      }
      pOVar9 = Variant::operator_cast_to_Object_(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC54;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_68[0]);
      iVar6 = (*(code *)local_b8)((Variant *)((long)plVar13 + (long)pVVar1),iVar6,pOVar9,
                                  (Variant *)&local_98,(Variant *)&local_a0);
      Variant::Variant((Variant *)local_88,iVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      bVar16 = StringName::configured != '\0';
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      if ((bVar16) && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      Array::~Array((Array *)&local_a0);
      goto LAB_0010ff11;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_0010ff11:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<MultiplayerPeer> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<MultiplayerPeer>const&>::call
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
      local_48 = (Object *)0x10cc08;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110380;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00110375:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00110380;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001103d0;
LAB_001103c0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001103d0:
      uVar7 = 4;
      goto LAB_00110375;
    }
    if (in_R8D == 1) goto LAB_001103c0;
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
  uVar4 = _LC50;
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
LAB_001104ed:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&MultiplayerPeer::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001104ed;
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
LAB_00110380:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<MultiplayerPeer>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<MultiplayerPeer>>::validated_call
          (MethodBindTR<Ref<MultiplayerPeer>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_48 = (Variant **)0x10cc08;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110696;
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
LAB_00110696:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
LAB_00110ccd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110ccd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00110cef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00110cef:
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



/* MultiplayerAPI::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall MultiplayerAPI::_get_property_listv(MultiplayerAPI *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerAPI";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerAPI";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_0011104d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011104d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011106f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011106f:
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
  StringName::StringName((StringName *)&local_78,"MultiplayerAPI",false);
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



/* MultiplayerAPIExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
MultiplayerAPIExtension::_get_property_listv
          (MultiplayerAPIExtension *this,List *param_1,bool param_2)

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
    MultiplayerAPI::_get_property_listv((MultiplayerAPI *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerAPIExtension";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerAPIExtension";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_0011142d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011142d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011144f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011144f:
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
  StringName::StringName((StringName *)&local_78,"MultiplayerAPIExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MultiplayerAPI::_get_property_listv((MultiplayerAPI *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<MultiplayerAPI, bool>(bool (MultiplayerAPI::*)()) */

MethodBind * create_method_bind<MultiplayerAPI,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001143c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, Ref<MultiplayerPeer>>(Ref<MultiplayerPeer>
   (MultiplayerAPI::*)()) */

MethodBind * create_method_bind<MultiplayerAPI,Ref<MultiplayerPeer>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114420;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, Ref<MultiplayerPeer> const&>(void
   (MultiplayerAPI::*)(Ref<MultiplayerPeer> const&)) */

MethodBind *
create_method_bind<MultiplayerAPI,Ref<MultiplayerPeer>const&>(_func_void_Ref_ptr *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00114480;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, int>(int (MultiplayerAPI::*)()) */

MethodBind * create_method_bind<MultiplayerAPI,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001144e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, Error>(Error (MultiplayerAPI::*)()) */

MethodBind * create_method_bind<MultiplayerAPI,Error>(_func_Error *param_1)

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
  *(_func_Error **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114540;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, Error, int, Object*, StringName const&,
   Array>(Error (MultiplayerAPI::*)(int, Object*, StringName const&, Array)) */

MethodBind *
create_method_bind<MultiplayerAPI,Error,int,Object*,StringName_const&,Array>
          (_func_Error_int_Object_ptr_StringName_ptr_Array *param_1)

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
  *(_func_Error_int_Object_ptr_StringName_ptr_Array **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001145a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, Error, Object*, Variant>(Error
   (MultiplayerAPI::*)(Object*, Variant)) */

MethodBind *
create_method_bind<MultiplayerAPI,Error,Object*,Variant>(_func_Error_Object_ptr_Variant *param_1)

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
  *(_func_Error_Object_ptr_Variant **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114600;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<MultiplayerAPI, Vector<int>>(Vector<int> (MultiplayerAPI::*)()) */

MethodBind * create_method_bind<MultiplayerAPI,Vector<int>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114660;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "MultiplayerAPI";
  local_30 = 0xe;
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



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x50));
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
      lVar2 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* MethodBindTR<Vector<int>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Vector<int>>::call
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
      _err_print_error(&_LC48,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112290;
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
      CowData<int>::_unref((CowData<int> *)&local_50);
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
LAB_00112290:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x11250a);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC33;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = 0;
      lVar3 = -2;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_001125cb;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = &_LC33;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
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
LAB_001125cb:
  CowData<String>::_unref((CowData<String> *)&local_50);
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
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "Error";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x11250a);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_001127b5;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001127b5:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::_gen_argument_type_info(int) const */

undefined8 MethodBindTR<Error>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<Error,void>::get_class_info
            ((GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, Object*, Variant>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,Object*,Variant>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_88 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 6;
    local_80 = (undefined1  [16])0x0;
    if (in_EDX == 0) {
      GetTypeInfo<Object*,void>::get_class_info((GetTypeInfo<Object*,void> *)&local_58);
    }
    else {
      local_50 = (undefined1  [16])0x0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_58 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0x20006;
      StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    PropertyInfo::operator=((PropertyInfo *)&local_88,(PropertyInfo *)&local_58);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_58);
    uVar2 = local_80._0_8_;
    uVar3 = local_80._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_80._8_8_;
    local_80 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_88;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_70;
    *(undefined8 *)(this + 0x20) = local_68;
    *(undefined4 *)(this + 0x28) = local_60;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
LAB_00112eb0:
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
  if (lVar10 == 0) goto LAB_00112eb0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00112d89:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00112d89;
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
    goto LAB_00112f06;
  }
  if (lVar10 == lVar7) {
LAB_00112e2f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00112f06:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00112e1a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00112e2f;
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
LAB_00112e1a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* CowData<Variant const*>::_realloc(long) */

undefined8 __thiscall CowData<Variant_const*>::_realloc(CowData<Variant_const*> *this,long param_1)

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
LAB_00113320:
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
  if (lVar8 == 0) goto LAB_00113320;
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
        goto LAB_00113231;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00113231:
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



/* MultiplayerAPIExtension::_initialize_classv() */

void MultiplayerAPIExtension::_initialize_classv(void)

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
    if (MultiplayerAPI::initialize_class()::initialized == '\0') {
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_50 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
      local_48 = "MultiplayerAPI";
      local_60 = 0;
      local_40 = 0xe;
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
      MultiplayerAPI::_bind_methods();
      MultiplayerAPI::initialize_class()::initialized = '\x01';
    }
    local_48 = "MultiplayerAPI";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "MultiplayerAPIExtension";
    local_60 = 0;
    local_40 = 0x17;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_001136c9;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x15);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_001137c8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001137c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_001136c9:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTS<StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTS<StringName_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, Object*, StringName const&, Array>(int, PropertyInfo&) */

void call_get_argument_type_info<int,Object*,StringName_const&,Array>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long in_FS_OFFSET;
  int local_8c;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_68);
LAB_001139dd:
    PropertyInfo::operator=(param_2,(PropertyInfo *)&local_68);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  else {
    local_8c = 1;
    if (param_1 == 1) {
      local_70 = 0;
      local_68 = "Object";
      local_60._0_8_ = 6;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_78,(String *)&local_70,false);
      local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      StringName::StringName((StringName *)(local_60 + 8),(StringName *)&local_78);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_001139dd;
    }
  }
  local_8c = 2;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_8c,param_2);
  if (param_1 != local_8c) goto LAB_001139a7;
  local_88 = 0;
  local_80 = 0;
  local_68 = "";
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_78 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113b80:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113b80;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=(param_2,(PropertyInfo *)&local_68);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001139a7:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, int, Object*, StringName const&, Array>::_gen_argument_type_info(int) const
    */

GetTypeInfo<Error,void> *
MethodBindTR<Error,int,Object*,StringName_const&,Array>::_gen_argument_type_info(int param_1)

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
  if (in_EDX < 4) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<int,Object*,StringName_const&,Array>
              (in_EDX,(PropertyInfo *)&local_48);
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



/* MultiplayerAPI::default_interface */

void MultiplayerAPI::_GLOBAL__sub_I_default_interface(void)

{
  default_interface = 0;
  __cxa_atexit(StringName::~StringName,&default_interface,&__dso_handle);
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
/* MethodBindTRS<Ref<MultiplayerAPI>>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<MultiplayerAPI>>::~MethodBindTRS(MethodBindTRS<Ref<MultiplayerAPI>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<StringName>::~MethodBindTRS() */

void __thiscall MethodBindTRS<StringName>::~MethodBindTRS(MethodBindTRS<StringName> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTS<StringName const&>::~MethodBindTS() */

void __thiscall
MethodBindTS<StringName_const&>::~MethodBindTS(MethodBindTS<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Vector<int>>::~MethodBindTR() */

void __thiscall MethodBindTR<Vector<int>>::~MethodBindTR(MethodBindTR<Vector<int>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, Object*, Variant>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,Object*,Variant>::~MethodBindTR(MethodBindTR<Error,Object*,Variant> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int, Object*, StringName const&, Array>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Object*,StringName_const&,Array>::~MethodBindTR
          (MethodBindTR<Error,int,Object*,StringName_const&,Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

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
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<MultiplayerPeer> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<MultiplayerPeer>const&>::~MethodBindT(MethodBindT<Ref<MultiplayerPeer>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<MultiplayerPeer>>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<MultiplayerPeer>>::~MethodBindTR(MethodBindTR<Ref<MultiplayerPeer>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MultiplayerAPIExtension::~MultiplayerAPIExtension() */

void __thiscall MultiplayerAPIExtension::~MultiplayerAPIExtension(MultiplayerAPIExtension *this)

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


