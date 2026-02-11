
/* StreamPeerGZIP::put_data(unsigned char const*, int) */

undefined8 __thiscall StreamPeerGZIP::put_data(StreamPeerGZIP *this,uchar *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x158))();
  if (((int)uVar2 == 0) && (param_2 != 0)) {
    _err_print_error("put_data","core/io/stream_peer_gzip.cpp",0x83,
                     "Condition \"p_bytes != wrote\" is true. Returning: ERR_OUT_OF_MEMORY",0,0);
    uVar2 = 6;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerGZIP::get_data(unsigned char*, int) */

undefined8 __thiscall StreamPeerGZIP::get_data(StreamPeerGZIP *this,uchar *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x168))();
  if (((int)uVar2 == 0) && (param_2 != 0)) {
    _err_print_error("get_data","core/io/stream_peer_gzip.cpp",0xaf,
                     "Condition \"p_bytes != received\" is true. Returning: ERR_UNAVAILABLE",0,0);
    uVar2 = 2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* StreamPeerGZIP::get_available_bytes() const */

int __thiscall StreamPeerGZIP::get_available_bytes(StreamPeerGZIP *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x1a0) - *(int *)(this + 0x1a4);
  if (*(long *)(this + 0x198) == 0) {
    if ((-1 < iVar1) && (iVar1 == 0)) {
      return iVar1;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(this + 0x198) + -8);
    if (iVar1 < 0) {
      iVar1 = iVar1 + iVar2;
    }
    else if (iVar1 == 0) {
      return iVar1;
    }
  }
  return iVar2 - iVar1;
}



/* StreamPeerGZIP::get_partial_data(unsigned char*, int, int&) */

undefined8 __thiscall
StreamPeerGZIP::get_partial_data(StreamPeerGZIP *this,uchar *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (param_2 < 0) {
    _err_print_error("get_partial_data","core/io/stream_peer_gzip.cpp",0xb4,
                     "Condition \"p_bytes < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar9 = *(long *)(this + 0x198);
  iVar1 = *(int *)(this + 0x1a0) - *(int *)(this + 0x1a4);
  if (lVar9 == 0) {
    iVar5 = 0;
    iVar2 = 0;
    if (iVar1 < 0) goto LAB_001002ca;
  }
  else {
    iVar5 = (int)*(undefined8 *)(lVar9 + -8);
    iVar2 = iVar5;
    if (iVar1 < 0) {
      iVar1 = iVar1 + iVar5;
      goto LAB_001002ca;
    }
  }
  iVar5 = iVar2;
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0;
  }
LAB_001002ca:
  if (iVar5 - iVar1 < param_2) {
    param_2 = iVar5 - iVar1;
  }
  *param_3 = param_2;
  if (param_2 != 0) {
    iVar1 = *(int *)(this + 0x1a0);
    lVar6 = (long)iVar1;
    iVar2 = iVar1 - *(int *)(this + 0x1a4);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    else if (iVar2 != 0) {
      iVar2 = iVar5 - iVar2;
    }
    if (param_2 <= iVar2) {
      iVar2 = param_2;
    }
    if (iVar2 != 0) {
      iVar8 = 0;
      iVar1 = iVar1 + iVar2;
      iVar5 = iVar2;
      if (lVar9 == 0) goto LAB_0010036a;
      do {
        iVar3 = *(int *)(lVar9 + -8);
        while( true ) {
          if (iVar3 < iVar1) {
            iVar1 = iVar3;
          }
          iVar1 = iVar1 - (int)lVar6;
          if (0 < iVar1) {
            lVar4 = (long)iVar8;
            lVar6 = lVar6 - lVar4;
            lVar7 = iVar1 + lVar4;
            do {
              param_1[lVar4] = *(uchar *)(lVar6 + lVar9 + lVar4);
              lVar4 = lVar4 + 1;
            } while (lVar7 != lVar4);
            iVar8 = iVar8 + iVar1;
          }
          iVar1 = iVar5 - iVar1;
          if (iVar1 == 0) {
            iVar1 = *(int *)(this + 0x1a0);
            goto LAB_00100377;
          }
          lVar9 = *(long *)(this + 0x198);
          lVar6 = 0;
          iVar5 = iVar1;
          if (lVar9 != 0) break;
LAB_0010036a:
          iVar3 = 0;
        }
      } while( true );
    }
LAB_00100377:
    *(uint *)(this + 0x1a0) = iVar1 + iVar2 & *(uint *)(this + 0x1a8);
    if (*param_3 != iVar2) {
      _err_print_error("get_partial_data","core/io/stream_peer_gzip.cpp",0xbb,
                       "Condition \"received != r_received\" is true. Returning: ERR_BUG",0,0);
      return 0x2f;
    }
  }
  return 0;
}



/* StreamPeerGZIP::~StreamPeerGZIP() */

void __thiscall StreamPeerGZIP::~StreamPeerGZIP(StreamPeerGZIP *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(this + 0x180);
  *(undefined ***)this = &PTR__initialize_classv_00106ed0;
  if (pvVar2 != (void *)0x0) {
    if (this[0x188] == (StreamPeerGZIP)0x0) {
      inflateEnd();
    }
    else {
      deflateEnd(pvVar2);
    }
    Memory::free_static(pvVar2,false);
    *(undefined8 *)(this + 0x180) = 0;
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00106d70;
  Object::~Object((Object *)this);
  return;
}



/* StreamPeerGZIP::~StreamPeerGZIP() */

void __thiscall StreamPeerGZIP::~StreamPeerGZIP(StreamPeerGZIP *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(this + 0x180);
  *(undefined ***)this = &PTR__initialize_classv_00106ed0;
  if (pvVar2 != (void *)0x0) {
    if (this[0x188] == (StreamPeerGZIP)0x0) {
      inflateEnd();
    }
    else {
      deflateEnd(pvVar2);
    }
    Memory::free_static(pvVar2,false);
    *(undefined8 *)(this + 0x180) = 0;
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00106d70;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c0);
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



/* StreamPeerGZIP::clear() */

void __thiscall StreamPeerGZIP::clear(StreamPeerGZIP *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = *(void **)(this + 0x180);
  if (pvVar2 != (void *)0x0) {
    if (this[0x188] == (StreamPeerGZIP)0x0) {
      inflateEnd();
    }
    else {
      deflateEnd(pvVar2);
    }
    Memory::free_static(pvVar2,false);
    *(undefined8 *)(this + 0x180) = 0;
  }
  lVar3 = *(long *)(this + 0x1b8);
  *(undefined8 *)(this + 0x1a0) = 0;
  if ((lVar3 != 0) && (*(long *)(lVar3 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  return;
}



/* StreamPeerGZIP::_close() */

void __thiscall StreamPeerGZIP::_close(StreamPeerGZIP *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x180);
  if (pvVar1 != (void *)0x0) {
    if (this[0x188] == (StreamPeerGZIP)0x0) {
      inflateEnd();
    }
    else {
      deflateEnd(pvVar1);
    }
    Memory::free_static(pvVar1,false);
    *(undefined8 *)(this + 0x180) = 0;
  }
  return;
}



/* StreamPeerGZIP::_process(unsigned char*, int, unsigned char const*, int, int&, int&, bool) */

undefined8 __thiscall
StreamPeerGZIP::_process
          (StreamPeerGZIP *this,uchar *param_1,int param_2,uchar *param_3,int param_4,int *param_5,
          int *param_6,bool param_7)

{
  StreamPeerGZIP SVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x180);
  if (puVar2 == (undefined8 *)0x0) {
    _err_print_error("_process","core/io/stream_peer_gzip.cpp",0x6a,"Parameter \"ctx\" is null.",0,0
                    );
    return 3;
  }
  puVar2[3] = param_1;
  SVar1 = this[0x188];
  *(int *)(puVar2 + 4) = param_2;
  *(int *)(puVar2 + 1) = param_4;
  *puVar2 = param_3;
  if (SVar1 == (StreamPeerGZIP)0x0) {
    uVar3 = inflate();
    if (1 < uVar3) {
      _err_print_error("_process","core/io/stream_peer_gzip.cpp",0x76,
                       "Condition \"err != 0 && err != 1\" is true. Returning: FAILED",0,0);
      return 1;
    }
  }
  else {
    uVar3 = deflate(puVar2,(uint)param_7 * 4);
    if (param_7 != uVar3) {
      _err_print_error("_process","core/io/stream_peer_gzip.cpp",0x73,
                       "Condition \"err != (p_close ? 1 : 0)\" is true. Returning: FAILED",0,0);
      return 1;
    }
  }
  *param_6 = param_2 - *(int *)(puVar2 + 4);
  *param_5 = param_4 - *(int *)(puVar2 + 1);
  return 0;
}



/* StreamPeerGZIP::_bind_methods() */

void StreamPeerGZIP::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  Variant *pVVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_158 [2];
  long *local_148;
  char *local_138;
  char *pcStack_130;
  undefined8 local_128;
  char *local_118;
  char *pcStack_110;
  undefined8 local_108;
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant local_d8 [24];
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  Variant *local_88;
  undefined1 auStack_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_f8 = (Variant *)&local_118;
  pVStack_f0 = (Variant *)&pcStack_110;
  local_118 = "use_deflate";
  pcStack_110 = "buffer_size";
  D_METHODP((char *)local_158,(char ***)"start_compression",(uint)&local_f8);
  Variant::Variant((Variant *)&local_88,false);
  pVVar6 = (Variant *)local_40;
  Variant::Variant(local_70,0xffff);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_f8 = (Variant *)&local_88;
  pVStack_f0 = local_70;
  pMVar5 = create_method_bind<StreamPeerGZIP,Error,bool,int>(start_compression);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_158,&local_f8,2);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = local_148;
  } while (pVVar6 != (Variant *)&local_88);
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
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
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  local_128 = 0;
  pVVar6 = local_90;
  local_138 = "use_deflate";
  pcStack_130 = "buffer_size";
  local_88 = (Variant *)&local_138;
  auStack_80._0_8_ = &pcStack_130;
  D_METHODP((char *)local_158,(char ***)"start_decompression",(uint)(Variant *)&local_88);
  Variant::Variant(local_d8,false);
  Variant::Variant(local_c0,0xffff);
  local_a0 = (undefined1  [16])0x0;
  auStack_80._0_8_ = local_c0;
  local_a8 = 0;
  local_88 = local_d8;
  pMVar5 = create_method_bind<StreamPeerGZIP,Error,bool,int>(start_decompression);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_158,&local_88,2);
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = local_148;
  } while (pVVar6 != local_d8);
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
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
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_158,(char ***)"finish",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar5 = create_method_bind<StreamPeerGZIP,Error>(finish);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
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
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_158,(char ***)"clear",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar5 = create_method_bind<StreamPeerGZIP>(clear);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_158,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_148;
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_148 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_148[-1];
      local_148 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
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
  if ((StringName::configured != '\0') && (local_158[0] != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00101036:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00101036;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_001025f4();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00100f8c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00100f8c:
  puVar8[-1] = param_1;
  return;
}



/* StreamPeerGZIP::finish() */

int __thiscall StreamPeerGZIP::finish(StreamPeerGZIP *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x180) == 0) || (this[0x188] == (StreamPeerGZIP)0x0)) {
    iVar3 = 2;
    _err_print_error("finish","core/io/stream_peer_gzip.cpp",0xc4,
                     "Condition \"!ctx || !compressing\" is true. Returning: ERR_UNAVAILABLE",0,0);
    goto LAB_00101147;
  }
  if ((*(long *)(this + 0x1b8) == 0) || (*(long *)(*(long *)(this + 0x1b8) + -8) < 0x400)) {
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1b8),0x400);
  }
  local_48 = 0;
  local_44 = 0;
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1b8));
  iVar3 = _process(this,*(uchar **)(this + 0x1b8),0x400,(uchar *)0x0,0,&local_48,&local_44,true);
  iVar2 = local_44;
  if (iVar3 != 0) goto LAB_00101147;
  uVar10 = *(uint *)(this + 0x1a4);
  lVar12 = *(long *)(this + 0x1b8);
  iVar14 = *(int *)(this + 0x1a0) - uVar10;
  if (iVar14 < 0) {
    if (*(long *)(this + 0x198) == 0) {
      iVar14 = iVar14 + -1;
      iVar6 = iVar14;
      if (local_44 <= iVar14) {
        iVar6 = local_44;
      }
      lVar4 = 0;
      goto LAB_001011b5;
    }
    iVar14 = iVar14 + *(int *)(*(long *)(this + 0x198) + -8) + -1;
  }
  else if (iVar14 == 0) {
    if (*(long *)(this + 0x198) == 0) {
      iVar14 = -1;
      iVar6 = -1;
      if (local_44 < 0) {
        iVar6 = local_44;
      }
      lVar4 = 0;
      goto LAB_001011b5;
    }
    iVar14 = (int)*(undefined8 *)(*(long *)(this + 0x198) + -8) + -1;
  }
  else {
    iVar14 = iVar14 + -1;
  }
  iVar6 = iVar14;
  if (local_44 <= iVar14) {
    iVar6 = local_44;
  }
  if (iVar6 != 0) {
    lVar4 = *(long *)(this + 0x198);
LAB_001011b5:
    iVar5 = 0;
    iVar13 = iVar6;
    do {
      iVar11 = uVar10 + iVar13;
      if (lVar4 == 0) {
        if (0 < iVar11) {
          iVar11 = 0;
        }
        iVar11 = iVar11 - uVar10;
        if (0 < iVar11) {
          lVar7 = (long)(int)uVar10;
LAB_0010128e:
          lVar12 = 0;
LAB_00101291:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar12,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      else {
        if (*(int *)(lVar4 + -8) < iVar11) {
          iVar11 = *(int *)(lVar4 + -8);
        }
        iVar11 = iVar11 - uVar10;
        if (0 < iVar11) {
          lVar7 = (long)(int)uVar10;
          uVar9 = *(undefined1 *)(lVar12 + iVar5);
          if (lVar7 < 0) {
LAB_00101398:
            lVar12 = *(long *)(lVar4 + -8);
            goto LAB_00101291;
          }
          lVar15 = iVar5 - lVar7;
          lVar8 = iVar11 + lVar7;
          while( true ) {
            if (lVar4 == 0) goto LAB_0010128e;
            if (*(long *)(lVar4 + -8) <= lVar7) goto LAB_00101398;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x198));
            *(undefined1 *)(*(long *)(this + 0x198) + lVar7) = uVar9;
            if (lVar7 + 1 == lVar8) break;
            lVar4 = *(long *)(this + 0x198);
            uVar9 = *(undefined1 *)(lVar7 + 1 + lVar15 + lVar12);
            lVar7 = lVar7 + 1;
          }
          iVar5 = (iVar5 - uVar10) + 1 + (int)lVar7;
        }
      }
      iVar13 = iVar13 - iVar11;
      if (iVar13 == 0) goto LAB_001013a4;
      lVar4 = *(long *)(this + 0x198);
      uVar10 = 0;
    } while( true );
  }
LAB_001013c1:
  *(uint *)(this + 0x1a4) = uVar10 & *(uint *)(this + 0x1a8);
  if (iVar14 < iVar2) {
    iVar3 = 6;
    _err_print_error("finish","core/io/stream_peer_gzip.cpp",0xd0,
                     "Condition \"wrote != to_write\" is true. Returning: ERR_OUT_OF_MEMORY",0,0);
  }
LAB_00101147:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
LAB_001013a4:
  uVar10 = *(int *)(this + 0x1a4) + iVar6;
  goto LAB_001013c1;
}



/* StreamPeerGZIP::put_partial_data(unsigned char const*, int, int&) */

undefined8 __thiscall
StreamPeerGZIP::put_partial_data(StreamPeerGZIP *this,uchar *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x180) == 0) {
    _err_print_error("put_partial_data","core/io/stream_peer_gzip.cpp",0x88,
                     "Parameter \"ctx\" is null.",0,0);
    uVar3 = 3;
  }
  else if (param_2 < 0) {
    _err_print_error("put_partial_data","core/io/stream_peer_gzip.cpp",0x89,
                     "Condition \"p_bytes < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    uVar3 = 0x1f;
  }
  else {
    lVar9 = (long)param_2;
    if (*(long *)(this + 0x1b8) == 0) {
      if (lVar9 != 0) {
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1b8),lVar9);
        *param_3 = 0;
        goto LAB_001014b3;
      }
      *param_3 = 0;
      uVar3 = 0;
    }
    else {
      if (*(long *)(*(long *)(this + 0x1b8) + -8) < lVar9) {
        CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1b8),lVar9);
      }
      *param_3 = 0;
      if (param_2 != 0) {
LAB_001014b3:
        iVar6 = 0;
LAB_001014c8:
        iVar13 = *(int *)(this + 0x1a0) - *(int *)(this + 0x1a4);
        if (iVar13 < 0) {
          if (*(long *)(this + 0x198) == 0) goto LAB_001015ee;
          iVar13 = iVar13 + *(int *)(*(long *)(this + 0x198) + -8);
        }
        else if (iVar13 == 0) {
          if (*(long *)(this + 0x198) == 0) goto LAB_001015ee;
          iVar13 = (int)*(undefined8 *)(*(long *)(this + 0x198) + -8);
        }
        if (0x401 < iVar13) {
          local_48 = 0;
          local_44 = 0;
          if (*(long *)(this + 0x1b8) == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(long *)(*(long *)(this + 0x1b8) + -8);
          }
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1b8));
          if (iVar13 + -1 <= lVar9) {
            lVar9 = (long)(iVar13 + -1);
          }
          uVar3 = _process(this,*(uchar **)(this + 0x1b8),(int)lVar9,param_1 + iVar6,param_2 - iVar6
                           ,&local_48,&local_44,false);
          iVar13 = local_44;
          if ((int)uVar3 == 0) {
            iVar6 = *param_3 + local_48;
            *param_3 = iVar6;
            if (local_48 != 0) {
              if (local_44 != 0) goto LAB_0010159c;
              goto LAB_001015e5;
            }
            if (local_44 != 0) {
LAB_0010159c:
              uVar11 = *(uint *)(this + 0x1a4);
              lVar9 = *(long *)(this + 0x1b8);
              iVar6 = *(int *)(this + 0x1a0) - uVar11;
              if (iVar6 < 0) {
                if (*(long *)(this + 0x198) == 0) {
                  iVar6 = iVar6 + -1;
                  iVar14 = local_44;
                  if (iVar6 <= local_44) {
                    iVar14 = iVar6;
                  }
                  lVar4 = 0;
                  goto LAB_00101680;
                }
                iVar6 = iVar6 + *(int *)(*(long *)(this + 0x198) + -8) + -1;
              }
              else if (iVar6 == 0) {
                if (*(long *)(this + 0x198) == 0) {
                  iVar6 = -1;
                  iVar14 = -1;
                  if (local_44 < 0) {
                    iVar14 = local_44;
                  }
                  lVar4 = 0;
                  goto LAB_00101680;
                }
                iVar6 = (int)*(undefined8 *)(*(long *)(this + 0x198) + -8) + -1;
              }
              else {
                iVar6 = iVar6 + -1;
              }
              iVar14 = iVar6;
              if (local_44 <= iVar6) {
                iVar14 = local_44;
              }
              if (iVar14 != 0) {
                lVar4 = *(long *)(this + 0x198);
LAB_00101680:
                iVar2 = 0;
                iVar10 = iVar14;
                do {
                  iVar8 = uVar11 + iVar10;
                  if (lVar4 == 0) {
                    if (0 < iVar8) {
                      iVar8 = 0;
                    }
                    iVar8 = iVar8 - uVar11;
                    if (0 < iVar8) {
                      lVar5 = (long)(int)uVar11;
LAB_0010174e:
                      lVar9 = 0;
LAB_0010175c:
                      _err_print_index_error
                                ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar9,"p_index"
                                 ,"((Vector<T> *)(this))->_cowdata.size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar1 = (code *)invalidInstructionException();
                      (*pcVar1)();
                    }
                  }
                  else {
                    if (*(int *)(lVar4 + -8) < iVar8) {
                      iVar8 = *(int *)(lVar4 + -8);
                    }
                    iVar8 = iVar8 - uVar11;
                    if (0 < iVar8) {
                      lVar5 = (long)(int)uVar11;
                      uVar12 = *(undefined1 *)(lVar9 + iVar2);
                      if (lVar5 < 0) {
LAB_00101758:
                        lVar9 = *(long *)(lVar4 + -8);
                        goto LAB_0010175c;
                      }
                      lVar15 = iVar2 - lVar5;
                      lVar7 = iVar8 + lVar5;
                      while( true ) {
                        if (lVar4 == 0) goto LAB_0010174e;
                        if (*(long *)(lVar4 + -8) <= lVar5) goto LAB_00101758;
                        CowData<unsigned_char>::_copy_on_write
                                  ((CowData<unsigned_char> *)(this + 0x198));
                        *(undefined1 *)(*(long *)(this + 0x198) + lVar5) = uVar12;
                        if (lVar5 + 1 == lVar7) break;
                        lVar4 = *(long *)(this + 0x198);
                        uVar12 = *(undefined1 *)(lVar5 + 1 + lVar15 + lVar9);
                        lVar5 = lVar5 + 1;
                      }
                      iVar2 = (iVar2 - uVar11) + 1 + (int)lVar5;
                    }
                  }
                  iVar10 = iVar10 - iVar8;
                  if (iVar10 == 0) goto LAB_001018d8;
                  lVar4 = *(long *)(this + 0x198);
                  uVar11 = 0;
                } while( true );
              }
              goto LAB_001018fd;
            }
          }
          goto LAB_001015f0;
        }
      }
LAB_001015ee:
      uVar3 = 0;
    }
  }
LAB_001015f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001018d8:
  uVar11 = *(int *)(this + 0x1a4) + iVar14;
LAB_001018fd:
  *(uint *)(this + 0x1a4) = uVar11 & *(uint *)(this + 0x1a8);
  if (iVar6 < iVar13) {
    _err_print_error("put_partial_data","core/io/stream_peer_gzip.cpp",0xa3,
                     "Condition \"wrote != to_write\" is true. Returning: ERR_BUG",0,0);
    uVar3 = 0x2f;
    goto LAB_001015f0;
  }
  iVar6 = *param_3;
LAB_001015e5:
  if (param_2 <= iVar6) goto LAB_001015ee;
  goto LAB_001014c8;
}



/* StreamPeerGZIP::_start(bool, bool, int) */

undefined8 __thiscall
StreamPeerGZIP::_start(StreamPeerGZIP *this,bool param_1,bool param_2,int param_3)

{
  StreamPeerGZIP SVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  char cVar9;
  
  puVar3 = PTR_zipio_free_0010a008;
  puVar2 = _GLOBAL_OFFSET_TABLE_;
  if (*(long *)(this + 0x180) != 0) {
    _err_print_error("_start","core/io/stream_peer_gzip.cpp",0x4e,
                     "Condition \"ctx != nullptr\" is true. Returning: ERR_ALREADY_IN_USE",0,0);
    return 0x16;
  }
  if (param_3 < 1) {
    _err_print_error("_start","core/io/stream_peer_gzip.cpp",0x4f,
                     "Condition \"buffer_size <= 0\" is true. Returning: ERR_INVALID_PARAMETER",
                     "Invalid buffer size. It should be a positive integer.",0,0);
    uVar8 = 0x1f;
  }
  else {
    *(undefined8 *)(this + 0x1a0) = 0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1b8),0);
    this[0x188] = (StreamPeerGZIP)param_1;
    if ((param_3 - 1U & 0x40000000) == 0) {
      iVar4 = 0x1e;
      do {
        iVar7 = iVar4;
        iVar5 = 0;
        if (iVar7 == 0) break;
        iVar4 = iVar7 + -1;
        iVar5 = iVar7;
      } while ((1 << ((byte)(iVar7 + -1) & 0x1f) & param_3 - 1U) == 0);
    }
    else {
      iVar5 = 0x1f;
    }
    RingBuffer<unsigned_char>::resize((RingBuffer<unsigned_char> *)(this + 400),iVar5);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1b8),0x400);
    puVar6 = (undefined8 *)Memory::alloc_static(0x70,false);
    *(undefined8 **)(this + 0x180) = puVar6;
    puVar6[8] = puVar2;
    puVar6[9] = puVar3;
    cVar9 = (-!param_2 & 0x10U) + 0xf;
    SVar1 = this[0x188];
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    puVar6[10] = 0;
    if (SVar1 == (StreamPeerGZIP)0x0) {
      iVar5 = inflateInit2_(puVar6,cVar9,"1.3.1",0x70);
    }
    else {
      iVar5 = deflateInit2_(puVar6,0xffffffff,8,cVar9,8,0,"1.3.1",0x70);
    }
    uVar8 = 0;
    if (iVar5 != 0) {
      _err_print_error("_start","core/io/stream_peer_gzip.cpp",0x65,
                       "Condition \"err != 0\" is true. Returning: FAILED",0,0);
      uVar8 = 1;
    }
  }
  return uVar8;
}



/* StreamPeerGZIP::start_compression(bool, int) */

void __thiscall StreamPeerGZIP::start_compression(StreamPeerGZIP *this,bool param_1,int param_2)

{
  _start(this,true,param_1,param_2);
  return;
}



/* StreamPeerGZIP::start_decompression(bool, int) */

void __thiscall StreamPeerGZIP::start_decompression(StreamPeerGZIP *this,bool param_1,int param_2)

{
  _start(this,false,param_1,param_2);
  return;
}



/* StreamPeerGZIP::StreamPeerGZIP() */

void __thiscall StreamPeerGZIP::StreamPeerGZIP(StreamPeerGZIP *this)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00106ed0;
  this[0x17c] = (StreamPeerGZIP)0x0;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x188] = (StreamPeerGZIP)0x1;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x198),1);
  if (*(int *)(this + 0x1a4) < *(int *)(this + 0x1a0)) {
    if (0 < *(int *)(this + 0x1a4)) {
      lVar4 = 0;
      do {
        lVar2 = *(long *)(this + 0x198);
        if (lVar2 == 0) {
          lVar5 = 0;
LAB_00101c93:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar5 = *(long *)(lVar2 + -8);
        if (lVar5 <= lVar4) goto LAB_00101c93;
        uVar1 = *(undefined1 *)(lVar2 + lVar4);
        lVar4 = lVar4 + 1;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x198));
        **(undefined1 **)(this + 0x198) = uVar1;
      } while ((int)lVar4 < *(int *)(this + 0x1a4));
    }
  }
  else {
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  *(undefined8 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1071,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1071,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* StreamPeerGZIP::is_class_ptr(void*) const */

uint __thiscall StreamPeerGZIP::is_class_ptr(StreamPeerGZIP *this,void *param_1)

{
  return (uint)CONCAT71(0x1071,(undefined4 *)param_1 == &StreamPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1071,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1071,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1071,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StreamPeerGZIP::_getv(StringName const&, Variant&) const */

undefined8 StreamPeerGZIP::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StreamPeerGZIP::_setv(StringName const&, Variant const&) */

undefined8 StreamPeerGZIP::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StreamPeerGZIP::_validate_propertyv(PropertyInfo&) const */

void StreamPeerGZIP::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StreamPeerGZIP::_property_can_revertv(StringName const&) const */

undefined8 StreamPeerGZIP::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StreamPeerGZIP::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StreamPeerGZIP::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StreamPeerGZIP::_notificationv(int, bool) */

void StreamPeerGZIP::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTR<Error, bool, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Error,bool,int>::_gen_argument_type(MethodBindTR<Error,bool,int> *this,int param_1)

{
  return 2 - (uint)(param_1 == 0);
}



/* MethodBindTR<Error, bool, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,bool,int>::get_argument_meta(MethodBindTR<Error,bool,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTR<Error, bool, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool,int>::~MethodBindTR(MethodBindTR<Error,bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107058;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, bool, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool,int>::~MethodBindTR(MethodBindTR<Error,bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107058;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001070b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001070b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107118;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00107118;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106d70;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106d70;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* StreamPeerGZIP::_bind_methods() [clone .cold] */

void StreamPeerGZIP::_bind_methods(void)

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

void FUN_001025f4(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00102643:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102643;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001026ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001026ae:
  return &_get_class_namev()::_class_name_static;
}



/* StreamPeerGZIP::_get_class_namev() const */

undefined8 * StreamPeerGZIP::_get_class_namev(void)

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
LAB_00102733:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102733;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StreamPeerGZIP");
      goto LAB_0010279e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StreamPeerGZIP");
LAB_0010279e:
  return &_get_class_namev()::_class_name_static;
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



/* StreamPeerGZIP::get_class() const */

void StreamPeerGZIP::get_class(void)

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
            if (lVar5 == 0) goto LAB_001029ff;
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
LAB_001029ff:
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
    if (cVar6 != '\0') goto LAB_00102ab3;
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
              if (lVar5 == 0) goto LAB_00102b63;
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
LAB_00102b63:
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
      if (cVar6 != '\0') goto LAB_00102ab3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102ab3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerGZIP::is_class(String const&) const */

undefined8 __thiscall StreamPeerGZIP::is_class(StreamPeerGZIP *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00102c8f;
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
LAB_00102c8f:
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
    if (cVar6 != '\0') goto LAB_00102d43;
  }
  cVar6 = String::operator==(param_1,"StreamPeerGZIP");
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
              if (lVar5 == 0) goto LAB_00102e03;
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
LAB_00102e03:
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
      if (cVar6 != '\0') goto LAB_00102d43;
    }
    cVar6 = String::operator==(param_1,"StreamPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00102eac;
    }
  }
LAB_00102d43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102eac:
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
    if ((code *)PTR__bind_methods_0010a010 != Object::_bind_methods) {
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
LAB_001031c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001031c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001031e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001031e6:
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
  String::split(local_58,SUB81(param_1,0),0x103445);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC17;
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
        goto joined_r0x001034fa;
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
  local_48 = &_LC17;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x001034fa:
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



/* MethodBindTR<Error>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error>::_gen_argument_type_info(int param_1)

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
  local_58 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StreamPeer::_get_property_listv(StreamPeer *this,List *param_1,bool param_2)

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
  local_78 = "StreamPeer";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StreamPeer";
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
LAB_00103998:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103998;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001039b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001039b5:
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
  StringName::StringName((StringName *)&local_78,"StreamPeer",false);
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



/* StreamPeerGZIP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StreamPeerGZIP::_get_property_listv(StreamPeerGZIP *this,List *param_1,bool param_2)

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
    StreamPeer::_get_property_listv((StreamPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StreamPeerGZIP";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StreamPeerGZIP";
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
LAB_00103de8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103de8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103e05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103e05:
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
  StringName::StringName((StringName *)&local_78,"StreamPeerGZIP",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StreamPeer::_get_property_listv((StreamPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<StreamPeerGZIP, Error, bool, int>(Error (StreamPeerGZIP::*)(bool,
   int)) */

MethodBind * create_method_bind<StreamPeerGZIP,Error,bool,int>(_func_Error_bool_int *param_1)

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
  *(_func_Error_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00107058;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "StreamPeerGZIP";
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



/* MethodBind* create_method_bind<StreamPeerGZIP, Error>(Error (StreamPeerGZIP::*)()) */

MethodBind * create_method_bind<StreamPeerGZIP,Error>(_func_Error *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001070b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "StreamPeerGZIP";
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



/* MethodBind* create_method_bind<StreamPeerGZIP>(void (StreamPeerGZIP::*)()) */

MethodBind * create_method_bind<StreamPeerGZIP>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00107118;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "StreamPeerGZIP";
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



/* StreamPeerGZIP::_initialize_classv() */

void StreamPeerGZIP::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (StreamPeer::initialize_class()::initialized == '\0') {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((code *)PTR__bind_methods_0010a020 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "StreamPeer";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_0010a018 != RefCounted::_bind_methods) {
        StreamPeer::_bind_methods();
      }
      StreamPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "StreamPeer";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StreamPeerGZIP";
    local_70 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* RingBuffer<unsigned char>::resize(int) */

void __thiscall RingBuffer<unsigned_char>::resize(RingBuffer<unsigned_char> *this,int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (*(long *)(this + 8) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(long *)(this + 8) + -8);
  }
  iVar5 = 1 << ((byte)param_1 & 0x1f);
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 8),1L << ((byte)param_1 & 0x3f));
  uVar1 = iVar5 - 1;
  uVar4 = *(uint *)(this + 0x14);
  if ((iVar8 < iVar5) && ((int)uVar4 < (int)*(uint *)(this + 0x10))) {
    if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        lVar6 = *(long *)(this + 8);
        if (lVar6 == 0) {
          lVar7 = 0;
LAB_00104a0b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 <= lVar9) goto LAB_00104a0b;
        uVar2 = *(undefined1 *)(lVar6 + lVar9);
        lVar6 = (long)(int)(iVar8 + (int)lVar9 & uVar1);
        if ((lVar6 < 0) || (lVar7 <= lVar6)) {
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar9 = lVar9 + 1;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 8));
        *(undefined1 *)(*(long *)(this + 8) + lVar6) = uVar2;
        uVar4 = *(uint *)(this + 0x14);
      } while ((int)lVar9 < (int)uVar4);
    }
    uVar4 = uVar4 + iVar8;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & uVar1;
  }
  *(uint *)(this + 0x14) = uVar4 & uVar1;
  *(uint *)(this + 0x18) = uVar1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104be8) */
/* WARNING: Removing unreachable block (ram,0x00104d18) */
/* WARNING: Removing unreachable block (ram,0x00104ee0) */
/* WARNING: Removing unreachable block (ram,0x00104d24) */
/* WARNING: Removing unreachable block (ram,0x00104d2e) */
/* WARNING: Removing unreachable block (ram,0x00104ec0) */
/* WARNING: Removing unreachable block (ram,0x00104d3a) */
/* WARNING: Removing unreachable block (ram,0x00104d44) */
/* WARNING: Removing unreachable block (ram,0x00104ea0) */
/* WARNING: Removing unreachable block (ram,0x00104d50) */
/* WARNING: Removing unreachable block (ram,0x00104d5a) */
/* WARNING: Removing unreachable block (ram,0x00104e80) */
/* WARNING: Removing unreachable block (ram,0x00104d66) */
/* WARNING: Removing unreachable block (ram,0x00104d70) */
/* WARNING: Removing unreachable block (ram,0x00104e60) */
/* WARNING: Removing unreachable block (ram,0x00104d7c) */
/* WARNING: Removing unreachable block (ram,0x00104d86) */
/* WARNING: Removing unreachable block (ram,0x00104e40) */
/* WARNING: Removing unreachable block (ram,0x00104d92) */
/* WARNING: Removing unreachable block (ram,0x00104d9c) */
/* WARNING: Removing unreachable block (ram,0x00104e20) */
/* WARNING: Removing unreachable block (ram,0x00104da4) */
/* WARNING: Removing unreachable block (ram,0x00104dba) */
/* WARNING: Removing unreachable block (ram,0x00104dc6) */
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
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
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105080;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar4)();
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
LAB_00105080:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010550b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010550b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010570b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010570b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x207,
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
      goto LAB_00105860;
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
LAB_00105860:
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
      goto LAB_00105ac4;
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
LAB_00105ac4:
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
      goto LAB_00105cc3;
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
LAB_00105cc3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,bool,int>::validated_call
          (MethodBindTR<Error,bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
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
      goto LAB_00105ed2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),(*param_2)[8],*(undefined4 *)(param_2[1] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00105ed2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,bool,int>::ptrcall
          (MethodBindTR<Error,bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
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
      goto LAB_00106105;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),**param_2 != '\0',*param_2[1]);
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00106105:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Error,bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *this;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
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
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_68 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar13 = (long *)(local_70 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00106455;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar8 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar8 != 0) goto LAB_00106498;
      this = *(Variant **)param_4;
LAB_001064ad:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar8) {
LAB_00106498:
        uVar9 = 4;
        goto LAB_00106485;
      }
      if (in_R8D == 0) {
        lVar11 = (long)(iVar14 + -2);
        if (lVar2 <= lVar11) goto LAB_00106570;
        this = pVVar12 + lVar11 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001064ad;
      }
      lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar8));
      if (lVar2 <= lVar11) {
LAB_00106570:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC64;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar8 = Variant::operator_cast_to_int(pVVar12);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC65;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar7 = Variant::operator_cast_to_bool(this);
    iVar8 = (*(code *)pVVar15)((Variant *)((long)plVar13 + (long)pVVar1),bVar7,iVar8);
    Variant::Variant((Variant *)local_58,iVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    uVar9 = 3;
LAB_00106485:
    *in_R9 = uVar9;
    in_R9[2] = 2;
  }
LAB_00106455:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<bool, int>(int, PropertyInfo&) */

void call_get_argument_type_info<bool,int>(int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_68 = 0;
    local_58 = &_LC20;
    local_70 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  }
  else {
    if (param_1 != 1) goto LAB_0010673c;
    local_68 = 0;
    local_58 = &_LC20;
    local_70 = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00106828:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00106828;
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
  *(undefined4 *)param_2 = local_58._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_2 + 8) = local_50._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_50._8_8_;
    local_50 = auVar6 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar7 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar7;
  }
  lVar8 = local_38;
  *(int *)(param_2 + 0x18) = local_40;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == local_38) {
    *(undefined4 *)(param_2 + 0x28) = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
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
        lVar2 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_2 + 0x20) = local_38;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
LAB_0010673c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Error,bool,int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<bool,int>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
  }
  else {
    local_78 = 0;
    local_68 = "Error";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 5;
    String::parse_latin1((StrRange *)&local_78);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_70,(String *)&local_78)
    ;
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    *puVar4 = 2;
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 0x10006;
    *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_70;
    lVar2 = local_78;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar2 = local_78;
      }
    }
    local_78 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

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
/* MethodBindTR<Error, bool, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,bool,int>::~MethodBindTR(MethodBindTR<Error,bool,int> *this)

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


