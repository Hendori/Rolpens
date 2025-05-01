
/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* FramebufferCacheRD::~FramebufferCacheRD() */

void __thiscall FramebufferCacheRD::~FramebufferCacheRD(FramebufferCacheRD *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_001046f0;
  if (*(int *)(this + 0x201c8) != 0) {
    local_50 = 0;
    local_40 = 0x2c;
    local_48 = " framebuffer cache instance(s) still in use.";
    String::parse_latin1((StrRange *)&local_50);
    itos((long)&local_48);
    operator+((char *)&local_58,(String *)"At exit: ");
    String::operator+((String *)&local_60,(String *)&local_58);
    _err_print_error("~FramebufferCacheRD","servers/rendering/renderer_rd/framebuffer_cache_rd.cpp",
                     0x55,(String *)&local_60,0,0);
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
    lVar4 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar4 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  if (*(uint *)(this + 0x18c) < (uint)(*(int *)(this + 0x198) * *(int *)(this + 0x188))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_48 = "N18FramebufferCacheRD5CacheE";
      local_40 = 0x1c;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar4 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x188) != 0) {
    lVar4 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x178) + lVar4 * 8),false);
      lVar2 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x180) + lVar2),false);
    } while ((uint)lVar4 < *(uint *)(this + 0x188));
    Memory::free_static(*(void **)(this + 0x178),false);
    Memory::free_static(*(void **)(this + 0x180),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::~Object((Object *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FramebufferCacheRD::~FramebufferCacheRD() */

void __thiscall FramebufferCacheRD::~FramebufferCacheRD(FramebufferCacheRD *this)

{
  ~FramebufferCacheRD(this);
  operator_delete(this,0x201d0);
  return;
}



/* FramebufferCacheRD::_bind_methods() */

void FramebufferCacheRD::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *this;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_a0;
  long local_98 [2];
  long *local_88;
  char *local_78;
  char *pcStack_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 auStack_50 [32];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "views";
  local_58 = &local_78;
  local_78 = "textures";
  pcStack_70 = "passes";
  auStack_50._8_8_ = &local_68;
  auStack_50._0_8_ = &pcStack_70;
  D_METHODP((char *)local_98,(char ***)"get_cache_multipass",(uint)&local_58);
  StringName::StringName((StringName *)&local_a0,"FramebufferCacheRD",false);
  auStack_50._0_16_ = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  this = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(this);
  *(undefined ***)this = &PTR__gen_argument_type_00104850;
  *(code **)(this + 0x58) = get_cache_multipass_array;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  MethodBind::_set_static(SUB81(this,0));
  MethodBind::_set_returns(SUB81(this,0));
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_a0);
  ClassDB::bind_methodfi(1,this,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar4 = local_88 + -2;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
      if (lVar1 != 0) {
        lVar5 = 0;
        plVar4 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FramebufferCacheRD::_invalidate(FramebufferCacheRD::Cache*) */

void __thiscall FramebufferCacheRD::_invalidate(FramebufferCacheRD *this,Cache *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  if (*(long *)param_1 == 0) {
    *(undefined8 *)(this + (ulong)(*(uint *)(param_1 + 0x10) % 0x3ffd) * 8 + 0x1e0) =
         *(undefined8 *)(param_1 + 8);
  }
  else {
    *(undefined8 *)(*(long *)param_1 + 8) = *(undefined8 *)(param_1 + 8);
  }
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 8) = *(undefined8 *)param_1;
  }
  pvVar4 = *(void **)(param_1 + 0x38);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      lVar5 = 0;
      do {
        lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 0x38);
        if (lVar3 != 0) {
          LOCK();
          plVar1 = (long *)(lVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 0x38);
            *(undefined8 *)((long)pvVar4 + lVar5 * 0x48 + 0x38) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 0x28);
        if (lVar3 != 0) {
          LOCK();
          plVar1 = (long *)(lVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 0x28);
            *(undefined8 *)((long)pvVar4 + lVar5 * 0x48 + 0x28) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 0x18);
        if (lVar3 != 0) {
          LOCK();
          plVar1 = (long *)(lVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 0x18);
            *(undefined8 *)((long)pvVar4 + lVar5 * 0x48 + 0x18) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 8);
        if (lVar3 != 0) {
          LOCK();
          plVar1 = (long *)(lVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *(long *)((long)pvVar4 + lVar5 * 0x48 + 8);
            *(undefined8 *)((long)pvVar4 + lVar5 * 0x48 + 8) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        pvVar4 = *(void **)(param_1 + 0x38);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (pvVar4 == (void *)0x0) goto LAB_0010092e;
    }
    Memory::free_static(pvVar4,false);
  }
LAB_0010092e:
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
  uVar2 = *(uint *)(this + 0x18c);
  *(Cache **)
   (*(long *)(*(long *)(this + 0x180) +
             (ulong)(uVar2 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)) * 8) +
   (ulong)(uVar2 & *(uint *)(this + 0x194)) * 8) = param_1;
  *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + -1;
  *(uint *)(this + 0x18c) = uVar2 + 1;
  return;
}



/* FramebufferCacheRD::_framebuffer_invalidation_callback(void*) */

void FramebufferCacheRD::_framebuffer_invalidation_callback(void *param_1)

{
  _invalidate(singleton,(Cache *)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FramebufferCacheRD::FramebufferCacheRD() */

void __thiscall FramebufferCacheRD::FramebufferCacheRD(FramebufferCacheRD *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  Object::Object((Object *)this);
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  uVar2 = _UNK_00104918;
  uVar1 = __LC27;
  *(undefined ***)this = &PTR__initialize_classv_001046f0;
  this[0x19c] = (FramebufferCacheRD)0x0;
  *(undefined4 *)(this + 0x198) = 0x1000;
  *(undefined8 *)(this + 0x188) = uVar1;
  *(undefined8 *)(this + 400) = uVar2;
  memset(this + 0x1e0,0,0x1ffe8);
  bVar3 = singleton == (FramebufferCacheRD *)0x0;
  *(undefined4 *)(this + 0x201c8) = 0;
  if (bVar3) {
    singleton = this;
    return;
  }
  _err_print_error("FramebufferCacheRD","servers/rendering/renderer_rd/framebuffer_cache_rd.cpp",
                   0x4f,"Condition \"singleton != nullptr\" is true.",0,0);
  return;
}



/* CowData<RenderingDevice::FramebufferPass>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::FramebufferPass>::_copy_on_write
          (CowData<RenderingDevice::FramebufferPass> *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  CowData<int> *this_00;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x48 != 0) {
    uVar5 = lVar1 * 0x48 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<int> *)(puVar4 + 3);
  lVar6 = 0;
  *puVar4 = 1;
  puVar4[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar3 = *(long *)this + (-0x18 - (long)puVar4);
      *(undefined8 *)this_00 = 0;
      if (*(long *)(this_00 + lVar3 + 8) != 0) {
        CowData<int>::_ref(this_00,(CowData *)(this_00 + lVar3 + 8));
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (*(long *)(this_00 + lVar3 + 0x18) != 0) {
        CowData<int>::_ref(this_00 + 0x10,(CowData *)(this_00 + lVar3 + 0x18));
      }
      *(undefined8 *)(this_00 + 0x20) = 0;
      if (*(long *)(this_00 + lVar3 + 0x28) != 0) {
        CowData<int>::_ref(this_00 + 0x20,(CowData *)(this_00 + lVar3 + 0x28));
      }
      *(undefined8 *)(this_00 + 0x30) = 0;
      if (*(long *)(this_00 + lVar3 + 0x38) != 0) {
        CowData<int>::_ref(this_00 + 0x30,(CowData *)(this_00 + lVar3 + 0x38));
      }
      lVar6 = lVar6 + 1;
      *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(this_00 + lVar3 + 0x40);
      this_00 = this_00 + 0x48;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar4 + 2;
  return;
}



/* FramebufferCacheRD::get_cache_multipass_array(TypedArray<RID> const&,
   TypedArray<RDFramebufferPass> const&, unsigned int) */

undefined8
FramebufferCacheRD::get_cache_multipass_array(TypedArray *param_1,TypedArray *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  Variant *this;
  long lVar4;
  Object *pOVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  Vector local_a8 [8];
  long local_a0;
  Vector local_98 [8];
  long local_90 [2];
  long local_80 [2];
  long local_70 [2];
  long local_60 [2];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_90[0] = 0;
  while( true ) {
    iVar3 = Array::size();
    if (iVar3 <= iVar7) break;
    this = (Variant *)Array::operator[]((int)param_1);
    uVar6 = Variant::operator_cast_to_RID(this);
    if (local_a0 == 0) {
      lVar4 = 1;
    }
    else {
      lVar4 = *(long *)(local_a0 + -8) + 1;
    }
    iVar3 = CowData<RID>::resize<false>((CowData<RID> *)&local_a0,lVar4);
    if (iVar3 == 0) {
      if (local_a0 == 0) {
        lVar8 = -1;
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(local_a0 + -8);
        lVar8 = lVar4 + -1;
        if (-1 < lVar8) {
          CowData<RID>::_copy_on_write((CowData<RID> *)&local_a0);
          *(undefined8 *)(local_a0 + lVar8 * 8) = uVar6;
          goto LAB_00100d2b;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar4,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_00100d2b:
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0;
  do {
    iVar3 = Array::size();
    if (iVar3 <= iVar7) {
      uVar6 = get_cache_multipass(singleton,local_a8,local_98,param_3);
      CowData<RenderingDevice::FramebufferPass>::_unref
                ((CowData<RenderingDevice::FramebufferPass> *)local_90);
      lVar4 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Array::operator[]((int)param_2);
    lVar4 = Variant::get_validated_object();
    if (lVar4 != 0) {
      pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&RDFramebufferPass::typeinfo,0);
      if (pOVar5 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 != '\0') {
          local_80[0] = 0;
          if (*(long *)(pOVar5 + 0x188) != 0) {
            CowData<int>::_ref((CowData<int> *)local_80,(CowData *)(pOVar5 + 0x188));
          }
          local_70[0] = 0;
          if (*(long *)(pOVar5 + 0x198) != 0) {
            CowData<int>::_ref((CowData<int> *)local_70,(CowData *)(pOVar5 + 0x198));
          }
          local_60[0] = 0;
          if (*(long *)(pOVar5 + 0x1a8) != 0) {
            CowData<int>::_ref((CowData<int> *)local_60,(CowData *)(pOVar5 + 0x1a8));
          }
          local_50 = 0;
          lVar4 = *(long *)(pOVar5 + 0x1b8);
          if (*(long *)(pOVar5 + 0x1b8) != 0) {
            CowData<int>::_ref((CowData<int> *)&local_50,(CowData *)(pOVar5 + 0x1b8));
            lVar4 = local_50;
          }
          uVar6 = *(undefined8 *)(pOVar5 + 0x1c0);
          if (local_90[0] == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = *(long *)(local_90[0] + -8) + 1;
          }
          local_48 = uVar6;
          iVar3 = CowData<RenderingDevice::FramebufferPass>::resize<false>
                            ((CowData<RenderingDevice::FramebufferPass> *)local_90,lVar8);
          if (iVar3 == 0) {
            if (local_90[0] == 0) {
              lVar9 = -1;
              lVar8 = 0;
            }
            else {
              lVar8 = *(long *)(local_90[0] + -8);
              lVar9 = lVar8 + -1;
              if (-1 < lVar9) {
                CowData<RenderingDevice::FramebufferPass>::_copy_on_write
                          ((CowData<RenderingDevice::FramebufferPass> *)local_90);
                lVar8 = local_90[0] + lVar9 * 0x48;
                if (*(long *)(lVar8 + 8) != local_80[0]) {
                  CowData<int>::_ref((CowData<int> *)(lVar8 + 8),(CowData *)local_80);
                }
                if (*(long *)(lVar8 + 0x18) != local_70[0]) {
                  CowData<int>::_ref((CowData<int> *)(lVar8 + 0x18),(CowData *)local_70);
                }
                if (*(long *)(lVar8 + 0x28) != local_60[0]) {
                  CowData<int>::_ref((CowData<int> *)(lVar8 + 0x28),(CowData *)local_60);
                }
                if (*(long *)(lVar8 + 0x38) != lVar4) {
                  CowData<int>::_ref((CowData<int> *)(lVar8 + 0x38),(CowData *)&local_50);
                }
                *(undefined8 *)(lVar8 + 0x40) = uVar6;
                goto LAB_00100f2c;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar8,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_00100f2c:
          if (lVar4 != 0) {
            LOCK();
            plVar1 = (long *)(lVar4 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_50 + -0x10),false);
            }
          }
          if (local_60[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_60[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_60[0] + -0x10),false);
            }
          }
          if (local_70[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_70[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70[0] + -0x10),false);
            }
          }
          if (local_80[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_80[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_80[0] + -0x10),false);
            }
          }
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
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



/* FramebufferCacheRD::is_class_ptr(void*) const */

uint __thiscall FramebufferCacheRD::is_class_ptr(FramebufferCacheRD *this,void *param_1)

{
  return (uint)CONCAT71(0x1048,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1048,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* FramebufferCacheRD::_getv(StringName const&, Variant&) const */

undefined8 FramebufferCacheRD::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FramebufferCacheRD::_setv(StringName const&, Variant const&) */

undefined8 FramebufferCacheRD::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FramebufferCacheRD::_validate_propertyv(PropertyInfo&) const */

void FramebufferCacheRD::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* FramebufferCacheRD::_property_can_revertv(StringName const&) const */

undefined8 FramebufferCacheRD::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FramebufferCacheRD::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FramebufferCacheRD::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FramebufferCacheRD::_notificationv(int, bool) */

void FramebufferCacheRD::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
_gen_argument_type(MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
                   *this,int param_1)

{
  if ((uint)param_1 < 3) {
    if (param_1 != 2) {
      param_1 = 0x1c;
    }
    return param_1;
  }
  return 0x17;
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::get_argument_meta(int) const */

undefined8 __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
get_argument_meta(MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
                  *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 2) {
    uVar1 = 7;
  }
  return uVar1;
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
~MethodBindTRS(MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
~MethodBindTRS(MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
               *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FramebufferCacheRD::_bind_methods() [clone .cold] */

void FramebufferCacheRD::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::FramebufferPass>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::FramebufferPass>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FramebufferCacheRD::_get_class_namev() const */

undefined8 * FramebufferCacheRD::_get_class_namev(void)

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
LAB_00101493:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101493;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FramebufferCacheRD");
      goto LAB_001014fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FramebufferCacheRD");
LAB_001014fe:
  return &_get_class_namev()::_class_name_static;
}



/* FramebufferCacheRD::get_class() const */

void FramebufferCacheRD::get_class(void)

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



/* FramebufferCacheRD::is_class(String const&) const */

undefined8 __thiscall FramebufferCacheRD::is_class(FramebufferCacheRD *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010168f;
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
LAB_0010168f:
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
    if (cVar6 != '\0') goto LAB_00101743;
  }
  cVar6 = String::operator==(param_1,"FramebufferCacheRD");
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
              if (lVar5 == 0) goto LAB_001017f3;
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
LAB_001017f3:
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
      if (cVar6 != '\0') goto LAB_00101743;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101743:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::ptrcall
          (MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
           *this,Object *param_1,void **param_2,void *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Array local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(this + 0x58);
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_2[2];
  Array::Array(local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "RDFramebufferPass";
  local_58 = 0;
  local_70 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar5 = Array::is_same_typed(local_78);
  if (cVar5 == '\0') {
    Array::assign(local_78);
  }
  else {
    Array::_ref(local_78);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(StrRange *)&local_70,(StringName *)0x17,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar5 = Array::is_same_typed((Array *)&local_70);
  if (cVar5 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  uVar6 = (*pcVar3)((StrRange *)&local_70,local_78,uVar2);
  *(undefined8 *)param_3 = uVar6;
  Array::~Array((Array *)&local_70);
  Array::~Array(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
validated_call(MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
               *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Array local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(this + 0x58);
  uVar2 = *(undefined4 *)(param_2[2] + 8);
  Array::Array(local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "RDFramebufferPass";
  local_58 = 0;
  local_70 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar5 = Array::is_same_typed(local_78);
  if (cVar5 == '\0') {
    Array::assign(local_78);
  }
  else {
    Array::_ref(local_78);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(StrRange *)&local_70,(StringName *)0x17,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar5 = Array::is_same_typed((Array *)&local_70);
  if (cVar5 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  uVar6 = (*pcVar3)((StrRange *)&local_70,local_78,uVar2);
  *(undefined8 *)(param_3 + 8) = uVar6;
  Array::~Array((Array *)&local_70);
  Array::~Array(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
         call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  Variant *pVVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  Variant *pVVar11;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar12;
  long in_FS_OFFSET;
  Array local_a0 [8];
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 4) {
    pVVar3 = param_2[5];
    if (pVVar3 == (Variant *)0x0) {
      iVar10 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar3 + -8);
      iVar10 = (int)lVar12;
    }
    if ((int)(3 - in_R8D) <= iVar10) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar7 = iVar10 + -3 + (int)lVar9;
          if (lVar12 <= (int)uVar7) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar7,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pVVar11 = pVVar3 + (ulong)uVar7 * 0x18;
        }
        local_78[lVar9] = pVVar11;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar5 = _LC11;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      uVar7 = Variant::operator_cast_to_unsigned_int(local_78[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],0x1c);
      uVar5 = _LC12;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      Variant::operator_cast_to_Array((Variant *)&local_90);
      Array::Array(local_a0);
      local_50 = (undefined1  [16])0x0;
      local_88 = "RDFramebufferPass";
      local_58[0] = 0;
      local_58[1] = 0;
      local_98 = 0;
      local_80 = 0x11;
      String::parse_latin1((StrRange *)&local_98);
      StringName::StringName((StringName *)&local_88,(String *)&local_98,false);
      Array::set_typed((uint)local_a0,(StringName *)0x18,(Variant *)&local_88);
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      lVar12 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar6 = Array::is_same_typed(local_a0);
      if (cVar6 == '\0') {
        Array::assign(local_a0);
      }
      else {
        Array::_ref(local_a0);
      }
      Array::~Array((Array *)&local_90);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0],0x1c);
      uVar5 = _LC13;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      Variant::operator_cast_to_Array((Variant *)&local_88);
      Array::Array((Array *)&local_98);
      local_58[0] = 0;
      local_58[1] = 0;
      local_90 = 0;
      local_50 = (undefined1  [16])0x0;
      Array::set_typed((uint)(StrRange *)&local_98,(StringName *)0x17,(Variant *)&local_90);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar6 = Array::is_same_typed((Array *)&local_98);
      if (cVar6 == '\0') {
        Array::assign((Array *)&local_98);
      }
      else {
        Array::_ref((Array *)&local_98);
      }
      Array::~Array((Array *)&local_88);
      local_88 = (char *)(*(code *)pVVar2)((StrRange *)&local_98,local_a0,uVar7);
      Variant::Variant((Variant *)local_58,(RID *)&local_88);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array((Array *)&local_98);
      Array::~Array(local_a0);
      goto LAB_0010209f;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 3;
LAB_0010209f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FramebufferCacheRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void FramebufferCacheRD::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "FramebufferCacheRD";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FramebufferCacheRD";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_00102368:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102368;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102386;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102386:
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
  StringName::StringName((StringName *)&local_78,"FramebufferCacheRD",false);
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



/* FramebufferCacheRD::_initialize_classv() */

void FramebufferCacheRD::_initialize_classv(void)

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
    local_38 = "FramebufferCacheRD";
    local_50 = 0;
    local_30 = 0x12;
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
        goto LAB_00102735;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00102735:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<RenderingDevice::FramebufferPass, unsigned int, false, false>::resize(unsigned int)
    */

void __thiscall
LocalVector<RenderingDevice::FramebufferPass,unsigned_int,false,false>::resize
          (LocalVector<RenderingDevice::FramebufferPass,unsigned_int,false,false> *this,uint param_1
          )

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = *(uint *)this;
  if (param_1 < uVar8) {
    lVar7 = (ulong)param_1 * 0x48;
    uVar8 = param_1;
    do {
      lVar6 = *(long *)(this + 8) + lVar7;
      if (*(long *)(lVar6 + 0x38) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar6 + 0x38) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)(lVar6 + 0x38);
          *(undefined8 *)(lVar6 + 0x38) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (*(long *)(lVar6 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)(lVar6 + 0x28);
          *(undefined8 *)(lVar6 + 0x28) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (*(long *)(lVar6 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)(lVar6 + 0x18);
          *(undefined8 *)(lVar6 + 0x18) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
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
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x48;
    } while (uVar8 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar8) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar8 = uVar5 >> 1 | uVar5;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar8;
      lVar7 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar8 * 0x48,false);
      *(long *)(this + 8) = lVar7;
      if (lVar7 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = *(uint *)this;
      if (param_1 <= uVar8) goto LAB_001029e9;
    }
    uVar3 = _LC34;
    lVar7 = *(long *)(this + 8);
    lVar6 = lVar7 + (ulong)uVar8 * 0x48;
    do {
      *(undefined8 *)(lVar6 + 8) = 0;
      lVar4 = lVar6 + 0x48;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x40) = uVar3;
      lVar6 = lVar4;
    } while (lVar4 != lVar7 + 0x48 + ((ulong)(uVar5 - uVar8) + (ulong)uVar8) * 0x48);
  }
LAB_001029e9:
  *(uint *)this = param_1;
  return;
}



/* FramebufferCacheRD::_allocate_from_data(unsigned int, unsigned int, unsigned int, Vector<RID>
   const&, Vector<RenderingDevice::FramebufferPass> const&) */

long __thiscall
FramebufferCacheRD::_allocate_from_data
          (FramebufferCacheRD *this,uint param_1,uint param_2,uint param_3,Vector *param_4,
          Vector *param_5)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  Vector *pVVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  
  if ((*(long *)(param_5 + 8) == 0) || (*(long *)(*(long *)(param_5 + 8) + -8) == 0)) {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create(pVVar9,(long)param_4,0xffffffff);
  }
  else {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create_multipass(pVVar9,param_4,(long)param_5,0xffffffff);
  }
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_data","servers/rendering/renderer_rd/framebuffer_cache_rd.h",
                     0xab,"Condition \"rid.is_null()\" is true. Returning: rid",0,0);
  }
  else {
    iVar8 = *(int *)(this + 0x18c);
    if (iVar8 == 0) {
      uVar7 = *(uint *)(this + 0x188);
      uVar6 = uVar7 + 1;
      *(uint *)(this + 0x188) = uVar6;
      uVar13 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
      *(undefined8 *)(this + 0x178) = uVar13;
      uVar13 = Memory::realloc_static
                         (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
      lVar20 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x180) = uVar13;
      lVar11 = (ulong)uVar7 * 8;
      uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) * 0x48,false);
      uVar6 = *(uint *)(this + 0x198);
      *(undefined8 *)(lVar20 + lVar11) = uVar13;
      lVar20 = *(long *)(this + 0x180);
      uVar13 = Memory::alloc_static((ulong)uVar6 << 3,false);
      *(undefined8 *)(lVar20 + lVar11) = uVar13;
      uVar6 = *(uint *)(this + 0x198);
      if (uVar6 == 0) {
        plVar17 = *(long **)(this + 0x180);
      }
      else {
        plVar17 = *(long **)(this + 0x180);
        lVar20 = *(long *)(this + 0x178);
        plVar4 = (long *)*plVar17;
        lVar14 = 0;
        plVar15 = plVar4;
        do {
          plVar16 = plVar15 + 1;
          lVar18 = *(long *)(lVar20 + lVar11) + lVar14;
          lVar14 = lVar14 + 0x48;
          *plVar15 = lVar18;
          plVar15 = plVar16;
        } while (plVar4 + uVar6 != plVar16);
      }
      iVar8 = uVar6 + *(int *)(this + 0x18c);
    }
    else {
      plVar17 = *(long **)(this + 0x180);
    }
    uVar6 = iVar8 - 1;
    *(uint *)(this + 0x18c) = uVar6;
    pauVar1 = *(undefined1 (**) [16])
               (plVar17[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
               (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
    pauVar1[1] = (undefined1  [16])0x0;
    *(long *)(pauVar1[1] + 8) = lVar10;
    lVar11 = *(long *)(param_4 + 8);
    *(undefined8 *)pauVar1[4] = 0;
    *(uint *)pauVar1[1] = param_2;
    *(uint *)pauVar1[4] = param_1;
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[2] = (undefined1  [16])0x0;
    pauVar1[3] = (undefined1  [16])0x0;
    if (lVar11 != 0) {
      uVar2 = *(ulong *)(lVar11 + -8);
      uVar6 = (uint)uVar2;
      if (uVar6 != 0) {
        uVar19 = uVar6 - 1;
        uVar7 = uVar19 >> 1 | uVar19;
        uVar7 = uVar7 | uVar7 >> 2;
        uVar7 = uVar7 | uVar7 >> 4;
        uVar7 = uVar7 | uVar7 >> 8;
        uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
        *(uint *)(pauVar1[2] + 4) = uVar7;
        lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 8,false);
        *(long *)(pauVar1[2] + 8) = lVar11;
        if (lVar11 == 0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar7 = *(uint *)pauVar1[2];
        if (uVar7 < uVar6) {
          memset((void *)(lVar11 + (ulong)uVar7 * 8),0,(ulong)(uVar19 - uVar7) * 8 + 8);
        }
        lVar20 = *(long *)(param_4 + 8);
        *(uint *)pauVar1[2] = uVar6;
        if (lVar20 == 0) {
          uVar12 = 0;
          lVar14 = 0;
LAB_00102e15:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar14,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar12 = 0;
        do {
          lVar14 = *(long *)(lVar20 + -8);
          if (lVar14 <= (long)uVar12) goto LAB_00102e15;
          *(undefined8 *)(lVar11 + uVar12 * 8) = *(undefined8 *)(lVar20 + uVar12 * 8);
          uVar12 = uVar12 + 1;
        } while ((uVar2 & 0xffffffff) != uVar12);
      }
    }
    if (*(long *)(param_5 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(long *)(param_5 + 8) + -8);
    }
    uVar12 = 0;
    LocalVector<RenderingDevice::FramebufferPass,unsigned_int,false,false>::resize
              ((LocalVector<RenderingDevice::FramebufferPass,unsigned_int,false,false> *)
               (pauVar1 + 3),uVar6);
    if (*(int *)pauVar1[3] != 0) {
      do {
        lVar11 = *(long *)(param_5 + 8);
        if (lVar11 == 0) {
          lVar14 = 0;
          goto LAB_00102e15;
        }
        lVar14 = *(long *)(lVar11 + -8);
        if (lVar14 <= (long)uVar12) goto LAB_00102e15;
        lVar11 = lVar11 + uVar12 * 0x48;
        lVar20 = uVar12 * 0x48 + *(long *)(pauVar1[3] + 8);
        if (*(long *)(lVar20 + 8) != *(long *)(lVar11 + 8)) {
          CowData<int>::_ref((CowData<int> *)(lVar20 + 8),(CowData *)(lVar11 + 8));
        }
        if (*(long *)(lVar20 + 0x18) != *(long *)(lVar11 + 0x18)) {
          CowData<int>::_ref((CowData<int> *)(lVar20 + 0x18),(CowData *)(lVar11 + 0x18));
        }
        if (*(long *)(lVar20 + 0x28) != *(long *)(lVar11 + 0x28)) {
          CowData<int>::_ref((CowData<int> *)(lVar20 + 0x28),(CowData *)(lVar11 + 0x28));
        }
        if (*(long *)(lVar20 + 0x38) != *(long *)(lVar11 + 0x38)) {
          CowData<int>::_ref((CowData<int> *)(lVar20 + 0x38),(CowData *)(lVar11 + 0x38));
        }
        uVar12 = uVar12 + 1;
        *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
      } while ((uint)uVar12 < *(uint *)pauVar1[3]);
    }
    *(undefined8 *)*pauVar1 = 0;
    puVar3 = *(undefined8 **)(this + (ulong)param_3 * 8 + 0x1e0);
    *(undefined8 **)(*pauVar1 + 8) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = pauVar1;
    }
    *(undefined1 (**) [16])(this + (ulong)param_3 * 8 + 0x1e0) = pauVar1;
    uVar13 = RenderingDevice::get_singleton();
    RenderingDevice::framebuffer_set_invalidation_callback
              (uVar13,lVar10,_framebuffer_invalidation_callback,pauVar1);
    *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
  }
  return lVar10;
}



/* FramebufferCacheRD::get_cache_multipass(Vector<RID> const&,
   Vector<RenderingDevice::FramebufferPass> const&, unsigned int) */

undefined8 __thiscall
FramebufferCacheRD::get_cache_multipass
          (FramebufferCacheRD *this,Vector *param_1,Vector *param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  bool bVar25;
  uint local_50;
  uint local_48;
  
  uVar10 = (param_3 * 0x16a88000 | param_3 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
  puVar5 = *(undefined8 **)(param_1 + 8);
  uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
  if (puVar5 == (undefined8 *)0x0) {
    uVar16 = 0;
    uVar17 = 0;
    uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x13) * 5 + 0xe6546b64;
  }
  else {
    uVar16 = puVar5[-1];
    uVar17 = uVar16 & 0xffffffff;
    uVar10 = ((int)uVar16 * 0x16a88000 | (uint)((int)uVar16 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
             uVar10;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    if (0 < (long)uVar16) {
      puVar21 = puVar5;
      do {
        uVar13 = *puVar21;
        puVar21 = puVar21 + 1;
        iVar11 = (int)uVar13;
        iVar12 = (int)((ulong)uVar13 >> 0x20);
        uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
        uVar10 = (iVar12 * 0x16a88000 | (uint)(iVar12 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                 (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
        uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
      } while (puVar5 + uVar16 != puVar21);
    }
  }
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 == 0) {
    local_50 = 0;
    lVar23 = 0;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
  }
  else {
    lVar23 = *(long *)(lVar6 + -8);
    local_50 = (uint)lVar23;
    uVar10 = (local_50 * 0x16a88000 | local_50 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar10;
    uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
    if (0 < lVar23) {
      puVar21 = (undefined8 *)(lVar6 + 8);
      puVar1 = puVar21 + lVar23 * 9;
      do {
        piVar24 = (int *)*puVar21;
        uVar10 = (*(int *)(puVar21 + 7) * 0x16a88000 |
                 (uint)(*(int *)(puVar21 + 7) * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar10;
        uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64 ^
                 (*(int *)((long)puVar21 + 0x3c) * 0x16a88000 |
                 (uint)(*(int *)((long)puVar21 + 0x3c) * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
        if (piVar24 == (int *)0x0) {
          piVar24 = (int *)puVar21[4];
          uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (piVar24 != (int *)0x0) goto LAB_0010325d;
LAB_001034aa:
          piVar24 = (int *)puVar21[6];
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (piVar24 != (int *)0x0) goto LAB_001032c5;
LAB_001034c1:
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
        }
        else {
          lVar7 = *(long *)(piVar24 + -2);
          uVar10 = ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) * 0x1b873593
                   ^ uVar10;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (0 < lVar7) {
            piVar2 = piVar24 + lVar7;
            do {
              iVar11 = *piVar24;
              piVar24 = piVar24 + 1;
              uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
            } while (piVar2 != piVar24);
          }
          piVar24 = (int *)puVar21[4];
          if (piVar24 == (int *)0x0) goto LAB_001034aa;
LAB_0010325d:
          lVar7 = *(long *)(piVar24 + -2);
          uVar10 = uVar10 ^ ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (0 < lVar7) {
            piVar2 = piVar24 + lVar7;
            do {
              iVar11 = *piVar24;
              piVar24 = piVar24 + 1;
              uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
            } while (piVar2 != piVar24);
          }
          piVar24 = (int *)puVar21[6];
          if (piVar24 == (int *)0x0) goto LAB_001034c1;
LAB_001032c5:
          lVar7 = *(long *)(piVar24 + -2);
          uVar10 = uVar10 ^ ((int)lVar7 * 0x16a88000 | (uint)((int)lVar7 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
          if (0 < lVar7) {
            piVar2 = piVar24 + lVar7;
            do {
              iVar11 = *piVar24;
              piVar24 = piVar24 + 1;
              uVar10 = (iVar11 * 0x16a88000 | (uint)(iVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar10;
              uVar10 = (uVar10 << 0xd | uVar10 >> 0x13) * 5 + 0xe6546b64;
            } while (piVar2 != piVar24);
          }
        }
        puVar21 = puVar21 + 9;
      } while (puVar1 != puVar21);
    }
  }
  uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar10 = uVar10 ^ uVar10 >> 0x10;
  lVar7 = *(long *)(this + (ulong)(uVar10 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar7 == 0) {
      uVar13 = _allocate_from_data(this,param_3,uVar10,uVar10 % 0x3ffd,param_1,param_2);
      return uVar13;
    }
    if ((*(uint *)(lVar7 + 0x10) == uVar10) && (*(uint *)(lVar7 + 0x40) == param_3)) {
      uVar3 = *(uint *)(lVar7 + 0x20);
      if ((uVar3 == (uint)uVar17) && (uVar4 = *(uint *)(lVar7 + 0x30), uVar4 == local_50)) {
        if ((long)uVar16 < 1) {
LAB_00103510:
          if (lVar23 < 1) {
LAB_00103707:
            return *(undefined8 *)(lVar7 + 0x18);
          }
          uVar3 = uVar4;
          if (uVar4 == 0) {
            uVar17 = 0;
LAB_0010344b:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xae,uVar17,(ulong)uVar3,
                       "p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          plVar20 = (long *)(lVar6 + 8);
          local_48 = 0;
          plVar18 = (long *)(*(long *)(lVar7 + 0x38) + 8);
          while (((int)plVar20[7] == (int)plVar18[7] &&
                 (*(int *)((long)plVar20 + 0x3c) == *(int *)((long)plVar18 + 0x3c)))) {
            lVar8 = *plVar20;
            lVar19 = *plVar18;
            if (lVar8 == 0) {
              if (lVar19 != 0) {
                lVar15 = *(long *)(lVar19 + -8);
                goto joined_r0x001036ef;
              }
            }
            else {
              lVar15 = *(long *)(lVar8 + -8);
              if (lVar19 == 0) {
joined_r0x001036ef:
                if (lVar15 != 0) break;
              }
              else {
                if (lVar15 != *(long *)(lVar19 + -8)) break;
                if (0 < lVar15) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(lVar8 + lVar14 * 4) != *(int *)(lVar19 + lVar14 * 4))
                    goto LAB_001033a0;
                    lVar14 = lVar14 + 1;
                  } while (lVar15 != lVar14);
                }
              }
            }
            lVar8 = plVar20[4];
            lVar19 = plVar18[4];
            if (lVar8 == 0) {
              if (lVar19 != 0) {
                lVar15 = *(long *)(lVar19 + -8);
                goto joined_r0x00103675;
              }
            }
            else {
              lVar15 = *(long *)(lVar8 + -8);
              if (lVar19 == 0) {
joined_r0x00103675:
                if (lVar15 != 0) break;
              }
              else {
                if (lVar15 != *(long *)(lVar19 + -8)) break;
                if (0 < lVar15) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(lVar8 + lVar14 * 4) != *(int *)(lVar19 + lVar14 * 4))
                    goto LAB_001033a0;
                    lVar14 = lVar14 + 1;
                  } while (lVar15 != lVar14);
                }
              }
            }
            lVar8 = plVar20[6];
            if (lVar8 == 0) {
              lVar19 = plVar18[6];
              if (lVar19 != 0) {
                lVar15 = 0;
                goto LAB_0010362a;
              }
            }
            else {
              lVar19 = plVar18[6];
              lVar15 = *(long *)(lVar8 + -8);
              if (lVar19 == 0) {
                if (lVar15 != 0) break;
              }
              else {
LAB_0010362a:
                if (*(long *)(lVar19 + -8) != lVar15) break;
                if (0 < lVar15) {
                  lVar14 = 0;
                  do {
                    if (*(int *)(lVar8 + lVar14 * 4) != *(int *)(lVar19 + lVar14 * 4))
                    goto LAB_001033a0;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 != lVar15);
                }
              }
            }
            local_48 = local_48 + 1;
            if (local_48 == (uint)lVar23) goto LAB_00103707;
            plVar20 = plVar20 + 9;
            plVar18 = plVar18 + 9;
            if (local_48 == uVar4) {
              uVar17 = (ulong)uVar4;
              goto LAB_0010344b;
            }
          }
        }
        else {
          if ((uint)uVar17 == 0) {
            uVar17 = 0;
            goto LAB_0010344b;
          }
          uVar22 = 1;
          while (puVar5[uVar22 - 1] == *(long *)(*(long *)(lVar7 + 0x28) + -8 + uVar22 * 8)) {
            if (uVar16 == uVar22) goto LAB_00103510;
            bVar25 = uVar17 == uVar22;
            uVar22 = uVar22 + 1;
            if (bVar25) goto LAB_0010344b;
          }
        }
      }
    }
LAB_001033a0:
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

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
LAB_00103a80:
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
  if (lVar7 == 0) goto LAB_00103a80;
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
LAB_001039ec:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00103981;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001039ec;
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
LAB_00103981:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::FramebufferPass>::_unref() */

void __thiscall
CowData<RenderingDevice::FramebufferPass>::_unref(CowData<RenderingDevice::FramebufferPass> *this)

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
          if (*(long *)(lVar6 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x38);
              *(undefined8 *)(lVar6 + 0x38) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x28) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x28) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          lVar6 = lVar6 + 0x48;
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



/* CowData<RenderingDevice::FramebufferPass>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::FramebufferPass>::_realloc
          (CowData<RenderingDevice::FramebufferPass> *this,long param_1)

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
/* Error CowData<RenderingDevice::FramebufferPass>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::FramebufferPass>::resize<false>
          (CowData<RenderingDevice::FramebufferPass> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
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
    lVar9 = 0;
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
    lVar9 = lVar7 * 0x48;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x48 == 0) {
LAB_00103fe0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x48 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar12 = uVar10 + 1;
  if (lVar12 == 0) goto LAB_00103fe0;
  uVar11 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar11) {
        if (lVar12 != lVar9) {
          uVar6 = _realloc(this,lVar12);
          if ((int)uVar6 != 0) {
            return uVar6;
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
      lVar7 = lVar7 + uVar11 * 0x48;
      if (*(long *)(lVar7 + 0x38) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x38) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x38);
          *(undefined8 *)(lVar7 + 0x38) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 0x28) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x28) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x28);
          *(undefined8 *)(lVar7 + 0x28) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x18) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar11 = uVar11 + 1;
    }
    goto LAB_00104036;
  }
  if (lVar12 == lVar9) {
LAB_00103f53:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00104036:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00103e1d;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar12);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00103f53;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  uVar6 = _LC34;
  puVar4 = puVar8 + lVar7 * 9;
  do {
    puVar4[1] = 0;
    puVar5 = puVar4 + 9;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar4[7] = 0;
    puVar4[8] = uVar6;
    puVar4 = puVar5;
  } while (puVar5 != puVar8 + param_1 * 9);
LAB_00103e1d:
  puVar8[-1] = param_1;
  return 0;
}



/* void call_get_argument_type_info<TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&,
   unsigned int>(int, PropertyInfo&) */

void call_get_argument_type_info<TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_68 = 0;
    Variant::get_type_name(&local_70,0x17);
LAB_00104199:
    local_58 = (char *)CONCAT44(local_58._4_4_,0x1c);
    local_40 = 0x1f;
    if (local_70 != 0) goto LAB_001040ff;
LAB_001041c7:
    local_38 = 0;
    local_50 = (undefined1  [16])0x0;
LAB_001041cf:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    if (param_1 == 1) {
      local_68 = 0;
      local_58 = "RDFramebufferPass";
      local_70 = 0;
      local_50._0_8_ = 0x11;
      String::parse_latin1((StrRange *)&local_70);
      goto LAB_00104199;
    }
    if (param_1 != 2) goto LAB_00104075;
    local_68 = 0;
    local_58 = "";
    local_70 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_50._8_8_;
    local_50 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (char *)CONCAT44(local_58._4_4_,2);
    local_40 = 0;
    if (local_70 == 0) goto LAB_001041c7;
LAB_001040ff:
    local_38 = 0;
    local_50 = (undefined1  [16])0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_001041cf;
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
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar7 = local_38;
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
        Memory::free_static((void *)(lVar7 + -0x10),false);
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
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_00104075:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
              (in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00104469;
  }
  local_70 = 0;
  local_68 = &_LC9;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x17;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00104577:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00104577;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00104469:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<RID, TypedArray<RID> const&, TypedArray<RDFramebufferPass> const&, unsigned
   int>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>::
~MethodBindTRS(MethodBindTRS<RID,TypedArray<RID>const&,TypedArray<RDFramebufferPass>const&,unsigned_int>
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


