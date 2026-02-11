
/* LightmapRaycasterEmbree::intersect(LightmapRaycaster::Ray&) */

bool __thiscall LightmapRaycasterEmbree::intersect(LightmapRaycasterEmbree *this,Ray *param_1)

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
  rtcIntersect1(*(undefined8 *)(this + 0x188),param_1,&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(int *)(param_1 + 0x48) != -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LightmapRaycasterEmbree::add_mesh(Vector<Vector3> const&, Vector<Vector3> const&, Vector<Vector2>
   const&, unsigned int) */

void __thiscall
LightmapRaycasterEmbree::add_mesh
          (LightmapRaycasterEmbree *this,Vector *param_1,Vector *param_2,Vector *param_3,
          uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  uVar2 = rtcNewGeometry(*(undefined8 *)(this + 0x180),0);
  rtcSetGeometryVertexAttributeCount(uVar2,2);
  if (*(long *)(param_1 + 8) == 0) {
    iVar1 = 0;
    lVar5 = *(long *)(param_3 + 8);
    if (lVar5 != 0) {
      lVar3 = 0;
      iVar1 = 0;
LAB_00100103:
      lVar5 = *(long *)(lVar5 + -8);
      goto LAB_00100107;
    }
    lVar5 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8);
    if (0x55555554 < iVar1 * -0x55555555 + 0x2aaaaaaaU) {
      uVar2 = 0x7d;
      pcVar6 = "Condition \"vertex_count % 3 != 0\" is true.";
      goto LAB_0010027a;
    }
    lVar3 = (long)iVar1;
    lVar5 = *(long *)(param_3 + 8);
    if (lVar5 != 0) goto LAB_00100103;
    lVar5 = 0;
LAB_00100107:
    if (lVar3 != lVar5) {
      uVar2 = 0x7e;
      pcVar6 = "Condition \"vertex_count != p_uv2s.size()\" is true.";
      goto LAB_0010027a;
    }
  }
  if ((*(long *)(param_2 + 8) == 0) || (lVar5 == *(long *)(*(long *)(param_2 + 8) + -8))) {
    lVar3 = (long)iVar1;
    pvVar4 = (void *)rtcSetNewGeometryBuffer(uVar2,1,0,0x9003,0xc,lVar3);
    memcpy(pvVar4,*(void **)(param_1 + 8),lVar3 * 0xc);
    pvVar4 = (void *)rtcSetNewGeometryBuffer(uVar2,2,0,0x9002,8,lVar3);
    memcpy(pvVar4,*(void **)(param_3 + 8),lVar3 * 8);
    lVar5 = rtcSetNewGeometryBuffer(uVar2,0,0,0x5003,0xc,(long)(iVar1 / 3));
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        *(int *)(lVar5 + lVar7 * 4) = (int)lVar7;
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
    }
    if (*(long *)(param_2 + 8) != 0) {
      pvVar4 = (void *)rtcSetNewGeometryBuffer(uVar2,2,1,0x9003,0xc,lVar3);
      memcpy(pvVar4,*(void **)(param_2 + 8),lVar3 * 0xc);
    }
    rtcCommitGeometry(uVar2);
    rtcSetGeometryIntersectFilterFunction(uVar2,filter_function);
    rtcSetGeometryUserData(uVar2,this);
    rtcAttachGeometryByID(*(undefined8 *)(this + 0x188),uVar2,param_4);
    rtcReleaseGeometry(uVar2);
    return;
  }
  uVar2 = 0x7f;
  pcVar6 = "Condition \"!p_normals.is_empty() && vertex_count != p_normals.size()\" is true.";
LAB_0010027a:
  _err_print_error("add_mesh","modules/raycast/lightmap_raycaster_embree.cpp",uVar2,pcVar6,0,0);
  return;
}



/* LightmapRaycasterEmbree::commit() */

void __thiscall LightmapRaycasterEmbree::commit(LightmapRaycasterEmbree *this)

{
  rtcCommitScene(*(undefined8 *)(this + 0x188));
  return;
}



/* LightmapRaycasterEmbree::set_mesh_filter(HashSet<int, HashMapHasherDefault,
   HashMapComparatorDefault<int> > const&) */

void __thiscall
LightmapRaycasterEmbree::set_mesh_filter(LightmapRaycasterEmbree *this,HashSet *param_1)

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
      uVar8 = rtcGetGeometry(*(undefined8 *)(this + 0x188));
      rtcDisableGeometry(uVar8);
      if (iVar1 <= iVar12 + 1) break;
      iVar12 = iVar12 + 1;
    }
  }
  rtcCommitScene(*(undefined8 *)(this + 0x188));
  if (param_1 != (HashSet *)(this + 0x1c0)) {
    pvVar3 = *(void **)(this + 0x1c0);
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(this + 0x1e4) != 0) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) != 0) {
          memset(*(void **)(this + 0x1d8),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) * 4);
        }
        *(undefined4 *)(this + 0x1e4) = 0;
      }
      Memory::free_static(pvVar3,false);
      Memory::free_static(*(void **)(this + 0x1d0),false);
      Memory::free_static(*(void **)(this + 0x1c8),false);
      Memory::free_static(*(void **)(this + 0x1d8),false);
      *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
    }
    uVar13 = *(ulong *)(param_1 + 0x20);
    *(ulong *)(this + 0x1e0) = uVar13;
    if ((int)(uVar13 >> 0x20) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (uVar13 & 0xffffffff) * 4);
      uVar13 = (ulong)uVar2 << 2;
      uVar8 = Memory::alloc_static(uVar13,false);
      *(undefined8 *)(this + 0x1d8) = uVar8;
      uVar8 = Memory::alloc_static(uVar13,false);
      *(undefined8 *)(this + 0x1c0) = uVar8;
      uVar8 = Memory::alloc_static(uVar13,false);
      *(undefined8 *)(this + 0x1d0) = uVar8;
      lVar9 = Memory::alloc_static(uVar13,false);
      *(long *)(this + 0x1c8) = lVar9;
      if (*(int *)(this + 0x1e4) != 0) {
        lVar4 = *(long *)(this + 0x1c0);
        lVar5 = *(long *)param_1;
        lVar10 = 0;
        lVar6 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(this + 0x1d0);
        do {
          *(undefined4 *)(lVar4 + lVar10 * 4) = *(undefined4 *)(lVar5 + lVar10 * 4);
          *(undefined4 *)(lVar7 + lVar10 * 4) = *(undefined4 *)(lVar6 + lVar10 * 4);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < *(uint *)(this + 0x1e4));
      }
      if (uVar2 != 0) {
        lVar4 = *(long *)(param_1 + 0x18);
        lVar5 = *(long *)(this + 0x1d8);
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



/* LightmapRaycasterEmbree::clear_mesh_filter() */

void __thiscall LightmapRaycasterEmbree::clear_mesh_filter(LightmapRaycasterEmbree *this)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x1e4);
  if (iVar1 != 0) {
    iVar3 = 0;
    while( true ) {
      uVar2 = rtcGetGeometry(*(undefined8 *)(this + 0x188));
      rtcEnableGeometry(uVar2);
      if (iVar1 <= iVar3 + 1) break;
      iVar3 = iVar3 + 1;
    }
  }
  rtcCommitScene(*(undefined8 *)(this + 0x188));
  if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) != 0) {
      memset(*(void **)(this + 0x1d8),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) * 4);
    }
    *(undefined4 *)(this + 0x1e4) = 0;
  }
  return;
}



/* LightmapRaycasterEmbree::intersect(Vector<LightmapRaycaster::Ray>&) */

void __thiscall LightmapRaycasterEmbree::intersect(LightmapRaycasterEmbree *this,Vector *param_1)

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
  if (*(long *)(param_1 + 8) == 0) goto LAB_001006c0;
  if (*(ulong *)(*(long *)(param_1 + 8) + -0x10) < 2) {
LAB_00100621:
    __dest = *(undefined8 **)(param_1 + 8);
    if (__dest == (undefined8 *)0x0) goto LAB_001006c0;
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
      goto LAB_00100621;
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
      rtcIntersect1(*(undefined8 *)(this + 0x188),puVar3,&local_68);
    }
    else {
      (**(code **)(*(long *)this + 0x150))(this,puVar3);
    }
    __dest = *(undefined8 **)(param_1 + 8);
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 10;
  } while (__dest != (undefined8 *)0x0);
LAB_001006c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* LightmapRaycasterEmbree::~LightmapRaycasterEmbree() */

void __thiscall LightmapRaycasterEmbree::~LightmapRaycasterEmbree(LightmapRaycasterEmbree *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00104188;
  if (*(long *)(this + 0x188) != 0) {
    rtcReleaseScene();
  }
  if (*(long *)(this + 0x180) != 0) {
    rtcReleaseDevice();
  }
  pvVar5 = *(void **)(this + 0x1c0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) != 0) {
        memset(*(void **)(this + 0x1d8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4) << 2);
      }
      *(undefined4 *)(this + 0x1e4) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
    Memory::free_static(*(void **)(this + 0x1d8),false);
  }
  pvVar5 = *(void **)(this + 0x198);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1a0) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x198);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001009db;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1a0),false);
  }
LAB_001009db:
  *(undefined ***)this = &PTR__initialize_classv_00104028;
  Object::~Object((Object *)this);
  return;
}



/* LightmapRaycasterEmbree::~LightmapRaycasterEmbree() */

void __thiscall LightmapRaycasterEmbree::~LightmapRaycasterEmbree(LightmapRaycasterEmbree *this)

{
  ~LightmapRaycasterEmbree(this);
  operator_delete(this,0x1e8);
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



/* embree_lm_error_handler(void*, RTCError, char const*) */

void embree_lm_error_handler(undefined8 param_1,undefined8 param_2,char *param_3)

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



/* LightmapRaycasterEmbree::make_default_raycaster() */

void LightmapRaycasterEmbree::make_default_raycaster(void)

{
  LightmapRaycaster::create_function = create_embree_raycaster;
  return;
}



/* blerp(float, float, float, float, float, float) */

float blerp(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  
  fVar1 = (param_2 - param_1) * param_5 + param_1;
  return ((param_3 + (param_4 - param_3) * param_5) - fVar1) * param_6 + fVar1;
}



/* LightmapRaycasterEmbree::AlphaTextureData::sample(float, float) const */

int __thiscall
LightmapRaycasterEmbree::AlphaTextureData::sample
          (AlphaTextureData *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  byte local_14 [4];
  long local_10;
  
  iVar2 = *(int *)(this + 0x10);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 8);
  lVar5 = 0;
  iVar1 = *(int *)(this + 0x14) + -1;
  fVar12 = param_2 * (float)*(int *)(this + 0x14);
  iVar8 = (int)((float)iVar2 * param_1);
  iVar10 = (int)fVar12;
  while( true ) {
    iVar6 = ((int)(uint)lVar5 >> 1) + iVar10;
    iVar4 = ((uint)lVar5 & 1) + iVar8;
    if (-1 < iVar4) break;
    if (-1 < iVar6) {
      iVar4 = 0;
LAB_00100c82:
      if (iVar1 <= iVar6) {
        iVar6 = iVar1;
      }
      iVar4 = iVar4 + iVar6 * iVar2;
      goto LAB_00100c8d;
    }
    lVar7 = 0;
    iVar4 = 0;
joined_r0x00100d63:
    if (lVar9 == 0) goto LAB_00100d69;
    if (*(long *)(lVar9 + -8) <= lVar7) {
LAB_00100d85:
      lVar9 = *(long *)(lVar9 + -8);
      goto LAB_00100d89;
    }
    local_14[lVar5] = *(byte *)(lVar9 + iVar4);
    lVar5 = lVar5 + 1;
    if (lVar5 == 4) {
      fVar11 = (float)iVar2 * param_1 - (float)iVar8;
      fVar13 = ((float)local_14[1] - (float)local_14[0]) * fVar11 + (float)local_14[0];
      fVar12 = roundf(((((float)local_14[3] - (float)local_14[2]) * fVar11 + (float)local_14[2]) -
                      fVar13) * (fVar12 - (float)iVar10) + fVar13);
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (int)fVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  if (iVar2 + -1 < iVar4) {
    iVar4 = iVar2 + -1;
  }
  if (-1 < iVar6) goto LAB_00100c82;
LAB_00100c8d:
  lVar7 = (long)iVar4;
  if (-1 < lVar7) goto joined_r0x00100d63;
  if (lVar9 != 0) goto LAB_00100d85;
LAB_00100d69:
  lVar9 = 0;
LAB_00100d89:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* LightmapRaycasterEmbree::LightmapRaycasterEmbree() */

void __thiscall LightmapRaycasterEmbree::LightmapRaycasterEmbree(LightmapRaycasterEmbree *this)

{
  undefined8 uVar1;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00104188;
  uVar1 = _LC20;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1b8) = uVar1;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  MXCSR = MXCSR | 0x8040;
  uVar1 = rtcNewDevice(0);
  *(undefined8 *)(this + 0x180) = uVar1;
  rtcSetDeviceErrorFunction(uVar1,embree_lm_error_handler,0);
  uVar1 = rtcNewScene(*(undefined8 *)(this + 0x180));
  *(undefined8 *)(this + 0x188) = uVar1;
  return;
}



/* LightmapRaycasterEmbree::create_embree_raycaster() */

LightmapRaycasterEmbree * LightmapRaycasterEmbree::create_embree_raycaster(void)

{
  LightmapRaycasterEmbree *this;
  
  this = (LightmapRaycasterEmbree *)operator_new(0x1e8,"");
  LightmapRaycasterEmbree(this);
  postinitialize_handler((Object *)this);
  return this;
}



/* LightmapRaycasterEmbree::filter_function(RTCFilterFunctionNArguments const*) */

void LightmapRaycasterEmbree::filter_function(RTCFilterFunctionNArguments *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  AlphaTextureData *this;
  int iVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0xc);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = uVar1;
  uVar16 = rtcGetGeometry(*(undefined8 *)(lVar3 + 0x188),uVar1);
  local_90 = *(undefined4 *)(lVar2 + 0x14);
  local_8c = *(undefined8 *)(lVar2 + 0xc);
  local_78 = lVar2 + 0xc;
  local_84 = 2;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 2;
  local_98 = uVar16;
  rtcInterpolate(&local_98);
  if ((*(long *)(lVar3 + 0x198) != 0) && (*(int *)(lVar3 + 0x1bc) != 0)) {
    uVar5 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar3 + 0x1b8) * 8);
    uVar15 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
    uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
    uVar20 = uVar15 ^ uVar15 >> 0x10;
    if (uVar15 == uVar15 >> 0x10) {
      uVar20 = 1;
      uVar18 = uVar5;
    }
    else {
      uVar18 = uVar20 * uVar5;
    }
    uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0x1b8) * 4));
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar21;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar18;
    lVar19 = SUB168(auVar6 * auVar10,8);
    uVar15 = *(uint *)(*(long *)(lVar3 + 0x1a0) + lVar19 * 4);
    iVar17 = SUB164(auVar6 * auVar10,8);
    if (uVar15 != 0) {
      uVar22 = 0;
      while ((uVar20 != uVar15 ||
             (uVar1 != *(uint *)(*(long *)(*(long *)(lVar3 + 0x198) + lVar19 * 8) + 0x10)))) {
        uVar22 = uVar22 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (iVar17 + 1) * uVar5;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21;
        lVar19 = SUB168(auVar7 * auVar11,8);
        uVar15 = *(uint *)(*(long *)(lVar3 + 0x1a0) + lVar19 * 4);
        iVar17 = SUB164(auVar7 * auVar11,8);
        if ((uVar15 == 0) ||
           (auVar8._8_8_ = 0, auVar8._0_8_ = uVar15 * uVar5, auVar12._8_8_ = 0,
           auVar12._0_8_ = uVar21, auVar9._8_8_ = 0,
           auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar3 + 0x1b8) * 4)
                           + iVar17) - SUB164(auVar8 * auVar12,8)) * uVar5, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar21, SUB164(auVar9 * auVar13,8) < uVar22)) goto LAB_001010c0;
      }
      this = (AlphaTextureData *)
             HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
             ::operator[]((HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
                           *)(lVar3 + 400),&local_9c);
      cVar14 = AlphaTextureData::sample(this,*(float *)(lVar2 + 0xc),*(float *)(lVar2 + 0x10));
      if (-1 < cVar14) {
        **(undefined4 **)param_1 = 0;
        goto LAB_00101134;
      }
    }
  }
LAB_001010c0:
  local_90 = *(undefined4 *)(lVar2 + 0x14);
  local_70 = 0;
  local_68 = 0;
  local_84 = _LC26;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 3;
  local_98 = uVar16;
  local_8c = uVar4;
  local_78 = lVar2;
  rtcInterpolate(&local_98);
LAB_00101134:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LightmapRaycasterEmbree::set_mesh_alpha_texture(Ref<Image>, unsigned int) */

void __thiscall
LightmapRaycasterEmbree::set_mesh_alpha_texture
          (LightmapRaycasterEmbree *this,long *param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined4 local_6c;
  uint local_68 [2];
  long local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = param_3;
  if (*param_2 != 0) {
    local_48 = 0;
    local_50 = Image::get_size();
    cVar2 = Vector2i::operator!=((Vector2i *)&local_50,(Vector2i *)&local_48);
    if (cVar2 != '\0') {
      local_40 = 0;
      local_38 = Image::get_size();
      Image::get_data();
      if (local_60 == 0) {
        HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
        ::insert(local_68,(AlphaTextureData *)(this + 400),SUB81(&local_6c,0));
      }
      else {
        local_40 = local_60;
        HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
        ::insert(local_68,(AlphaTextureData *)(this + 400),SUB81(&local_6c,0));
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_40 + -0x10),false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* LightmapRaycasterEmbree::is_class_ptr(void*) const */

uint __thiscall LightmapRaycasterEmbree::is_class_ptr(LightmapRaycasterEmbree *this,void *param_1)

{
  return (uint)CONCAT71(0x1043,(undefined4 *)param_1 ==
                               &LightmapRaycaster::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1043,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* LightmapRaycasterEmbree::_getv(StringName const&, Variant&) const */

undefined8 LightmapRaycasterEmbree::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LightmapRaycasterEmbree::_setv(StringName const&, Variant const&) */

undefined8 LightmapRaycasterEmbree::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LightmapRaycasterEmbree::_validate_propertyv(PropertyInfo&) const */

void LightmapRaycasterEmbree::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* LightmapRaycasterEmbree::_property_can_revertv(StringName const&) const */

undefined8 LightmapRaycasterEmbree::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* LightmapRaycasterEmbree::_property_get_revertv(StringName const&, Variant&) const */

undefined8 LightmapRaycasterEmbree::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LightmapRaycasterEmbree::_notificationv(int, bool) */

void LightmapRaycasterEmbree::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104028;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104028;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00101623:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101623;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010168e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010168e:
  return &_get_class_namev()::_class_name_static;
}



/* LightmapRaycasterEmbree::_get_class_namev() const */

undefined8 * LightmapRaycasterEmbree::_get_class_namev(void)

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
LAB_00101713:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101713;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"LightmapRaycasterEmbree");
      goto LAB_0010177e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"LightmapRaycasterEmbree");
LAB_0010177e:
  return &_get_class_namev()::_class_name_static;
}



/* LightmapRaycasterEmbree::intersect(Vector<LightmapRaycaster::Ray>&) [clone .cold] */

void LightmapRaycasterEmbree::intersect(Vector *param_1)

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



/* LightmapRaycasterEmbree::get_class() const */

void LightmapRaycasterEmbree::get_class(void)

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
            if (lVar5 == 0) goto LAB_001019df;
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
LAB_001019df:
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
    if (cVar6 != '\0') goto LAB_00101a93;
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
              if (lVar5 == 0) goto LAB_00101b43;
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
LAB_00101b43:
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
      if (cVar6 != '\0') goto LAB_00101a93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101a93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LightmapRaycasterEmbree::is_class(String const&) const */

undefined8 __thiscall
LightmapRaycasterEmbree::is_class(LightmapRaycasterEmbree *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00101c7f;
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
LAB_00101c7f:
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
    if (cVar6 != '\0') goto LAB_00101d33;
  }
  cVar6 = String::operator==(param_1,"LightmapRaycasterEmbree");
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
              if (lVar5 == 0) goto LAB_00101df3;
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
LAB_00101df3:
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
      if (cVar6 != '\0') goto LAB_00101d33;
    }
    cVar6 = String::operator==(param_1,"LightmapRaycaster");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00101e9c;
    }
  }
LAB_00101d33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00101e9c:
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
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001021d6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001021d6:
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



/* LightmapRaycasterEmbree::_initialize_classv() */

void LightmapRaycasterEmbree::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_0010269a;
  if (LightmapRaycaster::initialize_class()::initialized == '\0') {
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
    local_48 = "LightmapRaycaster";
    local_60 = 0;
    local_40 = 0x11;
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
        LightmapRaycaster::initialize_class()::initialized = '\x01';
        goto LAB_0010259b;
      }
    }
    LightmapRaycaster::initialize_class()::initialized = '\x01';
  }
LAB_0010259b:
  local_48 = "LightmapRaycaster";
  local_58 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "LightmapRaycasterEmbree";
  local_60 = 0;
  local_40 = 0x17;
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
LAB_0010269a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LightmapRaycaster::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
LightmapRaycaster::_get_property_listv(LightmapRaycaster *this,List *param_1,bool param_2)

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
  local_78 = "LightmapRaycaster";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LightmapRaycaster";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_001029c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001029c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001029e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001029e5:
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
  StringName::StringName((StringName *)&local_78,"LightmapRaycaster",false);
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



/* LightmapRaycasterEmbree::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
LightmapRaycasterEmbree::_get_property_listv
          (LightmapRaycasterEmbree *this,List *param_1,bool param_2)

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
    LightmapRaycaster::_get_property_listv((LightmapRaycaster *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "LightmapRaycasterEmbree";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LightmapRaycasterEmbree";
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
LAB_00102e18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102e18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102e35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102e35:
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
  StringName::StringName((StringName *)&local_78,"LightmapRaycasterEmbree",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      LightmapRaycaster::_get_property_listv((LightmapRaycaster *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<unsigned int, LightmapRaycasterEmbree::AlphaTextureData, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   LightmapRaycasterEmbree::AlphaTextureData> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
::_resize_and_rehash
          (HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, LightmapRaycasterEmbree::AlphaTextureData, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   LightmapRaycasterEmbree::AlphaTextureData> > >::operator[](unsigned int const&) */

undefined1 * __thiscall
HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
::operator[](HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
             *this,uint *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  undefined8 uVar34;
  void *__s_00;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  undefined1 (*pauVar46) [16];
  long in_FS_OFFSET;
  uint local_c8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_50;
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  uVar32 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  uVar31 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar42 = CONCAT44(0,uVar31);
  if (__s_00 == (void *)0x0) {
    local_90 = 0;
    uVar39 = uVar42 * 4;
    uVar2 = uVar42 * 8;
    local_88 = 0;
    uVar34 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar31 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar42 != uVar39);
        uVar32 = *param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar2);
        uVar32 = *param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
LAB_001038e7:
      if (iVar40 == 0) goto LAB_00103835;
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar45 = *(long *)(this + 0x10);
      goto LAB_00103566;
    }
    uVar32 = *param_1;
    iVar40 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_001038e7;
  }
  else {
    iVar40 = *(int *)(this + 0x2c);
    if (iVar40 == 0) {
      local_90 = 0;
      local_88 = 0;
LAB_00103835:
      iVar40 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar30 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar43 = 1;
        uVar36 = uVar2;
      }
      else {
        uVar36 = uVar43 * uVar2;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar42;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar36;
      lVar37 = SUB168(auVar5 * auVar17,8);
      lVar45 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar5 * auVar17,8);
      uVar30 = *(uint *)(lVar45 + lVar37 * 4);
      if (uVar30 != 0) {
        uVar41 = 0;
        do {
          if ((uVar43 == uVar30) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10))) {
            pauVar33 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar44 * 8);
            goto LAB_00103523;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar44 + 1) * uVar2;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar37 = SUB168(auVar6 * auVar18,8);
          uVar30 = *(uint *)(lVar45 + lVar37 * 4);
          uVar44 = SUB164(auVar6 * auVar18,8);
        } while ((uVar30 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar30 * uVar2, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar44 + uVar31) - SUB164(auVar7 * auVar19,8)) * uVar2,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
      local_90 = 0;
      local_88 = 0;
LAB_00103566:
      uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar31 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar30 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar30 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar30 * uVar2;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar36;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar35;
      lVar37 = SUB168(auVar9 * auVar21,8);
      uVar31 = *(uint *)(lVar45 + lVar37 * 4);
      uVar43 = SUB164(auVar9 * auVar21,8);
      if (uVar31 != 0) {
        uVar44 = 0;
        do {
          if ((uVar31 == uVar30) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10) == uVar32)) {
            lVar45 = *(long *)((long)__s_00 + (ulong)uVar43 * 8);
            if (*(long *)(lVar45 + 0x20) != 0) {
              CowData<unsigned_char>::_ref
                        ((CowData<unsigned_char> *)(lVar45 + 0x20),(CowData *)&local_90);
            }
            *(undefined8 *)(lVar45 + 0x28) = local_88;
            pauVar33 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar43 * 8);
            goto LAB_00103523;
          }
          uVar44 = uVar44 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar43 + 1) * uVar2;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar36;
          lVar37 = SUB168(auVar10 * auVar22,8);
          uVar31 = *(uint *)(lVar45 + lVar37 * 4);
          uVar43 = SUB164(auVar10 * auVar22,8);
        } while ((uVar31 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar36, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar43) -
                     SUB164(auVar11 * auVar23,8)) * uVar2, auVar24._8_8_ = 0, auVar24._0_8_ = uVar36
                , uVar44 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar42 * __LC21 < (float)(iVar40 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar33 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103523;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar32 = *param_1;
  local_50 = local_88;
  pauVar33 = (undefined1 (*) [16])operator_new(0x30,"");
  *(undefined8 *)pauVar33[2] = 0;
  *(uint *)pauVar33[1] = uVar32;
  *pauVar33 = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar33[2] + 8) = local_50;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar33;
  }
  else {
    *puVar3 = pauVar33;
    *(undefined8 **)(*pauVar33 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar33;
  uVar32 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar31 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
  uVar32 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar39 = 1;
    uVar32 = 1;
  }
  else {
    uVar39 = (ulong)uVar32;
  }
  uVar43 = 0;
  lVar45 = *(long *)(this + 0x10);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar31);
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar39 * lVar37;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar42;
  lVar38 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar38 * 4);
  iVar40 = SUB164(auVar13 * auVar25,8);
  uVar30 = *puVar1;
  pauVar29 = pauVar33;
  while (uVar30 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar30 * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar42;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((iVar40 + uVar31) - SUB164(auVar14 * auVar26,8)) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar42;
    local_c8 = SUB164(auVar15 * auVar27,8);
    pauVar46 = pauVar29;
    if (local_c8 < uVar43) {
      *puVar1 = uVar32;
      puVar3 = (undefined8 *)(lVar4 + lVar38 * 8);
      pauVar46 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar29;
      uVar32 = uVar30;
      uVar43 = local_c8;
    }
    uVar43 = uVar43 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar40 + 1) * lVar37;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar42;
    lVar38 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar45 + lVar38 * 4);
    iVar40 = SUB164(auVar16 * auVar28,8);
    pauVar29 = pauVar46;
    uVar30 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar4 + lVar38 * 8) = pauVar29;
  *puVar1 = uVar32;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00103523:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar33[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, LightmapRaycasterEmbree::AlphaTextureData, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   LightmapRaycasterEmbree::AlphaTextureData> > >::insert(unsigned int const&,
   LightmapRaycasterEmbree::AlphaTextureData const&, bool) */

uint * HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
       ::insert(uint *param_1,AlphaTextureData *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  void *__s_00;
  long in_RCX;
  int iVar25;
  undefined7 in_register_00000011;
  uint *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  char in_R8B;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 (*pauVar35) [16];
  long in_FS_OFFSET;
  uint local_b8;
  undefined1 (*pauStack_90) [16];
  long local_58;
  undefined8 local_50;
  long local_40;
  
  puVar26 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar27 = (ulong)uVar22;
    uVar30 = uVar27 * 4;
    uVar32 = uVar27 * 8;
    uVar24 = Memory::alloc_static(uVar30,false);
    *(undefined8 *)(param_2 + 0x10) = uVar24;
    __s_00 = (void *)Memory::alloc_static(uVar32,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar32)) && (__s_00 < (void *)((long)__s + uVar30))) {
        uVar30 = 0;
        do {
          *(undefined4 *)((long)__s + uVar30 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar30 * 8) = 0;
          uVar30 = uVar30 + 1;
        } while (uVar27 != uVar30);
        goto LAB_00103a2a;
      }
      memset(__s,0,uVar30);
      memset(__s_00,0,uVar32);
      iVar25 = *(int *)(param_2 + 0x2c);
      local_b8 = *puVar26;
      goto LAB_00103a38;
    }
    iVar25 = *(int *)(param_2 + 0x2c);
    local_b8 = *puVar26;
    if (__s_00 != (void *)0x0) goto LAB_00103a38;
  }
  else {
LAB_00103a2a:
    iVar25 = *(int *)(param_2 + 0x2c);
    local_b8 = *puVar26;
LAB_00103a38:
    if (iVar25 != 0) {
      uVar32 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      uVar30 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar21 = (local_b8 >> 0x10 ^ local_b8) * -0x7a143595;
      uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
        uVar34 = 1;
        uVar27 = uVar30;
      }
      else {
        uVar27 = uVar34 * uVar30;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar32;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar27;
      lVar28 = SUB168(auVar4 * auVar12,8);
      uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar28 * 4);
      uVar31 = SUB164(auVar4 * auVar12,8);
      if (uVar21 != 0) {
        uVar33 = 0;
        do {
          if ((uVar21 == uVar34) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar28 * 8) + 0x10) == local_b8)) {
            lVar28 = *(long *)((long)__s_00 + (ulong)uVar31 * 8);
            if (*(long *)(lVar28 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<unsigned_char>::_ref
                        ((CowData<unsigned_char> *)(lVar28 + 0x20),(CowData *)(in_RCX + 8));
            }
            *(undefined8 *)(lVar28 + 0x28) = *(undefined8 *)(in_RCX + 0x10);
            pauStack_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar31 * 8);
            goto LAB_00103d86;
          }
          uVar33 = uVar33 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar31 + 1) * uVar30;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar32;
          lVar28 = SUB168(auVar5 * auVar13,8);
          uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar28 * 4);
          uVar31 = SUB164(auVar5 * auVar13,8);
        } while ((uVar21 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar21 * uVar30, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar32, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar31) -
                               SUB164(auVar6 * auVar14,8)) * uVar30, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, uVar33 <= SUB164(auVar7 * auVar15,8)));
      }
    }
  }
  if ((float)uVar22 * __LC21 < (float)(iVar25 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      pauStack_90 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103d86;
    }
    _resize_and_rehash((HashMap<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,LightmapRaycasterEmbree::AlphaTextureData>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_58 = 0;
  uVar22 = *puVar26;
  if (*(long *)(in_RCX + 8) == 0) {
    local_50 = *(undefined8 *)(in_RCX + 0x10);
    pauStack_90 = (undefined1 (*) [16])operator_new(0x30,"");
    *(uint *)pauStack_90[1] = uVar22;
    *(undefined8 *)pauStack_90[2] = 0;
    *pauStack_90 = (undefined1  [16])0x0;
LAB_00103e45:
    *(undefined8 *)(pauStack_90[2] + 8) = local_50;
LAB_00103c57:
    puVar23 = *(undefined8 **)(param_2 + 0x20);
    if (puVar23 != (undefined8 *)0x0) goto LAB_00103c64;
LAB_00103df5:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
  }
  else {
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_58,(CowData *)(in_RCX + 8));
    lVar28 = local_58;
    local_50 = *(undefined8 *)(in_RCX + 0x10);
    pauStack_90 = (undefined1 (*) [16])operator_new(0x30,"");
    *(uint *)pauStack_90[1] = uVar22;
    *(undefined8 *)pauStack_90[2] = 0;
    *(undefined8 *)*pauStack_90 = 0;
    *(undefined8 *)(*pauStack_90 + 8) = 0;
    if (lVar28 == 0) goto LAB_00103e45;
    CowData<unsigned_char>::_ref((CowData<unsigned_char> *)(pauStack_90 + 2),(CowData *)&local_58);
    *(undefined8 *)(pauStack_90[2] + 8) = local_50;
    LOCK();
    plVar1 = (long *)(lVar28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00103c57;
    Memory::free_static((void *)(local_58 + -0x10),false);
    puVar23 = *(undefined8 **)(param_2 + 0x20);
    if (puVar23 == (undefined8 *)0x0) goto LAB_00103df5;
LAB_00103c64:
    if (in_R8B == '\0') {
      *puVar23 = pauStack_90;
      *(undefined8 **)(*pauStack_90 + 8) = puVar23;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_90;
    }
    else {
      lVar28 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar28 + 8) = pauStack_90;
      *(long *)*pauStack_90 = lVar28;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_90;
    }
  }
  uVar22 = (*puVar26 >> 0x10 ^ *puVar26) * -0x7a143595;
  uVar21 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
  uVar22 = uVar21 ^ uVar21 >> 0x10;
  if (uVar21 == uVar21 >> 0x10) {
    uVar30 = 1;
    uVar22 = 1;
  }
  else {
    uVar30 = (ulong)uVar22;
  }
  lVar28 = *(long *)(param_2 + 0x10);
  uVar31 = 0;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar21);
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar30 * lVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar32;
  lVar29 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar26 = (uint *)(lVar28 + lVar29 * 4);
  iVar25 = SUB164(auVar8 * auVar16,8);
  uVar34 = *puVar26;
  pauVar20 = pauStack_90;
  while (uVar34 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar34 * lVar2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar32;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((iVar25 + uVar21) - SUB164(auVar9 * auVar17,8)) * lVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    uVar33 = SUB164(auVar10 * auVar18,8);
    pauVar35 = pauVar20;
    if (uVar33 < uVar31) {
      *puVar26 = uVar22;
      puVar23 = (undefined8 *)(lVar3 + lVar29 * 8);
      pauVar35 = (undefined1 (*) [16])*puVar23;
      *puVar23 = pauVar20;
      uVar22 = uVar34;
      uVar31 = uVar33;
    }
    uVar31 = uVar31 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar25 + 1) * lVar2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    lVar29 = SUB168(auVar11 * auVar19,8);
    puVar26 = (uint *)(lVar28 + lVar29 * 4);
    iVar25 = SUB164(auVar11 * auVar19,8);
    pauVar20 = pauVar35;
    uVar34 = *puVar26;
  }
  *(undefined1 (**) [16])(lVar3 + lVar29 * 8) = pauVar20;
  *puVar26 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00103d86:
  *(undefined1 (**) [16])param_1 = pauStack_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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


