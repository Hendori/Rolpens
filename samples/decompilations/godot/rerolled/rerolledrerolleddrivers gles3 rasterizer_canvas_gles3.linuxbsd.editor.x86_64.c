/* RasterizerCanvasGLES3::update() */

void RasterizerCanvasGLES3::update(void)

{
  return;
}



/* RasterizerCanvasGLES3::light_set_use_shadow(RID, bool) */

void __thiscall
RasterizerCanvasGLES3::light_set_use_shadow
          (RasterizerCanvasGLES3 *this,ulong param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    lVar1 = *(long *)(*(long *)(this + 0x10) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
            ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x38;
    iVar2 = *(int *)(lVar1 + 0x30);
    if (iVar2 == (int)(param_2 >> 0x20)) {
      *(undefined1 *)(lVar1 + 8) = param_3;
      return;
    }
    if (iVar2 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("light_set_use_shadow","drivers/gles3/rasterizer_canvas_gles3.cpp",0x666,
                   "Parameter \"cl\" is null.",0,0);
  return;
}



/* RasterizerCanvasGLES3::occluder_polygon_set_cull_mode(RID,
   RenderingServer::CanvasOccluderPolygonCullMode) */

void __thiscall
RasterizerCanvasGLES3::occluder_polygon_set_cull_mode
          (RasterizerCanvasGLES3 *this,ulong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    puVar2 = (undefined4 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x30 +
             *(long *)(*(long *)(this + 0x68) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8));
    iVar1 = puVar2[0xb];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      *puVar2 = param_3;
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("occluder_polygon_set_cull_mode","drivers/gles3/rasterizer_canvas_gles3.cpp",
                   0x86e,"Parameter \"oc\" is null.",0,0);
  return;
}



/* RasterizerCanvasGLES3::light_set_texture(RID, RID) */

void __thiscall
RasterizerCanvasGLES3::light_set_texture(RasterizerCanvasGLES3 *this,ulong param_2,ulong param_3)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  ulong *puVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  size_t __n;
  
  lVar5 = GLES3::TextureStorage::get_singleton();
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x24))) {
    puVar2 = (ulong *)(*(long *)(*(long *)(this + 0x10) +
                                ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
                      ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x38);
    if ((int)puVar2[6] == (int)(param_2 >> 0x20)) {
      if (*puVar2 == param_3) {
        return;
      }
      if (param_3 == 0) {
        if (*puVar2 != 0) {
          GLES3::TextureStorage::texture_remove_from_texture_atlas(lVar5);
        }
        *puVar2 = 0;
        return;
      }
      __mutex = (pthread_mutex_t *)(lVar5 + 0x108);
      uVar4 = pthread_mutex_lock(__mutex);
      if (uVar4 != 0) {
        plVar9 = (long *)(ulong)uVar4;
        std::__throw_system_error(uVar4);
        if ((*plVar9 == 0) || (*(ulong *)(*plVar9 + -0x10) < 2)) {
          return;
        }
        if (*plVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar5 = *(long *)(*plVar9 + -8);
        uVar10 = 0x10;
        __n = lVar5 * 4;
        if (__n != 0) {
          uVar10 = __n - 1 | __n - 1 >> 1;
          uVar10 = uVar10 | uVar10 >> 2;
          uVar10 = uVar10 | uVar10 >> 4;
          uVar10 = uVar10 | uVar10 >> 8;
          uVar10 = uVar10 | uVar10 >> 0x10;
          uVar10 = (uVar10 | uVar10 >> 0x20) + 0x11;
        }
        puVar6 = (undefined8 *)Memory::alloc_static(uVar10,false);
        if (puVar6 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
          return;
        }
        *puVar6 = 1;
        puVar6[1] = lVar5;
        memcpy(puVar6 + 2,(void *)*plVar9,__n);
        if (*plVar9 != 0) {
          LOCK();
          plVar1 = (long *)(*plVar9 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *plVar9;
            *plVar9 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        *plVar9 = (long)(puVar6 + 2);
        return;
      }
      if ((((uint)param_3 < *(uint *)(lVar5 + 0xf4)) && (param_3 >> 0x20 != 0x7fffffff)) &&
         ((*(uint *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(lVar5 + 0xf0)) * 0xf0 +
                     *(long *)(*(long *)(lVar5 + 0xe0) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(lVar5 + 0xf0)) * 8) + 0xe8)
          & 0x7fffffff) == (uint)(param_3 >> 0x20))) {
        pthread_mutex_unlock(__mutex);
        if (*puVar2 != 0) {
          GLES3::TextureStorage::texture_remove_from_texture_atlas(lVar5,*puVar2);
        }
        *puVar2 = param_3;
        GLES3::TextureStorage::texture_add_to_texture_atlas(lVar5,param_3);
        return;
      }
      pthread_mutex_unlock(__mutex);
      uVar8 = 0x658;
      pcVar7 = 
      "Condition \"p_texture.is_valid() && !texture_storage->owns_texture(p_texture)\" is true.";
      goto LAB_00100252;
    }
    if ((int)puVar2[6] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar8 = 0x653;
  pcVar7 = "Parameter \"cl\" is null.";
LAB_00100252:
  _err_print_error("light_set_texture","drivers/gles3/rasterizer_canvas_gles3.cpp",uVar8,pcVar7,0,0)
  ;
  return;
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this)

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



/* CowData<unsigned int>::_ref(CowData<unsigned int> const&) [clone .part.0] */

void __thiscall CowData<unsigned_int>::_ref(CowData<unsigned_int> *this,CowData *param_1)

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



/* RasterizerCanvasGLES3::free(RID) */

undefined8 __thiscall RasterizerCanvasGLES3::free(RasterizerCanvasGLES3 *this,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_48 [8];
  long local_40;
  long local_30;
  
  uVar6 = (uint)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)(param_2 >> 0x20);
  if (uVar6 < *(uint *)(this + 0x24)) {
    if (param_2 >> 0x20 != 0x7fffffff) {
      lVar5 = *(long *)(*(long *)(this + 0x10) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
              ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x38;
      uVar2 = *(uint *)(lVar5 + 0x30);
      if (uVar3 == (uVar2 & 0x7fffffff)) {
        if (param_2 != 0) {
          if (uVar3 == uVar2) {
            *(undefined4 *)(lVar5 + 0x30) = 0xffffffff;
            uVar3 = *(int *)(this + 0x28) - 1;
            *(uint *)(this + 0x28) = uVar3;
            *(uint *)(*(long *)(*(long *)(this + 0x18) +
                               ((ulong)uVar3 / (ulong)*(uint *)(this + 0x20)) * 8) +
                     ((ulong)uVar3 % (ulong)*(uint *)(this + 0x20)) * 4) = uVar6;
            goto LAB_0010061b;
          }
          if (uVar2 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
        _err_print_error(&_LC19,"drivers/gles3/rasterizer_canvas_gles3.cpp",0x88e,
                         "Parameter \"cl\" is null.",0,0);
      }
      else if (uVar6 < *(uint *)(this + 0x7c)) goto LAB_00100597;
    }
  }
  else if ((uVar6 < *(uint *)(this + 0x7c)) && (param_2 >> 0x20 != 0x7fffffff)) {
LAB_00100597:
    if (uVar3 == (*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x30 +
                            *(long *)(*(long *)(this + 0x68) +
                                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8) +
                           0x2c) & 0x7fffffff)) {
      local_40 = 0;
      (**(code **)(*(long *)this + 0x50))(this,param_2,auStack_48,0);
      lVar5 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (uVar6 < *(uint *)(this + 0x7c)) {
        lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x30 +
                *(long *)(*(long *)(this + 0x68) +
                         ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
        uVar2 = *(uint *)(lVar5 + 0x2c);
        if ((int)uVar2 < 0) {
          _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                           "Attempted to free an uninitialized or invalid RID",0,0);
        }
        else if (uVar3 == uVar2) {
          *(undefined4 *)(lVar5 + 0x2c) = 0xffffffff;
          uVar3 = *(int *)(this + 0x80) - 1;
          *(uint *)(this + 0x80) = uVar3;
          *(uint *)(*(long *)(*(long *)(this + 0x70) +
                             ((ulong)uVar3 / (ulong)*(uint *)(this + 0x78)) * 8) +
                   ((ulong)uVar3 % (ulong)*(uint *)(this + 0x78)) * 4) = uVar6;
        }
        else {
          _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0,0
                          );
        }
      }
      else {
        _err_print_error(&_LC19,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0);
      }
LAB_0010061b:
      uVar4 = 1;
      goto LAB_001005c2;
    }
  }
  uVar4 = 0;
LAB_001005c2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::erase(unsigned int const&) [clone .isra.0] */

void __thiscall
HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
::erase(HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
        *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_new_batch(bool&) */

void __thiscall RasterizerCanvasGLES3::_new_batch(RasterizerCanvasGLES3 *this,bool *param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int *piVar25;
  void *pvVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  ulong local_128;
  undefined8 uStack_120;
  
  uVar28 = *(uint *)(this + 0x270);
  uVar29 = (ulong)uVar28;
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar28 == 0) {
    uVar4 = *(undefined4 *)(this + 0x284);
    pvVar26 = *(void **)(this + 0x278);
    if (*(int *)(this + 0x274) == 0) {
      *(undefined4 *)(this + 0x274) = 1;
      pvVar26 = (void *)Memory::realloc_static(pvVar26,0x80,false);
      *(void **)(this + 0x278) = pvVar26;
      if (pvVar26 == (void *)0x0) {
LAB_00100e94:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar29 = (ulong)*(uint *)(this + 0x270);
    }
    uVar22 = _LC30;
    puVar27 = (undefined8 *)((long)pvVar26 + uVar29 * 0x80);
    *(int *)(this + 0x270) = (int)uVar29 + 1;
    uVar7 = _LC28;
    *(undefined4 *)((long)puVar27 + 0x24) = uVar22;
    *(undefined4 *)(puVar27 + 5) = uVar22;
    *(undefined4 *)((long)puVar27 + 0x2c) = uVar22;
    *(undefined4 *)(puVar27 + 6) = uVar22;
    uVar24 = _UNK_0011cda8;
    uVar23 = __LC31;
    *puVar27 = 0;
    puVar27[10] = uVar23;
    puVar27[0xb] = uVar24;
    uVar24 = _UNK_0011cdb8;
    uVar23 = __LC32;
    *(undefined4 *)(puVar27 + 1) = uVar4;
    puVar27[2] = 0;
    puVar27[3] = uVar7;
    *(undefined4 *)(puVar27 + 4) = 0;
    puVar27[7] = 0;
    puVar27[8] = 0;
    puVar27[9] = 0;
    puVar27[0xc] = 0;
    *(undefined1 *)(puVar27 + 0xf) = 0;
    puVar27[0xd] = uVar23;
    puVar27[0xe] = uVar24;
  }
  else if (*param_1 == false) {
    uVar2 = *(uint *)(this + 0x288);
    if (uVar28 <= uVar2) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar2,uVar29,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    pvVar26 = *(void **)(this + 0x278);
    piVar25 = (int *)((ulong)uVar2 * 0x80 + (long)pvVar26);
    iVar3 = piVar25[1];
    if (iVar3 != 0) {
      *param_1 = true;
      uVar7 = *(undefined8 *)(piVar25 + 2);
      uVar8 = *(ulong *)(piVar25 + 4);
      uVar9 = *(ulong *)(piVar25 + 6);
      uVar10 = *(ulong *)(piVar25 + 8);
      uVar11 = *(ulong *)(piVar25 + 10);
      uVar12 = *(ulong *)(piVar25 + 0xc);
      uVar13 = *(ulong *)(piVar25 + 0xe);
      uVar14 = *(ulong *)(piVar25 + 0x10);
      uVar15 = *(ulong *)(piVar25 + 0x12);
      uVar16 = *(ulong *)(piVar25 + 0x14);
      uVar17 = *(ulong *)(piVar25 + 0x16);
      uVar18 = *(ulong *)(piVar25 + 0x18);
      uVar19 = *(ulong *)(piVar25 + 0x1a);
      uVar20 = *(ulong *)(piVar25 + 0x1c);
      uVar21 = *(ulong *)(piVar25 + 0x1e);
      local_128 = (ulong)(uint)(iVar3 + *piVar25);
      *(uint *)(this + 0x288) = uVar2 + 1;
      uStack_120 = CONCAT44((int)((ulong)uVar7 >> 0x20),*(undefined4 *)(this + 0x284));
      if (uVar28 == *(uint *)(this + 0x274)) {
        uVar28 = uVar28 * 2;
        if (uVar28 == 0) {
          uVar28 = 1;
        }
        *(uint *)(this + 0x274) = uVar28;
        pvVar26 = (void *)Memory::realloc_static(pvVar26,(ulong)uVar28 << 7,false);
        *(void **)(this + 0x278) = pvVar26;
        if (pvVar26 == (void *)0x0) goto LAB_00100e94;
        uVar29 = (ulong)*(uint *)(this + 0x270);
      }
      *(int *)(this + 0x270) = (int)uVar29 + 1;
      puVar1 = (ulong *)((long)pvVar26 + uVar29 * 0x80);
      *puVar1 = local_128;
      puVar1[1] = uStack_120;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1[4] = uVar10;
      puVar1[5] = uVar11;
      puVar1[6] = uVar12;
      puVar1[7] = uVar13;
      puVar1[8] = uVar14;
      puVar1[9] = uVar15;
      puVar1[10] = uVar16;
      puVar1[0xb] = uVar17;
      puVar1[0xc] = uVar18;
      puVar1[0xd] = uVar19;
      puVar1[0xe] = uVar20;
      puVar1[0xf] = uVar21;
    }
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_enable_attributes(unsigned int, bool, unsigned int) */

void __thiscall
RasterizerCanvasGLES3::_enable_attributes
          (RasterizerCanvasGLES3 *this,uint param_1,bool param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  iVar3 = 0xe - (uint)param_2;
  uVar5 = (ulong)param_1;
  iVar4 = 8;
  do {
    (*_glad_glEnableVertexAttribArray)(iVar4);
    (*_glad_glVertexAttribPointer)(iVar4,4,0x1406,0,0x80,uVar5);
    iVar1 = iVar4 + 1;
    (*_glad_glVertexAttribDivisor)(iVar4,param_3);
    uVar5 = uVar5 + 0x10;
    iVar4 = iVar1;
  } while (iVar3 != iVar1);
  lVar2 = (ulong)param_1 + (ulong)((6 - (uint)param_2) * 4) * 4;
  do {
    (*_glad_glEnableVertexAttribArray)(iVar3);
    (*_glad_glVertexAttribIPointer)(iVar3,4,0x1405,0x80,lVar2);
    iVar4 = iVar3 + 1;
    (*_glad_glVertexAttribDivisor)(iVar3,param_3);
    lVar2 = lVar2 + 0x10;
    iVar3 = iVar4;
  } while (iVar4 != 0x10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::canvas_begin(RID, bool, bool) */

void __thiscall
RasterizerCanvasGLES3::canvas_begin
          (RasterizerCanvasGLES3 *this,ulong param_2,char param_3,char param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar3 = GLES3::TextureStorage::get_singleton();
  lVar6 = GLES3::Config::singleton;
  if ((param_2 == 0) || (*(uint *)(lVar3 + 0x194) <= (uint)param_2)) {
LAB_0010130e:
    lVar5 = 0;
  }
  else {
    lVar5 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 400)) * 0xf0 +
            *(long *)(*(long *)(lVar3 + 0x180) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 400)) * 8);
    if (*(int *)(lVar5 + 0xe8) != (int)(param_2 >> 0x20)) {
      if (0x7ffffffe < *(int *)(lVar5 + 0xe8) + 0x80000000U) goto LAB_0010130e;
      lVar5 = 0;
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (param_3 == '\0') {
    (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(lVar5 + 0x20));
    (*_glad_glActiveTexture)(*(int *)(lVar6 + 8) + 0x84bc);
    (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar5 + 0x30));
    if (*(int *)(lVar5 + 0x30) == 0) {
      if (*(char *)(lVar5 + 0x75) == '\0') goto LAB_00101269;
      goto LAB_001010b9;
    }
    iVar4 = 0;
    if (param_4 != '\0') {
      iVar4 = *(int *)(lVar5 + 0x14) + -1;
    }
    (*_glad_glTexParameteri)(0xde1,0x813d,iVar4);
    if (*(char *)(lVar5 + 0x75) != '\0') goto LAB_001010b9;
LAB_00101269:
    this[0x2c8] = (RasterizerCanvasGLES3)0x0;
    (*_glad_glBlendFuncSeparate)(0x302,0x303,0,1);
  }
  else {
    (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(lVar5 + 0x2c));
    (*_glad_glActiveTexture)(*(int *)(lVar6 + 8) + 0x84bc);
    uVar1 = *(ulong *)(lVar3 + 0x18);
    if ((uVar1 == 0) || (*(uint *)(lVar3 + 0xf4) <= (uint)uVar1)) {
LAB_00118bd7:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
            *(long *)(*(long *)(lVar3 + 0xe0) +
                     ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
    if (*(int *)(lVar6 + 0xe8) != (int)(uVar1 >> 0x20)) {
      if (*(int *)(lVar6 + 0xe8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,*(long *)(lVar3 + 0xe0));
      }
      goto LAB_00118bd7;
    }
    if (*(char *)(lVar6 + 8) != '\0') {
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (uVar1 = *(ulong *)(lVar6 + 0x10), *(uint *)(lVar3 + 0xf4) <= (uint)uVar1))
      goto LAB_00118bd7;
      lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
              *(long *)(*(long *)(lVar3 + 0xe0) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
      if (*(int *)(lVar6 + 0xe8) != (int)(uVar1 >> 0x20)) {
        FUN_00118b99();
        return;
      }
    }
    (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
LAB_001010b9:
    this[0x2c8] = (RasterizerCanvasGLES3)0x1;
    (*_glad_glBlendFuncSeparate)(0x302,0x303,1,0x303);
  }
  if (*(char *)(lVar5 + 0xe0) != '\0') {
    uVar7 = _LC30;
    if (*(char *)(lVar5 + 0x75) != '\0') {
      uVar7 = *(undefined4 *)(lVar5 + 0xdc);
    }
    (*_glad_glClearColor)
              (*(undefined4 *)(lVar5 + 0xd0),*(undefined4 *)(lVar5 + 0xd4),
               *(undefined4 *)(lVar5 + 0xd8),uVar7);
    (*_glad_glClear)(0x4500);
    *(undefined1 *)(lVar5 + 0xe0) = 0;
  }
  (*_glad_glActiveTexture)(0x84c0);
  uVar1 = *(ulong *)(lVar3 + 0x18);
  if ((uVar1 != 0) && ((uint)uVar1 < *(uint *)(lVar3 + 0xf4))) {
    lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
            *(long *)(*(long *)(lVar3 + 0xe0) +
                     ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
    iVar4 = *(int *)(lVar6 + 0xe8);
    if (iVar4 == (int)(uVar1 >> 0x20)) {
      if (*(char *)(lVar6 + 8) == '\0') {
LAB_001011eb:
                    /* WARNING: Could not recover jumptable at 0x00101201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
        return;
      }
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (uVar1 = *(ulong *)(lVar6 + 0x10), *(uint *)(lVar3 + 0xf4) <= (uint)uVar1))
      goto LAB_00118b90;
      lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
              *(long *)(*(long *)(lVar3 + 0xe0) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
      iVar4 = *(int *)(lVar6 + 0xe8);
      if (iVar4 == (int)(uVar1 >> 0x20)) goto LAB_001011eb;
    }
    if (iVar4 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,lVar6);
    }
  }
LAB_00118b90:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_bind_canvas_texture(RID, RenderingServer::CanvasItemTextureFilter,
   RenderingServer::CanvasItemTextureRepeat) */

void RasterizerCanvasGLES3::_bind_canvas_texture
               (long param_1,ulong param_2,uint param_3,int param_4,char *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined8 local_48;
  undefined4 local_40;
  
code_r0x00101364:
  uVar8 = (ulong)param_3;
  pcVar15 = (char *)0x101385;
  lVar3 = GLES3::TextureStorage::get_singleton();
  pcVar4 = GLES3::Config::singleton;
  if (param_2 == 0) {
    param_2 = *(ulong *)(param_1 + 0x2002e0);
    if (((*(ulong *)(param_1 + 0x2b8) == param_2) && (*(uint *)(param_1 + 0x2c0) == param_3)) &&
       (*(int *)(param_1 + 0x2c4) == param_4)) {
      return;
    }
    *(ulong *)(param_1 + 0x2b8) = param_2;
    *(uint *)(param_1 + 0x2c0) = param_3;
    *(int *)(param_1 + 0x2c4) = param_4;
    if (param_2 != 0) goto LAB_001013cd;
    goto LAB_001015b3;
  }
  if ((*(ulong *)(param_1 + 0x2b8) == param_2) && (*(uint *)(param_1 + 0x2c0) == param_3)) {
    if (param_4 == *(int *)(param_1 + 0x2c4)) {
      return;
    }
    *(ulong *)(param_1 + 0x2b8) = param_2;
    *(int *)(param_1 + 0x2c4) = param_4;
  }
  else {
    *(ulong *)(param_1 + 0x2b8) = param_2;
    *(uint *)(param_1 + 0x2c0) = param_3;
    *(int *)(param_1 + 0x2c4) = param_4;
  }
LAB_001013cd:
  iVar10 = (int)(param_2 >> 0x20);
  if (*(uint *)(lVar3 + 0xf4) <= (uint)param_2) {
LAB_00101778:
    if ((uint)param_2 < *(uint *)(lVar3 + 0x9c)) {
      puVar11 = (ulong *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0x98)) * 0x40 +
                         *(long *)(*(long *)(lVar3 + 0x88) +
                                  ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0x98)) * 8));
      if ((int)puVar11[7] == iVar10) goto LAB_00101495;
      if ((int)puVar11[7] + 0x80000000U < 0x7fffffff) {
        param_5 = "Attempting to use an uninitialized RID";
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
LAB_001015b3:
    param_2 = *(ulong *)(param_1 + 0x2002e0);
    goto code_r0x00101364;
  }
  lVar6 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
          *(long *)(*(long *)(lVar3 + 0xe0) +
                   ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
  iVar5 = *(int *)(lVar6 + 0xe8);
  if (iVar5 != iVar10) {
LAB_00101768:
    if (iVar5 + 0x80000000U < 0x7fffffff) {
      param_5 = pcVar15;
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00101778;
  }
  if (*(char *)(lVar6 + 8) != '\0') {
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar1 = *(ulong *)(lVar6 + 0x10);
      if ((uint)uVar1 < *(uint *)(lVar3 + 0xf4)) {
        lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
                *(long *)(*(long *)(lVar3 + 0xe0) +
                         ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
        iVar5 = *(int *)(lVar6 + 0xe8);
        if (iVar5 != (int)(uVar1 >> 0x20)) goto LAB_00101768;
        goto LAB_00101475;
      }
    }
    goto LAB_00101778;
  }
LAB_00101475:
  puVar11 = *(ulong **)(lVar6 + 0xd8);
  if (puVar11 == (ulong *)0x0) {
    uVar9 = 0x8db;
    pcVar4 = "Parameter \"t->canvas_texture\" is null.";
    goto LAB_001021d2;
  }
  if (*(long *)(lVar6 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x80) + 0x77) = 1;
  }
LAB_00101495:
  uVar12 = *(uint *)((long)puVar11 + 0x2c);
  if ((*(uint *)((long)puVar11 + 0x2c) == 0) && (uVar12 = param_3, param_3 == 0)) {
    uVar9 = 0x8eb;
    pcVar4 = "Condition \"filter == RenderingServer::CANVAS_ITEM_TEXTURE_FILTER_DEFAULT\" is true.";
LAB_001021d2:
    _err_print_error("_bind_canvas_texture","drivers/gles3/rasterizer_canvas_gles3.cpp",uVar9,pcVar4
                     ,0,0);
    return;
  }
  iVar10 = (int)puVar11[6];
  if (((int)puVar11[6] == 0) && (iVar10 = param_4, param_4 == 0)) {
    uVar9 = 0x8ee;
    pcVar4 = "Condition \"repeat == RenderingServer::CANVAS_ITEM_TEXTURE_REPEAT_DEFAULT\" is true.";
    goto LAB_001021d2;
  }
  uVar1 = *puVar11;
  if ((uVar1 == 0) || (*(uint *)(lVar3 + 0xf4) <= (uint)uVar1)) {
LAB_00101650:
    uVar1 = *(ulong *)(lVar3 + 0x18);
    if ((uVar1 == 0) || (*(uint *)(lVar3 + 0xf4) <= (uint)uVar1)) goto LAB_00101715;
    lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
            *(long *)(*(long *)(lVar3 + 0xe0) +
                     ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
    iVar5 = *(int *)(lVar6 + 0xe8);
    if (iVar5 != (int)(uVar1 >> 0x20)) {
joined_r0x001023b9:
      if (iVar5 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,uVar8);
      }
LAB_00101715:
      (*_glad_glActiveTexture)(0x84c0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(char *)(lVar6 + 8) != '\0') {
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00101715;
      uVar1 = *(ulong *)(lVar6 + 0x10);
      if (*(uint *)(lVar3 + 0xf4) <= (uint)uVar1) goto LAB_00101715;
      lVar6 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
              *(long *)(*(long *)(lVar3 + 0xe0) +
                       ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
      iVar5 = *(int *)(lVar6 + 0xe8);
      if (iVar5 != (int)(uVar1 >> 0x20)) goto joined_r0x001023b9;
    }
    (*_glad_glActiveTexture)(0x84c0);
    (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
    goto LAB_00101913;
  }
  uVar7 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
          *(long *)(*(long *)(lVar3 + 0xe0) +
                   ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
  iVar5 = *(int *)(uVar7 + 0xe8);
  if (iVar5 != (int)(uVar1 >> 0x20)) {
LAB_00101634:
    if (iVar5 + 0x80000000U < 0x7fffffff) {
      param_5 = "Attempting to use an uninitialized RID";
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00101650;
  }
  if (*(char *)(uVar7 + 8) != '\0') {
    if (*(long *)(uVar7 + 0x10) != 0) {
      uVar1 = *(ulong *)(uVar7 + 0x10);
      if ((uint)uVar1 < *(uint *)(lVar3 + 0xf4)) {
        uVar8 = ((uVar1 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
                *(long *)(*(long *)(lVar3 + 0xe0) +
                         ((uVar1 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
        iVar5 = *(int *)(uVar8 + 0xe8);
        uVar7 = uVar8;
        if (iVar5 != (int)(uVar1 >> 0x20)) goto LAB_00101634;
        goto LAB_00101521;
      }
    }
    goto LAB_00101650;
  }
LAB_00101521:
  (*_glad_glActiveTexture)(0x84c0);
  (*_glad_glBindTexture)(0xde1,*(undefined4 *)(uVar7 + 0x74));
  if (*(uint *)(uVar7 + 0xe0) == uVar12) goto switchD_00101571_caseD_0;
  *(uint *)(uVar7 + 0xe0) = uVar12;
  pcVar15 = GLES3::Config::singleton;
  switch(uVar12) {
  default:
    goto switchD_00101571_caseD_0;
  case 1:
    local_40 = 0x2600;
    iVar5 = 0x2600;
    local_48 = 0;
    break;
  case 2:
    local_40 = 0x2601;
    iVar5 = 0x2601;
    local_48 = 0;
    break;
  case 3:
    goto LAB_00101a3e;
  case 4:
    goto LAB_00101816;
  case 5:
LAB_00101a3e:
    local_40 = 0x2600;
    if (*(int *)(uVar7 + 0x3c) < 2) {
      local_48 = 0;
      iVar5 = 0x2600;
    }
    else {
      local_48 = 1000;
      iVar5 = (-(uint)(*GLES3::Config::singleton == '\0') & 2) + 0x2700;
    }
    break;
  case 6:
LAB_00101816:
    local_40 = 0x2601;
    if (*(int *)(uVar7 + 0x3c) < 2) {
      local_48 = 0;
      iVar5 = 0x2601;
    }
    else {
      local_48 = 1000;
      iVar5 = (-(uint)(*GLES3::Config::singleton == '\0') & 2) + 0x2701;
    }
  }
  (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x2801,iVar5);
  (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x2800,local_40);
  (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x813c,0);
  (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x813d,local_48);
  if (pcVar15[0x7b] != '\0') {
    (*_glad_glTexParameterf)(*(undefined4 *)(uVar7 + 0x5c),0x84fe);
  }
switchD_00101571_caseD_0:
  if (*(int *)(uVar7 + 0xe4) != iVar10) {
    *(int *)(uVar7 + 0xe4) = iVar10;
    if (iVar10 - 1U < 3) {
      uVar14 = *(undefined4 *)(CSWTCH_1021 + (ulong)(iVar10 - 1U) * 4);
      (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x2803,uVar14);
      (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x8072,uVar14);
      (*_glad_glTexParameteri)(*(undefined4 *)(uVar7 + 0x5c),0x2802,uVar14);
    }
  }
  if (*(long *)(uVar7 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(uVar7 + 0x80) + 0x77) = 1;
  }
LAB_00101913:
  uVar8 = puVar11[1];
  if ((uVar8 == 0) || (*(uint *)(lVar3 + 0xf4) <= (uint)uVar8)) {
LAB_001020c8:
    (*_glad_glActiveTexture)(*(int *)(pcVar4 + 8) + 0x84ba);
    uVar8 = *(ulong *)(lVar3 + 0x30);
    if ((uVar8 == 0) || (*(uint *)(lVar3 + 0xf4) <= (uint)uVar8)) goto LAB_00118c1f;
    lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
            *(long *)(*(long *)(lVar3 + 0xe0) +
                     ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
    iVar5 = *(int *)(lVar6 + 0xe8);
    if (iVar5 != (int)(uVar8 >> 0x20)) {
RasterizerCanvasGLES3__bind_canvas_texture:
      if (iVar5 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,param_5);
      }
      goto LAB_00118c1f;
    }
    if (*(char *)(lVar6 + 8) != '\0') {
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (uVar8 = *(ulong *)(lVar6 + 0x10), *(uint *)(lVar3 + 0xf4) <= (uint)uVar8))
      goto LAB_00118c1f;
      lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
              *(long *)(*(long *)(lVar3 + 0xe0) +
                       ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
      iVar5 = *(int *)(lVar6 + 0xe8);
      if (iVar5 != (int)(uVar8 >> 0x20)) goto RasterizerCanvasGLES3__bind_canvas_texture;
    }
    (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
    goto LAB_00101c0b;
  }
  lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
          *(long *)(*(long *)(lVar3 + 0xe0) +
                   ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
  iVar5 = *(int *)(lVar6 + 0xe8);
  if (iVar5 != (int)(uVar8 >> 0x20)) {
LAB_001020b0:
    if (iVar5 + 0x80000000U < 0x7fffffff) {
      param_5 = "Attempting to use an uninitialized RID";
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_001020c8;
  }
  if (*(char *)(lVar6 + 8) != '\0') {
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar8 = *(ulong *)(lVar6 + 0x10);
      if ((uint)uVar8 < *(uint *)(lVar3 + 0xf4)) {
        lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
                *(long *)(*(long *)(lVar3 + 0xe0) +
                         ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
        iVar5 = *(int *)(lVar6 + 0xe8);
        if (iVar5 != (int)(uVar8 >> 0x20)) goto LAB_001020b0;
        goto LAB_001019d0;
      }
    }
    goto LAB_001020c8;
  }
LAB_001019d0:
  (*_glad_glActiveTexture)(*(int *)(pcVar4 + 8) + 0x84ba);
  (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
  if (*(uint *)(lVar6 + 0xe0) == uVar12) goto switchD_00101a2d_caseD_0;
  *(uint *)(lVar6 + 0xe0) = uVar12;
  pcVar15 = GLES3::Config::singleton;
  switch(uVar12) {
  default:
    goto switchD_00101a2d_caseD_0;
  case 1:
    local_40 = 0x2600;
    iVar5 = 0x2600;
    local_48 = 0;
    break;
  case 2:
    local_40 = 0x2601;
    iVar5 = 0x2601;
    local_48 = 0;
    break;
  case 3:
    goto LAB_00101ea6;
  case 4:
    goto LAB_00101b0e;
  case 5:
LAB_00101ea6:
    local_40 = 0x2600;
    if (*(int *)(lVar6 + 0x3c) < 2) {
      local_48 = 0;
      iVar5 = 0x2600;
    }
    else {
      local_48 = 1000;
      iVar5 = (-(uint)(*GLES3::Config::singleton == '\0') & 2) + 0x2700;
    }
    break;
  case 6:
LAB_00101b0e:
    local_40 = 0x2601;
    if (*(int *)(lVar6 + 0x3c) < 2) {
      local_48 = 0;
      iVar5 = 0x2601;
    }
    else {
      local_48 = 1000;
      iVar5 = (-(uint)(*GLES3::Config::singleton == '\0') & 2) + 0x2701;
    }
  }
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2801,iVar5);
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2800,local_40);
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x813c,0);
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x813d,local_48);
  if (pcVar15[0x7b] != '\0') {
    (*_glad_glTexParameterf)(*(undefined4 *)(lVar6 + 0x5c),0x84fe);
  }
switchD_00101a2d_caseD_0:
  if (*(int *)(lVar6 + 0xe4) != iVar10) {
    *(int *)(lVar6 + 0xe4) = iVar10;
    if (iVar10 - 1U < 3) {
      uVar14 = *(undefined4 *)(CSWTCH_1021 + (ulong)(iVar10 - 1U) * 4);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2803,uVar14);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x8072,uVar14);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2802,uVar14);
    }
  }
  if (*(long *)(lVar6 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x80) + 0x77) = 1;
  }
LAB_00101c0b:
  uVar8 = puVar11[2];
  if ((uVar8 == 0) || (*(uint *)(lVar3 + 0xf4) <= (uint)uVar8)) {
LAB_00101fc0:
    (*_glad_glActiveTexture)(*(int *)(pcVar4 + 8) + 0x84b9);
    uVar8 = *(ulong *)(lVar3 + 0x18);
    if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)(lVar3 + 0xf4))) {
      lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
              *(long *)(*(long *)(lVar3 + 0xe0) +
                       ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
      iVar10 = *(int *)(lVar6 + 0xe8);
      if (iVar10 == (int)(uVar8 >> 0x20)) {
        if (*(char *)(lVar6 + 8) == '\0') {
LAB_0010208a:
                    /* WARNING: Could not recover jumptable at 0x001020a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
          return;
        }
        if ((*(long *)(lVar6 + 0x10) == 0) ||
           (uVar8 = *(ulong *)(lVar6 + 0x10), *(uint *)(lVar3 + 0xf4) <= (uint)uVar8))
        goto LAB_00118c1f;
        lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
                *(long *)(*(long *)(lVar3 + 0xe0) +
                         ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
        iVar10 = *(int *)(lVar6 + 0xe8);
        if (iVar10 == (int)(uVar8 >> 0x20)) goto LAB_0010208a;
      }
      if (iVar10 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,lVar6);
      }
    }
LAB_00118c1f:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
          *(long *)(*(long *)(lVar3 + 0xe0) +
                   ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
  iVar5 = *(int *)(lVar6 + 0xe8);
  if (iVar5 != (int)(uVar8 >> 0x20)) {
LAB_00101fb0:
    if (iVar5 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00101fc0;
  }
  if (*(char *)(lVar6 + 8) != '\0') {
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar8 = *(ulong *)(lVar6 + 0x10);
      if ((uint)uVar8 < *(uint *)(lVar3 + 0xf4)) {
        lVar6 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(lVar3 + 0xf0)) * 0xf0 +
                *(long *)(*(long *)(lVar3 + 0xe0) +
                         ((uVar8 & 0xffffffff) / (ulong)*(uint *)(lVar3 + 0xf0)) * 8);
        iVar5 = *(int *)(lVar6 + 0xe8);
        if (iVar5 != (int)(uVar8 >> 0x20)) goto LAB_00101fb0;
        goto LAB_00101cbb;
      }
    }
    goto LAB_00101fc0;
  }
LAB_00101cbb:
  (*_glad_glActiveTexture)(*(int *)(pcVar4 + 8) + 0x84b9);
  (*_glad_glBindTexture)(0xde1,*(undefined4 *)(lVar6 + 0x74));
  if (*(uint *)(lVar6 + 0xe0) == uVar12) goto switchD_00101d13_caseD_0;
  *(uint *)(lVar6 + 0xe0) = uVar12;
  pcVar4 = GLES3::Config::singleton;
  uVar14 = _LC30;
  switch(uVar12) {
  default:
    goto switchD_00101d13_caseD_0;
  case 1:
    uVar9 = 0x2600;
    iVar5 = 0x2600;
    uVar13 = 0;
    break;
  case 2:
    uVar9 = 0x2601;
    iVar5 = 0x2601;
    uVar13 = 0;
    break;
  case 3:
    goto LAB_00101e67;
  case 4:
    goto LAB_00101d27;
  case 5:
    uVar14 = *(undefined4 *)(GLES3::Config::singleton + 0x7c);
LAB_00101e67:
    uVar9 = 0x2600;
    if (*(int *)(lVar6 + 0x3c) < 2) {
      iVar5 = 0x2600;
      uVar13 = 0;
    }
    else {
      uVar13 = 1000;
      iVar5 = (-(uint)(*GLES3::Config::singleton == '\0') & 2) + 0x2700;
    }
    break;
  case 6:
    uVar14 = *(undefined4 *)(GLES3::Config::singleton + 0x7c);
LAB_00101d27:
    uVar9 = 0x2601;
    if (*(int *)(lVar6 + 0x3c) < 2) {
      iVar5 = 0x2601;
      uVar13 = 0;
    }
    else {
      uVar13 = 1000;
      iVar5 = (-(uint)(*GLES3::Config::singleton == '\0') & 2) + 0x2701;
    }
  }
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2801,iVar5);
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2800,uVar9);
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x813c,0);
  (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x813d,uVar13);
  if (pcVar4[0x7b] != '\0') {
    (*_glad_glTexParameterf)(uVar14,*(undefined4 *)(lVar6 + 0x5c),0x84fe);
  }
switchD_00101d13_caseD_0:
  if (*(int *)(lVar6 + 0xe4) != iVar10) {
    *(int *)(lVar6 + 0xe4) = iVar10;
    if (iVar10 - 1U < 3) {
      uVar14 = *(undefined4 *)(CSWTCH_1021 + (ulong)(iVar10 - 1U) * 4);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2803,uVar14);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x8072,uVar14);
      (*_glad_glTexParameteri)(*(undefined4 *)(lVar6 + 0x5c),0x2802,uVar14);
    }
  }
  if (*(long *)(lVar6 + 0x80) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x80) + 0x77) = 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_render_batch(RendererCanvasRender::Light*, unsigned int,
   RenderingMethod::RenderInfo*) */

void RasterizerCanvasGLES3::_render_batch(Light *param_1,uint param_2,RenderInfo *param_3)

{
  uint *puVar1;
  Surface *pSVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  Version *pVVar21;
  long *plVar22;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  long in_RCX;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  int *piVar30;
  undefined8 uVar31;
  uint uVar32;
  ulong uVar33;
  int iVar34;
  undefined4 uVar35;
  ulong uVar36;
  undefined8 in_R9;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  long in_FS_OFFSET;
  bool bVar41;
  int iStack_f4;
  ulong local_e8;
  int local_b0;
  int local_ac;
  char local_a6;
  char local_a5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  uVar27 = *(uint *)(param_1 + 0x288);
  uVar16 = *(uint *)(param_1 + 0x270);
  uVar33 = (ulong)uVar16;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = (ulong)uVar27;
  if (uVar16 <= uVar27) goto LAB_0010280d;
  if (*(long *)(*(long *)(param_1 + 0x278) + 0x60 + (ulong)uVar27 * 0x80) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar31 = 0x517;
      pcVar26 = 
      "Parameter \"state.canvas_instance_batches[state.current_batch_index].command\" is null.";
      goto LAB_00103149;
    }
    goto LAB_00103cf4;
  }
  uVar27 = (uint)param_3;
  if (uVar16 <= uVar27) {
    uVar20 = (ulong)param_3 & 0xffffffff;
LAB_0010280d:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar20,uVar33,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  uVar36 = (ulong)param_3 & 0xffffffff;
  lVar39 = uVar36 * 0x80;
  lVar19 = *(long *)(param_1 + 0x278) + lVar39;
  _bind_canvas_texture
            (param_1,*(undefined8 *)(lVar19 + 0x10),*(undefined4 *)(lVar19 + 0x18),
             *(undefined4 *)(lVar19 + 0x1c));
  uVar33 = (ulong)*(uint *)(param_1 + 0x270);
  uVar20 = uVar36;
  if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
  uVar16 = *(uint *)(*(long *)(param_1 + 0x278) + lVar39 + 0x68);
  if (uVar16 == 3) {
    (*_glad_glBindVertexArray)(*(undefined4 *)(param_1 + 0x22c));
    uVar16 = *(uint *)(param_1 + 0x280);
    uVar33 = (ulong)*(uint *)(param_1 + 0x260);
    uVar20 = (ulong)uVar16;
    if (*(uint *)(param_1 + 0x260) <= uVar16) goto LAB_0010280d;
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    uVar20 = uVar36;
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    lVar19 = *(long *)(*(long *)(param_1 + 0x268) + (ulong)uVar16 * 0x28 + 8);
    uVar20 = (ulong)*(uint *)(*(long *)(param_1 + 0x278) + 8 + lVar39);
    if (lVar19 == 0) {
LAB_00103257:
      lVar40 = 0;
LAB_0010325a:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar40,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    lVar40 = *(long *)(lVar19 + -8);
    if (lVar40 <= (long)uVar20) goto LAB_0010325a;
    (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar19 + uVar20 * 4));
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    uVar20 = uVar36;
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    _enable_attributes((RasterizerCanvasGLES3 *)param_1,
                       *(int *)(*(long *)(param_1 + 0x278) + lVar39) << 7,true,1);
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    local_68 = 4;
    local_78 = __LC48;
    uStack_70 = _UNK_0011cdc8;
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    iVar34 = *(int *)(*(long *)(param_1 + 0x278) + lVar39 + 4);
    if (iVar34 < 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar31 = 0x55c;
        pcVar26 = "Condition \"instance_count <= 0\" is true.";
        goto LAB_00103149;
      }
      goto LAB_00103cf4;
    }
    uVar20 = (ulong)*(uint *)(*(long *)(param_1 + 0x278) + lVar39 + 0x6c);
    (*_glad_glDrawArraysInstanced)(*(undefined4 *)((long)&local_78 + uVar20 * 4),0,uVar20,iVar34);
    uVar14 = _UNK_0011cdd8;
    uVar31 = __LC50;
    if (in_RCX != 0) {
      *(int *)(in_RCX + 0x18) = *(int *)(in_RCX + 0x18) + iVar34;
      uVar33 = (ulong)*(uint *)(param_1 + 0x270);
      local_48 = 3;
      local_58 = uVar31;
      uStack_50 = uVar14;
      uVar20 = uVar36;
      if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
      uVar27 = *(uint *)(*(long *)(param_1 + 0x278) + 0x6c + lVar39);
      *(int *)(in_RCX + 0x20) = *(int *)(in_RCX + 0x20) + 1;
      lVar19 = (long)*(int *)((long)&local_58 + (ulong)uVar27 * 4);
      *(int *)(in_RCX + 0x1c) =
           *(int *)(in_RCX + 0x1c) +
           ((uVar27 - *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::
                               subtractor + lVar19 * 4)) /
           *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::divisor +
                    lVar19 * 4)) * iVar34;
    }
  }
  else if (uVar16 < 4) {
    if (uVar16 == 2) {
      lVar19 = *(long *)(*(long *)(param_1 + 0x278) + lVar39 + 0x60);
      lVar40 = *(long *)(param_1 + 0x1f8);
      if ((lVar40 != 0) && (*(int *)(param_1 + 0x21c) != 0)) {
        uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x218) * 4
                                     ));
        lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x218) * 8);
        uVar20 = *(long *)(lVar19 + 0x18) * 0x3ffff - 1;
        uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
        uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
        uVar32 = (uint)(uVar20 >> 0x16) ^ (uint)uVar20;
        uVar16 = 1;
        if (uVar32 != 0) {
          uVar16 = uVar32;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar16 * lVar25;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar33;
        lVar29 = SUB168(auVar4 * auVar8,8);
        uVar32 = *(uint *)(*(long *)(param_1 + 0x200) + lVar29 * 4);
        uVar28 = SUB164(auVar4 * auVar8,8);
        if (uVar32 != 0) {
          uVar37 = 0;
          do {
            if ((uVar16 == uVar32) &&
               (*(long *)(lVar19 + 0x18) == *(long *)(*(long *)(lVar40 + lVar29 * 8) + 0x10))) {
              lVar25 = *(long *)(lVar40 + (ulong)uVar28 * 8);
              (*_glad_glBindVertexArray)(*(undefined4 *)(lVar25 + 0x1c));
              uVar16 = *(uint *)(param_1 + 0x280);
              uVar33 = (ulong)*(uint *)(param_1 + 0x260);
              uVar20 = (ulong)uVar16;
              if (*(uint *)(param_1 + 0x260) <= uVar16) goto LAB_0010280d;
              uVar33 = (ulong)*(uint *)(param_1 + 0x270);
              uVar20 = uVar36;
              if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
              lVar29 = *(long *)(*(long *)(param_1 + 0x268) + (ulong)uVar16 * 0x28 + 8);
              uVar20 = (ulong)*(uint *)(*(long *)(param_1 + 0x278) + 8 + lVar39);
              if (lVar29 == 0) goto LAB_00103257;
              lVar40 = *(long *)(lVar29 + -8);
              if (lVar40 <= (long)uVar20) goto LAB_0010325a;
              (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar29 + uVar20 * 4));
              uVar33 = (ulong)*(uint *)(param_1 + 0x270);
              uVar20 = uVar36;
              if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
              _enable_attributes((RasterizerCanvasGLES3 *)param_1,
                                 *(int *)(*(long *)(param_1 + 0x278) + lVar39) << 7,false,1);
              if ((*(char *)(lVar25 + 0x28) != '\0') &&
                 ((((*(float *)(lVar25 + 0x2c) != _LC30 || (_LC30 != *(float *)(lVar25 + 0x30))) ||
                   (_LC30 != *(float *)(lVar25 + 0x34))) || (_LC30 != *(float *)(lVar25 + 0x38)))))
              {
                (*_glad_glVertexAttrib4f)(3);
              }
              if (*(int *)(lVar25 + 0x20) == 0) {
                (*_glad_glDrawArraysInstanced)
                          (*(undefined4 *)
                            (_render_batch(RendererCanvasRender::Light*,unsigned_int,RenderingMethod::RenderInfo*)
                             ::prim + (long)*(int *)(lVar19 + 0x14) * 4),0,
                           *(undefined4 *)(lVar25 + 0x24),1);
              }
              else {
                (*_glad_glDrawElementsInstanced)
                          (*(undefined4 *)
                            (_render_batch(RendererCanvasRender::Light*,unsigned_int,RenderingMethod::RenderInfo*)
                             ::prim + (long)*(int *)(lVar19 + 0x14) * 4),
                           *(undefined4 *)(lVar25 + 0x24),0x1405,0,1);
              }
              (*_glad_glBindVertexArray)(0);
              if ((*(char *)(lVar25 + 0x28) != '\0') &&
                 (((_LC30 != *(float *)(lVar25 + 0x2c) || (_LC30 != *(float *)(lVar25 + 0x30))) ||
                  ((_LC30 != *(float *)(lVar25 + 0x34) || (_LC30 != *(float *)(lVar25 + 0x38)))))))
              {
                (*_glad_glVertexAttrib4f)(3);
              }
              if (in_RCX != 0) {
                *(int *)(in_RCX + 0x18) = *(int *)(in_RCX + 0x18) + 1;
                iVar34 = *(int *)(lVar19 + 0x14);
                iVar17 = *(int *)(lVar25 + 0x24);
                *(int *)(in_RCX + 0x20) = *(int *)(in_RCX + 0x20) + 1;
                *(int *)(in_RCX + 0x1c) =
                     *(int *)(in_RCX + 0x1c) +
                     (uint)(iVar17 - *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)
                                              ::subtractor + (long)iVar34 * 4)) /
                     *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::
                               divisor + (long)iVar34 * 4);
              }
              goto LAB_001027c0;
            }
            uVar37 = uVar37 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(uVar28 + 1) * lVar25;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar33;
            lVar29 = SUB168(auVar5 * auVar9,8);
            uVar32 = *(uint *)(*(long *)(param_1 + 0x200) + lVar29 * 4);
            uVar28 = SUB164(auVar5 * auVar9,8);
          } while ((uVar32 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar32 * lVar25, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar33, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(param_1 + 0x218) * 4) + uVar28)
                                        - SUB164(auVar6 * auVar10,8)) * lVar25, auVar11._8_8_ = 0,
                  auVar11._0_8_ = uVar33, uVar37 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar31 = 0x535;
        pcVar26 = "Parameter \"pb\" is null.";
        goto LAB_00103149;
      }
      goto LAB_00103cf4;
    }
    (*_glad_glBindVertexArray)(*(undefined4 *)(param_1 + 0x234));
    uVar16 = *(uint *)(param_1 + 0x280);
    uVar33 = (ulong)*(uint *)(param_1 + 0x260);
    uVar20 = (ulong)uVar16;
    if (*(uint *)(param_1 + 0x260) <= uVar16) goto LAB_0010280d;
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    uVar20 = uVar36;
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    lVar19 = *(long *)(*(long *)(param_1 + 0x268) + (ulong)uVar16 * 0x28 + 8);
    uVar20 = (ulong)*(uint *)(*(long *)(param_1 + 0x278) + 8 + lVar39);
    if (lVar19 == 0) goto LAB_00103257;
    lVar40 = *(long *)(lVar19 + -8);
    if (lVar40 <= (long)uVar20) goto LAB_0010325a;
    (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar19 + uVar20 * 4));
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    uVar20 = uVar36;
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    _enable_attributes((RasterizerCanvasGLES3 *)param_1,
                       *(int *)(*(long *)(param_1 + 0x278) + lVar39) << 7,false,1);
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    (*_glad_glDrawElementsInstanced)
              (4,6,0x1405,0,*(undefined4 *)(*(long *)(param_1 + 0x278) + 4 + lVar39));
    (*_glad_glBindVertexArray)(0);
    if (in_RCX != 0) {
      uVar33 = (ulong)*(uint *)(param_1 + 0x270);
      if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
      iVar34 = *(int *)(*(long *)(param_1 + 0x278) + 4 + lVar39);
      *(int *)(in_RCX + 0x20) = *(int *)(in_RCX + 0x20) + 1;
      *(ulong *)(in_RCX + 0x18) =
           CONCAT44(iVar34 * 2 + (int)((ulong)*(undefined8 *)(in_RCX + 0x18) >> 0x20),
                    iVar34 + (int)*(undefined8 *)(in_RCX + 0x18));
    }
  }
  else if (uVar16 - 4 < 3) {
    pVVar21 = (Version *)GLES3::MeshStorage::get_singleton();
    plVar22 = (long *)GLES3::ParticlesStorage::get_singleton();
    uVar33 = (ulong)*(uint *)(param_1 + 0x270);
    if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
    lVar19 = *(long *)(param_1 + 0x278) + lVar39;
    iVar34 = *(int *)(lVar19 + 0x68);
    if (iVar34 == 4) {
      bVar13 = false;
      local_a5 = '\0';
      uVar23 = *(ulong *)(*(long *)(lVar19 + 0x60) + 0x18);
      local_e8 = *(ulong *)(*(long *)(lVar19 + 0x60) + 0x48);
      local_a6 = '\0';
      local_ac = 0;
      local_b0 = 0;
      uVar16 = 1;
LAB_00102b90:
      if (uVar23 != 0) {
        uVar32 = (**(code **)(*(long *)pVVar21 + 0x80))(pVVar21,uVar23);
        if (uVar32 == 0) goto LAB_001027c0;
        uVar38 = 0;
        iStack_f4 = (int)(uVar23 >> 0x20);
LAB_00102bfb:
        if (*(uint *)(pVVar21 + 0x19c) <= (uint)uVar23) {
LAB_001037d0:
          _err_print_error("mesh_get_surface","drivers/gles3/storage/mesh_storage.h",0x157,
                           "Parameter \"mesh\" is null.",0,0);
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        lVar19 = *(long *)(*(long *)(pVVar21 + 0x188) +
                          ((uVar23 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x198)) * 8) +
                 ((uVar23 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x198)) * 0xd8;
        if (iStack_f4 != *(int *)(lVar19 + 0xd0)) {
          if (*(int *)(lVar19 + 0xd0) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_001037d0;
        }
        uVar28 = (uint)uVar38;
        if (*(uint *)(lVar19 + 0x10) <= uVar28) {
          FUN_00118c90();
          return;
        }
        puVar1 = *(uint **)(*(long *)(lVar19 + 8) + uVar38 * 8);
        uVar37 = *puVar1;
        if (4 < uVar37) {
          _err_print_error("_render_batch","drivers/gles3/rasterizer_canvas_gles3.cpp",0x5b7,
                           "Condition \"primitive < 0 || primitive >= RenderingServer::PRIMITIVE_MAX\" is true. Continuing."
                           ,0);
          goto LAB_00102f7f;
        }
        uVar33 = (ulong)*(uint *)(param_1 + 0x270);
        uVar20 = uVar36;
        if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
        pSVar2 = *(Surface **)(*(long *)(param_1 + 0x278) + 0x50 + lVar39);
        if (local_e8 == 0) {
          puVar3 = puVar1 + 0xb;
          while( true ) {
            LOCK();
            bVar41 = (char)*puVar3 == '\0';
            if (bVar41) {
              *(char *)puVar3 = '\x01';
            }
            UNLOCK();
            if (bVar41) break;
            do {
            } while ((char)*puVar3 != '\0');
          }
          uVar28 = puVar1[0x1e];
          puVar3 = *(uint **)(puVar1 + 0x1c);
          if (uVar28 == 0) {
            lVar19 = 0;
            uVar20 = 0x140;
            uVar28 = 1;
          }
          else {
            lVar19 = (ulong)uVar28 * 0x140;
            puVar24 = puVar3;
            do {
              if (pSVar2 == (Surface *)(ulong)*puVar24) {
                uVar28 = puVar24[1];
                *(undefined1 *)(puVar1 + 0xb) = 0;
                goto LAB_00102de0;
              }
              puVar24 = puVar24 + 0x50;
            } while (puVar3 + (ulong)uVar28 * 0x50 != puVar24);
            uVar28 = uVar28 + 1;
            uVar20 = (ulong)uVar28 * 0x140;
          }
          puVar1[0x1e] = uVar28;
          lVar40 = Memory::realloc_static(puVar3,uVar20,false);
          *(long *)(puVar1 + 0x1c) = lVar40;
          GLES3::MeshStorage::_mesh_surface_generate_version_for_input_mask
                    (pVVar21,(Surface *)(lVar40 + lVar19),(ulong)puVar1,pSVar2);
          uVar28 = *(uint *)(*(long *)(puVar1 + 0x1c) + 4 + lVar19);
          *(undefined1 *)(puVar1 + 0xb) = 0;
        }
        else {
          if ((uint)local_e8 < *(uint *)(pVVar21 + 500)) {
            plVar22 = (long *)(*(long *)(*(long *)(pVVar21 + 0x1e0) +
                                        ((local_e8 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x1f0)
                                        ) * 8) +
                              ((local_e8 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x1f0)) * 0xa8);
            if ((int)(local_e8 >> 0x20) == (int)plVar22[0x14]) {
              uVar18 = *(uint *)(*plVar22 + 0x10);
              if (uVar18 <= uVar28) {
                _err_print_index_error
                          ("mesh_instance_surface_get_vertex_arrays_and_format",
                           "drivers/gles3/storage/mesh_storage.h",0x1d3,uVar38,(ulong)uVar18,
                           "p_surface_index","mesh->surface_count","",false,false);
                uVar28 = 0;
                goto LAB_00102de0;
              }
              uVar33 = (ulong)*(uint *)(plVar22 + 2);
              uVar20 = uVar38;
              if (*(uint *)(plVar22 + 2) <= uVar28) goto LAB_0010280d;
              lVar19 = uVar38 * 0x40 + plVar22[3];
              uVar20 = *(ulong *)(*(long *)(*plVar22 + 8) + uVar38 * 8);
              pcVar26 = (char *)(uVar20 + 0x2c);
              while( true ) {
                LOCK();
                cVar15 = *pcVar26;
                if (cVar15 == '\0') {
                  *pcVar26 = '\x01';
                }
                UNLOCK();
                if (cVar15 == '\0') break;
                do {
                } while (*pcVar26 != '\0');
              }
              uVar28 = *(uint *)(lVar19 + 0x38);
              puVar3 = *(uint **)(lVar19 + 0x30);
              if (uVar28 == 0) {
                lVar40 = 0;
                uVar33 = 0x140;
                uVar28 = 1;
              }
              else {
                lVar40 = (ulong)uVar28 * 0x140;
                puVar24 = puVar3;
                do {
                  if (pSVar2 == (Surface *)(ulong)*puVar24) {
                    uVar28 = puVar24[1];
                    *(undefined1 *)(uVar20 + 0x2c) = 0;
                    goto LAB_00102de0;
                  }
                  puVar24 = puVar24 + 0x50;
                } while (puVar24 != puVar3 + (ulong)uVar28 * 0x50);
                uVar28 = uVar28 + 1;
                uVar33 = (ulong)uVar28 * 0x140;
              }
              *(uint *)(lVar19 + 0x38) = uVar28;
              lVar25 = Memory::realloc_static(puVar3,uVar33,false);
              *(long *)(lVar19 + 0x30) = lVar25;
              GLES3::MeshStorage::_mesh_surface_generate_version_for_input_mask
                        (pVVar21,(Surface *)(lVar25 + lVar40),uVar20,pSVar2);
              uVar28 = *(uint *)(*(long *)(lVar19 + 0x30) + 4 + lVar40);
              *(undefined1 *)(uVar20 + 0x2c) = 0;
              goto LAB_00102de0;
            }
            if ((int)plVar22[0x14] + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          _err_print_error("mesh_instance_surface_get_vertex_arrays_and_format",
                           "drivers/gles3/storage/mesh_storage.h",0x1d1,"Parameter \"mi\" is null.",
                           0);
          uVar28 = 0;
        }
LAB_00102de0:
        uVar18 = puVar1[0x1f];
        (*_glad_glBindVertexArray)(uVar28);
        uVar28 = *(uint *)(param_1 + 0x280);
        uVar33 = (ulong)*(uint *)(param_1 + 0x260);
        uVar20 = (ulong)uVar28;
        if (*(uint *)(param_1 + 0x260) <= uVar28) goto LAB_0010280d;
        uVar33 = (ulong)*(uint *)(param_1 + 0x270);
        uVar20 = uVar36;
        if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
        lVar19 = *(long *)(*(long *)(param_1 + 0x268) + (ulong)uVar28 * 0x28 + 8);
        uVar20 = (ulong)*(uint *)(*(long *)(param_1 + 0x278) + 8 + lVar39);
        if (lVar19 == 0) goto LAB_00103257;
        lVar40 = *(long *)(lVar19 + -8);
        if (lVar40 <= (long)uVar20) goto LAB_0010325a;
        (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar19 + uVar20 * 4));
        uVar33 = (ulong)*(uint *)(param_1 + 0x270);
        uVar20 = uVar36;
        if (*(uint *)(param_1 + 0x270) <= uVar27) goto LAB_0010280d;
        _enable_attributes((RasterizerCanvasGLES3 *)param_1,
                           *(int *)(*(long *)(param_1 + 0x278) + lVar39) << 7,false,uVar16);
        if (uVar18 == 0) {
          if (bVar13) {
            bVar41 = false;
            goto LAB_0010362b;
          }
          uVar28 = puVar1[0x20];
          uVar35 = *(undefined4 *)
                    (_render_batch(RendererCanvasRender::Light*,unsigned_int,RenderingMethod::RenderInfo*)
                     ::prim + (long)(int)uVar37 * 4);
          if (uVar28 == 0) {
            uVar28 = puVar1[7];
          }
LAB_00103307:
          (*_glad_glDrawArraysInstanced)(uVar35,0,uVar28,uVar16);
        }
        else {
          (*_glad_glBindBuffer)(0x8893,uVar18);
          bVar41 = bVar13;
          if (bVar13) {
LAB_0010362b:
            if (local_b0 == 0) goto LAB_001027c0;
            (*_glad_glBindBuffer)(0x8892);
            (*_glad_glEnableVertexAttribArray)(1);
            (*_glad_glVertexAttribPointer)(1,4,0x1406,0,local_ac * 4,0);
            (*_glad_glVertexAttribDivisor)(1,1);
            (*_glad_glEnableVertexAttribArray)(2);
            (*_glad_glVertexAttribPointer)(2,4,0x1406,0);
            (*_glad_glVertexAttribDivisor)(2,1);
            if ((local_a6 == '\0') && (local_a5 == '\0')) {
              (*_glad_glVertexAttribI4ui)(5,0x3c003c00,0x3c003c00,0);
            }
            else {
              (*_glad_glEnableVertexAttribArray)(5);
              (*_glad_glVertexAttribIPointer)(5,4,0x1405,local_ac * 4);
              (*_glad_glVertexAttribDivisor)(5,1);
            }
            uVar28 = puVar1[0x20];
            uVar35 = *(undefined4 *)
                      (_render_batch(RendererCanvasRender::Light*,unsigned_int,RenderingMethod::RenderInfo*)
                       ::prim + (long)(int)uVar37 * 4);
            if (uVar28 == 0) {
              uVar28 = puVar1[7];
            }
            if (!bVar41) goto LAB_00103307;
            uVar18 = puVar1[7];
          }
          else {
            uVar35 = *(undefined4 *)
                      (_render_batch(RendererCanvasRender::Light*,unsigned_int,RenderingMethod::RenderInfo*)
                       ::prim + (long)(int)uVar37 * 4);
            uVar18 = puVar1[7];
            uVar28 = puVar1[0x20];
            if (puVar1[0x20] == 0) {
              uVar28 = uVar18;
            }
          }
          (*_glad_glDrawElementsInstanced)
                    (uVar35,uVar28,(-(uint)(uVar18 - 1 < 0x10000) & 0xfffffffe) + 0x1405,0);
        }
        (*_glad_glBindBuffer)(0x8892,0);
        (*_glad_glBindBuffer)(0x8893,0);
        if (bVar13) {
          (*_glad_glDisableVertexAttribArray)(5);
          (*_glad_glDisableVertexAttribArray)(8);
          (*_glad_glDisableVertexAttribArray)(9);
          (*_glad_glDisableVertexAttribArray)(10);
        }
        if (in_RCX != 0) {
          *(int *)(in_RCX + 0x18) = *(int *)(in_RCX + 0x18) + 1;
          iVar34 = *(int *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::
                            subtractor + (long)(int)uVar37 * 4);
          *(int *)(in_RCX + 0x20) = *(int *)(in_RCX + 0x20) + 1;
          *(int *)(in_RCX + 0x1c) =
               *(int *)(in_RCX + 0x1c) +
               ((uVar28 - iVar34) /
               *(uint *)(_indices_to_primitives(RenderingServer::PrimitiveType,unsigned_int)::
                         divisor + (long)(int)uVar37 * 4)) * uVar16;
        }
LAB_00102f7f:
        uVar38 = uVar38 + 1;
        if (uVar38 == uVar32) goto LAB_001027c0;
        goto LAB_00102bfb;
      }
    }
    else {
      if (iVar34 == 5) {
        uVar20 = *(ulong *)(*(long *)(lVar19 + 0x60) + 0x18);
        uVar23 = (**(code **)(*(long *)pVVar21 + 0x168))(pVVar21,uVar20);
        if (uVar20 == 0) {
LAB_00103800:
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        uVar32 = (uint)uVar20;
        uVar33 = uVar20 & 0xffffffff;
        if (*(uint *)(pVVar21 + 0x26c) <= uVar32) goto LAB_00103800;
        lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                 *(long *)(*(long *)(pVVar21 + 600) +
                          ((uVar20 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x268)) * 8);
        iVar34 = *(int *)(lVar19 + 0x110);
        if (iVar34 != (int)(uVar20 >> 0x20)) {
          if (iVar34 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0,lVar19);
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          goto LAB_00103800;
        }
        if (*(int *)(lVar19 + 0xc) == 0) {
          if (*(uint *)(pVVar21 + 0x26c) <= uVar32) {
LAB_00103a40:
                    /* WARNING: Does not return */
            pcVar12 = (code *)invalidInstructionException();
            (*pcVar12)();
          }
          lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                   *(long *)(*(long *)(pVVar21 + 600) +
                            ((uVar20 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x268)) * 8);
          if (iVar34 != *(int *)(lVar19 + 0x110)) {
            if (*(int *)(lVar19 + 0x110) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,
                               (ulong)param_3 & 0xffffffff);
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            goto LAB_00103a40;
          }
          uVar16 = *(uint *)(lVar19 + 0x14);
          if ((int)uVar16 < 0) {
            uVar16 = *(uint *)(lVar19 + 8);
          }
          if (uVar16 != 0) {
            if (*(uint *)(pVVar21 + 0x26c) <= uVar32) {
LAB_00103a49:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            lVar19 = (uVar33 % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                     *(long *)(*(long *)(pVVar21 + 600) + (uVar33 / *(uint *)(pVVar21 + 0x268)) * 8)
            ;
            iVar17 = *(int *)(lVar19 + 0x110);
            if (iVar34 != iVar17) {
              if (iVar17 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar20);
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              goto LAB_00103a49;
            }
            local_b0 = *(int *)(lVar19 + 0x74);
            if (*(uint *)(pVVar21 + 0x26c) <= uVar32) {
LAB_00103aa9:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                     *(long *)(*(long *)(pVVar21 + 600) +
                              ((uVar20 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x268)) * 8);
            iVar17 = *(int *)(lVar19 + 0x110);
            if (iVar34 != iVar17) {
              if (iVar17 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              goto LAB_00103aa9;
            }
            local_ac = *(int *)(lVar19 + 0x4c);
            if (*(uint *)(pVVar21 + 0x26c) <= uVar32) {
LAB_00103aa0:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            iVar17 = *(int *)((uVar33 % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                              *(long *)(*(long *)(pVVar21 + 600) +
                                       (uVar33 / *(uint *)(pVVar21 + 0x268)) * 8) + 0x110);
            if (iVar34 != iVar17) {
              if (iVar17 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,pVVar21);
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              goto LAB_00103aa0;
            }
            if (*(uint *)(pVVar21 + 0x26c) <= uVar32) {
LAB_00103a96:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                     *(long *)(*(long *)(pVVar21 + 600) +
                              ((uVar20 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x268)) * 8);
            iVar17 = *(int *)(lVar19 + 0x110);
            if (iVar34 != iVar17) {
              if (iVar17 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,param_1);
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
              goto LAB_00103a96;
            }
            local_a6 = *(char *)(lVar19 + 0x10);
            if (*(uint *)(pVVar21 + 0x26c) <= uVar32) {
LAB_00103c08:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(pVVar21 + 0x268)) * 0x118 +
                     *(long *)(*(long *)(pVVar21 + 600) +
                              ((uVar20 & 0xffffffff) / (ulong)*(uint *)(pVVar21 + 0x268)) * 8);
            iVar17 = *(int *)(lVar19 + 0x110);
            if (iVar34 != iVar17) {
              if (iVar17 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,in_R9);
              }
              goto LAB_00103c08;
            }
            local_a5 = *(char *)(lVar19 + 0x11);
            bVar13 = true;
            local_e8 = 0;
            goto LAB_00102b90;
          }
        }
        goto LAB_001027c0;
      }
      if (iVar34 == 6) {
        uVar20 = *(ulong *)(*(long *)(lVar19 + 0x60) + 0x18);
        uVar23 = (**(code **)(*plVar22 + 0x158))(plVar22,uVar20,0);
        uVar32 = (uint)uVar20;
        iVar34 = (int)(uVar20 >> 0x20);
        if ((uVar20 == 0) || (*(uint *)((long)plVar22 + 0x184) <= uVar32)) {
LAB_0010397c:
          uVar33 = 0;
          _err_print_error("particles_get_mode","drivers/gles3/storage/particles_storage.h",0x17d,
                           "Parameter \"particles\" is null.",0,0);
        }
        else {
          piVar30 = (int *)(((uVar20 & 0xffffffff) % (ulong)*(uint *)(plVar22 + 0x30)) * 0x210 +
                           *(long *)(plVar22[0x2e] +
                                    ((uVar20 & 0xffffffff) / (ulong)*(uint *)(plVar22 + 0x30)) * 8))
          ;
          iVar17 = piVar30[0x82];
          if (iVar17 != iVar34) {
            if (iVar17 + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,plVar22[0x2e]);
            }
            goto LAB_0010397c;
          }
          if (*piVar30 != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar31 = 0x598;
              pcVar26 = 
              "Condition \"particles_storage->particles_get_mode(particles) != RenderingServer::PARTICLES_MODE_2D\" is true. Breaking."
              ;
              goto LAB_00103149;
            }
            goto LAB_00103cf4;
          }
        }
        (**(code **)(*plVar22 + 0x120))(plVar22,uVar20);
        cVar15 = (**(code **)(*plVar22 + 0x100))(plVar22,uVar20);
        if (cVar15 == '\0') {
          RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
          iVar17 = (**(code **)(*plVar22 + 0x150))(plVar22,uVar20);
          if (iVar17 != 0) {
            if (uVar20 == 0) {
              _err_print_error("particles_get_amount","drivers/gles3/storage/particles_storage.h",
                               0x183,"Parameter \"particles\" is null.",0,0);
              goto LAB_00103c51;
            }
            if (uVar32 < *(uint *)((long)plVar22 + 0x184)) {
              lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(plVar22 + 0x30)) * 0x210 +
                       *(long *)(plVar22[0x2e] +
                                ((uVar20 & 0xffffffff) / (ulong)*(uint *)(plVar22 + 0x30)) * 8);
              iVar17 = *(int *)(lVar19 + 0x208);
              if (iVar17 != iVar34) {
                if (iVar17 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,plVar22);
                }
                goto LAB_00103c68;
              }
              uVar16 = *(uint *)(lVar19 + 0x18);
            }
            else {
LAB_00103c68:
              uVar33 = 0;
              _err_print_error("particles_get_amount","drivers/gles3/storage/particles_storage.h",
                               0x183,"Parameter \"particles\" is null.",0,0);
              uVar16 = 0;
            }
            if (*(uint *)((long)plVar22 + 0x184) <= uVar32) {
LAB_00103c51:
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            lVar19 = ((uVar20 & 0xffffffff) % (ulong)*(uint *)(plVar22 + 0x30)) * 0x210 +
                     *(long *)(plVar22[0x2e] +
                              ((uVar20 & 0xffffffff) / (ulong)*(uint *)(plVar22 + 0x30)) * 8);
            if (*(int *)(lVar19 + 0x208) != iVar34) {
              if (*(int *)(lVar19 + 0x208) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar33);
              }
              goto LAB_00103c51;
            }
            if ((*(int *)(lVar19 + 0x98) - 2U < 2) && (*(char *)(lVar19 + 0xec) != '\0')) {
              local_b0 = *(int *)(lVar19 + 0xe8);
            }
            else {
              local_b0 = *(int *)(lVar19 + 200);
            }
            local_e8 = 0;
            bVar13 = true;
            local_a5 = '\x01';
            local_a6 = '\x01';
            local_ac = 0xc;
            goto LAB_00102b90;
          }
        }
        goto LAB_001027c0;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar31 = 0x5af;
      pcVar26 = "Condition \"mesh.is_null()\" is true.";
LAB_00103149:
      _err_print_error("_render_batch","drivers/gles3/rasterizer_canvas_gles3.cpp",uVar31,pcVar26,0,
                       0);
      return;
    }
    goto LAB_00103cf4;
  }
LAB_001027c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103cf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_prepare_canvas_texture(RID, RenderingServer::CanvasItemTextureFilter,
   RenderingServer::CanvasItemTextureRepeat, unsigned int&, Vector2&) */

void __thiscall
RasterizerCanvasGLES3::_prepare_canvas_texture
          (RasterizerCanvasGLES3 *this,ulong param_2,undefined8 param_3,undefined8 param_4,
          uint *param_5,undefined8 *param_6)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  double dVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  do {
    lVar11 = GLES3::TextureStorage::get_singleton();
    if ((param_2 != 0) || (param_2 = *(ulong *)(this + 0x2002e0), param_2 != 0)) {
      iVar10 = (int)(param_2 >> 0x20);
      if ((uint)param_2 < *(uint *)(lVar11 + 0xf4)) {
        lVar14 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0xf0)) * 0xf0 +
                 *(long *)(*(long *)(lVar11 + 0xe0) +
                          ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0xf0)) * 8);
        iVar3 = *(int *)(lVar14 + 0xe8);
        if (iVar3 == iVar10) {
          if (*(char *)(lVar14 + 8) == '\0') {
LAB_00103dd3:
            puVar12 = *(ulong **)(lVar14 + 0xd8);
            if (puVar12 == (ulong *)0x0) {
              puVar12 = (ulong *)operator_new(0x38,"");
              uVar8 = _LC30;
              puVar12[1] = 0;
              puVar12[2] = 0;
              *(undefined4 *)(puVar12 + 5) = 0x3f800000;
              *(undefined8 *)((long)puVar12 + 0x2c) = 0;
              *(undefined4 *)(puVar12 + 3) = uVar8;
              *(undefined4 *)((long)puVar12 + 0x1c) = uVar8;
              *(undefined4 *)(puVar12 + 4) = uVar8;
              *(undefined4 *)((long)puVar12 + 0x24) = uVar8;
              *(ulong **)(lVar14 + 0xd8) = puVar12;
              *puVar12 = param_2;
              goto LAB_00103def;
            }
            param_2 = *puVar12;
            goto LAB_00103de6;
          }
          if (*(long *)(lVar14 + 0x10) != 0) {
            uVar13 = *(ulong *)(lVar14 + 0x10);
            if ((uint)uVar13 < *(uint *)(lVar11 + 0xf4)) {
              lVar14 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0xf0)) * 0xf0 +
                       *(long *)(*(long *)(lVar11 + 0xe0) +
                                ((uVar13 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0xf0)) * 8);
              iVar3 = *(int *)(lVar14 + 0xe8);
              if (iVar3 != (int)(uVar13 >> 0x20)) goto joined_r0x0010437c;
              goto LAB_00103dd3;
            }
          }
        }
        else {
joined_r0x0010437c:
          if (iVar3 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
        }
      }
      if ((uint)param_2 < *(uint *)(lVar11 + 0x9c)) {
        puVar12 = (ulong *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0x98)) * 0x40 +
                           *(long *)(*(long *)(lVar11 + 0x88) +
                                    ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0x98)) * 8))
        ;
        if ((int)puVar12[7] == iVar10) break;
        if ((int)puVar12[7] + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    param_2 = *(ulong *)(this + 0x2002e0);
  } while( true );
  param_2 = *puVar12;
LAB_00103de6:
  if (param_2 == 0) {
LAB_00104130:
    uVar13 = *(ulong *)(lVar11 + 0x18);
LAB_00104134:
    *puVar12 = uVar13;
    lVar14 = 0;
    if (*puVar12 == uVar13) goto LAB_00103ea1;
LAB_00104142:
    uVar13 = puVar12[1];
    uVar17 = *(undefined8 *)(lVar14 + 0x30);
    if (uVar13 != 0) goto LAB_00104154;
LAB_00103eb6:
    lVar14 = 0;
  }
  else {
LAB_00103def:
    if (*(uint *)(lVar11 + 0xf4) <= (uint)param_2) goto LAB_00104130;
    lVar14 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0xf0)) * 0xf0 +
             *(long *)(*(long *)(lVar11 + 0xe0) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0xf0)) * 8);
    iVar10 = *(int *)(lVar14 + 0xe8);
    if (iVar10 != (int)(param_2 >> 0x20)) {
LAB_00104118:
      if (0x7ffffffe < iVar10 + 0x80000000U) goto LAB_00104130;
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      uVar13 = *(ulong *)(lVar11 + 0x18);
      goto LAB_00104134;
    }
    if (*(char *)(lVar14 + 8) != '\0') {
      if ((*(long *)(lVar14 + 0x10) == 0) ||
         (uVar13 = *(ulong *)(lVar14 + 0x10), *(uint *)(lVar11 + 0xf4) <= (uint)uVar13))
      goto LAB_00104130;
      lVar14 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0xf0)) * 0xf0 +
               *(long *)(*(long *)(lVar11 + 0xe0) +
                        ((uVar13 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0xf0)) * 8);
      iVar10 = *(int *)(lVar14 + 0xe8);
      if (iVar10 != (int)(uVar13 >> 0x20)) goto LAB_00104118;
    }
    if (*puVar12 != *(ulong *)(lVar11 + 0x18)) goto LAB_00104142;
LAB_00103ea1:
    uVar13 = puVar12[1];
    uVar17 = _LC66;
    if (uVar13 == 0) goto LAB_00103eb6;
LAB_00104154:
    if (*(uint *)(lVar11 + 0xf4) <= (uint)uVar13) goto LAB_00103eb6;
    lVar14 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0xf0)) * 0xf0 +
             *(long *)(*(long *)(lVar11 + 0xe0) +
                      ((uVar13 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0xf0)) * 8);
    iVar10 = *(int *)(lVar14 + 0xe8);
    if (iVar10 == (int)(uVar13 >> 0x20)) {
      if (*(char *)(lVar14 + 8) != '\0') {
        if ((*(long *)(lVar14 + 0x10) == 0) ||
           (uVar13 = *(ulong *)(lVar14 + 0x10), *(uint *)(lVar11 + 0xf4) <= (uint)uVar13))
        goto LAB_00103eb6;
        lVar14 = ((uVar13 & 0xffffffff) % (ulong)*(uint *)(lVar11 + 0xf0)) * 0xf0 +
                 *(long *)(*(long *)(lVar11 + 0xe0) +
                          ((uVar13 & 0xffffffff) / (ulong)*(uint *)(lVar11 + 0xf0)) * 8);
        iVar10 = *(int *)(lVar14 + 0xe8);
        if (iVar10 != (int)(uVar13 >> 0x20)) goto LAB_001041f9;
      }
    }
    else {
LAB_001041f9:
      if (0x7ffffffe < iVar10 + 0x80000000U) goto LAB_00103eb6;
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      lVar14 = 0;
    }
  }
  uVar9 = *(uint *)(this + 0x288);
  uVar13 = (ulong)uVar9;
  fVar2 = *(float *)((long)puVar12 + 0x24);
  uVar4 = *(uint *)(this + 0x270);
  if (_LC67 <= (double)fVar2) {
    if (uVar4 <= uVar9) goto LAB_00104290;
    lVar11 = *(long *)(this + 0x278);
    puVar1 = (uint *)(lVar11 + 0x70 + uVar13 * 0x80);
    *puVar1 = *puVar1 & 0xfffffbff;
    uVar13 = (ulong)*(uint *)(this + 0x288);
    if (lVar14 != 0) goto LAB_00103f16;
LAB_00104278:
    if (uVar4 <= (uint)uVar13) goto LAB_00104290;
    puVar1 = (uint *)(lVar11 + 0x70 + uVar13 * 0x80);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  else {
    if (uVar4 <= uVar9) goto LAB_00104290;
    lVar11 = *(long *)(this + 0x278);
    puVar1 = (uint *)(lVar11 + 0x70 + uVar13 * 0x80);
    *puVar1 = *puVar1 | 0x400;
    uVar13 = (ulong)*(uint *)(this + 0x288);
    if (lVar14 == 0) goto LAB_00104278;
LAB_00103f16:
    if (uVar4 <= (uint)uVar13) goto LAB_00104290;
    puVar1 = (uint *)(lVar11 + 0x70 + uVar13 * 0x80);
    *puVar1 = *puVar1 | 0x200;
  }
  dVar7 = _LC68;
  iVar10 = 0;
  dVar15 = (double)fVar2 * _LC68;
  if ((0.0 <= dVar15) && (iVar10 = -0x1000000, dVar15 <= _LC68)) {
    iVar10 = (int)(long)dVar15 << 0x18;
  }
  uVar13 = (ulong)*(uint *)(this + 0x288);
  if (*(uint *)(this + 0x288) < uVar4) {
    dVar15 = (double)*(float *)(puVar12 + 4) * _LC68;
    *(int *)(lVar11 + 0x74 + uVar13 * 0x80) = iVar10;
    uVar9 = 0;
    if ((0.0 <= dVar15) && (uVar9 = 0xff0000, dVar15 <= dVar7)) {
      uVar9 = (int)(long)dVar15 << 0x10;
    }
    uVar13 = (ulong)*(uint *)(this + 0x288);
    if (*(uint *)(this + 0x288) < uVar4) {
      dVar15 = (double)*(float *)((long)puVar12 + 0x1c) * dVar7;
      puVar1 = (uint *)(lVar11 + 0x74 + uVar13 * 0x80);
      *puVar1 = *puVar1 | uVar9;
      uVar9 = 0;
      if ((0.0 <= dVar15) && (uVar9 = 0xff00, dVar15 <= dVar7)) {
        uVar9 = (int)(long)dVar15 << 8;
      }
      uVar13 = (ulong)*(uint *)(this + 0x288);
      if (*(uint *)(this + 0x288) < uVar4) {
        dVar15 = (double)*(float *)(puVar12 + 3) * dVar7;
        puVar1 = (uint *)(lVar11 + 0x74 + uVar13 * 0x80);
        *puVar1 = *puVar1 | uVar9;
        uVar9 = 0;
        if ((0.0 <= dVar15) && (uVar9 = 0xff, dVar15 <= dVar7)) {
          uVar9 = (uint)(long)dVar15;
        }
        uVar13 = (ulong)*(uint *)(this + 0x288);
        if (*(uint *)(this + 0x288) < uVar4) {
          uVar6 = CONCAT44(_UNK_0011cd94,_LC30);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar6;
          auVar18._0_4_ = (float)(int)uVar17;
          auVar18._4_4_ = (float)(int)((ulong)uVar17 >> 0x20);
          puVar1 = (uint *)(lVar11 + 0x74 + uVar13 * 0x80);
          *puVar1 = *puVar1 | uVar9;
          uVar9 = *param_5;
          auVar18._8_8_ = uVar6;
          auVar16 = divps(auVar16,auVar18);
          lVar11 = *(long *)(this + 0x290);
          *param_6 = auVar16._0_8_;
          *(long *)((ulong)uVar9 * 0x80 + lVar11 + 0x18) = auVar16._0_8_;
          return;
        }
      }
    }
  }
LAB_00104290:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar13,(ulong)uVar4,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::reset_canvas() */

void RasterizerCanvasGLES3::reset_canvas(void)

{
  (*_glad_glDisable)(0xb44);
  (*_glad_glDisable)(0xb71);
  (*_glad_glDisable)(0xc11);
  (*_glad_glEnable)(0xbe2);
  (*_glad_glBlendEquation)(0x8006);
  (*_glad_glBlendFuncSeparate)(0x302,0x303,0,1);
  (*_glad_glActiveTexture)(*(int *)(GLES3::Config::singleton + 8) + 0x84be);
  (*_glad_glBindTexture)(0xde1,0);
  (*_glad_glActiveTexture)(*(int *)(GLES3::Config::singleton + 8) + 0x84bd);
  (*_glad_glBindTexture)(0xde1,0);
  (*_glad_glActiveTexture)(0x84c0);
  (*_glad_glBindBuffer)(0x8892,0);
                    /* WARNING: Could not recover jumptable at 0x0010450f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_glad_glBindBuffer)(0x8893,0);
  return;
}



/* RasterizerCanvasGLES3::draw_lens_distortion_rect(Rect2 const&, float, float, Vector2 const&,
   float) */

void RasterizerCanvasGLES3::draw_lens_distortion_rect
               (Rect2 *param_1,float param_2,float param_3,Vector2 *param_4,float param_5)

{
  return;
}



/* RasterizerCanvasGLES3::set_time(double) */

void __thiscall RasterizerCanvasGLES3::set_time(RasterizerCanvasGLES3 *this,double param_1)

{
  *(double *)(this + 0x2d0) = param_1;
  return;
}



/* RasterizerCanvasGLES3::get_singleton() */

undefined8 RasterizerCanvasGLES3::get_singleton(void)

{
  return singleton;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::render_sdf(RID, RendererCanvasRender::LightOccluderInstance*) */

void __thiscall
RasterizerCanvasGLES3::render_sdf(RasterizerCanvasGLES3 *this,undefined8 param_2,long param_3)

{
  Version *pVVar1;
  RasterizerCanvasGLES3 *pRVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  long in_FS_OFFSET;
  char *pcVar22;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  ulong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  Vector2i local_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
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
  plVar9 = (long *)GLES3::TextureStorage::get_singleton();
  uVar8 = GLES3::TextureStorage::render_target_get_sdf_framebuffer(plVar9,param_2);
  _local_118 = (**(code **)(*plVar9 + 0x2b0))(plVar9,param_2);
  local_f8 = 0;
  local_108 = CONCAT44((float)(int)local_110 * 0.0,(float)(int)local_110);
  uStack_100 = CONCAT44((float)local_110._4_4_,(float)local_110._4_4_ * 0.0);
  local_f8 = Vector2i::operator_cast_to_Vector2(local_118);
  uStack_e0 = 0x4000000000000000;
  local_d8 = 0xbf800000bf800000;
  local_e8 = 0x40000000;
  Transform2D::affine_inverse();
  Transform2D::operator*((Transform2D *)&local_188,(Transform2D *)&local_e8);
  local_d8 = local_178;
  local_e8 = local_188;
  uStack_e0 = uStack_180;
  (*_glad_glBindFramebuffer)(0x8d40,uVar8);
  uVar10 = local_110;
  (*_glad_glViewport)(0,0,uVar10 & 0xffffffff,local_110._4_4_);
  (*_glad_glDepthMask)(0);
  (*_glad_glDisable)(0xb71);
  (*_glad_glDisable)(0xbe2);
  (*_glad_glDisable)(0xb44);
  (*_glad_glDisable)(0xc11);
  (*_glad_glClearColor)();
  (*_glad_glClear)(0x4000);
  pVVar1 = (Version *)(this + 0xb8);
  local_160 = 0;
  uVar10 = *(ulong *)(this + 0x1e8);
  if (*(int *)(this + 0x1d8) < 1) {
    _err_print_index_error
              ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,0,
               (long)*(int *)(this + 0x1d8),"p_variant","variant_count","",false,false);
    goto LAB_00105619;
  }
  if (uVar10 != 0) {
    pRVar2 = this + 0x10c;
    if ((uint)uVar10 < *(uint *)(this + 0x10c)) {
      uVar20 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
               *(long *)(*(long *)(this + 0xf8) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
      if (*(int *)(uVar20 + 0x78) == (int)(uVar10 >> 0x20)) {
        if (*(int *)(uVar20 + 0x68) == 0) {
          ShaderGLES3::_initialize_version(pVVar1);
          if (*(int *)(uVar20 + 0x68) == 0) goto LAB_001056bb;
        }
        uVar7 = local_160;
        plVar5 = *(long **)(uVar20 + 0x70);
        uVar3 = *(uint *)(plVar5 + 3);
        uVar11 = (ulong)uVar3;
        lVar13 = plVar5[2];
        uVar10 = local_160 * 0x3ffff - 1;
        uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
        uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
        uVar10 = uVar10 >> 0x16 ^ uVar10;
        uVar16 = uVar10 & 0xffffffff;
        if ((int)uVar10 == 0) {
          uVar16 = 1;
        }
        uVar10 = uVar16 % uVar11;
        uVar19 = *(uint *)(lVar13 + uVar10 * 4);
        if (uVar19 != 0) {
          uVar17 = 0;
          while ((uVar19 != (uint)uVar16 || (local_160 != *(ulong *)(plVar5[1] + uVar10 * 8)))) {
            uVar17 = uVar17 + 1;
            uVar10 = (ulong)((int)uVar10 + 1) % uVar11;
            uVar19 = *(uint *)(lVar13 + uVar10 * 4);
            if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17))
            goto LAB_00105750;
          }
          puVar21 = (undefined4 *)(*plVar5 + uVar10 * 0x38);
          if (puVar21 != (undefined4 *)0x0) {
            if (*(char *)(puVar21 + 0xc) == '\0') goto LAB_0010495c;
            uVar10 = *(long *)(this + 0x1c8) * 0x3ffff - 1;
            uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
            uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
            uVar10 = uVar10 >> 0x16 ^ uVar10;
            uVar20 = uVar10 & 0xffffffff;
            if ((int)uVar10 == 0) {
              uVar20 = 1;
            }
            uVar17 = 0;
            uVar10 = uVar20 % uVar11;
            uVar19 = *(uint *)(lVar13 + uVar10 * 4);
            if (uVar19 == 0) goto LAB_00105660;
            goto LAB_00104939;
          }
        }
LAB_00105750:
        local_128 = 0;
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        ShaderGLES3::_compile_specialization
                  ((Specialization *)pVVar1,(uint)(Specialization *)&local_158,(Version *)0x0,uVar20
                  );
        if (*(int *)(uVar20 + 0x68) == 0) {
LAB_001056bb:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,0,0,"p_index","count","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
        ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                   **)(uVar20 + 0x70),&local_160,(Specialization *)&local_158);
        if (*(int *)(uVar20 + 0x68) == 0) goto LAB_001056bb;
        plVar5 = *(long **)(uVar20 + 0x70);
        uVar3 = *(uint *)(plVar5 + 3);
        uVar10 = uVar16 % (ulong)uVar3;
        uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
        if (uVar19 != 0) {
          uVar17 = 0;
LAB_00105851:
          if ((uVar19 != (uint)uVar16) || (uVar7 != *(ulong *)(plVar5[1] + uVar10 * 8)))
          goto LAB_00105818;
          puVar21 = (undefined4 *)(*plVar5 + uVar10 * 0x38);
          if (this[0x158] != (RasterizerCanvasGLES3)0x0) {
            ShaderGLES3::_save_to_cache(pVVar1);
          }
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_158);
LAB_00104953:
          if (puVar21 == (undefined4 *)0x0) goto LAB_00105660;
LAB_0010495c:
          if (*(char *)((long)puVar21 + 0x31) == '\0') goto LAB_00105660;
          (*_glad_glUseProgram)(*puVar21);
          *(undefined4 **)(this + 0x1e0) = puVar21;
          Projection::Projection((Projection *)&local_c8);
          pcVar6 = _glad_glUniformMatrix4fv;
          uVar10 = *(ulong *)(this + 0x1e8);
          if (*(int *)(this + 0x188) < 1) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                       (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
            goto LAB_00104c1a;
          }
          if ((uVar10 == 0) || (*(uint *)(this + 0x10c) <= (uint)uVar10)) {
LAB_00105e00:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                             "Parameter \"version\" is null.",0,0);
          }
          else {
            lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                     *(long *)(*(long *)(this + 0xf8) +
                              ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
            iVar4 = *(int *)(lVar13 + 0x78);
            if (iVar4 != (int)(uVar10 >> 0x20)) {
              if (iVar4 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00105e00;
            }
            if (*(int *)(lVar13 + 0x68) < 1) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                         (long)*(int *)(lVar13 + 0x68),"p_variant","int(version->variants.size())",
                         "",false,false);
              goto LAB_00104c1a;
            }
            plVar5 = *(long **)(lVar13 + 0x70);
            uVar3 = *(uint *)(plVar5 + 3);
            uVar20 = 0x2aeaa2ab % (ulong)uVar3;
            uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
            if (uVar19 == 0) {
LAB_001060d0:
              _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                               "Parameter \"spec\" is null.",0,0);
            }
            else {
              uVar17 = 0;
              while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar20 * 8) != 0))) {
                uVar17 = uVar17 + 1;
                uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar3;
                uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
                if ((uVar19 == 0) || (((uVar3 + (int)uVar20) - uVar19 % uVar3) % uVar3 < uVar17))
                goto LAB_001060d0;
              }
              lVar13 = *plVar5 + uVar20 * 0x38;
              if (lVar13 == 0) goto LAB_001060d0;
              if (*(int *)(lVar13 + 0x10) < 1) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                           (long)*(int *)(lVar13 + 0x10),"p_which",
                           "int(spec->uniform_location.size())","",false,false);
              }
              else if (-1 < **(int **)(lVar13 + 0x18)) {
                local_88 = local_c8;
                uStack_80 = uStack_c0;
                local_78 = local_b8;
                uStack_70 = uStack_b0;
                local_68 = local_a8;
                uStack_60 = uStack_a0;
                local_58 = local_98;
                uStack_50 = uStack_90;
                if (*(int *)(this + 0x188) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                             (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
LAB_001064c6:
                  uVar8 = 0xffffffff;
                }
                else {
                  if (*(uint *)(this + 0x10c) <= (uint)uVar10) {
LAB_00106511:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                     "Parameter \"version\" is null.",0,0);
                    goto LAB_001064c6;
                  }
                  lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                           *(long *)(*(long *)(this + 0xf8) +
                                    ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                  if (iVar4 != *(int *)(lVar13 + 0x78)) {
                    if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00106511;
                  }
                  if (*(int *)(lVar13 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar13 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_001064c6;
                  }
                  plVar5 = *(long **)(lVar13 + 0x70);
                  uVar3 = *(uint *)(plVar5 + 3);
                  uVar10 = (ulong)uVar19 % (ulong)uVar3;
                  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                  if (uVar19 == 0) {
LAB_00106748:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0,0);
                    goto LAB_001064c6;
                  }
                  uVar17 = 0;
                  while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar10 * 8) != 0))) {
                    uVar17 = uVar17 + 1;
                    uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar3;
                    uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                    if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17)
                       ) goto LAB_00106748;
                  }
                  lVar13 = *plVar5 + uVar10 * 0x38;
                  if (lVar13 == 0) goto LAB_00106748;
                  if (*(int *)(lVar13 + 0x10) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                    goto LAB_001064c6;
                  }
                  uVar8 = **(undefined4 **)(lVar13 + 0x18);
                }
                (*pcVar6)(uVar8,1,0,(Transform2D *)&local_88);
              }
            }
          }
LAB_00104c1a:
          Projection::~Projection((Projection *)&local_c8);
          pcVar6 = _glad_glUniform2f;
          uVar10 = *(ulong *)(this + 0x1e8);
          if (*(int *)(this + 0x188) < 4) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,
                       (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
            goto LAB_00104e60;
          }
          if (uVar10 == 0) {
LAB_00105d20:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                             "Parameter \"version\" is null.",0,0);
          }
          else {
            if (*(uint *)(this + 0x10c) <= (uint)uVar10) goto LAB_00105d20;
            lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                     *(long *)(*(long *)(this + 0xf8) +
                              ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
            iVar4 = *(int *)(lVar13 + 0x78);
            if (iVar4 != (int)(uVar10 >> 0x20)) {
              if (iVar4 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00105d20;
            }
            if (*(int *)(lVar13 + 0x68) < 1) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                         (long)*(int *)(lVar13 + 0x68),"p_variant","int(version->variants.size())",
                         "",false,false);
              goto LAB_00104e60;
            }
            plVar5 = *(long **)(lVar13 + 0x70);
            uVar3 = *(uint *)(plVar5 + 3);
            uVar20 = 0x2aeaa2ab % (ulong)uVar3;
            uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
            if (uVar19 == 0) {
LAB_00105fc0:
              _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                               "Parameter \"spec\" is null.",0,0);
            }
            else {
              uVar17 = 0;
              while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar20 * 8) != 0))) {
                uVar17 = uVar17 + 1;
                uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar3;
                uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
                if ((uVar19 == 0) || (((uVar3 + (int)uVar20) - uVar19 % uVar3) % uVar3 < uVar17))
                goto LAB_00105fc0;
              }
              lVar13 = *plVar5 + uVar20 * 0x38;
              if (lVar13 == 0) goto LAB_00105fc0;
              if (*(int *)(lVar13 + 0x10) < 4) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,3,
                           (long)*(int *)(lVar13 + 0x10),"p_which",
                           "int(spec->uniform_location.size())","",false,false);
              }
              else if (-1 < *(int *)(*(long *)(lVar13 + 0x18) + 0xc)) {
                if (*(int *)(this + 0x188) < 4) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,
                             (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
LAB_0010643d:
                  uVar8 = 0xffffffff;
                }
                else {
                  if (*(uint *)(this + 0x10c) <= (uint)uVar10) {
LAB_00106579:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                     "Parameter \"version\" is null.",0,0);
                    goto LAB_0010643d;
                  }
                  lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                           *(long *)(*(long *)(this + 0xf8) +
                                    ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                  if (iVar4 != *(int *)(lVar13 + 0x78)) {
                    if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_00106579;
                  }
                  if (*(int *)(lVar13 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar13 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_0010643d;
                  }
                  plVar5 = *(long **)(lVar13 + 0x70);
                  uVar3 = *(uint *)(plVar5 + 3);
                  uVar10 = (ulong)uVar19 % (ulong)uVar3;
                  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                  if (uVar19 == 0) {
LAB_001066e8:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0,0);
                    goto LAB_0010643d;
                  }
                  uVar17 = 0;
                  while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar10 * 8) != 0))) {
                    uVar17 = uVar17 + 1;
                    uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar3;
                    uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                    if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17)
                       ) goto LAB_001066e8;
                  }
                  lVar13 = *plVar5 + uVar10 * 0x38;
                  if (lVar13 == 0) goto LAB_001066e8;
                  if (*(int *)(lVar13 + 0x10) < 4) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,3,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                    goto LAB_0010643d;
                  }
                  uVar8 = *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0xc);
                }
                (*pcVar6)(uVar8);
              }
            }
          }
LAB_00104e60:
          pcVar6 = _glad_glUniform1f;
          uVar10 = *(ulong *)(this + 0x1e8);
          if (*(int *)(this + 0x188) < 5) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                       (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
            goto LAB_00105095;
          }
          if (uVar10 == 0) {
LAB_00105d90:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                             "Parameter \"version\" is null.",0,0);
          }
          else {
            if (*(uint *)(this + 0x10c) <= (uint)uVar10) goto LAB_00105d90;
            lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                     *(long *)(*(long *)(this + 0xf8) +
                              ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
            iVar4 = *(int *)(lVar13 + 0x78);
            if (iVar4 != (int)(uVar10 >> 0x20)) {
              if (iVar4 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00105d90;
            }
            if (*(int *)(lVar13 + 0x68) < 1) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                         (long)*(int *)(lVar13 + 0x68),"p_variant","int(version->variants.size())",
                         "",false,false);
              goto LAB_00105095;
            }
            plVar5 = *(long **)(lVar13 + 0x70);
            uVar3 = *(uint *)(plVar5 + 3);
            uVar20 = 0x2aeaa2ab % (ulong)uVar3;
            uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
            if (uVar19 == 0) {
LAB_00105ff0:
              _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                               "Parameter \"spec\" is null.",0,0);
            }
            else {
              uVar17 = 0;
              while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar20 * 8) != 0))) {
                uVar17 = uVar17 + 1;
                uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar3;
                uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
                if ((uVar19 == 0) || (((uVar3 + (int)uVar20) - uVar19 % uVar3) % uVar3 < uVar17))
                goto LAB_00105ff0;
              }
              lVar13 = *plVar5 + uVar20 * 0x38;
              if (lVar13 == 0) goto LAB_00105ff0;
              if (*(int *)(lVar13 + 0x10) < 5) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                           (long)*(int *)(lVar13 + 0x10),"p_which",
                           "int(spec->uniform_location.size())","",false,false);
              }
              else if (-1 < *(int *)(*(long *)(lVar13 + 0x18) + 0x10)) {
                if (*(int *)(this + 0x188) < 5) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                             (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
LAB_00106483:
                  uVar8 = 0xffffffff;
                }
                else {
                  if (*(uint *)(this + 0x10c) <= (uint)uVar10) {
LAB_001065e2:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                     "Parameter \"version\" is null.",0,0);
                    goto LAB_00106483;
                  }
                  lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                           *(long *)(*(long *)(this + 0xf8) +
                                    ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                  if (iVar4 != *(int *)(lVar13 + 0x78)) {
                    if (*(int *)(lVar13 + 0x78) + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_001065e2;
                  }
                  if (*(int *)(lVar13 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar13 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                    goto LAB_00106483;
                  }
                  plVar5 = *(long **)(lVar13 + 0x70);
                  uVar3 = *(uint *)(plVar5 + 3);
                  uVar10 = (ulong)uVar19 % (ulong)uVar3;
                  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                  if (uVar19 == 0) {
LAB_00106718:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0,0);
                    goto LAB_00106483;
                  }
                  uVar17 = 0;
                  while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar10 * 8) != 0))) {
                    uVar17 = uVar17 + 1;
                    uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar3;
                    uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                    if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17)
                       ) goto LAB_00106718;
                  }
                  lVar13 = *plVar5 + uVar10 * 0x38;
                  if (lVar13 == 0) goto LAB_00106718;
                  if (*(int *)(lVar13 + 0x10) < 5) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                               (long)*(int *)(lVar13 + 0x10),"p_which",
                               "int(spec->uniform_location.size())","",false,false);
                    goto LAB_00106483;
                  }
                  uVar8 = *(undefined4 *)(*(long *)(lVar13 + 0x18) + 0x10);
                }
                (*pcVar6)(0,uVar8);
              }
            }
          }
LAB_00105095:
          if (param_3 == 0) goto LAB_001055f1;
LAB_001050a0:
          uVar10 = *(ulong *)(param_3 + 0x18);
          if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)(this + 0x7c))) {
            lVar13 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x30 +
                     *(long *)(*(long *)(this + 0x68) +
                              ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
            if (*(int *)(lVar13 + 0x2c) != (int)(uVar10 >> 0x20)) {
              if (*(int *)(lVar13 + 0x2c) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_001055e1;
            }
            if ((*(int *)(lVar13 + 0x20) == 0) || (*(char *)(param_3 + 0x7c) == '\0'))
            goto LAB_001055e1;
            Transform2D::operator*((Transform2D *)&local_88,(Transform2D *)&local_e8);
            pcVar6 = _glad_glUniform4f;
            uVar10 = *(ulong *)(this + 0x1e8);
            if (*(int *)(this + 0x188) < 2) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                         (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
            }
            else {
              if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)pRVar2)) {
                lVar14 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                         *(long *)(*(long *)(this + 0xf8) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                iVar4 = *(int *)(lVar14 + 0x78);
                if (iVar4 == (int)(uVar10 >> 0x20)) {
                  if (*(int *)(lVar14 + 0x68) < 1) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                               (long)*(int *)(lVar14 + 0x68),"p_variant",
                               "int(version->variants.size())","",false,false);
                  }
                  else {
                    plVar5 = *(long **)(lVar14 + 0x70);
                    uVar3 = *(uint *)(plVar5 + 3);
                    uVar20 = 0x2aeaa2ab % (ulong)uVar3;
                    uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
                    if (uVar19 != 0) {
                      uVar17 = 0;
                      while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar20 * 8) != 0))) {
                        uVar17 = uVar17 + 1;
                        uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar3;
                        uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
                        if ((uVar19 == 0) ||
                           (((uVar3 + (int)uVar20) - uVar19 % uVar3) % uVar3 < uVar17))
                        goto LAB_00105b20;
                      }
                      lVar14 = *plVar5 + uVar20 * 0x38;
                      if (lVar14 != 0) {
                        if (*(int *)(lVar14 + 0x10) < 2) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,1,
                                     (long)*(int *)(lVar14 + 0x10),"p_which",
                                     "int(spec->uniform_location.size())","",false,false);
                          goto LAB_00105364;
                        }
                        if (*(int *)(*(long *)(lVar14 + 0x18) + 4) < 0) goto LAB_00105364;
                        if (*(int *)(this + 0x188) < 2) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,
                                     (long)*(int *)(this + 0x188),"p_which","uniform_count","",false
                                     ,false);
                          goto LAB_00105fae;
                        }
                        if ((uint)uVar10 < *(uint *)pRVar2) {
                          lVar14 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                                   *(long *)(*(long *)(this + 0xf8) +
                                            ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108))
                                            * 8);
                          if (iVar4 == *(int *)(lVar14 + 0x78)) {
                            iVar4 = *(int *)(lVar14 + 0x68);
                            if (iVar4 < 1) {
                              lVar14 = 0;
                              pcVar18 = "p_variant";
                              iVar12 = 0xe7;
                              pcVar22 = "int(version->variants.size())";
                              goto LAB_0010629f;
                            }
                            plVar5 = *(long **)(lVar14 + 0x70);
                            uVar3 = *(uint *)(plVar5 + 3);
                            uVar10 = (ulong)uVar19 % (ulong)uVar3;
                            uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                            if (uVar19 == 0) goto LAB_00106360;
                            uVar17 = 0;
                            goto LAB_00105319;
                          }
                          if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                        }
                        pcVar18 = "Parameter \"version\" is null.";
                        uVar15 = 0xe6;
                        goto LAB_001060a3;
                      }
                    }
LAB_00105b20:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  goto LAB_00105364;
                }
                if (iVar4 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                               "Parameter \"version\" is null.",0);
            }
            goto LAB_00105364;
          }
          goto LAB_001055e1;
        }
LAB_00105642:
        if (this[0x158] == (RasterizerCanvasGLES3)0x0) {
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_158);
        }
        else {
          ShaderGLES3::_save_to_cache(pVVar1);
          ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_158);
        }
        goto LAB_00105660;
      }
      if (*(int *)(uVar20 + 0x78) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                   "Parameter \"version\" is null.",0,0);
  goto LAB_00105619;
LAB_00105319:
  if ((uVar19 != 0x2aeaa2ab) || (*(long *)(plVar5[1] + uVar10 * 8) != 0)) goto LAB_001052e0;
  lVar14 = *plVar5 + uVar10 * 0x38;
  if (lVar14 != 0) {
    iVar4 = *(int *)(lVar14 + 0x10);
    if (iVar4 < 2) {
      lVar14 = 1;
      iVar12 = 0xea;
      pcVar18 = "p_which";
      pcVar22 = "int(spec->uniform_location.size())";
LAB_0010629f:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar12,lVar14,(long)iVar4,
                 pcVar18,pcVar22,"",false,false);
      goto LAB_00105fae;
    }
    uVar8 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 4);
    goto LAB_0010535d;
  }
  goto LAB_00106360;
LAB_001052e0:
  uVar17 = uVar17 + 1;
  uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar3;
  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
  if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17))
  goto LAB_00106360;
  goto LAB_00105319;
LAB_00106360:
  pcVar18 = "Parameter \"spec\" is null.";
  uVar15 = 0xe9;
LAB_001060a3:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar15,pcVar18,0);
LAB_00105fae:
  uVar8 = 0xffffffff;
LAB_0010535d:
  (*pcVar6)(uVar8);
LAB_00105364:
  pcVar6 = _glad_glUniform4f;
  uVar10 = *(ulong *)(this + 0x1e8);
  if (*(int *)(this + 0x188) < 3) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
               (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
  }
  else {
    if ((uVar10 != 0) && ((uint)uVar10 < *(uint *)pRVar2)) {
      lVar14 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
               *(long *)(*(long *)(this + 0xf8) +
                        ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
      iVar4 = *(int *)(lVar14 + 0x78);
      if (iVar4 == (int)(uVar10 >> 0x20)) {
        if (*(int *)(lVar14 + 0x68) < 1) {
          _err_print_index_error
                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                     (long)*(int *)(lVar14 + 0x68),"p_variant","int(version->variants.size())","",
                     false,false);
        }
        else {
          plVar5 = *(long **)(lVar14 + 0x70);
          uVar3 = *(uint *)(plVar5 + 3);
          uVar20 = 0x2aeaa2ab % (ulong)uVar3;
          uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
          if (uVar19 != 0) {
            uVar17 = 0;
            while ((uVar19 != 0x2aeaa2ab || (*(long *)(plVar5[1] + uVar20 * 8) != 0))) {
              uVar17 = uVar17 + 1;
              uVar20 = (ulong)((int)uVar20 + 1) % (ulong)uVar3;
              uVar19 = *(uint *)(plVar5[2] + uVar20 * 4);
              if ((uVar19 == 0) || (((uVar3 + (int)uVar20) - uVar19 % uVar3) % uVar3 < uVar17))
              goto LAB_00105af0;
            }
            lVar14 = *plVar5 + uVar20 * 0x38;
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x10) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                           (long)*(int *)(lVar14 + 0x10),"p_which",
                           "int(spec->uniform_location.size())","",false,false);
                goto LAB_001055bc;
              }
              if (*(int *)(*(long *)(lVar14 + 0x18) + 8) < 0) goto LAB_001055bc;
              if (*(int *)(this + 0x188) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                           (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
                goto LAB_00105f44;
              }
              if ((uint)uVar10 < *(uint *)pRVar2) {
                lVar14 = ((uVar10 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                         *(long *)(*(long *)(this + 0xf8) +
                                  ((uVar10 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                if (iVar4 == *(int *)(lVar14 + 0x78)) {
                  iVar4 = *(int *)(lVar14 + 0x68);
                  if (iVar4 < 1) {
                    lVar14 = 0;
                    pcVar18 = "p_variant";
                    iVar12 = 0xe7;
                    pcVar22 = "int(version->variants.size())";
                    goto LAB_00106301;
                  }
                  plVar5 = *(long **)(lVar14 + 0x70);
                  uVar3 = *(uint *)(plVar5 + 3);
                  uVar10 = (ulong)uVar19 % (ulong)uVar3;
                  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
                  if (uVar19 == 0) goto LAB_00106330;
                  uVar17 = 0;
                  goto LAB_00105571;
                }
                if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              pcVar18 = "Parameter \"version\" is null.";
              uVar15 = 0xe6;
              goto LAB_00106181;
            }
          }
LAB_00105af0:
          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                           "Parameter \"spec\" is null.",0);
        }
        goto LAB_001055bc;
      }
      if (iVar4 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_001055bc:
  (*_glad_glBindVertexArray)(*(undefined4 *)(lVar13 + 0x20));
  (*_glad_glDrawElements)
            ((-(*(char *)(lVar13 + 0x28) == '\0') & 3U) + 1,*(undefined4 *)(lVar13 + 0x18),0x1405,0)
  ;
LAB_001055e1:
  param_3 = *(long *)(param_3 + 0x88);
  if (param_3 == 0) goto LAB_001055f1;
  goto LAB_001050a0;
LAB_00105571:
  if ((uVar19 != 0x2aeaa2ab) || (*(long *)(plVar5[1] + uVar10 * 8) != 0)) goto LAB_00105538;
  lVar14 = *plVar5 + uVar10 * 0x38;
  if (lVar14 != 0) {
    iVar4 = *(int *)(lVar14 + 0x10);
    if (iVar4 < 3) {
      lVar14 = 2;
      iVar12 = 0xea;
      pcVar18 = "p_which";
      pcVar22 = "int(spec->uniform_location.size())";
LAB_00106301:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar12,lVar14,(long)iVar4,
                 pcVar18,pcVar22,"",false,false);
      goto LAB_00105f44;
    }
    uVar8 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 8);
    goto LAB_001055b5;
  }
  goto LAB_00106330;
LAB_00105538:
  uVar17 = uVar17 + 1;
  uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar3;
  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
  if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17))
  goto LAB_00106330;
  goto LAB_00105571;
LAB_00106330:
  pcVar18 = "Parameter \"spec\" is null.";
  uVar15 = 0xe9;
LAB_00106181:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar15,pcVar18,0);
LAB_00105f44:
  uVar8 = 0xffffffff;
LAB_001055b5:
  (*pcVar6)(uVar8);
  goto LAB_001055bc;
LAB_001055f1:
  GLES3::TextureStorage::render_target_sdf_process(plVar9,param_2);
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
  goto LAB_00105619;
LAB_00105818:
  uVar17 = uVar17 + 1;
  uVar10 = (ulong)((int)uVar10 + 1) % (ulong)uVar3;
  uVar19 = *(uint *)(plVar5[2] + uVar10 * 4);
  if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17))
  goto LAB_00105642;
  goto LAB_00105851;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar10 = (ulong)((int)uVar10 + 1) % uVar11;
    uVar19 = *(uint *)(lVar13 + uVar10 * 4);
    if ((uVar19 == 0) || (((uVar3 + (int)uVar10) - uVar19 % uVar3) % uVar3 < uVar17)) break;
LAB_00104939:
    if ((uVar19 == (uint)uVar20) && (*(long *)(this + 0x1c8) == *(long *)(plVar5[1] + uVar10 * 8)))
    {
      puVar21 = (undefined4 *)(*plVar5 + uVar10 * 0x38);
      goto LAB_00104953;
    }
  }
LAB_00105660:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00105619:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_update_shadow_atlas() */

void __thiscall RasterizerCanvasGLES3::_update_shadow_atlas(RasterizerCanvasGLES3 *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  lVar2 = GLES3::Config::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x2a8) != 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00106d13;
  }
  (*_glad_glActiveTexture)(0x84c0);
  (*_glad_glGenFramebuffers)(1,this + 0x2a8);
  (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x2a8));
  (*_glad_glGenRenderbuffers)(1,this + 0x2a4);
  (*_glad_glBindRenderbuffer)(0x8d41,*(undefined4 *)(this + 0x2a4));
  (*_glad_glRenderbufferStorage)
            (0x8d41,0x81a6,*(undefined4 *)(this + 0x2ac),*(int *)(this + 0x250) * 2);
  (*_glad_glFramebufferRenderbuffer)(0x8d40,0x8d00,0x8d41,*(undefined4 *)(this + 0x2a4));
  (*_glad_glGenTextures)(1,this + 0x2a0);
  (*_glad_glBindTexture)(0xde1,*(undefined4 *)(this + 0x2a0));
  if (*(char *)(lVar2 + 0x70) == '\0') {
    (*_glad_glTexImage2D)
              (0xde1,0,0x8058,*(undefined4 *)(this + 0x2ac),*(int *)(this + 0x250) * 2,0,0x1908,
               0x1401,0);
  }
  else {
    (*_glad_glTexImage2D)
              (0xde1,0,0x822e,*(undefined4 *)(this + 0x2ac),*(int *)(this + 0x250) * 2,0,0x1903,
               0x1406,0);
  }
  (*_glad_glTexParameteri)(0xde1,0x2800,0x2601);
  (*_glad_glTexParameteri)(0xde1,0x2801,0x2601);
  (*_glad_glTexParameteri)(0xde1,0x2802,0x2901);
  (*_glad_glTexParameteri)(0xde1,0x2803,0x2901);
  (*_glad_glTexParameteri)(0xde1,0x813c,0);
  (*_glad_glTexParameteri)(0xde1,0x813d,1);
  (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,*(undefined4 *)(this + 0x2a0),0);
  iVar4 = (*_glad_glCheckFramebufferStatus)(0x8d40);
  if (iVar4 != 0x8cd5) {
    (*_glad_glDeleteFramebuffers)(1,this + 0x2a8);
    (*_glad_glDeleteTextures)(1,this + 0x2a0);
    (*_glad_glDeleteRenderbuffers)(1,this + 0x2a4);
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined8 *)(this + 0x2a0) = 0;
    GLES3::TextureStorage::get_singleton();
    if (iVar4 == 0x8cd6) {
      local_48 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
      local_40 = 0x24;
LAB_00106c8e:
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
    }
    else {
      if (iVar4 == 0x8cd7) {
        local_48 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
        local_40 = 0x2c;
        goto LAB_00106c8e;
      }
      if (iVar4 == 0x8cdb) {
        local_48 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
        local_40 = 0x25;
        goto LAB_00106c8e;
      }
      if (iVar4 == 0x8cdc) {
        local_48 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
        local_40 = 0x25;
        goto LAB_00106c8e;
      }
      itos((long)&local_50);
    }
    operator+((char *)&local_48,
              (String_conflict *)"Could not create CanvasItem shadow atlas, status: ");
    _err_print_error("_update_shadow_atlas","drivers/gles3/rasterizer_canvas_gles3.cpp",0x771,
                     &local_48,0,1);
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
  lVar2 = GLES3::Utilities::singleton;
  local_48 = "2D shadow atlas texture";
  local_50 = 0;
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_50);
  uVar6 = *(int *)(this + 0x2ac) * *(int *)(this + 0x250) * 8;
  local_48 = (char *)CONCAT44(local_48._4_4_,*(undefined4 *)(this + 0x2a0));
  plVar1 = (long *)(lVar2 + 0x108);
  *plVar1 = *plVar1 + (ulong)uVar6;
  puVar5 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                   ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                 *)(lVar2 + 200),(uint *)&local_48);
  lVar2 = local_50;
  *puVar5 = uVar6;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
    return;
  }
LAB_00106d13:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::light_update_shadow(RID, int, Transform2D const&, int, float, float,
   RendererCanvasRender::LightOccluderInstance*, Rect2 const&) */

void RasterizerCanvasGLES3::light_update_shadow
               (float param_1,float param_2,RasterizerCanvasGLES3 *param_3,ulong param_4,int param_5
               ,Transform2D *param_6,uint param_7,long param_8)

{
  Version *pVVar1;
  RasterizerCanvasGLES3 *pRVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  Projection *this;
  ulong uVar19;
  undefined4 uVar20;
  char *pcVar21;
  uint uVar22;
  char *pcVar23;
  uint uVar24;
  long *plVar25;
  undefined4 *puVar26;
  long in_FS_OFFSET;
  float fVar27;
  char *pcVar28;
  int local_424;
  long local_420;
  ulong local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined2 local_398;
  undefined8 local_388;
  undefined8 uStack_380;
  Vector4 local_378 [16];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  Vector4 local_348 [16];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  Vector4 local_2f8 [16];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  Vector4 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  Projection local_288 [64];
  Projection local_248 [64];
  Projection local_208 [64];
  Projection local_1c8 [64];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  Projection local_148 [8];
  undefined8 auStack_140 [4];
  Projection aPStack_120 [8];
  Projection aPStack_118 [8];
  Projection aPStack_110 [8];
  Projection local_108 [64];
  Projection local_c8 [64];
  Projection local_88 [64];
  Projection local_48 [8];
  long local_40;
  
  lVar14 = GLES3::Config::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == 0) || (*(uint *)(param_3 + 0x24) <= (uint)param_4)) {
LAB_00118cd8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) +
                   ((param_4 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x20)) * 8) +
          ((param_4 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x20)) * 0x38;
  if (*(int *)(lVar6 + 0x30) != (int)(param_4 >> 0x20)) {
    if (*(int *)(lVar6 + 0x30) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,GLES3::Config::singleton);
    }
    goto LAB_00118cd8;
  }
  if (*(char *)(lVar6 + 8) == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar23 = "Condition \"!cl->shadow.enabled\" is true.";
      uVar16 = 0x66f;
      pcVar28 = "drivers/gles3/rasterizer_canvas_gles3.cpp";
      pcVar21 = "light_update_shadow";
      goto LAB_001082ff;
    }
    goto LAB_00109567;
  }
  param_5 = param_5 * 2;
  _update_shadow_atlas(param_3);
  uVar20 = *(undefined4 *)(param_3 + 0x2a8);
  *(ulong *)(lVar6 + 0xc) =
       CONCAT44((float)(param_5 + 1) / (float)(uint)(*(int *)(param_3 + 0x250) * 2),param_2);
  pVVar1 = (Version *)(param_3 + 0xb8);
  (*_glad_glBindFramebuffer)(0x8d40,uVar20);
  (*_glad_glViewport)(0,param_5,*(undefined4 *)(param_3 + 0x2ac),2);
  (*_glad_glDepthMask)(1);
  (*_glad_glEnable)(0xb71);
  (*_glad_glDepthFunc)(0x201);
  (*_glad_glDisable)(0xbe2);
  (*_glad_glEnable)(0xc11);
  (*_glad_glScissor)(0,param_5,*(undefined4 *)(param_3 + 0x2ac),2);
  (*_glad_glClearColor)();
  RasterizerGLES3::clear_depth(_LC30);
  (*_glad_glClear)(0x4100);
  (*_glad_glCullFace)(0x405);
  (*_glad_glDisable)(0xb44);
  local_3d0 = 0;
  uVar8 = *(ulong *)(param_3 + 0x1e8);
  uVar12 = 2 - *(byte *)(lVar14 + 0x70);
  if ((int)uVar12 < *(int *)(param_3 + 0x1d8)) {
    if (uVar8 != 0) {
      pRVar2 = param_3 + 0x10c;
      if ((uint)uVar8 < *(uint *)(param_3 + 0x10c)) {
        uVar19 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                 *(long *)(*(long *)(param_3 + 0xf8) +
                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
        if (*(int *)(uVar19 + 0x78) == (int)(uVar8 >> 0x20)) {
          uVar3 = *(uint *)(uVar19 + 0x68);
          if (uVar3 == 0) {
            ShaderGLES3::_initialize_version(pVVar1);
            uVar3 = *(uint *)(uVar19 + 0x68);
          }
          uVar8 = local_3d0;
          uVar7 = (ulong)uVar3;
          if (uVar3 <= uVar12) {
            uVar11 = (ulong)uVar12;
            goto LAB_0010822e;
          }
          uVar11 = (ulong)uVar12;
          lVar6 = uVar11 * 0x20;
          plVar25 = (long *)(*(long *)(uVar19 + 0x70) + lVar6);
          uVar3 = *(uint *)(plVar25 + 3);
          uVar10 = (ulong)uVar3;
          lVar14 = plVar25[2];
          uVar7 = local_3d0 * 0x3ffff - 1;
          uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
          uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
          uVar7 = uVar7 >> 0x16 ^ uVar7;
          uVar17 = uVar7 & 0xffffffff;
          if ((int)uVar7 == 0) {
            uVar17 = 1;
          }
          uVar7 = uVar17 % uVar10;
          uVar24 = *(uint *)(lVar14 + uVar7 * 4);
          if (uVar24 != 0) {
            uVar22 = 0;
            while ((uVar24 != (uint)uVar17 || (local_3d0 != *(ulong *)(plVar25[1] + uVar7 * 8)))) {
              uVar22 = uVar22 + 1;
              uVar7 = (ulong)((int)uVar7 + 1) % uVar10;
              uVar24 = *(uint *)(lVar14 + uVar7 * 4);
              if ((uVar24 == 0) || (((uVar3 + (int)uVar7) - uVar24 % uVar3) % uVar3 < uVar22))
              goto LAB_00108390;
            }
            puVar26 = (undefined4 *)(*plVar25 + uVar7 * 0x38);
            if (puVar26 != (undefined4 *)0x0) {
              if (*(char *)(puVar26 + 0xc) == '\0') goto LAB_00107124;
              uVar8 = *(long *)(param_3 + 0x1c8) * 0x3ffff - 1;
              uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
              uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
              uVar8 = uVar8 >> 0x16 ^ uVar8;
              uVar19 = uVar8 & 0xffffffff;
              if ((int)uVar8 == 0) {
                uVar19 = 1;
              }
              uVar22 = 0;
              uVar8 = uVar19 % uVar10;
              uVar24 = *(uint *)(lVar14 + uVar8 * 4);
              if (uVar24 == 0) goto LAB_00108270;
              goto LAB_00107101;
            }
          }
LAB_00108390:
          local_3c8 = 0;
          local_3c0 = 0;
          local_3b8 = 0;
          local_3b0 = 0;
          local_3a8 = 0;
          local_3a0 = 0;
          local_398 = 0;
          ShaderGLES3::_compile_specialization
                    ((Specialization *)pVVar1,(uint)(Specialization *)&local_3c8,
                     (Version *)(ulong)uVar12,uVar19);
          uVar3 = *(uint *)(uVar19 + 0x68);
          if (uVar12 < uVar3) {
            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
            ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                      *)(lVar6 + *(long *)(uVar19 + 0x70)),&local_3d0,(Specialization *)&local_3c8);
            uVar3 = *(uint *)(uVar19 + 0x68);
            if (uVar12 < uVar3) {
              plVar25 = (long *)(lVar6 + *(long *)(uVar19 + 0x70));
              uVar3 = *(uint *)(plVar25 + 3);
              uVar19 = uVar17 % (ulong)uVar3;
              uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
              if (uVar24 != 0) {
                uVar22 = 0;
LAB_001084a9:
                if ((uVar24 != (uint)uVar17) || (uVar8 != *(ulong *)(plVar25[1] + uVar19 * 8)))
                goto LAB_00108470;
                puVar26 = (undefined4 *)(*plVar25 + uVar19 * 0x38);
                if (param_3[0x158] != (RasterizerCanvasGLES3)0x0) {
                  ShaderGLES3::_save_to_cache(pVVar1);
                }
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_3c8);
LAB_0010711b:
                if (puVar26 == (undefined4 *)0x0) goto LAB_00108270;
LAB_00107124:
                if (*(char *)((long)puVar26 + 0x31) == '\0') goto LAB_00108270;
                (*_glad_glUseProgram)(*puVar26);
                *(undefined4 **)(param_3 + 0x1e0) = puVar26;
                Projection::Projection(local_288);
                fVar27 = (float)((double)param_1 * __LC100);
                Projection::set_frustum
                          ((float)((uint)fVar27 ^ _LC101),fVar27,(float)((uint)fVar27 ^ _LC101),
                           fVar27,param_1,param_2);
                local_378 = (Vector4  [16])ZEXT416(_LC217);
                local_358 = __LC102;
                uStack_350 = _LC116;
                local_368 = __LC103;
                uStack_360 = _UNK_0011ce08;
                local_388 = __LC105;
                uStack_380 = _UNK_0011ce28;
                Projection::Projection
                          (local_248,(Vector4 *)&local_388,local_378,(Vector4 *)&local_368,
                           (Vector4 *)&local_358);
                Projection::operator*(local_148,local_288);
                local_338 = __LC105;
                uStack_330 = _UNK_0011ce28;
                local_348 = (Vector4  [16])ZEXT416(_LC106);
                local_318 = __LC102;
                uStack_310 = _LC116;
                local_328 = __LC103;
                uStack_320 = _UNK_0011ce08;
                Projection::Projection
                          (local_208,local_348,(Vector4 *)&local_338,(Vector4 *)&local_328,
                           (Vector4 *)&local_318);
                Projection::operator*(local_108,local_288);
                local_2f8 = (Vector4  [16])ZEXT416(_LC106);
                local_2d8 = __LC102;
                uStack_2d0 = _LC116;
                local_2e8 = __LC103;
                uStack_2e0 = _UNK_0011ce08;
                local_308 = __LC107;
                uStack_300 = _UNK_0011ce48;
                Projection::Projection
                          (local_1c8,(Vector4 *)&local_308,local_2f8,(Vector4 *)&local_2e8,
                           (Vector4 *)&local_2d8);
                Projection::operator*(local_c8,local_288);
                local_2c8 = (Vector4  [16])ZEXT416(_LC217);
                local_298 = __LC102;
                uStack_290 = _LC116;
                local_2a8 = __LC103;
                uStack_2a0 = _UNK_0011ce08;
                local_2b8 = __LC107;
                uStack_2b0 = _UNK_0011ce48;
                Projection::Projection
                          ((Projection *)&local_188,local_2c8,(Vector4 *)&local_2b8,
                           (Vector4 *)&local_2a8,(Vector4 *)&local_298);
                Projection::operator*(local_88,local_288);
                Projection::~Projection((Projection *)&local_188);
                Projection::~Projection(local_1c8);
                Projection::~Projection(local_208);
                Projection::~Projection(local_248);
                local_424 = 0;
                local_420 = 0;
LAB_001073d5:
                iVar5 = *(int *)(param_3 + 0x2ac);
                iVar13 = iVar5 + 3;
                if (-1 < iVar5) {
                  iVar13 = iVar5;
                }
                (*_glad_glViewport)((int)local_420 * (iVar13 >> 2),param_5);
                pcVar4 = _glad_glUniformMatrix4fv;
                uVar8 = *(ulong *)(param_3 + 0x1e8);
                if (*(int *)(param_3 + 0x188) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                             (long)*(int *)(param_3 + 0x188),"p_which","uniform_count","",false,
                             false);
                  goto LAB_001076a2;
                }
                if (uVar8 == 0) {
LAB_00108840:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                  goto LAB_001076a2;
                }
                if (*(uint *)pRVar2 <= (uint)uVar8) goto LAB_00108840;
                lVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                         *(long *)(*(long *)(param_3 + 0xf8) +
                                  ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
                iVar5 = *(int *)(lVar14 + 0x78);
                if (iVar5 != (int)(uVar8 >> 0x20)) {
                  if (iVar5 + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                  goto LAB_00108840;
                }
                uVar3 = *(uint *)(lVar14 + 0x68);
                if ((int)uVar3 <= (int)uVar12) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11,
                             (long)(int)uVar3,"p_variant","int(version->variants.size())","",false,
                             false);
                  goto LAB_001076a2;
                }
                if (uVar12 < uVar3) {
                  plVar25 = (long *)(lVar6 + *(long *)(lVar14 + 0x70));
                  uVar3 = *(uint *)(plVar25 + 3);
                  uVar19 = 0x2aeaa2ab % (ulong)uVar3;
                  uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
                  if (uVar24 != 0) {
                    uVar22 = 0;
                    while ((uVar24 != 0x2aeaa2ab || (*(long *)(plVar25[1] + uVar19 * 8) != 0))) {
                      uVar22 = uVar22 + 1;
                      uVar19 = (ulong)((int)uVar19 + 1) % (ulong)uVar3;
                      uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
                      if ((uVar24 == 0) ||
                         (((uVar3 + (int)uVar19) - uVar24 % uVar3) % uVar3 < uVar22))
                      goto LAB_00108e50;
                    }
                    lVar14 = *plVar25 + uVar19 * 0x38;
                    if (lVar14 != 0) {
                      if (*(int *)(lVar14 + 0x10) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                                   (long)*(int *)(lVar14 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                        goto LAB_001076a2;
                      }
                      if (**(int **)(lVar14 + 0x18) < 0) goto LAB_001076a2;
                      lVar14 = local_420 * 0x40;
                      local_188 = *(undefined8 *)(local_148 + lVar14);
                      uStack_180 = auStack_140[local_420 * 8];
                      local_178 = auStack_140[local_420 * 8 + 1];
                      uStack_170 = auStack_140[local_420 * 8 + 2];
                      local_168 = auStack_140[local_420 * 8 + 3];
                      uStack_160 = *(undefined8 *)(local_108 + lVar14 + -0x18);
                      local_158 = *(undefined8 *)(local_108 + lVar14 + -0x10);
                      uStack_150 = *(undefined8 *)(local_108 + lVar14 + -8);
                      if (*(int *)(param_3 + 0x188) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                   (long)*(int *)(param_3 + 0x188),"p_which","uniform_count","",
                                   false,false);
                        goto LAB_001090f2;
                      }
                      if ((uint)uVar8 < *(uint *)pRVar2) {
                        lVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                                 *(long *)(*(long *)(param_3 + 0xf8) +
                                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108))
                                          * 8);
                        if (iVar5 == *(int *)(lVar14 + 0x78)) {
                          uVar3 = *(uint *)(lVar14 + 0x68);
                          if ((int)uVar3 <= (int)uVar12) {
                            _err_print_index_error
                                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,
                                       uVar11,(long)(int)uVar3,"p_variant",
                                       "int(version->variants.size())","",false,false);
                            goto LAB_001090f2;
                          }
                          if (uVar3 <= uVar12) goto LAB_00108208;
                          plVar25 = (long *)(lVar6 + *(long *)(lVar14 + 0x70));
                          uVar3 = *(uint *)(plVar25 + 3);
                          uVar8 = 0x2aeaa2ab % (ulong)uVar3;
                          uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
                          if (uVar24 == 0) goto LAB_001093c2;
                          uVar22 = 0;
                          goto LAB_00107651;
                        }
                        if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                           "Method/function failed. Returning: nullptr",
                                           "Attempting to use an uninitialized RID",0,0);
                        }
                      }
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                       "Parameter \"version\" is null.",0);
                      goto LAB_001090f2;
                    }
                  }
LAB_00108e50:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0);
                  goto LAB_001076a2;
                }
                goto LAB_00108208;
              }
LAB_00108251:
              if (param_3[0x158] == (RasterizerCanvasGLES3)0x0) {
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_3c8);
              }
              else {
                ShaderGLES3::_save_to_cache(pVVar1);
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_3c8);
              }
              goto LAB_00108270;
            }
          }
          uVar7 = (ulong)uVar3;
LAB_0010822e:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar7,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (*(int *)(uVar19 + 0x78) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar23 = "Parameter \"version\" is null.";
      uVar16 = 0xbe;
      pcVar28 = "./drivers/gles3/shader_gles3.h";
      pcVar21 = "_version_bind_shader";
LAB_001082ff:
      _err_print_error(pcVar21,pcVar28,uVar16,pcVar23,0,0);
      return;
    }
    goto LAB_00109567;
  }
  _err_print_index_error
            ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,(ulong)uVar12,
             (long)*(int *)(param_3 + 0x1d8),"p_variant","variant_count","",false,false);
  goto LAB_001081c7;
LAB_00107651:
  if ((uVar24 != 0x2aeaa2ab) || (*(long *)(plVar25[1] + uVar8 * 8) != 0)) {
    uVar22 = uVar22 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar3;
    uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
    if ((uVar24 == 0) || (((uVar3 + (int)uVar8) - uVar24 % uVar3) % uVar3 < uVar22))
    goto LAB_001093c2;
    goto LAB_00107651;
  }
  lVar14 = *plVar25 + uVar8 * 0x38;
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x10) < 1) {
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                 (long)*(int *)(lVar14 + 0x10),"p_which","int(spec->uniform_location.size())","",
                 false,false);
      goto LAB_001090f2;
    }
    uVar20 = **(undefined4 **)(lVar14 + 0x18);
    goto LAB_00107693;
  }
LAB_001093c2:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_001090f2:
  uVar20 = 0xffffffff;
LAB_00107693:
  (*pcVar4)(uVar20,1,0,(Projection *)&local_188);
LAB_001076a2:
  if ((light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
       ::directions == '\0') &&
     (iVar5 = __cxa_guard_acquire(&light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                                   ::directions), iVar5 != 0)) {
    light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
    ::directions._0_8_ = __LC108;
    light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
    ::directions._8_8_ = _UNK_0011ce58;
    light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
    ::directions._16_8_ = __LC109;
    light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
    ::directions._24_8_ = _UNK_0011ce68;
    __cxa_guard_release(&light_update_shadow(RID,int,Transform2D_const&,int,float,float,RendererCanvasRender::LightOccluderInstance*,Rect2_const&)
                         ::directions);
  }
  pcVar4 = _glad_glUniform2f;
  lVar14 = (long)*(int *)(param_3 + 0x188);
  uVar8 = *(ulong *)(param_3 + 0x1e8);
  if (*(int *)(param_3 + 0x188) < 4) {
    uVar8 = 3;
    pcVar23 = "p_which";
    iVar5 = 0xe4;
    pcVar28 = "uniform_count";
LAB_001089f5:
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar5,uVar8,lVar14,pcVar23,
               pcVar28,"",false,false);
    lVar14 = (long)*(int *)(param_3 + 0x188);
  }
  else {
    if (uVar8 != 0) {
      if ((uint)uVar8 < *(uint *)pRVar2) {
        lVar15 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                 *(long *)(*(long *)(param_3 + 0xf8) +
                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
        iVar5 = *(int *)(lVar15 + 0x78);
        if (iVar5 == (int)(uVar8 >> 0x20)) {
          uVar3 = *(uint *)(lVar15 + 0x68);
          lVar14 = (long)(int)uVar3;
          if ((int)uVar12 < (int)uVar3) {
            if (uVar3 <= uVar12) goto LAB_00108208;
            plVar25 = (long *)(lVar6 + *(long *)(lVar15 + 0x70));
            uVar3 = *(uint *)(plVar25 + 3);
            uVar19 = 0x2aeaa2ab % (ulong)uVar3;
            uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
            if (uVar24 != 0) {
              uVar22 = 0;
              while ((uVar24 != 0x2aeaa2ab || (*(long *)(plVar25[1] + uVar19 * 8) != 0))) {
                uVar22 = uVar22 + 1;
                uVar19 = (ulong)((int)uVar19 + 1) % (ulong)uVar3;
                uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
                if ((uVar24 == 0) || (((uVar3 + (int)uVar19) - uVar24 % uVar3) % uVar3 < uVar22))
                goto LAB_00108f10;
              }
              lVar15 = *plVar25 + uVar19 * 0x38;
              if (lVar15 != 0) {
                lVar14 = (long)*(int *)(lVar15 + 0x10);
                if (*(int *)(lVar15 + 0x10) < 4) {
                  pcVar23 = "p_which";
                  iVar5 = 0xea;
                  pcVar28 = "int(spec->uniform_location.size())";
                  uVar8 = 3;
                  goto LAB_001089f5;
                }
                lVar14 = (long)*(int *)(param_3 + 0x188);
                if (*(int *)(*(long *)(lVar15 + 0x18) + 0xc) < 0) goto LAB_00107927;
                if (*(int *)(param_3 + 0x188) < 4) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,3,lVar14,
                             "p_which","uniform_count","",false,false);
                  goto LAB_0010916a;
                }
                if ((uint)uVar8 < *(uint *)pRVar2) {
                  lVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                           *(long *)(*(long *)(param_3 + 0xf8) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
                  if (iVar5 == *(int *)(lVar14 + 0x78)) {
                    uVar3 = *(uint *)(lVar14 + 0x68);
                    if ((int)uVar3 <= (int)uVar12) {
                      pcVar23 = "p_variant";
                      iVar5 = 0xe7;
                      pcVar28 = "int(version->variants.size())";
                      uVar8 = uVar11;
                      goto LAB_0010932f;
                    }
                    if (uVar3 <= uVar12) goto LAB_00108208;
                    plVar25 = (long *)(lVar6 + *(long *)(lVar14 + 0x70));
                    uVar3 = *(uint *)(plVar25 + 3);
                    uVar8 = 0x2aeaa2ab % (ulong)uVar3;
                    uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
                    if (uVar24 == 0) goto LAB_0010942d;
                    uVar22 = 0;
                    goto LAB_001078d9;
                  }
                  if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                pcVar23 = "Parameter \"version\" is null.";
                uVar16 = 0xe6;
                goto LAB_00109294;
              }
            }
LAB_00108f10:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
            lVar14 = (long)*(int *)(param_3 + 0x188);
            goto LAB_00107927;
          }
          iVar5 = 0xe7;
          pcVar23 = "p_variant";
          pcVar28 = "int(version->variants.size())";
          uVar8 = uVar11;
          goto LAB_001089f5;
        }
        if (iVar5 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
    lVar14 = (long)*(int *)(param_3 + 0x188);
  }
LAB_00107927:
  pcVar4 = _glad_glUniform1f;
  uVar8 = *(ulong *)(param_3 + 0x1e8);
  if ((int)lVar14 < 5) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,lVar14,"p_which",
               "uniform_count","",false,false);
  }
  else {
    if (uVar8 != 0) {
      if ((uint)uVar8 < *(uint *)pRVar2) {
        lVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                 *(long *)(*(long *)(param_3 + 0xf8) +
                          ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
        iVar5 = *(int *)(lVar14 + 0x78);
        if (iVar5 == (int)(uVar8 >> 0x20)) {
          uVar3 = *(uint *)(lVar14 + 0x68);
          if ((int)uVar12 < (int)uVar3) {
            if (uVar3 <= uVar12) {
LAB_00108208:
              uVar11 = 2;
              uVar7 = 2;
              goto LAB_0010822e;
            }
            plVar25 = (long *)(lVar6 + *(long *)(lVar14 + 0x70));
            uVar3 = *(uint *)(plVar25 + 3);
            uVar19 = 0x2aeaa2ab % (ulong)uVar3;
            uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
            if (uVar24 != 0) {
              uVar22 = 0;
              while ((uVar24 != 0x2aeaa2ab || (*(long *)(plVar25[1] + uVar19 * 8) != 0))) {
                uVar22 = uVar22 + 1;
                uVar19 = (ulong)((int)uVar19 + 1) % (ulong)uVar3;
                uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
                if ((uVar24 == 0) || (((uVar3 + (int)uVar19) - uVar24 % uVar3) % uVar3 < uVar22))
                goto LAB_00108fe8;
              }
              lVar14 = *plVar25 + uVar19 * 0x38;
              if (lVar14 != 0) {
                if (*(int *)(lVar14 + 0x10) < 5) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                             (long)*(int *)(lVar14 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                  goto LAB_00107b76;
                }
                if (*(int *)(*(long *)(lVar14 + 0x18) + 0x10) < 0) goto LAB_00107b76;
                if (*(int *)(param_3 + 0x188) < 5) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                             (long)*(int *)(param_3 + 0x188),"p_which","uniform_count","",false,
                             false);
                  goto LAB_001092f4;
                }
                if ((uint)uVar8 < *(uint *)pRVar2) {
                  lVar14 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                           *(long *)(*(long *)(param_3 + 0xf8) +
                                    ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
                  if (iVar5 == *(int *)(lVar14 + 0x78)) {
                    uVar3 = *(uint *)(lVar14 + 0x68);
                    if ((int)uVar3 <= (int)uVar12) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11
                                 ,(long)(int)uVar3,"p_variant","int(version->variants.size())","",
                                 false,false);
                      goto LAB_001092f4;
                    }
                    if (uVar3 <= uVar12) goto LAB_00108208;
                    plVar25 = (long *)(lVar6 + *(long *)(lVar14 + 0x70));
                    uVar3 = *(uint *)(plVar25 + 3);
                    uVar8 = 0x2aeaa2ab % (ulong)uVar3;
                    uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
                    if (uVar24 == 0) goto LAB_001094fc;
                    uVar22 = 0;
                    goto LAB_00107b29;
                  }
                  if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0);
                  }
                }
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
                goto LAB_001092f4;
              }
            }
LAB_00108fe8:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
          }
          else {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11,
                       (long)(int)uVar3,"p_variant","int(version->variants.size())","",false,false);
          }
          goto LAB_00107b76;
        }
        if (iVar5 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_00107b76:
  lVar14 = param_8;
  if (param_8 == 0) {
LAB_00108155:
    local_420 = local_420 + 1;
    if (local_420 == 4) goto code_r0x0010816a;
    goto LAB_001073d5;
  }
LAB_00107b90:
  uVar8 = *(ulong *)(lVar14 + 0x18);
  if ((uVar8 == 0) || (*(uint *)(param_3 + 0x7c) <= (uint)uVar8)) goto LAB_00108140;
  piVar18 = (int *)(((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x78)) * 0x30 +
                   *(long *)(*(long *)(param_3 + 0x68) +
                            ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x78)) * 8));
  if (piVar18[0xb] != (int)(uVar8 >> 0x20)) {
    if (piVar18[0xb] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_00108140;
  }
  if ((piVar18[3] == 0) || ((param_7 & *(uint *)(lVar14 + 0x78)) == 0)) goto LAB_00108140;
  Transform2D::operator*((Transform2D *)local_1c8,param_6);
  pcVar4 = _glad_glUniform4f;
  lVar15 = (long)*(int *)(param_3 + 0x188);
  uVar8 = *(ulong *)(param_3 + 0x1e8);
  if (*(int *)(param_3 + 0x188) < 2) {
    uVar8 = 1;
    pcVar23 = "p_which";
    iVar5 = 0xe4;
    pcVar28 = "uniform_count";
LAB_001085e5:
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar5,uVar8,lVar15,pcVar23,
               pcVar28,"",false,false);
    lVar15 = (long)*(int *)(param_3 + 0x188);
    goto LAB_00107e7b;
  }
  if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)pRVar2)) {
    lVar9 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
            *(long *)(*(long *)(param_3 + 0xf8) +
                     ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
    iVar5 = *(int *)(lVar9 + 0x78);
    if (iVar5 == (int)(uVar8 >> 0x20)) {
      uVar3 = *(uint *)(lVar9 + 0x68);
      lVar15 = (long)(int)uVar3;
      if ((int)uVar3 <= (int)uVar12) {
        iVar5 = 0xe7;
        pcVar23 = "p_variant";
        pcVar28 = "int(version->variants.size())";
        uVar8 = uVar11;
        goto LAB_001085e5;
      }
      if (uVar12 < uVar3) {
        plVar25 = (long *)(lVar6 + *(long *)(lVar9 + 0x70));
        uVar3 = *(uint *)(plVar25 + 3);
        uVar19 = 0x2aeaa2ab % (ulong)uVar3;
        uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
        if (uVar24 != 0) {
          uVar22 = 0;
          while ((uVar24 != 0x2aeaa2ab || (*(long *)(plVar25[1] + uVar19 * 8) != 0))) {
            uVar22 = uVar22 + 1;
            uVar19 = (ulong)((int)uVar19 + 1) % (ulong)uVar3;
            uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
            if ((uVar24 == 0) || (((uVar3 + (int)uVar19) - uVar24 % uVar3) % uVar3 < uVar22))
            goto LAB_00108798;
          }
          lVar9 = *plVar25 + uVar19 * 0x38;
          if (lVar9 != 0) {
            lVar15 = (long)*(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) < 2) {
              pcVar23 = "p_which";
              iVar5 = 0xea;
              pcVar28 = "int(spec->uniform_location.size())";
              uVar8 = 1;
              goto LAB_001085e5;
            }
            lVar15 = (long)*(int *)(param_3 + 0x188);
            if (*(int *)(*(long *)(lVar9 + 0x18) + 4) < 0) goto LAB_00107e7b;
            if (*(int *)(param_3 + 0x188) < 2) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,1,lVar15,
                         "p_which","uniform_count","",false,false);
              goto LAB_001089c6;
            }
            if ((uint)uVar8 < *(uint *)pRVar2) {
              lVar15 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                       *(long *)(*(long *)(param_3 + 0xf8) +
                                ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
              if (iVar5 == *(int *)(lVar15 + 0x78)) {
                uVar3 = *(uint *)(lVar15 + 0x68);
                if ((int)uVar3 <= (int)uVar12) {
                  pcVar23 = "p_variant";
                  iVar5 = 0xe7;
                  pcVar28 = "int(version->variants.size())";
                  uVar8 = uVar11;
                  goto LAB_00108d1a;
                }
                if (uVar3 <= uVar12) goto LAB_00108208;
                plVar25 = (long *)(lVar6 + *(long *)(lVar15 + 0x70));
                uVar3 = *(uint *)(plVar25 + 3);
                uVar8 = 0x2aeaa2ab % (ulong)uVar3;
                uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
                if (uVar24 == 0) goto LAB_00108ec0;
                uVar22 = 0;
                goto LAB_00107e29;
              }
              if (*(int *)(lVar15 + 0x78) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            pcVar23 = "Parameter \"version\" is null.";
            uVar16 = 0xe6;
            goto LAB_00108aa1;
          }
        }
LAB_00108798:
        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                         "Parameter \"spec\" is null.",0);
        lVar15 = (long)*(int *)(param_3 + 0x188);
        goto LAB_00107e7b;
      }
      goto LAB_00108208;
    }
    if (iVar5 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                   "Parameter \"version\" is null.",0);
  lVar15 = (long)*(int *)(param_3 + 0x188);
LAB_00107e7b:
  pcVar4 = _glad_glUniform4f;
  uVar8 = *(ulong *)(param_3 + 0x1e8);
  if ((int)lVar15 < 3) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,lVar15,"p_which",
               "uniform_count","",false,false);
  }
  else {
    if ((uVar8 != 0) && ((uint)uVar8 < *(uint *)pRVar2)) {
      lVar15 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
               *(long *)(*(long *)(param_3 + 0xf8) +
                        ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
      iVar5 = *(int *)(lVar15 + 0x78);
      if (iVar5 == (int)(uVar8 >> 0x20)) {
        uVar3 = *(uint *)(lVar15 + 0x68);
        if ((int)uVar12 < (int)uVar3) {
          if (uVar3 <= uVar12) goto LAB_00108208;
          plVar25 = (long *)(lVar6 + *(long *)(lVar15 + 0x70));
          uVar3 = *(uint *)(plVar25 + 3);
          uVar19 = 0x2aeaa2ab % (ulong)uVar3;
          uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
          if (uVar24 != 0) {
            uVar22 = 0;
            while ((uVar24 != 0x2aeaa2ab || (*(long *)(plVar25[1] + uVar19 * 8) != 0))) {
              uVar22 = uVar22 + 1;
              uVar19 = (ulong)((int)uVar19 + 1) % (ulong)uVar3;
              uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
              if ((uVar24 == 0) || (((uVar3 + (int)uVar19) - uVar24 % uVar3) % uVar3 < uVar22))
              goto LAB_001087d0;
            }
            lVar15 = *plVar25 + uVar19 * 0x38;
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x10) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                           (long)*(int *)(lVar15 + 0x10),"p_which",
                           "int(spec->uniform_location.size())","",false,false);
                goto LAB_001080f4;
              }
              if (*(int *)(*(long *)(lVar15 + 0x18) + 8) < 0) goto LAB_001080f4;
              if (*(int *)(param_3 + 0x188) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                           (long)*(int *)(param_3 + 0x188),"p_which","uniform_count","",false,false)
                ;
                goto LAB_00108b2b;
              }
              if ((uint)uVar8 < *(uint *)pRVar2) {
                lVar15 = ((uVar8 & 0xffffffff) % (ulong)*(uint *)(param_3 + 0x108)) * 0x80 +
                         *(long *)(*(long *)(param_3 + 0xf8) +
                                  ((uVar8 & 0xffffffff) / (ulong)*(uint *)(param_3 + 0x108)) * 8);
                if (iVar5 == *(int *)(lVar15 + 0x78)) {
                  uVar3 = *(uint *)(lVar15 + 0x68);
                  if ((int)uVar3 <= (int)uVar12) {
                    pcVar23 = "p_variant";
                    iVar5 = 0xe7;
                    pcVar28 = "int(version->variants.size())";
                    uVar8 = uVar11;
                    goto LAB_00108e1b;
                  }
                  if (uVar3 <= uVar12) goto LAB_00108208;
                  plVar25 = (long *)(lVar6 + *(long *)(lVar15 + 0x70));
                  uVar3 = *(uint *)(plVar25 + 3);
                  uVar8 = 0x2aeaa2ab % (ulong)uVar3;
                  uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
                  if (uVar24 == 0) goto LAB_00108f80;
                  uVar22 = 0;
                  goto LAB_001080a9;
                }
                if (*(int *)(lVar15 + 0x78) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              pcVar23 = "Parameter \"version\" is null.";
              uVar16 = 0xe6;
              goto LAB_00108cb9;
            }
          }
LAB_001087d0:
          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                           "Parameter \"spec\" is null.",0);
        }
        else {
          _err_print_index_error
                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11,
                     (long)(int)uVar3,"p_variant","int(version->variants.size())","",false,false);
        }
        goto LAB_001080f4;
      }
      if (iVar5 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_001080f4:
  iVar5 = *piVar18;
  if (iVar5 != local_424) {
    if (iVar5 == 0) {
      (*_glad_glDisable)(0xb44);
    }
    else {
      if (local_424 == 0) {
        (*_glad_glEnable)(0xb44);
        iVar5 = *piVar18;
      }
      (*_glad_glCullFace)((iVar5 != 1) + 0x404);
    }
    local_424 = *piVar18;
  }
  (*_glad_glBindVertexArray)(piVar18[3]);
  (*_glad_glDrawElements)(4,piVar18[1] * 3,0x1403,0);
LAB_00108140:
  plVar25 = (long *)(lVar14 + 0x88);
  lVar14 = *plVar25;
  if (*plVar25 == 0) goto LAB_00108155;
  goto LAB_00107b90;
LAB_001078d9:
  if ((uVar24 != 0x2aeaa2ab) || (*(long *)(plVar25[1] + uVar8 * 8) != 0)) goto LAB_001078a0;
  lVar14 = *plVar25 + uVar8 * 0x38;
  if (lVar14 != 0) {
    uVar3 = *(uint *)(lVar14 + 0x10);
    if ((int)uVar3 < 4) {
      pcVar23 = "p_which";
      iVar5 = 0xea;
      pcVar28 = "int(spec->uniform_location.size())";
      uVar8 = 3;
LAB_0010932f:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar5,uVar8,
                 (long)(int)uVar3,pcVar23,pcVar28,"",false,false);
      goto LAB_0010916a;
    }
    uVar20 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0xc);
    goto LAB_0010791d;
  }
  goto LAB_0010942d;
LAB_001078a0:
  uVar22 = uVar22 + 1;
  uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar3;
  uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
  if ((uVar24 == 0) || (((uVar3 + (int)uVar8) - uVar24 % uVar3) % uVar3 < uVar22))
  goto LAB_0010942d;
  goto LAB_001078d9;
LAB_0010942d:
  pcVar23 = "Parameter \"spec\" is null.";
  uVar16 = 0xe9;
LAB_00109294:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar16,pcVar23,0);
LAB_0010916a:
  uVar20 = 0xffffffff;
LAB_0010791d:
  (*pcVar4)(uVar20);
  lVar14 = (long)*(int *)(param_3 + 0x188);
  goto LAB_00107927;
LAB_00107b29:
  if ((uVar24 != 0x2aeaa2ab) || (*(long *)(plVar25[1] + uVar8 * 8) != 0)) {
    uVar22 = uVar22 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar3;
    uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
    if ((uVar24 == 0) || (((uVar3 + (int)uVar8) - uVar24 % uVar3) % uVar3 < uVar22))
    goto LAB_001094fc;
    goto LAB_00107b29;
  }
  lVar14 = *plVar25 + uVar8 * 0x38;
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x10) < 5) {
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                 (long)*(int *)(lVar14 + 0x10),"p_which","int(spec->uniform_location.size())","",
                 false,false);
      goto LAB_001092f4;
    }
    uVar20 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x10);
    goto LAB_00107b6d;
  }
LAB_001094fc:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                   "Parameter \"spec\" is null.",0);
LAB_001092f4:
  uVar20 = 0xffffffff;
LAB_00107b6d:
  (*pcVar4)(uVar20);
  goto LAB_00107b76;
LAB_00107e29:
  if ((uVar24 != 0x2aeaa2ab) || (*(long *)(plVar25[1] + uVar8 * 8) != 0)) goto LAB_00107df0;
  lVar15 = *plVar25 + uVar8 * 0x38;
  if (lVar15 != 0) {
    uVar3 = *(uint *)(lVar15 + 0x10);
    if ((int)uVar3 < 2) {
      iVar5 = 0xea;
      pcVar23 = "p_which";
      pcVar28 = "int(spec->uniform_location.size())";
      uVar8 = 1;
LAB_00108d1a:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar5,uVar8,
                 (long)(int)uVar3,pcVar23,pcVar28,"",false,false);
      goto LAB_001089c6;
    }
    uVar20 = *(undefined4 *)(*(long *)(lVar15 + 0x18) + 4);
    goto LAB_00107e6d;
  }
  goto LAB_00108ec0;
LAB_00107df0:
  uVar22 = uVar22 + 1;
  uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar3;
  uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
  if ((uVar24 == 0) || (((uVar3 + (int)uVar8) - uVar24 % uVar3) % uVar3 < uVar22))
  goto LAB_00108ec0;
  goto LAB_00107e29;
LAB_00108ec0:
  pcVar23 = "Parameter \"spec\" is null.";
  uVar16 = 0xe9;
LAB_00108aa1:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar16,pcVar23,0);
LAB_001089c6:
  uVar20 = 0xffffffff;
LAB_00107e6d:
  (*pcVar4)(uVar20);
  lVar15 = (long)*(int *)(param_3 + 0x188);
  goto LAB_00107e7b;
LAB_001080a9:
  if ((uVar24 != 0x2aeaa2ab) || (*(long *)(plVar25[1] + uVar8 * 8) != 0)) goto LAB_00108070;
  lVar15 = *plVar25 + uVar8 * 0x38;
  if (lVar15 != 0) {
    uVar3 = *(uint *)(lVar15 + 0x10);
    if ((int)uVar3 < 3) {
      iVar5 = 0xea;
      pcVar23 = "p_which";
      pcVar28 = "int(spec->uniform_location.size())";
      uVar8 = 2;
LAB_00108e1b:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar5,uVar8,
                 (long)(int)uVar3,pcVar23,pcVar28,"",false,false);
      goto LAB_00108b2b;
    }
    uVar20 = *(undefined4 *)(*(long *)(lVar15 + 0x18) + 8);
    goto LAB_001080ed;
  }
  goto LAB_00108f80;
LAB_00108070:
  uVar22 = uVar22 + 1;
  uVar8 = (ulong)((int)uVar8 + 1) % (ulong)uVar3;
  uVar24 = *(uint *)(plVar25[2] + uVar8 * 4);
  if ((uVar24 == 0) || (((uVar3 + (int)uVar8) - uVar24 % uVar3) % uVar3 < uVar22))
  goto LAB_00108f80;
  goto LAB_001080a9;
LAB_00108f80:
  pcVar23 = "Parameter \"spec\" is null.";
  uVar16 = 0xe9;
LAB_00108cb9:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar16,pcVar23,0);
LAB_00108b2b:
  uVar20 = 0xffffffff;
LAB_001080ed:
  (*pcVar4)(uVar20);
  goto LAB_001080f4;
code_r0x0010816a:
  this = local_48;
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
  (*_glad_glDepthMask)(0);
  (*_glad_glDisable)(0xb71);
  (*_glad_glDisable)(0xc11);
  do {
    this = this + -0x40;
    Projection::~Projection(this);
  } while (this != local_148);
  Projection::~Projection(local_288);
  goto LAB_001081c7;
LAB_00108470:
  uVar22 = uVar22 + 1;
  uVar19 = (ulong)((int)uVar19 + 1) % (ulong)uVar3;
  uVar24 = *(uint *)(plVar25[2] + uVar19 * 4);
  if ((uVar24 == 0) || (((uVar3 + (int)uVar19) - uVar24 % uVar3) % uVar3 < uVar22))
  goto LAB_00108251;
  goto LAB_001084a9;
  while( true ) {
    uVar22 = uVar22 + 1;
    uVar8 = (ulong)((int)uVar8 + 1) % uVar10;
    uVar24 = *(uint *)(lVar14 + uVar8 * 4);
    if ((uVar24 == 0) || (((uVar3 + (int)uVar8) - uVar24 % uVar3) % uVar3 < uVar22)) break;
LAB_00107101:
    if ((uVar24 == (uint)uVar19) &&
       (*(long *)(param_3 + 0x1c8) == *(long *)(plVar25[1] + uVar8 * 8))) {
      puVar26 = (undefined4 *)(*plVar25 + uVar8 * 0x38);
      goto LAB_0010711b;
    }
  }
LAB_00108270:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_001081c7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109567:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::light_update_directional_shadow(RID, int, Transform2D const&, int, float,
   Rect2 const&, RendererCanvasRender::LightOccluderInstance*) */

void __thiscall
RasterizerCanvasGLES3::light_update_directional_shadow
          (float param_1,RasterizerCanvasGLES3 *this,ulong param_3,int param_4,undefined8 param_5,
          uint param_6,ulong *param_7,long param_8)

{
  Version *pVVar1;
  RasterizerCanvasGLES3 *pRVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  long *plVar24;
  ulong uVar25;
  undefined4 *puVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  char *pcVar32;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  ulong local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined2 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  Vector3 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  Vector3 local_168 [48];
  Transform3D local_138 [48];
  ulong local_108 [3];
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  Projection local_c8 [64];
  ulong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar14 = GLES3::Config::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) || (*(uint *)(this + 0x24) <= (uint)param_3)) {
LAB_00118d20:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(*(long *)(this + 0x10) +
                   ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
          ((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x38;
  if (*(int *)(lVar3 + 0x30) != (int)(param_3 >> 0x20)) {
    if (*(int *)(lVar3 + 0x30) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,GLES3::Config::singleton);
    }
    goto LAB_00118d20;
  }
  if (*(char *)(lVar3 + 8) == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("light_update_directional_shadow","drivers/gles3/rasterizer_canvas_gles3.cpp"
                       ,0x6e2,"Condition \"!cl->shadow.enabled\" is true.",0,0);
      return;
    }
    goto LAB_0010bdd8;
  }
  _update_shadow_atlas(this);
  local_1e8 = Vector2::normalized();
  uVar9 = *param_7;
  fVar28 = (float)(uVar9 >> 0x20);
  fVar27 = (float)param_7[1];
  local_1e0 = CONCAT44(_LC112._4_4_ * (float)(param_7[1] >> 0x20) + fVar28,
                       (float)_LC112 * fVar27 + (float)uVar9);
  if ((float)local_1e8 < 0.0) {
    uVar9 = (ulong)(uint)((float)uVar9 + fVar27);
  }
  local_88 = CONCAT44(fVar28,(int)uVar9);
  fVar27 = (float)Vector2::dot((Vector2 *)&local_1e8);
  fVar28 = (float)Vector2::dot((Vector2 *)&local_1e8);
  uVar4 = _LC101;
  fVar27 = fVar27 - fVar28;
  if (fVar27 < 0.0) {
    fVar27 = (float)((uint)fVar27 ^ _LC101);
  }
  param_4 = param_4 * 2;
  pVVar1 = (Version *)(this + 0xb8);
  fVar30 = (float)local_1e8;
  uVar9 = (ulong)local_1e8 >> 0x20;
  fVar31 = (float)local_1e0;
  uVar25 = (ulong)local_1e0 >> 0x20;
  fVar28 = fVar27 + fVar27 + param_1;
  fVar29 = (float)Vector2::length();
  *(ulong *)(lVar3 + 0xc) =
       CONCAT44((float)(param_4 + 1) / (float)(uint)(*(int *)(this + 0x250) * 2),fVar28);
  local_1b0 = local_1e8;
  local_1b8 = CONCAT44((float)local_1e8,local_1e8._4_4_ ^ uVar4);
  local_1a8 = CONCAT44((float)uVar25 - (param_1 + fVar27) * (float)uVar9,
                       fVar31 - (param_1 + fVar27) * fVar30);
  Transform2D::invert();
  (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x2a8));
  (*_glad_glViewport)(0,param_4,*(undefined4 *)(this + 0x2ac),2);
  (*_glad_glDepthMask)(1);
  (*_glad_glEnable)(0xb71);
  (*_glad_glDepthFunc)(0x201);
  (*_glad_glDisable)(0xbe2);
  (*_glad_glEnable)(0xc11);
  (*_glad_glScissor)(0,param_4,*(undefined4 *)(this + 0x2ac),2);
  (*_glad_glClearColor)();
  RasterizerGLES3::clear_depth(_LC30);
  (*_glad_glClear)(0x4100);
  (*_glad_glCullFace)(0x405);
  (*_glad_glDisable)(0xb44);
  local_230 = 0;
  uVar9 = *(ulong *)(this + 0x1e8);
  uVar12 = 2 - *(byte *)(lVar14 + 0x70);
  if ((int)uVar12 < *(int *)(this + 0x1d8)) {
    if (uVar9 != 0) {
      pRVar2 = this + 0x10c;
      if ((uint)uVar9 < *(uint *)(this + 0x10c)) {
        uVar25 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                 *(long *)(*(long *)(this + 0xf8) +
                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
        if (*(int *)(uVar25 + 0x78) == (int)(uVar9 >> 0x20)) {
          uVar21 = *(uint *)(uVar25 + 0x68);
          if (uVar21 == 0) {
            ShaderGLES3::_initialize_version(pVVar1);
            uVar21 = *(uint *)(uVar25 + 0x68);
          }
          uVar9 = local_230;
          uVar8 = (ulong)uVar21;
          if (uVar21 <= uVar12) {
            uVar11 = (ulong)uVar12;
            goto LAB_0010ab56;
          }
          uVar11 = (ulong)uVar12;
          lVar7 = uVar11 * 0x20;
          plVar24 = (long *)(*(long *)(uVar25 + 0x70) + lVar7);
          uVar21 = *(uint *)(plVar24 + 3);
          uVar10 = (ulong)uVar21;
          lVar14 = plVar24[2];
          uVar8 = local_230 * 0x3ffff - 1;
          uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
          uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
          uVar8 = uVar8 >> 0x16 ^ uVar8;
          uVar18 = uVar8 & 0xffffffff;
          if ((int)uVar8 == 0) {
            uVar18 = 1;
          }
          uVar8 = uVar18 % uVar10;
          uVar22 = *(uint *)(lVar14 + uVar8 * 4);
          if (uVar22 != 0) {
            uVar17 = 0;
            while ((uVar22 != (uint)uVar18 || (local_230 != *(ulong *)(plVar24[1] + uVar8 * 8)))) {
              uVar17 = uVar17 + 1;
              uVar8 = (ulong)((int)uVar8 + 1) % uVar10;
              uVar22 = *(uint *)(lVar14 + uVar8 * 4);
              if ((uVar22 == 0) || (((uVar21 + (int)uVar8) - uVar22 % uVar21) % uVar21 < uVar17))
              goto LAB_0010ac90;
            }
            puVar26 = (undefined4 *)(*plVar24 + uVar8 * 0x38);
            if (puVar26 != (undefined4 *)0x0) {
              if (*(char *)(puVar26 + 0xc) == '\0') goto LAB_00109b0c;
              uVar9 = *(long *)(this + 0x1c8) * 0x3ffff - 1;
              uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
              uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
              uVar9 = uVar9 >> 0x16 ^ uVar9;
              uVar25 = uVar9 & 0xffffffff;
              if ((int)uVar9 == 0) {
                uVar25 = 1;
              }
              uVar17 = 0;
              uVar9 = uVar25 % uVar10;
              uVar22 = *(uint *)(lVar14 + uVar9 * 4);
              if (uVar22 != 0) goto LAB_00109ae9;
              goto LAB_0010ab90;
            }
          }
LAB_0010ac90:
          local_228 = 0;
          local_220 = 0;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0;
          ShaderGLES3::_compile_specialization
                    ((Specialization *)pVVar1,(uint)(Specialization *)&local_228,
                     (Version *)(ulong)uVar12,uVar25);
          uVar21 = *(uint *)(uVar25 + 0x68);
          if (uVar12 < uVar21) {
            OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
            ::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                      *)(lVar7 + *(long *)(uVar25 + 0x70)),&local_230,(Specialization *)&local_228);
            uVar21 = *(uint *)(uVar25 + 0x68);
            if (uVar12 < uVar21) {
              plVar24 = (long *)(lVar7 + *(long *)(uVar25 + 0x70));
              uVar21 = *(uint *)(plVar24 + 3);
              uVar25 = uVar18 % (ulong)uVar21;
              uVar22 = *(uint *)(plVar24[2] + uVar25 * 4);
              if (uVar22 != 0) {
                uVar17 = 0;
LAB_0010adb9:
                if ((uVar22 != (uint)uVar18) || (uVar9 != *(ulong *)(plVar24[1] + uVar25 * 8)))
                goto LAB_0010ad80;
                puVar26 = (undefined4 *)(*plVar24 + uVar25 * 0x38);
                if (this[0x158] != (RasterizerCanvasGLES3)0x0) {
                  ShaderGLES3::_save_to_cache(pVVar1);
                }
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_228);
LAB_00109b03:
                if (puVar26 == (undefined4 *)0x0) goto LAB_0010ab90;
LAB_00109b0c:
                if (*(char *)((long)puVar26 + 0x31) == '\0') goto LAB_0010ab90;
                fVar29 = _LC113 * fVar29;
                (*_glad_glUseProgram)(*puVar26);
                *(undefined4 **)(this + 0x1e0) = puVar26;
                Projection::Projection((Projection *)local_108);
                Projection::set_orthogonal
                          ((float)((uint)fVar29 ^ uVar4),fVar29,_LC114,_LC113,0.0,fVar28);
                local_198 = (Vector3  [16])ZEXT416(_LC217);
                local_1d8 = _LC116;
                local_178 = 0x3f800000;
                local_174 = 0;
                local_16c = 0;
                local_1c8 = 0;
                local_1c0 = 0xbf800000;
                local_1d0 = 0;
                local_188 = (undefined1  [16])local_198;
                Transform3D::looking_at(local_168,local_198,SUB81(&local_1d8,0));
                Transform3D::affine_inverse();
                Projection::Projection(local_c8,local_138);
                Projection::operator*((Projection *)&local_88,(Projection *)local_108);
                local_108[0] = local_88;
                uStack_f0 = uStack_70;
                local_e8 = local_68;
                uStack_e0 = uStack_60;
                local_d8 = local_58;
                uStack_d0 = uStack_50;
                Projection::~Projection((Projection *)&local_88);
                Projection::~Projection(local_c8);
                pcVar5 = _glad_glUniformMatrix4fv;
                uVar9 = *(ulong *)(this + 0x1e8);
                if (*(int *)(this + 0x188) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                             (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
                  goto LAB_00109f4b;
                }
                if ((uVar9 != 0) && ((uint)uVar9 < *(uint *)(this + 0x10c))) {
                  lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                           *(long *)(*(long *)(this + 0xf8) +
                                    ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                  iVar13 = *(int *)(lVar14 + 0x78);
                  if (iVar13 != (int)(uVar9 >> 0x20)) {
                    if (iVar13 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_0010b108;
                  }
                  uVar4 = *(uint *)(lVar14 + 0x68);
                  if ((int)uVar4 <= (int)uVar12) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11,
                               (long)(int)uVar4,"p_variant","int(version->variants.size())","",false
                               ,false);
                    goto LAB_00109f4b;
                  }
                  if (uVar12 < uVar4) {
                    plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                    uVar4 = *(uint *)(plVar24 + 3);
                    uVar25 = 0x2aeaa2ab % (ulong)uVar4;
                    uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                    if (uVar21 == 0) {
LAB_0010b710:
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                       "Parameter \"spec\" is null.",0);
                    }
                    else {
                      uVar22 = 0;
                      while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar25 * 8) != 0))) {
                        uVar22 = uVar22 + 1;
                        uVar25 = (ulong)((int)uVar25 + 1) % (ulong)uVar4;
                        uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                        if ((uVar21 == 0) ||
                           (((uVar4 + (int)uVar25) - uVar21 % uVar4) % uVar4 < uVar22))
                        goto LAB_0010b710;
                      }
                      lVar14 = *plVar24 + uVar25 * 0x38;
                      if (lVar14 == 0) goto LAB_0010b710;
                      if (*(int *)(lVar14 + 0x10) < 1) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                                   (long)*(int *)(lVar14 + 0x10),"p_which",
                                   "int(spec->uniform_location.size())","",false,false);
                      }
                      else if (-1 < **(int **)(lVar14 + 0x18)) {
                        local_88 = local_108[0];
                        uStack_70 = uStack_f0;
                        local_68 = local_e8;
                        uStack_60 = uStack_e0;
                        local_58 = local_d8;
                        uStack_50 = uStack_d0;
                        if (*(int *)(this + 0x188) < 1) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                                     (long)*(int *)(this + 0x188),"p_which","uniform_count","",false
                                     ,false);
LAB_0010b9b4:
                          uVar20 = 0xffffffff;
                        }
                        else {
                          if (*(uint *)(this + 0x10c) <= (uint)uVar9) {
LAB_0010ba5d:
                            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe6,"Parameter \"version\" is null.",0);
                            goto LAB_0010b9b4;
                          }
                          lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                                   *(long *)(*(long *)(this + 0xf8) +
                                            ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108))
                                            * 8);
                          if (iVar13 != *(int *)(lVar14 + 0x78)) {
                            if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                               "Method/function failed. Returning: nullptr",
                                               "Attempting to use an uninitialized RID",0,0);
                            }
                            goto LAB_0010ba5d;
                          }
                          uVar4 = *(uint *)(lVar14 + 0x68);
                          if ((int)uVar4 <= (int)uVar12) {
                            _err_print_index_error
                                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,
                                       uVar11,(long)(int)uVar4,"p_variant",
                                       "int(version->variants.size())","",false,false);
                            goto LAB_0010b9b4;
                          }
                          if (uVar4 <= uVar12) goto LAB_0010ab30;
                          plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                          uVar4 = *(uint *)(plVar24 + 3);
                          uVar9 = 0x2aeaa2ab % (ulong)uVar4;
                          uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                          if (uVar21 == 0) {
LAB_0010bc62:
                            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h"
                                             ,0xe9,"Parameter \"spec\" is null.",0);
                            goto LAB_0010b9b4;
                          }
                          uVar22 = 0;
                          while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar9 * 8) != 0)))
                          {
                            uVar22 = uVar22 + 1;
                            uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar4;
                            uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                            if ((uVar21 == 0) ||
                               (((uVar4 + (int)uVar9) - uVar21 % uVar4) % uVar4 < uVar22))
                            goto LAB_0010bc62;
                          }
                          lVar14 = *plVar24 + uVar9 * 0x38;
                          if (lVar14 == 0) goto LAB_0010bc62;
                          if (*(int *)(lVar14 + 0x10) < 1) {
                            _err_print_index_error
                                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,
                                       0,(long)*(int *)(lVar14 + 0x10),"p_which",
                                       "int(spec->uniform_location.size())","",false,false);
                            goto LAB_0010b9b4;
                          }
                          uVar20 = **(undefined4 **)(lVar14 + 0x18);
                        }
                        (*pcVar5)(uVar20,1,0,(Projection *)&local_88);
                      }
                    }
                    goto LAB_00109f4b;
                  }
                  goto LAB_0010ab30;
                }
LAB_0010b108:
                _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                 "Parameter \"version\" is null.",0);
LAB_00109f4b:
                pcVar5 = _glad_glUniform2f;
                lVar14 = (long)*(int *)(this + 0x188);
                uVar9 = *(ulong *)(this + 0x1e8);
                if (*(int *)(this + 0x188) < 4) {
                  uVar9 = 3;
                  pcVar23 = "p_which";
                  iVar13 = 0xe4;
                  pcVar32 = "uniform_count";
LAB_0010b2bc:
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar13,uVar9,
                             lVar14,pcVar23,pcVar32,"",false,false);
                  lVar14 = (long)*(int *)(this + 0x188);
                }
                else {
                  if ((uVar9 != 0) && ((uint)uVar9 < *(uint *)(this + 0x10c))) {
                    lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                             *(long *)(*(long *)(this + 0xf8) +
                                      ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                    iVar13 = *(int *)(lVar15 + 0x78);
                    if (iVar13 == (int)(uVar9 >> 0x20)) {
                      uVar4 = *(uint *)(lVar15 + 0x68);
                      lVar14 = (long)(int)uVar4;
                      if ((int)uVar4 <= (int)uVar12) {
                        iVar13 = 0xe7;
                        pcVar23 = "p_variant";
                        pcVar32 = "int(version->variants.size())";
                        uVar9 = uVar11;
                        goto LAB_0010b2bc;
                      }
                      if (uVar4 <= uVar12) goto LAB_0010ab30;
                      plVar24 = (long *)(lVar7 + *(long *)(lVar15 + 0x70));
                      uVar4 = *(uint *)(plVar24 + 3);
                      uVar25 = 0x2aeaa2ab % (ulong)uVar4;
                      uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                      if (uVar21 != 0) {
                        uVar22 = 0;
                        while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar25 * 8) != 0)))
                        {
                          uVar22 = uVar22 + 1;
                          uVar25 = (ulong)((int)uVar25 + 1) % (ulong)uVar4;
                          uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                          if ((uVar21 == 0) ||
                             (((uVar4 + (int)uVar25) - uVar21 % uVar4) % uVar4 < uVar22))
                          goto LAB_0010b7d0;
                        }
                        lVar15 = *plVar24 + uVar25 * 0x38;
                        if (lVar15 != 0) {
                          lVar14 = (long)*(int *)(lVar15 + 0x10);
                          if (*(int *)(lVar15 + 0x10) < 4) {
                            pcVar23 = "p_which";
                            iVar13 = 0xea;
                            pcVar32 = "int(spec->uniform_location.size())";
                            uVar9 = 3;
                            goto LAB_0010b2bc;
                          }
                          lVar14 = (long)*(int *)(this + 0x188);
                          if (*(int *)(*(long *)(lVar15 + 0x18) + 0xc) < 0) goto LAB_0010a1b4;
                          if (*(int *)(this + 0x188) < 4) {
                            _err_print_index_error
                                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,
                                       3,lVar14,"p_which","uniform_count","",false,false);
LAB_0010ba14:
                            uVar20 = 0xffffffff;
                          }
                          else {
                            if (*(uint *)(this + 0x10c) <= (uint)uVar9) {
LAB_0010bb08:
                              _err_print_error("_version_get_uniform",
                                               "./drivers/gles3/shader_gles3.h",0xe6,
                                               "Parameter \"version\" is null.",0);
                              goto LAB_0010ba14;
                            }
                            lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80
                                     + *(long *)(*(long *)(this + 0xf8) +
                                                ((uVar9 & 0xffffffff) /
                                                (ulong)*(uint *)(this + 0x108)) * 8);
                            if (iVar13 != *(int *)(lVar14 + 0x78)) {
                              if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0);
                              }
                              goto LAB_0010bb08;
                            }
                            uVar4 = *(uint *)(lVar14 + 0x68);
                            if ((int)uVar4 <= (int)uVar12) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe7,uVar11,(long)(int)uVar4,"p_variant",
                                         "int(version->variants.size())","",false,false);
                              goto LAB_0010ba14;
                            }
                            if (uVar4 <= uVar12) goto LAB_0010ab30;
                            plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                            uVar4 = *(uint *)(plVar24 + 3);
                            uVar9 = 0x2aeaa2ab % (ulong)uVar4;
                            uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                            if (uVar21 == 0) {
LAB_0010bcca:
                              _err_print_error("_version_get_uniform",
                                               "./drivers/gles3/shader_gles3.h",0xe9,
                                               "Parameter \"spec\" is null.",0);
                              goto LAB_0010ba14;
                            }
                            uVar22 = 0;
                            while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar9 * 8) != 0)
                                   )) {
                              uVar22 = uVar22 + 1;
                              uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar4;
                              uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                              if ((uVar21 == 0) ||
                                 (((uVar4 + (int)uVar9) - uVar21 % uVar4) % uVar4 < uVar22))
                              goto LAB_0010bcca;
                            }
                            lVar14 = *plVar24 + uVar9 * 0x38;
                            if (lVar14 == 0) goto LAB_0010bcca;
                            if (*(int *)(lVar14 + 0x10) < 4) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xea,3,(long)*(int *)(lVar14 + 0x10),"p_which",
                                         "int(spec->uniform_location.size())","",false,false);
                              goto LAB_0010ba14;
                            }
                            uVar20 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0xc);
                          }
                          (*pcVar5)(0,uVar20);
                          lVar14 = (long)*(int *)(this + 0x188);
                          goto LAB_0010a1b4;
                        }
                      }
LAB_0010b7d0:
                      _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                       "Parameter \"spec\" is null.",0);
                      lVar14 = (long)*(int *)(this + 0x188);
                      goto LAB_0010a1b4;
                    }
                    if (iVar13 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                  }
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                  lVar14 = (long)*(int *)(this + 0x188);
                }
LAB_0010a1b4:
                pcVar5 = _glad_glUniform1f;
                uVar9 = *(ulong *)(this + 0x1e8);
                if ((int)lVar14 < 5) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,lVar14,
                             "p_which","uniform_count","",false,false);
                  goto LAB_0010a40f;
                }
                if ((uVar9 == 0) || (*(uint *)(this + 0x10c) <= (uint)uVar9)) {
LAB_0010b650:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                }
                else {
                  lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                           *(long *)(*(long *)(this + 0xf8) +
                                    ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                  iVar13 = *(int *)(lVar14 + 0x78);
                  if (iVar13 != (int)(uVar9 >> 0x20)) {
                    if (iVar13 + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_0010b650;
                  }
                  uVar4 = *(uint *)(lVar14 + 0x68);
                  if ((int)uVar4 <= (int)uVar12) {
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11,
                               (long)(int)uVar4,"p_variant","int(version->variants.size())","",false
                               ,false);
                    goto LAB_0010a40f;
                  }
                  if (uVar4 <= uVar12) goto LAB_0010ab30;
                  plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                  uVar4 = *(uint *)(plVar24 + 3);
                  uVar25 = 0x2aeaa2ab % (ulong)uVar4;
                  uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                  if (uVar21 == 0) {
LAB_0010b910:
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                     "Parameter \"spec\" is null.",0);
                  }
                  else {
                    uVar22 = 0;
                    while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar25 * 8) != 0))) {
                      uVar22 = uVar22 + 1;
                      uVar25 = (ulong)((int)uVar25 + 1) % (ulong)uVar4;
                      uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                      if ((uVar21 == 0) ||
                         (((uVar4 + (int)uVar25) - uVar21 % uVar4) % uVar4 < uVar22))
                      goto LAB_0010b910;
                    }
                    lVar14 = *plVar24 + uVar25 * 0x38;
                    if (lVar14 == 0) goto LAB_0010b910;
                    if (*(int *)(lVar14 + 0x10) < 5) {
                      _err_print_index_error
                                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                                 (long)*(int *)(lVar14 + 0x10),"p_which",
                                 "int(spec->uniform_location.size())","",false,false);
                    }
                    else if (-1 < *(int *)(*(long *)(lVar14 + 0x18) + 0x10)) {
                      if (*(int *)(this + 0x188) < 5) {
                        _err_print_index_error
                                  ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,4,
                                   (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,
                                   false);
LAB_0010bb6e:
                        uVar20 = 0xffffffff;
                      }
                      else {
                        if (*(uint *)(this + 0x10c) <= (uint)uVar9) {
LAB_0010bbb9:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe6,"Parameter \"version\" is null.",0);
                          goto LAB_0010bb6e;
                        }
                        lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                                 *(long *)(*(long *)(this + 0xf8) +
                                          ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) *
                                          8);
                        if (iVar13 != *(int *)(lVar14 + 0x78)) {
                          if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                             "Method/function failed. Returning: nullptr",
                                             "Attempting to use an uninitialized RID",0,0);
                          }
                          goto LAB_0010bbb9;
                        }
                        uVar4 = *(uint *)(lVar14 + 0x68);
                        if ((int)uVar4 <= (int)uVar12) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,
                                     uVar11,(long)(int)uVar4,"p_variant",
                                     "int(version->variants.size())","",false,false);
                          goto LAB_0010bb6e;
                        }
                        if (uVar4 <= uVar12) goto LAB_0010ab30;
                        plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                        uVar4 = *(uint *)(plVar24 + 3);
                        uVar9 = 0x2aeaa2ab % (ulong)uVar4;
                        uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                        if (uVar21 == 0) {
LAB_0010bcf4:
                          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                           0xe9,"Parameter \"spec\" is null.",0);
                          goto LAB_0010bb6e;
                        }
                        uVar22 = 0;
                        while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar9 * 8) != 0))) {
                          uVar22 = uVar22 + 1;
                          uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar4;
                          uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                          if ((uVar21 == 0) ||
                             (((uVar4 + (int)uVar9) - uVar21 % uVar4) % uVar4 < uVar22))
                          goto LAB_0010bcf4;
                        }
                        lVar14 = *plVar24 + uVar9 * 0x38;
                        if (lVar14 == 0) goto LAB_0010bcf4;
                        if (*(int *)(lVar14 + 0x10) < 5) {
                          _err_print_index_error
                                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,4,
                                     (long)*(int *)(lVar14 + 0x10),"p_which",
                                     "int(spec->uniform_location.size())","",false,false);
                          goto LAB_0010bb6e;
                        }
                        uVar20 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x10);
                      }
                      (*pcVar5)(uVar20);
                    }
                  }
                }
LAB_0010a40f:
                iVar13 = 0;
                if (param_8 == 0) goto LAB_0010a9f5;
LAB_0010a428:
                uVar9 = *(ulong *)(param_8 + 0x18);
                if ((uVar9 != 0) && ((uint)uVar9 < *(uint *)(this + 0x7c))) {
                  piVar19 = (int *)(((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x30 +
                                   *(long *)(*(long *)(this + 0x68) +
                                            ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) *
                                            8));
                  if (piVar19[0xb] != (int)(uVar9 >> 0x20)) {
                    if (piVar19[0xb] + 0x80000000U < 0x7fffffff) {
                      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                       "Method/function failed. Returning: nullptr",
                                       "Attempting to use an uninitialized RID",0,0);
                    }
                    goto LAB_0010a9e0;
                  }
                  if ((piVar19[3] == 0) || ((param_6 & *(uint *)(param_8 + 0x78)) == 0))
                  goto LAB_0010a9e0;
                  Transform2D::operator*((Transform2D *)local_c8,(Transform2D *)&local_1b8);
                  pcVar5 = _glad_glUniform4f;
                  lVar14 = (long)*(int *)(this + 0x188);
                  uVar9 = *(ulong *)(this + 0x1e8);
                  if (*(int *)(this + 0x188) < 2) {
                    uVar9 = 1;
                    pcVar23 = "p_which";
                    iVar6 = 0xe4;
                    pcVar32 = "uniform_count";
LAB_0010aeb5:
                    _err_print_index_error
                              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar6,uVar9,
                               lVar14,pcVar23,pcVar32,"",false,false);
                    lVar14 = (long)*(int *)(this + 0x188);
                  }
                  else {
                    if ((uVar9 != 0) && ((uint)uVar9 < *(uint *)pRVar2)) {
                      lVar15 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                               *(long *)(*(long *)(this + 0xf8) +
                                        ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8)
                      ;
                      iVar6 = *(int *)(lVar15 + 0x78);
                      if (iVar6 == (int)(uVar9 >> 0x20)) {
                        uVar4 = *(uint *)(lVar15 + 0x68);
                        lVar14 = (long)(int)uVar4;
                        if ((int)uVar4 <= (int)uVar12) {
                          iVar6 = 0xe7;
                          pcVar23 = "p_variant";
                          pcVar32 = "int(version->variants.size())";
                          uVar9 = uVar11;
                          goto LAB_0010aeb5;
                        }
                        if (uVar4 <= uVar12) goto LAB_0010ab30;
                        plVar24 = (long *)(lVar7 + *(long *)(lVar15 + 0x70));
                        uVar4 = *(uint *)(plVar24 + 3);
                        uVar25 = 0x2aeaa2ab % (ulong)uVar4;
                        uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                        if (uVar21 != 0) {
                          uVar22 = 0;
                          while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar25 * 8) != 0))
                                ) {
                            uVar22 = uVar22 + 1;
                            uVar25 = (ulong)((int)uVar25 + 1) % (ulong)uVar4;
                            uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
                            if ((uVar21 == 0) ||
                               (((uVar4 + (int)uVar25) - uVar21 % uVar4) % uVar4 < uVar22))
                            goto LAB_0010b068;
                          }
                          lVar15 = *plVar24 + uVar25 * 0x38;
                          if (lVar15 != 0) {
                            lVar14 = (long)*(int *)(lVar15 + 0x10);
                            if (*(int *)(lVar15 + 0x10) < 2) {
                              pcVar23 = "p_which";
                              iVar6 = 0xea;
                              pcVar32 = "int(spec->uniform_location.size())";
                              uVar9 = 1;
                              goto LAB_0010aeb5;
                            }
                            lVar14 = (long)*(int *)(this + 0x188);
                            if (*(int *)(*(long *)(lVar15 + 0x18) + 4) < 0) goto LAB_0010a71b;
                            if (*(int *)(this + 0x188) < 2) {
                              _err_print_index_error
                                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe4,1,lVar14,"p_which","uniform_count","",false,false);
                              goto LAB_0010b28d;
                            }
                            if ((uint)uVar9 < *(uint *)pRVar2) {
                              lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) *
                                       0x80 + *(long *)(*(long *)(this + 0xf8) +
                                                       ((uVar9 & 0xffffffff) /
                                                       (ulong)*(uint *)(this + 0x108)) * 8);
                              if (iVar6 == *(int *)(lVar14 + 0x78)) {
                                uVar4 = *(uint *)(lVar14 + 0x68);
                                if ((int)uVar4 <= (int)uVar12) {
                                  pcVar23 = "p_variant";
                                  iVar6 = 0xe7;
                                  pcVar32 = "int(version->variants.size())";
                                  uVar9 = uVar11;
                                  goto LAB_0010b52a;
                                }
                                if (uVar4 <= uVar12) goto LAB_0010ab30;
                                plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                                uVar4 = *(uint *)(plVar24 + 3);
                                uVar9 = 0x2aeaa2ab % (ulong)uVar4;
                                uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                                if (uVar21 == 0) goto LAB_0010b780;
                                uVar22 = 0;
                                goto LAB_0010a6c9;
                              }
                              if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                                 "Method/function failed. Returning: nullptr",
                                                 "Attempting to use an uninitialized RID",0,0);
                              }
                            }
                            pcVar23 = "Parameter \"version\" is null.";
                            uVar16 = 0xe6;
                            goto LAB_0010b3d2;
                          }
                        }
LAB_0010b068:
                        _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",
                                         0xe9,"Parameter \"spec\" is null.",0);
                        lVar14 = (long)*(int *)(this + 0x188);
                        goto LAB_0010a71b;
                      }
                      if (iVar6 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                         "Method/function failed. Returning: nullptr",
                                         "Attempting to use an uninitialized RID",0,0);
                      }
                    }
                    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                     "Parameter \"version\" is null.",0);
                    lVar14 = (long)*(int *)(this + 0x188);
                  }
                  goto LAB_0010a71b;
                }
                goto LAB_0010a9e0;
              }
LAB_0010ab79:
              if (this[0x158] == (RasterizerCanvasGLES3)0x0) {
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_228);
              }
              else {
                ShaderGLES3::_save_to_cache(pVVar1);
                ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_228);
              }
              goto LAB_0010ab90;
            }
          }
          uVar8 = (ulong)uVar21;
LAB_0010ab56:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar8,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (*(int *)(uVar25 + 0x78) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                     "Parameter \"version\" is null.",0,0);
  }
  else {
    _err_print_index_error
              ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,(ulong)uVar12,
               (long)*(int *)(this + 0x1d8),"p_variant","variant_count","",false,false);
  }
  goto LAB_0010aad0;
LAB_0010ad80:
  uVar17 = uVar17 + 1;
  uVar25 = (ulong)((int)uVar25 + 1) % (ulong)uVar21;
  uVar22 = *(uint *)(plVar24[2] + uVar25 * 4);
  if ((uVar22 == 0) || (((uVar21 + (int)uVar25) - uVar22 % uVar21) % uVar21 < uVar17))
  goto LAB_0010ab79;
  goto LAB_0010adb9;
LAB_0010a6c9:
  if ((uVar21 != 0x2aeaa2ab) || (*(long *)(plVar24[1] + uVar9 * 8) != 0)) goto LAB_0010a690;
  lVar14 = *plVar24 + uVar9 * 0x38;
  if (lVar14 != 0) {
    uVar4 = *(uint *)(lVar14 + 0x10);
    if ((int)uVar4 < 2) {
      iVar6 = 0xea;
      pcVar23 = "p_which";
      pcVar32 = "int(spec->uniform_location.size())";
      uVar9 = 1;
LAB_0010b52a:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar6,uVar9,
                 (long)(int)uVar4,pcVar23,pcVar32,"",false,false);
      goto LAB_0010b28d;
    }
    uVar20 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 4);
    goto LAB_0010a70d;
  }
  goto LAB_0010b780;
LAB_0010a690:
  uVar22 = uVar22 + 1;
  uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar4;
  uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
  if ((uVar21 == 0) || (((uVar4 + (int)uVar9) - uVar21 % uVar4) % uVar4 < uVar22))
  goto LAB_0010b780;
  goto LAB_0010a6c9;
LAB_0010b780:
  pcVar23 = "Parameter \"spec\" is null.";
  uVar16 = 0xe9;
LAB_0010b3d2:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar16,pcVar23,0);
LAB_0010b28d:
  uVar20 = 0xffffffff;
LAB_0010a70d:
  (*pcVar5)(uVar20);
  lVar14 = (long)*(int *)(this + 0x188);
LAB_0010a71b:
  pcVar5 = _glad_glUniform4f;
  uVar9 = *(ulong *)(this + 0x1e8);
  if ((int)lVar14 < 3) {
    _err_print_index_error
              ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,lVar14,"p_which",
               "uniform_count","",false,false);
  }
  else {
    if ((uVar9 != 0) && ((uint)uVar9 < *(uint *)pRVar2)) {
      lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
               *(long *)(*(long *)(this + 0xf8) +
                        ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
      iVar6 = *(int *)(lVar14 + 0x78);
      if (iVar6 == (int)(uVar9 >> 0x20)) {
        uVar4 = *(uint *)(lVar14 + 0x68);
        if ((int)uVar12 < (int)uVar4) {
          if (uVar4 <= uVar12) goto LAB_0010ab30;
          plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
          uVar4 = *(uint *)(plVar24 + 3);
          uVar25 = 0x2aeaa2ab % (ulong)uVar4;
          uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
          if (uVar21 != 0) {
            uVar22 = 0;
            while ((uVar21 != 0x2aeaa2ab || (*(long *)(plVar24[1] + uVar25 * 8) != 0))) {
              uVar22 = uVar22 + 1;
              uVar25 = (ulong)((int)uVar25 + 1) % (ulong)uVar4;
              uVar21 = *(uint *)(plVar24[2] + uVar25 * 4);
              if ((uVar21 == 0) || (((uVar4 + (int)uVar25) - uVar21 % uVar4) % uVar4 < uVar22))
              goto LAB_0010b0a0;
            }
            lVar14 = *plVar24 + uVar25 * 0x38;
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x10) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                           (long)*(int *)(lVar14 + 0x10),"p_which",
                           "int(spec->uniform_location.size())","",false,false);
                goto LAB_0010a994;
              }
              if (*(int *)(*(long *)(lVar14 + 0x18) + 8) < 0) goto LAB_0010a994;
              if (*(int *)(this + 0x188) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                           (long)*(int *)(this + 0x188),"p_which","uniform_count","",false,false);
                goto LAB_0010b33f;
              }
              if ((uint)uVar9 < *(uint *)pRVar2) {
                lVar14 = ((uVar9 & 0xffffffff) % (ulong)*(uint *)(this + 0x108)) * 0x80 +
                         *(long *)(*(long *)(this + 0xf8) +
                                  ((uVar9 & 0xffffffff) / (ulong)*(uint *)(this + 0x108)) * 8);
                if (iVar6 == *(int *)(lVar14 + 0x78)) {
                  uVar4 = *(uint *)(lVar14 + 0x68);
                  if ((int)uVar4 <= (int)uVar12) {
                    pcVar23 = "p_variant";
                    iVar6 = 0xe7;
                    pcVar32 = "int(version->variants.size())";
                    uVar9 = uVar11;
                    goto LAB_0010b6db;
                  }
                  if (uVar4 <= uVar12) goto LAB_0010ab30;
                  plVar24 = (long *)(lVar7 + *(long *)(lVar14 + 0x70));
                  uVar4 = *(uint *)(plVar24 + 3);
                  uVar9 = 0x2aeaa2ab % (ulong)uVar4;
                  uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
                  if (uVar21 == 0) goto LAB_0010b840;
                  uVar22 = 0;
                  goto LAB_0010a949;
                }
                if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
              }
              pcVar23 = "Parameter \"version\" is null.";
              uVar16 = 0xe6;
              goto LAB_0010b5df;
            }
          }
LAB_0010b0a0:
          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                           "Parameter \"spec\" is null.",0);
        }
        else {
          _err_print_index_error
                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,uVar11,
                     (long)(int)uVar4,"p_variant","int(version->variants.size())","",false,false);
        }
        goto LAB_0010a994;
      }
      if (iVar6 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                     "Parameter \"version\" is null.",0);
  }
LAB_0010a994:
  iVar6 = *piVar19;
  if (iVar6 != iVar13) {
    if (iVar6 == 0) {
      (*_glad_glDisable)(0xb44);
    }
    else {
      if (iVar13 == 0) {
        (*_glad_glEnable)(0xb44);
        iVar6 = *piVar19;
      }
      (*_glad_glCullFace)((iVar6 != 1) + 0x404);
    }
    iVar13 = *piVar19;
  }
  (*_glad_glBindVertexArray)(piVar19[3]);
  (*_glad_glDrawElements)(4,piVar19[1] * 3,0x1403,0);
LAB_0010a9e0:
  param_8 = *(long *)(param_8 + 0x88);
  if (param_8 == 0) goto LAB_0010a9f5;
  goto LAB_0010a428;
LAB_0010ab30:
  uVar11 = 2;
  uVar8 = 2;
  goto LAB_0010ab56;
LAB_0010a949:
  if ((uVar21 != 0x2aeaa2ab) || (*(long *)(plVar24[1] + uVar9 * 8) != 0)) goto LAB_0010a910;
  lVar14 = *plVar24 + uVar9 * 0x38;
  if (lVar14 != 0) {
    uVar4 = *(uint *)(lVar14 + 0x10);
    if ((int)uVar4 < 3) {
      iVar6 = 0xea;
      pcVar23 = "p_which";
      pcVar32 = "int(spec->uniform_location.size())";
      uVar9 = 2;
LAB_0010b6db:
      _err_print_index_error
                ("_version_get_uniform","./drivers/gles3/shader_gles3.h",iVar6,uVar9,
                 (long)(int)uVar4,pcVar23,pcVar32,"",false,false);
      goto LAB_0010b33f;
    }
    uVar20 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 8);
    goto LAB_0010a98d;
  }
  goto LAB_0010b840;
LAB_0010a910:
  uVar22 = uVar22 + 1;
  uVar9 = (ulong)((int)uVar9 + 1) % (ulong)uVar4;
  uVar21 = *(uint *)(plVar24[2] + uVar9 * 4);
  if ((uVar21 == 0) || (((uVar4 + (int)uVar9) - uVar21 % uVar4) % uVar4 < uVar22))
  goto LAB_0010b840;
  goto LAB_0010a949;
LAB_0010b840:
  pcVar23 = "Parameter \"spec\" is null.";
  uVar16 = 0xe9;
LAB_0010b5df:
  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",uVar16,pcVar23,0);
LAB_0010b33f:
  uVar20 = 0xffffffff;
LAB_0010a98d:
  (*pcVar5)(uVar20);
  goto LAB_0010a994;
LAB_0010a9f5:
  uStack_80 = 0;
  uStack_7c = (undefined4)_LC118;
  uStack_78 = (undefined4)((ulong)_LC118 >> 0x20);
  uStack_74 = 0;
  local_88 = (ulong)(uint)(float)(_LC117 / ((double)fVar29 + (double)fVar29));
  Transform2D::operator*((Transform2D *)&local_258,(Transform2D *)&local_88);
  *(undefined8 *)(lVar3 + 0x14) = local_258;
  *(undefined8 *)(lVar3 + 0x1c) = uStack_250;
  *(undefined8 *)(lVar3 + 0x24) = local_248;
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
  (*_glad_glDepthMask)(0);
  (*_glad_glDisable)(0xb71);
  (*_glad_glDisable)(0xc11);
  (*_glad_glDisable)(0xb44);
  Projection::~Projection((Projection *)local_108);
  goto LAB_0010aad0;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar9 = (ulong)((int)uVar9 + 1) % uVar10;
    uVar22 = *(uint *)(lVar14 + uVar9 * 4);
    if ((uVar22 == 0) || (((uVar21 + (int)uVar9) - uVar22 % uVar21) % uVar21 < uVar17)) break;
LAB_00109ae9:
    if ((uVar22 == (uint)uVar25) && (*(long *)(this + 0x1c8) == *(long *)(plVar24[1] + uVar9 * 8)))
    {
      puVar26 = (undefined4 *)(*plVar24 + uVar9 * 0x38);
      goto LAB_00109b03;
    }
  }
LAB_0010ab90:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0,1);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_0010aad0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bdd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::set_shadow_texture_size(int) */

void __thiscall
RasterizerCanvasGLES3::set_shadow_texture_size(RasterizerCanvasGLES3 *this,int param_1)

{
  long *plVar1;
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *this_00;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = *(int *)(GLES3::Config::singleton + 0xc);
  uVar20 = param_1 - 1U | (int)(param_1 - 1U) >> 1;
  uVar20 = (int)uVar20 >> 2 | uVar20;
  uVar20 = (int)uVar20 >> 4 | uVar20;
  uVar20 = uVar20 | (int)uVar20 >> 8;
  iVar13 = (uVar20 | (int)uVar20 >> 0x10) + 1;
  if (iVar16 < iVar13) {
    local_60 = 0;
    local_50 = 0x16;
    local_58 = "supported by hardware.";
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_70);
    local_58 = " which is beyond limit of ";
    local_80 = 0;
    local_50 = 0x1a;
    String::parse_latin1((StrRange *)&local_80);
    itos((long)&local_90);
    operator+((char *)&local_88,
              (String_conflict *)"Attempting to set CanvasItem shadow atlas size to ");
    String::operator+((String_conflict *)&local_78,(String_conflict *)&local_88);
    String::operator+((String_conflict *)&local_68,(String_conflict *)&local_78);
    String::operator+((String_conflict *)&local_58,(String_conflict *)&local_68);
    _err_print_error("set_shadow_texture_size","drivers/gles3/rasterizer_canvas_gles3.cpp",0x878,
                     (String_conflict *)&local_58,0,1);
    pcVar12 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar12 + -0x10,false);
      }
    }
    lVar11 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    if (*(int *)(this + 0x2ac) == iVar16) goto LAB_0010c1e0;
  }
  else {
    iVar16 = iVar13;
    if (*(int *)(this + 0x2ac) == iVar13) {
LAB_0010c1e0:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c34a;
    }
  }
  *(int *)(this + 0x2ac) = iVar16;
  if (*(int *)(this + 0x2a8) != 0) {
    (*_glad_glDeleteFramebuffers)(1,this + 0x2a8);
    lVar11 = GLES3::Utilities::singleton;
    uVar20 = *(uint *)(this + 0x2a0);
    this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
               *)(GLES3::Utilities::singleton + 200);
    local_58 = (char *)CONCAT44(local_58._4_4_,uVar20);
    if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
       (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
      uVar2 = *(ulong *)(hash_table_size_primes_inv +
                        (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
      uVar14 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
      uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
      uVar19 = uVar14 ^ uVar14 >> 0x10;
      if (uVar14 == uVar14 >> 0x10) {
        uVar19 = 1;
        uVar17 = uVar2;
      }
      else {
        uVar17 = uVar19 * uVar2;
      }
      uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                   (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar21;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar18 = SUB168(auVar3 * auVar7,8);
      uVar14 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar18 * 4);
      iVar16 = SUB164(auVar3 * auVar7,8);
      if (uVar14 != 0) {
        uVar22 = 0;
        do {
          if ((uVar14 == uVar19) &&
             (uVar20 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) +
                                           lVar18 * 8) + 0x10))) {
            (*_glad_glDeleteTextures)(1,&local_58);
            puVar15 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[](this_00,(uint *)&local_58);
            *(long *)(lVar11 + 0x108) = *(long *)(lVar11 + 0x108) - (ulong)*puVar15;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase(this_00,(uint *)&local_58);
            goto LAB_0010bfd4;
          }
          uVar22 = uVar22 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (iVar16 + 1) * uVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar21;
          lVar18 = SUB168(auVar4 * auVar8,8);
          uVar14 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar18 * 4);
          iVar16 = SUB164(auVar4 * auVar8,8);
        } while ((uVar14 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar14 * uVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar21, auVar6._8_8_ = 0,
                auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4)
                                + iVar16) - SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar21, uVar22 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                     "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010bfd4:
    (*_glad_glDeleteRenderbuffers)(1,this + 0x2a4);
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined8 *)(this + 0x2a0) = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_shadow_atlas(this);
    return;
  }
LAB_0010c34a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::free_polygon(unsigned long) */

void __thiscall RasterizerCanvasGLES3::free_polygon(RasterizerCanvasGLES3 *this,ulong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *pHVar5;
  long lVar6;
  undefined8 uVar7;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  ulong uVar51;
  uint *puVar52;
  int iVar53;
  uint uVar54;
  long lVar55;
  long lVar56;
  ulong uVar57;
  ulong uVar58;
  long lVar59;
  ulong uVar60;
  ulong uVar61;
  long *plVar62;
  uint uVar63;
  uint uVar64;
  long in_FS_OFFSET;
  uint local_58;
  uint local_44;
  long local_40;
  
  lVar6 = GLES3::Utilities::singleton;
  lVar56 = *(long *)(this + 0x1f8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar56 != 0) && (*(int *)(this + 0x21c) != 0)) {
    uVar61 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4));
    lVar59 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
    uVar51 = param_1 * 0x3ffff - 1;
    uVar51 = (uVar51 ^ uVar51 >> 0x1f) * 0x15;
    uVar51 = (uVar51 ^ uVar51 >> 0xb) * 0x41;
    uVar51 = uVar51 >> 0x16 ^ uVar51;
    uVar60 = uVar51 & 0xffffffff;
    if ((int)uVar51 == 0) {
      uVar60 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar60 * lVar59;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar61;
    lVar55 = SUB168(auVar8 * auVar29,8);
    uVar50 = *(uint *)(*(long *)(this + 0x200) + lVar55 * 4);
    uVar64 = SUB164(auVar8 * auVar29,8);
    if (uVar50 != 0) {
      uVar63 = 0;
      do {
        if (((uint)uVar60 == uVar50) &&
           (*(ulong *)(*(long *)(lVar56 + lVar55 * 8) + 0x10) == param_1)) {
          lVar56 = *(long *)(lVar56 + (ulong)uVar64 * 8);
          uVar50 = *(uint *)(lVar56 + 0x20);
          if (uVar50 == 0) goto LAB_0010c4a0;
          pHVar5 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                    *)(GLES3::Utilities::singleton + 0x68);
          local_44 = uVar50;
          if ((*(long *)(GLES3::Utilities::singleton + 0x70) == 0) ||
             (*(int *)(GLES3::Utilities::singleton + 0x94) == 0)) goto LAB_0010ca22;
          uVar61 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
          uVar51 = *(ulong *)(hash_table_size_primes_inv +
                             (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
          uVar64 = (uVar50 >> 0x10 ^ uVar50) * -0x7a143595;
          uVar64 = (uVar64 ^ uVar64 >> 0xd) * -0x3d4d51cb;
          local_58 = uVar64 ^ uVar64 >> 0x10;
          if (uVar64 == uVar64 >> 0x10) {
            local_58 = 1;
            uVar58 = uVar51;
          }
          else {
            uVar58 = local_58 * uVar51;
          }
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar61;
          auVar46._8_8_ = 0;
          auVar46._0_8_ = uVar58;
          lVar59 = SUB168(auVar25 * auVar46,8);
          iVar53 = SUB164(auVar25 * auVar46,8);
          uVar64 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar59 * 4);
          if (uVar64 == 0) goto LAB_0010ca22;
          uVar63 = 0;
          goto LAB_0010c981;
        }
        uVar63 = uVar63 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar64 + 1) * lVar59;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar61;
        lVar55 = SUB168(auVar9 * auVar30,8);
        uVar50 = *(uint *)(*(long *)(this + 0x200) + lVar55 * 4);
        uVar64 = SUB164(auVar9 * auVar30,8);
      } while ((uVar50 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar59, auVar31._8_8_ = 0,
              auVar31._0_8_ = uVar61, auVar11._8_8_ = 0,
              auVar11._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4) +
                           uVar64) - SUB164(auVar10 * auVar31,8)) * lVar59, auVar32._8_8_ = 0,
              auVar32._0_8_ = uVar61, uVar63 <= SUB164(auVar11 * auVar32,8)));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("free_polygon","drivers/gles3/rasterizer_canvas_gles3.cpp",0xa13,
                     "Parameter \"pb_ptr\" is null.",0,0);
    return;
  }
  goto LAB_0010cac0;
LAB_0010c690:
  uVar64 = *(uint *)(lVar6 + uVar57 * 4);
  uVar61 = uVar57 & 0xffffffff;
  uVar63 = uVar63 + 1;
  if ((uVar64 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar64 * lVar59, auVar38._8_8_ = 0,
     auVar38._0_8_ = uVar58, auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar50 + uVar54) - SUB164(auVar17 * auVar38,8)) * lVar59,
     auVar39._8_8_ = 0, auVar39._0_8_ = uVar58, uVar51 = uVar57,
     SUB164(auVar18 * auVar39,8) < uVar63)) goto LAB_0010c805;
  goto LAB_0010c6ca;
  while( true ) {
    uVar63 = uVar63 + 1;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = (iVar53 + 1) * uVar51;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar61;
    lVar59 = SUB168(auVar26 * auVar47,8);
    uVar64 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar59 * 4);
    iVar53 = SUB164(auVar26 * auVar47,8);
    if ((uVar64 == 0) ||
       (auVar27._8_8_ = 0, auVar27._0_8_ = uVar64 * uVar51, auVar48._8_8_ = 0,
       auVar48._0_8_ = uVar61, auVar28._8_8_ = 0,
       auVar28._0_8_ =
            ((*(uint *)(hash_table_size_primes +
                       (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) + iVar53) -
            SUB164(auVar27 * auVar48,8)) * uVar51, auVar49._8_8_ = 0, auVar49._0_8_ = uVar61,
       SUB164(auVar28 * auVar49,8) < uVar63)) break;
LAB_0010c981:
    if ((local_58 == uVar64) &&
       (uVar50 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) + lVar59 * 8) +
                           0x10))) {
      (*_glad_glDeleteBuffers)(1,&local_44);
      puVar52 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                        ::operator[](pHVar5,&local_44);
      *(long *)(lVar6 + 0xf8) = *(long *)(lVar6 + 0xf8) - (ulong)*puVar52;
      HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
      ::erase(pHVar5,&local_44);
      goto LAB_0010c4a0;
    }
  }
LAB_0010ca22:
  _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                   "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010c4a0:
  (*_glad_glDeleteVertexArrays)(1,lVar56 + 0x1c);
  lVar6 = GLES3::Utilities::singleton;
  local_44 = *(uint *)(lVar56 + 0x18);
  pHVar5 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            *)(GLES3::Utilities::singleton + 0x68);
  if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
     (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
    uVar61 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                 (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
    uVar51 = *(ulong *)(hash_table_size_primes_inv +
                       (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
    uVar50 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
    uVar50 = (uVar50 ^ uVar50 >> 0xd) * -0x3d4d51cb;
    uVar64 = uVar50 ^ uVar50 >> 0x10;
    if (uVar50 == uVar50 >> 0x10) {
      uVar64 = 1;
      uVar58 = uVar51;
    }
    else {
      uVar58 = uVar64 * uVar51;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar61;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar58;
    lVar56 = SUB168(auVar12 * auVar33,8);
    uVar50 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar56 * 4);
    iVar53 = SUB164(auVar12 * auVar33,8);
    if (uVar50 != 0) {
      uVar63 = 0;
      do {
        if ((uVar64 == uVar50) &&
           (local_44 ==
            *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) + lVar56 * 8) + 0x10))
           ) {
          (*_glad_glDeleteBuffers)(1,&local_44);
          puVar52 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                            ::operator[](pHVar5,&local_44);
          *(long *)(lVar6 + 0xf8) = *(long *)(lVar6 + 0xf8) - (ulong)*puVar52;
          HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
          ::erase(pHVar5,&local_44);
          goto LAB_0010c617;
        }
        uVar63 = uVar63 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (iVar53 + 1) * uVar51;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar61;
        lVar56 = SUB168(auVar13 * auVar34,8);
        uVar50 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar56 * 4);
        iVar53 = SUB164(auVar13 * auVar34,8);
      } while ((uVar50 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = uVar50 * uVar51, auVar35._8_8_ = 0,
              auVar35._0_8_ = uVar61, auVar15._8_8_ = 0,
              auVar15._0_8_ =
                   ((*(uint *)(hash_table_size_primes +
                              (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) + iVar53) -
                   SUB164(auVar14 * auVar35,8)) * uVar51, auVar36._8_8_ = 0, auVar36._0_8_ = uVar61,
              uVar63 <= SUB164(auVar15 * auVar36,8)));
    }
  }
  _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                   "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010c617:
  lVar56 = *(long *)(this + 0x1f8);
  if ((lVar56 != 0) && (*(int *)(this + 0x21c) != 0)) {
    lVar6 = *(long *)(this + 0x200);
    uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
    uVar58 = CONCAT44(0,uVar50);
    lVar59 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x218) * 8);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar60 * lVar59;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar58;
    uVar51 = SUB168(auVar16 * auVar37,8);
    uVar64 = *(uint *)(lVar6 + uVar51 * 4);
    uVar61 = (ulong)SUB164(auVar16 * auVar37,8);
    if (uVar64 != 0) {
      uVar63 = 0;
LAB_0010c6ca:
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)((int)uVar61 + 1) * lVar59;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar58;
      uVar57 = SUB168(auVar19 * auVar40,8);
      uVar54 = SUB164(auVar19 * auVar40,8);
      if (((uint)uVar60 != uVar64) || (*(ulong *)(*(long *)(lVar56 + uVar51 * 8) + 0x10) != param_1)
         ) goto LAB_0010c690;
      puVar52 = (uint *)(lVar6 + uVar57 * 4);
      uVar64 = *puVar52;
      if ((uVar64 != 0) &&
         (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar64 * lVar59, auVar41._8_8_ = 0,
         auVar41._0_8_ = uVar58, auVar21._8_8_ = 0,
         auVar21._0_8_ = (ulong)((uVar54 + uVar50) - SUB164(auVar20 * auVar41,8)) * lVar59,
         auVar42._8_8_ = 0, auVar42._0_8_ = uVar58, uVar51 = (ulong)uVar54, uVar60 = uVar61,
         SUB164(auVar21 * auVar42,8) != 0)) {
        while( true ) {
          uVar61 = uVar51;
          puVar1 = (uint *)(lVar6 + uVar60 * 4);
          *puVar52 = *puVar1;
          puVar2 = (undefined8 *)(lVar56 + uVar57 * 8);
          *puVar1 = uVar64;
          puVar3 = (undefined8 *)(lVar56 + uVar60 * 8);
          uVar7 = *puVar2;
          *puVar2 = *puVar3;
          *puVar3 = uVar7;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = (ulong)((int)uVar61 + 1) * lVar59;
          auVar45._8_8_ = 0;
          auVar45._0_8_ = uVar58;
          uVar57 = SUB168(auVar24 * auVar45,8);
          puVar52 = (uint *)(lVar6 + uVar57 * 4);
          uVar64 = *puVar52;
          if ((uVar64 == 0) ||
             (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar64 * lVar59, auVar43._8_8_ = 0,
             auVar43._0_8_ = uVar58, auVar23._8_8_ = 0,
             auVar23._0_8_ =
                  (ulong)((SUB164(auVar24 * auVar45,8) + uVar50) - SUB164(auVar22 * auVar43,8)) *
                  lVar59, auVar44._8_8_ = 0, auVar44._0_8_ = uVar58,
             SUB164(auVar23 * auVar44,8) == 0)) break;
          uVar51 = uVar57 & 0xffffffff;
          uVar60 = uVar61;
        }
      }
      plVar4 = (long *)(lVar56 + uVar61 * 8);
      *(undefined4 *)(lVar6 + uVar61 * 4) = 0;
      plVar62 = (long *)*plVar4;
      if (*(long **)(this + 0x208) == plVar62) {
        *(long *)(this + 0x208) = *plVar62;
        plVar62 = (long *)*plVar4;
      }
      if (*(long **)(this + 0x210) == plVar62) {
        *(long *)(this + 0x210) = plVar62[1];
        plVar62 = (long *)*plVar4;
      }
      if ((long *)plVar62[1] != (long *)0x0) {
        *(long *)plVar62[1] = *plVar62;
        plVar62 = (long *)*plVar4;
      }
      if (*plVar62 != 0) {
        *(long *)(*plVar62 + 8) = plVar62[1];
        plVar62 = (long *)*plVar4;
      }
      Memory::free_static(plVar62,false);
      *(undefined8 *)(*(long *)(this + 0x1f8) + uVar61 * 8) = 0;
      *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + -1;
    }
  }
LAB_0010c805:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cac0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::~RasterizerCanvasGLES3() */

void __thiscall RasterizerCanvasGLES3::~RasterizerCanvasGLES3(RasterizerCanvasGLES3 *this)

{
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *pHVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
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
  code *pcVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  long *plVar39;
  uint *puVar40;
  ulong uVar41;
  int iVar42;
  long lVar43;
  ulong uVar44;
  uint uVar45;
  long lVar46;
  void *pvVar47;
  uint uVar48;
  uint uVar49;
  long in_FS_OFFSET;
  long local_78;
  uint local_68;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR_request_polygon_0011c570;
  singleton = 0;
  plVar39 = (long *)GLES3::MaterialStorage::get_singleton();
  ShaderGLES3::version_free(plVar39 + 0x37,*(undefined8 *)(this + 0x248));
  ShaderGLES3::version_free((ShaderGLES3 *)(this + 0xb8),*(undefined8 *)(this + 0x1e8));
  (**(code **)(*plVar39 + 0xd8))(plVar39,*(undefined8 *)(this + 0x2002e8));
  (**(code **)(*plVar39 + 0x80))(plVar39,*(undefined8 *)(this + 0x2002f0));
  (**(code **)(*plVar39 + 0xd8))(plVar39,*(undefined8 *)(this + 0x2002f8));
  (**(code **)(*plVar39 + 0x80))(plVar39,*(undefined8 *)(this + 0x200300));
  singleton = 0;
  (*_glad_glDeleteBuffers)(1,this + 0x228);
  (*_glad_glDeleteVertexArrays)(1,this + 0x22c);
  (*_glad_glDeleteBuffers)(1,this + 0x228);
  (*_glad_glDeleteVertexArrays)(1,this + 0x22c);
  plVar39 = (long *)GLES3::TextureStorage::get_singleton();
  (**(code **)(*plVar39 + 0x10))(plVar39,*(undefined8 *)(this + 0x2002e0));
  Memory::free_static(*(void **)(this + 0x290),true);
  Memory::free_static(*(void **)(this + 0x298),true);
  if (*(int *)(this + 0x2a8) != 0) {
    (*_glad_glDeleteFramebuffers)(1,this + 0x2a8);
    lVar46 = GLES3::Utilities::singleton;
    local_44 = *(uint *)(this + 0x2a0);
    pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              *)(GLES3::Utilities::singleton + 200);
    if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
       (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
      uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                   (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv +
                        (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
      uVar37 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar45 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar45 = 1;
        uVar41 = uVar2;
      }
      else {
        uVar41 = uVar45 * uVar2;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar44;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar41;
      lVar43 = SUB168(auVar3 * auVar19,8);
      uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar43 * 4);
      iVar42 = SUB164(auVar3 * auVar19,8);
      if (uVar37 != 0) {
        uVar38 = 0;
        do {
          if ((uVar45 == uVar37) &&
             (local_44 ==
              *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) + lVar43 * 8) + 0x10
                       ))) {
            (*_glad_glDeleteTextures)(1,&local_44);
            puVar40 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[](pHVar1,&local_44);
            *(long *)(lVar46 + 0x108) = *(long *)(lVar46 + 0x108) - (ulong)*puVar40;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase(pHVar1,&local_44);
            goto LAB_0010cd8c;
          }
          uVar38 = uVar38 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (iVar42 + 1) * uVar2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar43 = SUB168(auVar4 * auVar20,8);
          uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar43 * 4);
          iVar42 = SUB164(auVar4 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar37 * uVar2, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar44, auVar6._8_8_ = 0,
                auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4)
                                + iVar42) - SUB164(auVar5 * auVar21,8)) * uVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar44, uVar38 <= SUB164(auVar6 * auVar22,8)));
      }
    }
    _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                     "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010cd8c:
    (*_glad_glDeleteRenderbuffers)(1);
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined8 *)(this + 0x2a0) = 0;
  }
  lVar46 = 0;
  local_78 = 0;
  uVar37 = 0;
  if (*(int *)(this + 0x260) != 0) {
    do {
      while( true ) {
        lVar36 = GLES3::Utilities::singleton;
        lVar43 = *(long *)(local_78 + *(long *)(this + 0x268) + 8);
        if ((lVar43 != 0) && (lVar46 < *(long *)(lVar43 + -8))) break;
        uVar45 = *(uint *)(local_78 + *(long *)(this + 0x268) + 0x10);
        if (uVar45 != 0) {
          pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                    *)(GLES3::Utilities::singleton + 0x68);
          local_44 = uVar45;
          if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
             (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
            uVar2 = *(ulong *)(hash_table_size_primes_inv +
                              (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
            uVar38 = (uVar45 >> 0x10 ^ uVar45) * -0x7a143595;
            uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
            uVar49 = uVar38 ^ uVar38 >> 0x10;
            if (uVar38 == uVar38 >> 0x10) {
              uVar49 = 1;
              uVar44 = uVar2;
            }
            else {
              uVar44 = uVar49 * uVar2;
            }
            uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar41;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar44;
            lVar46 = SUB168(auVar11 * auVar27,8);
            uVar38 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar46 * 4);
            iVar42 = SUB164(auVar11 * auVar27,8);
            if (uVar38 != 0) {
              uVar48 = 0;
              do {
                if ((uVar49 == uVar38) &&
                   (uVar45 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                                 lVar46 * 8) + 0x10))) {
                  (*_glad_glDeleteBuffers)(1,&local_44);
                  puVar40 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                    ::operator[](pHVar1,&local_44);
                  plVar39 = (long *)(lVar36 + 0xf8);
                  *plVar39 = *plVar39 - (ulong)*puVar40;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  ::erase(pHVar1,&local_44);
                  goto LAB_0010d00f;
                }
                uVar48 = uVar48 + 1;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = (iVar42 + 1) * uVar2;
                auVar28._8_8_ = 0;
                auVar28._0_8_ = uVar41;
                lVar46 = SUB168(auVar12 * auVar28,8);
                uVar38 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar46 * 4);
                iVar42 = SUB164(auVar12 * auVar28,8);
              } while ((uVar38 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = uVar38 * uVar2, auVar29._8_8_ = 0,
                      auVar29._0_8_ = uVar41, auVar14._8_8_ = 0,
                      auVar14._0_8_ =
                           ((*(uint *)(hash_table_size_primes +
                                      (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) +
                            iVar42) - SUB164(auVar13 * auVar29,8)) * uVar2, auVar30._8_8_ = 0,
                      auVar30._0_8_ = uVar41, uVar48 <= SUB164(auVar14 * auVar30,8)));
            }
          }
          _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                           "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
        }
LAB_0010d00f:
        lVar46 = GLES3::Utilities::singleton;
        uVar45 = *(uint *)(this + 0x260);
        if (uVar45 <= uVar37) goto LAB_0010cfc0;
        uVar38 = *(uint *)(*(long *)(this + 0x268) + 0x14 + local_78);
        if (uVar38 != 0) {
          pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                    *)(GLES3::Utilities::singleton + 0x68);
          local_44 = uVar38;
          if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
             (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
            uVar2 = *(ulong *)(hash_table_size_primes_inv +
                              (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
            uVar45 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
            uVar45 = (uVar45 ^ uVar45 >> 0xd) * -0x3d4d51cb;
            uVar49 = uVar45 ^ uVar45 >> 0x10;
            if (uVar45 == uVar45 >> 0x10) {
              uVar49 = 1;
              uVar44 = uVar2;
            }
            else {
              uVar44 = uVar49 * uVar2;
            }
            uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar41;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar44;
            lVar43 = SUB168(auVar15 * auVar31,8);
            uVar45 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar43 * 4);
            iVar42 = SUB164(auVar15 * auVar31,8);
            if (uVar45 != 0) {
              uVar48 = 0;
              do {
                if ((uVar49 == uVar45) &&
                   (uVar38 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                                 lVar43 * 8) + 0x10))) {
                  (*_glad_glDeleteBuffers)(1,&local_44);
                  puVar40 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                    ::operator[](pHVar1,&local_44);
                  *(long *)(lVar46 + 0xf8) = *(long *)(lVar46 + 0xf8) - (ulong)*puVar40;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  ::erase(pHVar1,&local_44);
                  goto LAB_0010d2fc;
                }
                uVar48 = uVar48 + 1;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = (iVar42 + 1) * uVar2;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar41;
                lVar43 = SUB168(auVar16 * auVar32,8);
                uVar45 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar43 * 4);
                iVar42 = SUB164(auVar16 * auVar32,8);
              } while ((uVar45 != 0) &&
                      (auVar17._8_8_ = 0, auVar17._0_8_ = uVar45 * uVar2, auVar33._8_8_ = 0,
                      auVar33._0_8_ = uVar41, auVar18._8_8_ = 0,
                      auVar18._0_8_ =
                           ((*(uint *)(hash_table_size_primes +
                                      (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) +
                            iVar42) - SUB164(auVar17 * auVar33,8)) * uVar2, auVar34._8_8_ = 0,
                      auVar34._0_8_ = uVar41, uVar48 <= SUB164(auVar18 * auVar34,8)));
            }
          }
          _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                           "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010d2fc:
          uVar45 = *(uint *)(this + 0x260);
        }
        uVar37 = uVar37 + 1;
        local_78 = local_78 + 0x28;
        if (uVar45 <= uVar37) goto LAB_0010d30b;
        lVar46 = 0;
      }
      uVar45 = *(uint *)(lVar43 + lVar46 * 4);
      if (uVar45 != 0) {
        pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  *)(GLES3::Utilities::singleton + 0x68);
        local_44 = uVar45;
        if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
           (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
          uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
          uVar2 = *(ulong *)(hash_table_size_primes_inv +
                            (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
          uVar38 = (uVar45 >> 0x10 ^ uVar45) * -0x7a143595;
          uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
          local_68 = uVar38 ^ uVar38 >> 0x10;
          if (uVar38 == uVar38 >> 0x10) {
            local_68 = 1;
            uVar41 = uVar2;
          }
          else {
            uVar41 = local_68 * uVar2;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar44;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar41;
          lVar43 = SUB168(auVar7 * auVar23,8);
          uVar38 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar43 * 4);
          iVar42 = SUB164(auVar7 * auVar23,8);
          if (uVar38 != 0) {
            uVar49 = 0;
            do {
              if ((local_68 == uVar38) &&
                 (uVar45 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                               lVar43 * 8) + 0x10))) {
                (*_glad_glDeleteBuffers)(1,&local_44);
                puVar40 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                  ::operator[](pHVar1,&local_44);
                plVar39 = (long *)(lVar36 + 0xf8);
                *plVar39 = *plVar39 - (ulong)*puVar40;
                HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                ::erase(pHVar1,&local_44);
                goto LAB_0010cde8;
              }
              uVar49 = uVar49 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (iVar42 + 1) * uVar2;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar44;
              lVar43 = SUB168(auVar8 * auVar24,8);
              uVar38 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar43 * 4);
              iVar42 = SUB164(auVar8 * auVar24,8);
            } while ((uVar38 != 0) &&
                    (auVar9._8_8_ = 0, auVar9._0_8_ = uVar38 * uVar2, auVar25._8_8_ = 0,
                    auVar25._0_8_ = uVar44, auVar10._8_8_ = 0,
                    auVar10._0_8_ =
                         ((*(uint *)(hash_table_size_primes +
                                    (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) +
                          iVar42) - SUB164(auVar9 * auVar25,8)) * uVar2, auVar26._8_8_ = 0,
                    auVar26._0_8_ = uVar44, uVar49 <= SUB164(auVar10 * auVar26,8)));
          }
        }
        _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                         "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
      }
LAB_0010cde8:
      uVar45 = *(uint *)(this + 0x260);
      lVar46 = lVar46 + 1;
    } while (uVar37 < uVar45);
LAB_0010cfc0:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar37,(ulong)uVar45,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar35 = (code *)invalidInstructionException();
    (*pcVar35)();
  }
LAB_0010d30b:
  if (*(void **)(this + 0x278) != (void *)0x0) {
    if (*(int *)(this + 0x270) != 0) {
      *(undefined4 *)(this + 0x270) = 0;
    }
    Memory::free_static(*(void **)(this + 0x278),false);
  }
  pvVar47 = *(void **)(this + 0x268);
  if (pvVar47 != (void *)0x0) {
    if (*(int *)(this + 0x260) != 0) {
      lVar46 = 0;
      do {
        lVar43 = *(long *)((long)pvVar47 + lVar46 * 0x28 + 8);
        if (lVar43 != 0) {
          LOCK();
          plVar39 = (long *)(lVar43 + -0x10);
          *plVar39 = *plVar39 + -1;
          UNLOCK();
          if (*plVar39 == 0) {
            lVar43 = *(long *)((long)pvVar47 + lVar46 * 0x28 + 8);
            *(undefined8 *)((long)pvVar47 + lVar46 * 0x28 + 8) = 0;
            Memory::free_static((void *)(lVar43 + -0x10),false);
          }
          pvVar47 = *(void **)(this + 0x268);
        }
        lVar46 = lVar46 + 1;
      } while ((uint)lVar46 < *(uint *)(this + 0x260));
      *(undefined4 *)(this + 0x260) = 0;
      if (pvVar47 == (void *)0x0) goto LAB_0010d3a9;
    }
    Memory::free_static(pvVar47,false);
  }
LAB_0010d3a9:
  pvVar47 = *(void **)(this + 0x1f8);
  if (pvVar47 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar37 == 0) {
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
      }
      else {
        lVar46 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar46) != 0) {
            *(int *)(*(long *)(this + 0x200) + lVar46) = 0;
            Memory::free_static(*(void **)((long)pvVar47 + lVar46 * 2),false);
            pvVar47 = *(void **)(this + 0x1f8);
            *(undefined8 *)((long)pvVar47 + lVar46 * 2) = 0;
          }
          lVar46 = lVar46 + 4;
        } while (lVar46 != (ulong)uVar37 * 4);
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
        if (pvVar47 == (void *)0x0) goto LAB_0010d45a;
      }
    }
    Memory::free_static(pvVar47,false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
LAB_0010d45a:
  *(undefined ***)(this + 0xb8) = &PTR__init_0011c508;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)(this + 0xb8));
  RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false>::~RID_Alloc
            ((RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false> *)(this + 0x60));
  RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false>::~RID_Alloc
            ((RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false> *)(this + 8));
  RendererCanvasRender::singleton = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RasterizerCanvasGLES3::~RasterizerCanvasGLES3() */

void __thiscall RasterizerCanvasGLES3::~RasterizerCanvasGLES3(RasterizerCanvasGLES3 *this)

{
  ~RasterizerCanvasGLES3(this);
  operator_delete(this,0x200308);
  return;
}



/* RasterizerCanvasGLES3::light_create() */

void __thiscall RasterizerCanvasGLES3::light_create(RasterizerCanvasGLES3 *this)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_34 = 0x3f800000;
  local_2c = 0x3f80000000000000;
  local_24 = 0;
  RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false>::make_rid
            ((RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false> *)(this + 8),
             (CanvasLight *)&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RasterizerCanvasGLES3::occluder_polygon_create() */

void __thiscall RasterizerCanvasGLES3::occluder_polygon_create(RasterizerCanvasGLES3 *this)

{
  long in_FS_OFFSET;
  OccluderPolygon local_48 [16];
  undefined1 local_38 [12];
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = SUB1612((undefined1  [16])0x0,0);
  local_48[0] = (OccluderPolygon)0x0;
  local_48[1] = (OccluderPolygon)0x0;
  local_48[2] = (OccluderPolygon)0x0;
  local_48[3] = (OccluderPolygon)0x0;
  local_48[4] = (OccluderPolygon)0x0;
  local_48[5] = (OccluderPolygon)0x0;
  local_48[6] = (OccluderPolygon)0x0;
  local_48[7] = (OccluderPolygon)0x0;
  local_48[8] = (OccluderPolygon)0x0;
  local_48[9] = (OccluderPolygon)0x0;
  local_48[10] = (OccluderPolygon)0x0;
  local_48[0xb] = (OccluderPolygon)0x0;
  local_48[0xc] = (OccluderPolygon)0x0;
  local_48[0xd] = (OccluderPolygon)0x0;
  local_48[0xe] = (OccluderPolygon)0x0;
  local_48[0xf] = (OccluderPolygon)0x0;
  uStack_2c = 0;
  auStack_28 = SUB1612((undefined1  [16])0x0,4);
  RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false>::make_rid
            ((RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false> *)(this + 0x60),local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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
LAB_0010d816:
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
    if (lVar10 == 0) goto LAB_0010d816;
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
    FUN_00118d6a();
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
      goto LAB_0010d76c;
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
LAB_0010d76c:
  puVar8[-1] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::request_polygon(Vector<int> const&, Vector<Vector2> const&, Vector<Color>
   const&, Vector<Vector2> const&, Vector<int> const&, Vector<float> const&) */

char * __thiscall
RasterizerCanvasGLES3::request_polygon
          (RasterizerCanvasGLES3 *this,Vector *param_1,Vector *param_2,Vector *param_3,
          Vector *param_4,Vector *param_5,Vector *param_6)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  void *__src;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong *puVar9;
  undefined2 uVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  size_t __n;
  uint uVar16;
  char *pcVar17;
  void *pvVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long in_FS_OFFSET;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  long local_a0 [2];
  long local_90;
  long local_88;
  void *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  long local_40;
  
  lVar22 = *(long *)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = *(long *)(param_4 + 8);
  if (*(long *)(param_2 + 8) == 0) {
    iVar6 = 0;
    iVar24 = 0;
    uVar16 = 0;
    uVar21 = 0;
    if (lVar22 != 0) goto LAB_0010d8ea;
    iVar23 = 6;
    uVar21 = 0;
    if (lVar14 != 0) goto LAB_0010d907;
    lVar22 = *(long *)(param_5 + 8);
    iVar23 = 8;
    if (lVar22 == 0) goto LAB_0010e271;
LAB_0010d927:
    iVar24 = iVar6;
    if (iVar6 == *(int *)(lVar22 + -8)) {
      lVar22 = *(long *)(param_6 + 8);
      if (lVar22 == 0) {
        iVar6 = 0;
      }
      else {
LAB_0010defa:
        iVar6 = *(int *)(lVar22 + -8);
      }
      if (iVar24 == iVar6) {
LAB_0010df06:
        iVar23 = iVar23 + 4;
      }
    }
  }
  else {
    uVar16 = (uint)*(undefined8 *)(*(long *)(param_2 + 8) + -8);
    iVar24 = uVar16 * 4;
    uVar21 = uVar16;
    if (lVar22 == 0) {
      uVar21 = 0;
    }
    else {
LAB_0010d8ea:
      uVar16 = uVar21;
      uVar21 = *(uint *)(lVar22 + -8);
    }
    iVar23 = (uint)(uVar16 == uVar21) * 4 + 2;
    iVar6 = iVar24;
    uVar21 = uVar16;
    if (lVar14 == 0) {
      uVar21 = 0;
    }
    else {
LAB_0010d907:
      uVar16 = uVar21;
      uVar21 = *(uint *)(lVar14 + -8);
      iVar24 = iVar6;
    }
    if (uVar16 == uVar21) {
      iVar23 = iVar23 + 2;
    }
    lVar22 = *(long *)(param_5 + 8);
    iVar6 = iVar24;
    if (lVar22 != 0) goto LAB_0010d927;
    if (iVar24 == 0) {
LAB_0010e271:
      iVar24 = 0;
      lVar22 = *(long *)(param_6 + 8);
      if (lVar22 != 0) goto LAB_0010defa;
      goto LAB_0010df06;
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  uStack_54 = _LC30;
  uStack_50 = _UNK_0011cd94;
  uStack_4c = _UNK_0011cd98;
  uStack_48 = _UNK_0011cd9c;
  local_58 = local_58 & 0xffffff00;
  (*_glad_glGenBuffers)(1,&local_68);
  (*_glad_glGenVertexArrays)(1);
  (*_glad_glBindVertexArray)(local_68._4_4_);
  uStack_60 = (ulong)uVar16 << 0x20;
  if (*(long *)(param_2 + 8) == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = (ulong)(uint)(iVar23 * *(int *)(*(long *)(param_2 + 8) + -8)) << 2;
  }
  local_90 = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_90,lVar22);
  (*_glad_glBindBuffer)(0x8892,local_68 & 0xffffffff);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_90);
  lVar22 = local_90;
  (*_glad_glEnableVertexAttribArray)(0);
  iVar6 = iVar23 * 4;
  (*_glad_glVertexAttribPointer)(0,2,0x1406,0,iVar6,0);
  puVar3 = *(undefined4 **)(param_2 + 8);
  if (uVar16 == 0) {
    if ((*(long *)(param_3 + 8) != 0) && (*(int *)(*(long *)(param_3 + 8) + -8) != 0))
    goto LAB_0010da7a;
    (*_glad_glEnableVertexAttribArray)(3);
    (*_glad_glVertexAttribPointer)(3,4,0x1406,0,iVar6,8);
    if ((*(long *)(param_4 + 8) != 0) && (*(int *)(*(long *)(param_4 + 8) + -8) != 0))
    goto LAB_0010e226;
    uVar20 = 8;
    (*_glad_glEnableVertexAttribArray)(4);
    (*_glad_glVertexAttribPointer)(4,2,0x1406,0,iVar6,0x18);
  }
  else {
    uVar20 = 0;
    puVar15 = puVar3;
    do {
      iVar11 = (int)uVar20;
      puVar13 = puVar15 + 2;
      *(undefined4 *)(lVar22 + uVar20 * 4) = *puVar15;
      uVar20 = (ulong)(uint)(iVar11 + iVar23);
      *(undefined4 *)(lVar22 + (ulong)(iVar11 + 1) * 4) = puVar15[1];
      puVar15 = puVar13;
    } while (puVar3 + (ulong)uVar16 * 2 != puVar13);
    if ((*(long *)(param_3 + 8) == 0) || (uVar16 != *(uint *)(*(long *)(param_3 + 8) + -8))) {
LAB_0010da7a:
      (*_glad_glDisableVertexAttribArray)(3);
      puVar4 = *(undefined8 **)(param_3 + 8);
      local_58 = CONCAT31(local_58._1_3_,1);
      uVar25 = CONCAT44(_UNK_0011cd94,_LC30);
      uVar26 = CONCAT44(_UNK_0011cd9c,_UNK_0011cd98);
      if ((puVar4 != (undefined8 *)0x0) && (puVar4[-1] == 1)) {
        uVar25 = *puVar4;
        uVar26 = puVar4[1];
      }
      uStack_54 = (undefined4)uVar25;
      uStack_50 = (undefined4)((ulong)uVar25 >> 0x20);
      uStack_4c = (undefined4)uVar26;
      uStack_48 = (undefined4)((ulong)uVar26 >> 0x20);
      if (*(long *)(param_4 + 8) != 0) {
        uVar20 = 2;
        uVar21 = *(uint *)(*(long *)(param_4 + 8) + -8);
        goto joined_r0x0010daca;
      }
      uVar20 = 2;
      if (uVar16 != 0) goto LAB_0010dad0;
      uVar20 = 4;
      (*_glad_glEnableVertexAttribArray)(4);
      (*_glad_glVertexAttribPointer)(4,2,0x1406,0,iVar6,8);
    }
    else {
      (*_glad_glEnableVertexAttribArray)(3);
      (*_glad_glVertexAttribPointer)(3,4,0x1406,0,iVar6,8);
      puVar3 = *(undefined4 **)(param_3 + 8);
      uVar20 = 2;
      puVar15 = puVar3;
      do {
        iVar11 = (int)uVar20;
        puVar13 = puVar15 + 4;
        *(undefined4 *)(lVar22 + uVar20 * 4) = *puVar15;
        *(undefined4 *)(lVar22 + (ulong)(iVar11 + 1) * 4) = puVar15[1];
        *(undefined4 *)(lVar22 + (ulong)(iVar11 + 2) * 4) = puVar15[2];
        uVar20 = (ulong)(uint)(iVar11 + iVar23);
        *(undefined4 *)(lVar22 + (ulong)(iVar11 + 3) * 4) = puVar15[3];
        puVar15 = puVar13;
      } while (puVar13 != puVar3 + (ulong)uVar16 * 4);
      if (*(long *)(param_4 + 8) == 0) {
LAB_0010e226:
        uVar20 = 6;
      }
      else {
        uVar20 = 6;
        uVar21 = *(uint *)(*(long *)(param_4 + 8) + -8);
joined_r0x0010daca:
        if (uVar16 == uVar21) {
          (*_glad_glEnableVertexAttribArray)(4);
          (*_glad_glVertexAttribPointer)(4,2,0x1406,0,iVar6,uVar20 * 4);
          puVar3 = *(undefined4 **)(param_4 + 8);
          if (uVar16 != 0) {
            puVar15 = puVar3;
            uVar12 = uVar20;
            do {
              puVar13 = puVar15 + 2;
              *(undefined4 *)(lVar22 + uVar12 * 4) = *puVar15;
              *(undefined4 *)(lVar22 + (ulong)((int)uVar12 + 1) * 4) = puVar15[1];
              puVar15 = puVar13;
              uVar12 = (ulong)(uint)((int)uVar12 + iVar23);
            } while (puVar3 + (ulong)uVar16 * 2 != puVar13);
          }
          uVar20 = (ulong)((int)uVar20 + 2);
          goto LAB_0010dadb;
        }
      }
LAB_0010dad0:
      (*_glad_glDisableVertexAttribArray)(4);
    }
  }
LAB_0010dadb:
  if (*(long *)(param_1 + 8) == 0) {
    if (iVar24 == 0) {
      lVar14 = *(long *)(param_6 + 8);
      if (lVar14 != 0) goto LAB_0010de3a;
LAB_0010de46:
      (*_glad_glEnableVertexAttribArray)(10);
      iVar11 = (int)uVar20;
      (*_glad_glVertexAttribPointer)(10,4,0x1405,0,iVar6,uVar20 * 4);
      uVar12 = 0;
      uVar21 = 0;
      lVar14 = *(long *)(param_5 + 8);
      if (uVar16 != 0) {
        do {
          iVar19 = (int)uVar12;
          uVar21 = uVar21 + 1;
          *(ulong *)(lVar22 + uVar20 * 4) =
               CONCAT62(CONCAT42(CONCAT22(*(undefined2 *)(lVar14 + (ulong)(iVar19 + 3) * 4),
                                          *(undefined2 *)(lVar14 + (ulong)(iVar19 + 2) * 4)),
                                 *(undefined2 *)(lVar14 + (ulong)(iVar19 + 1) * 4)),
                        *(undefined2 *)(lVar14 + uVar12 * 4));
          uVar12 = (ulong)(iVar19 + 4);
          uVar20 = (ulong)(uint)((int)uVar20 + iVar23);
        } while (uVar21 != uVar16);
      }
      uVar20 = (ulong)(iVar11 + 2);
      goto LAB_0010db02;
    }
  }
  else if (iVar24 == *(int *)(*(long *)(param_1 + 8) + -8)) {
    lVar14 = *(long *)(param_6 + 8);
    if (lVar14 == 0) {
      iVar11 = 0;
    }
    else {
LAB_0010de3a:
      iVar11 = *(int *)(lVar14 + -8);
    }
    if (iVar24 == iVar11) goto LAB_0010de46;
  }
  (*_glad_glDisableVertexAttribArray)(10);
LAB_0010db02:
  if (*(long *)(param_6 + 8) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*(long *)(param_6 + 8) + -8);
  }
  iVar19 = (int)uVar20;
  if (iVar24 == iVar11) {
    (*_glad_glEnableVertexAttribArray)(0xb);
    (*_glad_glVertexAttribPointer)(0xb,4,0x1406,0,iVar6,uVar20 * 4);
    fVar5 = _LC152;
    lVar14 = *(long *)(param_6 + 8);
    if (uVar16 != 0) {
      uVar12 = 0;
      uVar21 = 0;
      do {
        iVar6 = (int)uVar12;
        uVar10 = 0;
        puVar2 = (undefined2 *)(lVar22 + uVar20 * 4);
        fVar27 = *(float *)(lVar14 + uVar12 * 4) * fVar5;
        if ((0.0 <= fVar27) && (uVar10 = 0xffff, fVar27 <= _LC152)) {
          uVar10 = (undefined2)(int)fVar27;
        }
        *puVar2 = uVar10;
        uVar10 = 0;
        fVar27 = *(float *)(lVar14 + (ulong)(iVar6 + 1) * 4) * fVar5;
        if ((0.0 <= fVar27) && (uVar10 = 0xffff, fVar27 <= _LC152)) {
          uVar10 = (undefined2)(int)fVar27;
        }
        puVar2[1] = uVar10;
        uVar10 = 0;
        fVar27 = *(float *)(lVar14 + (ulong)(iVar6 + 2) * 4) * fVar5;
        if ((0.0 <= fVar27) && (uVar10 = 0xffff, fVar27 <= _LC152)) {
          uVar10 = (undefined2)(int)fVar27;
        }
        puVar2[2] = uVar10;
        uVar10 = 0;
        fVar27 = *(float *)(lVar14 + (ulong)(iVar6 + 3) * 4) * fVar5;
        if ((0.0 <= fVar27) && (uVar10 = 0xffff, fVar27 <= _LC152)) {
          uVar10 = (undefined2)(int)fVar27;
        }
        uVar21 = uVar21 + 1;
        puVar2[3] = uVar10;
        uVar20 = (ulong)(uint)((int)uVar20 + iVar23);
        uVar12 = (ulong)(iVar6 + 4);
      } while (uVar16 != uVar21);
    }
    iVar19 = iVar19 + 2;
    lVar14 = GLES3::Utilities::singleton;
  }
  else {
    (*_glad_glDisableVertexAttribArray)();
    lVar14 = GLES3::Utilities::singleton;
  }
  GLES3::Utilities::singleton = lVar14;
  if (iVar23 == iVar19) {
    local_88 = 0;
    local_78 = "Polygon 2D vertex buffer";
    local_70 = 0x18;
    String::parse_latin1((StrRange *)&local_88);
    uVar21 = iVar23 * uVar16 * 4;
    local_78 = (char *)CONCAT44(local_78._4_4_,(undefined4)local_68);
    (*_glad_glBufferData)(0x8892,(ulong)uVar21,lVar22,0x88e4);
    *(long *)(lVar14 + 0xf8) = *(long *)(lVar14 + 0xf8) + (ulong)uVar21;
    puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                     ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                   *)(lVar14 + 0x68),(uint *)&local_78);
    lVar22 = local_88;
    *puVar8 = uVar21;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar22 + -0x10),false);
      }
    }
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar22 = *(long *)(*(long *)(param_1 + 8) + -8), lVar22 != 0)) {
      local_80 = (void *)0x0;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_80,lVar22 << 2);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
      pvVar18 = local_80;
      __src = *(void **)(param_1 + 8);
      if (__src == (void *)0x0) {
        __n = 0;
      }
      else {
        __n = *(long *)((long)__src + -8) * 4;
      }
      memcpy(local_80,__src,__n);
      (*_glad_glGenBuffers)(1,&uStack_60);
      (*_glad_glBindBuffer)(0x8893,uStack_60 & 0xffffffff);
      lVar22 = GLES3::Utilities::singleton;
      local_78 = "Polygon 2D index buffer";
      local_a0[0] = 0;
      local_70 = 0x17;
      String::parse_latin1((StrRange *)local_a0);
      if (*(long *)(param_1 + 8) == 0) {
        uVar20 = 0;
        uVar21 = 0;
      }
      else {
        uVar21 = (int)*(undefined8 *)(*(long *)(param_1 + 8) + -8) * 4;
        uVar20 = (ulong)uVar21;
      }
      local_78 = (char *)CONCAT44(local_78._4_4_,(undefined4)uStack_60);
      (*_glad_glBufferData)(0x8893,uVar20,pvVar18,0x88e4);
      plVar1 = (long *)(lVar22 + 0xf8);
      *plVar1 = *plVar1 + uVar20;
      puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                       ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                     *)(lVar22 + 0x68),(uint *)&local_78);
      lVar22 = local_a0[0];
      *puVar8 = uVar21;
      if (local_a0[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_a0[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        pvVar18 = local_80;
        if (*plVar1 == 0) {
          local_a0[0] = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
          pvVar18 = local_80;
        }
      }
      if (*(long *)(param_1 + 8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(param_1 + 8) + -8);
      }
      uStack_60 = CONCAT44(uVar7,(undefined4)uStack_60);
      if (pvVar18 != (void *)0x0) {
        LOCK();
        plVar1 = (long *)((long)pvVar18 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)((long)local_80 + -0x10),false);
        }
      }
    }
    (*_glad_glBindVertexArray)(0);
    (*_glad_glBindBuffer)(0x8892,0);
    (*_glad_glBindBuffer)(0x8893,0);
    pcVar17 = *(char **)(this + 0x220);
    *(char **)(this + 0x220) = pcVar17 + 1;
    local_78 = pcVar17;
    puVar9 = (ulong *)HashMap<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers>>>
                      ::operator[]((HashMap<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers>>>
                                    *)(this + 0x1f0),(ulong *)&local_78);
    *puVar9 = local_68;
    puVar9[1] = uStack_60;
    puVar9[2] = CONCAT44(uStack_54,local_58);
    puVar9[3] = CONCAT44(uStack_4c,uStack_50);
    *(undefined4 *)(puVar9 + 4) = uStack_48;
  }
  else {
    pcVar17 = (char *)0x0;
    _err_print_error("request_polygon","drivers/gles3/rasterizer_canvas_gles3.cpp",0x9f4,
                     "Condition \"base_offset != stride\" is true. Returning: 0",0,0);
  }
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_90 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar17;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::occluder_polygon_set_shape(RID, Vector<Vector2> const&, bool) */

void __thiscall
RasterizerCanvasGLES3::occluder_polygon_set_shape
          (RasterizerCanvasGLES3 *this,ulong param_2,Vector *param_3,byte param_4)

{
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *pHVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
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
  undefined1 auVar37 [16];
  undefined4 uVar38;
  code *pcVar39;
  undefined4 *puVar40;
  char cVar41;
  short sVar42;
  uint uVar43;
  undefined4 uVar44;
  ulong *puVar45;
  uint *puVar46;
  int *piVar47;
  ulong *puVar48;
  undefined8 *puVar49;
  int iVar50;
  ulong uVar51;
  long lVar52;
  size_t sVar53;
  undefined4 *puVar54;
  ulong *__src;
  uint uVar55;
  uint uVar56;
  ulong uVar57;
  short sVar58;
  long lVar59;
  ulong uVar60;
  undefined8 *puVar61;
  long lVar62;
  int iVar63;
  long in_FS_OFFSET;
  ulong *local_b8;
  long local_b0;
  long local_80;
  uint local_78 [2];
  undefined4 *local_70;
  long local_68;
  undefined8 *local_60;
  char *local_58;
  ulong *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x7c))) {
    lVar62 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x78)) * 0x30 +
             *(long *)(*(long *)(this + 0x68) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x78)) * 8);
    if (*(int *)(lVar62 + 0x2c) == (int)(param_2 >> 0x20)) {
      lVar59 = *(long *)(param_3 + 8);
      if ((lVar59 == 0) || (*(long *)(lVar59 + -8) == 0)) {
LAB_0010e880:
        uVar57 = (ulong)*(int *)(lVar62 + 4);
LAB_0010e884:
        if ((uVar57 != 0) && (*(int *)(lVar62 + 0xc) != 0)) {
          local_b8 = (ulong *)0x0;
          goto LAB_0010e545;
        }
LAB_0010e80f:
        local_b8 = (ulong *)0x0;
      }
      else {
        iVar63 = (int)*(long *)(lVar59 + -8) * 2;
        uVar57 = (ulong)(int)(iVar63 + (uint)(param_4 ^ 1) * -2);
        if ((long)uVar57 < 0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x157,
                           "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0);
          local_b8 = (ulong *)0x0;
LAB_0010e517:
          uVar57 = (ulong)*(int *)(lVar62 + 4);
          if (local_b8 == (ulong *)0x0) goto LAB_0010e884;
        }
        else {
          iVar50 = iVar63 >> 1;
          if (uVar57 == 0) {
            if ((param_4 == 0) || (iVar63 != 2)) goto LAB_0010e880;
            iVar63 = 1;
LAB_0010f7e5:
            local_b8 = (ulong *)0x0;
LAB_0010e4de:
            uVar57 = 1;
            puVar45 = local_b8;
            do {
              uVar51 = uVar57 + 1;
              uVar60 = *(ulong *)(lVar59 + (long)(int)((long)((ulong)(uint)((int)uVar57 >> 0x1f) <<
                                                              0x20 | uVar57 & 0xffffffff) %
                                                      (long)iVar50) * 8);
              *puVar45 = *(ulong *)(lVar59 + -8 + uVar57 * 8);
              puVar45[1] = uVar60;
              uVar57 = uVar51;
              puVar45 = puVar45 + 2;
            } while (uVar51 != (long)(iVar63 + 1));
            goto LAB_0010e517;
          }
          uVar60 = uVar57 * 8 - 1;
          uVar60 = uVar60 | uVar60 >> 1;
          uVar60 = uVar60 | uVar60 >> 2;
          uVar60 = uVar60 | uVar60 >> 4;
          uVar60 = uVar60 | uVar60 >> 8;
          uVar60 = uVar60 | uVar60 >> 0x10;
          puVar45 = (ulong *)Memory::alloc_static((uVar60 | uVar60 >> 0x20) + 0x11,false);
          iVar63 = iVar50;
          if (puVar45 == (ulong *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0);
            lVar59 = *(long *)(param_3 + 8);
            if (param_4 == 0) {
              iVar63 = iVar50 + -1;
              if (iVar63 != 0) goto LAB_0010f7e5;
              goto LAB_0010e880;
            }
            local_b8 = (ulong *)0x0;
            goto LAB_0010e4de;
          }
          puVar48 = puVar45 + 2;
          *puVar45 = 1;
          memset(puVar48,0,uVar57 * 8);
          puVar45[1] = uVar57;
          if (*puVar45 < 2) {
LAB_0010e4c2:
            lVar59 = *(long *)(param_3 + 8);
            local_b8 = puVar48;
          }
          else {
            uVar57 = puVar45[1];
            uVar60 = 0x10;
            sVar53 = uVar57 * 8;
            if (sVar53 != 0) {
              uVar60 = sVar53 - 1 | sVar53 - 1 >> 1;
              uVar60 = uVar60 | uVar60 >> 2;
              uVar60 = uVar60 | uVar60 >> 4;
              uVar60 = uVar60 | uVar60 >> 8;
              uVar60 = uVar60 | uVar60 >> 0x10;
              uVar60 = (uVar60 | uVar60 >> 0x20) + 0x11;
            }
            puVar49 = (undefined8 *)Memory::alloc_static(uVar60,false);
            if (puVar49 == (undefined8 *)0x0) {
              _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                               "Parameter \"mem_new\" is null.",0);
              goto LAB_0010e4c2;
            }
            local_b8 = puVar49 + 2;
            *puVar49 = 1;
            puVar49[1] = uVar57;
            memcpy(local_b8,puVar48,sVar53);
            LOCK();
            *puVar45 = *puVar45 - 1;
            UNLOCK();
            if (*puVar45 == 0) {
              Memory::free_static(puVar45,false);
            }
            lVar59 = *(long *)(param_3 + 8);
          }
          if ((param_4 != 0) || (iVar63 = iVar50 + -1, iVar50 + -1 != 0)) goto LAB_0010e4de;
          uVar57 = (ulong)*(int *)(lVar62 + 4);
        }
        uVar60 = local_b8[-1];
        if ((uVar60 != uVar57) && (*(int *)(lVar62 + 0xc) != 0)) {
LAB_0010e545:
          (*_glad_glDeleteVertexArrays)(1,lVar62 + 0xc);
          lVar59 = GLES3::Utilities::singleton;
          uVar4 = *(uint *)(lVar62 + 8);
          pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                    *)(GLES3::Utilities::singleton + 0x68);
          local_58 = (char *)CONCAT44(local_58._4_4_,uVar4);
          if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
             (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
            uVar57 = *(ulong *)(hash_table_size_primes_inv +
                               (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
            uVar43 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
            uVar43 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
            uVar55 = uVar43 ^ uVar43 >> 0x10;
            if (uVar43 == uVar43 >> 0x10) {
              uVar55 = 1;
              uVar60 = uVar57;
            }
            else {
              uVar60 = uVar55 * uVar57;
            }
            uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar51;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar60;
            lVar52 = SUB168(auVar6 * auVar22,8);
            uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
            iVar63 = SUB164(auVar6 * auVar22,8);
            if (uVar43 != 0) {
              uVar56 = 0;
              do {
                if ((uVar55 == uVar43) &&
                   (uVar4 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                                lVar52 * 8) + 0x10))) {
                  (*_glad_glDeleteBuffers)(1,&local_58);
                  puVar46 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                    ::operator[](pHVar1,(uint *)&local_58);
                  *(long *)(lVar59 + 0xf8) = *(long *)(lVar59 + 0xf8) - (ulong)*puVar46;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  ::erase(pHVar1,(uint *)&local_58);
                  goto LAB_0010e6a3;
                }
                uVar56 = uVar56 + 1;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (iVar63 + 1) * uVar57;
                auVar23._8_8_ = 0;
                auVar23._0_8_ = uVar51;
                lVar52 = SUB168(auVar7 * auVar23,8);
                uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
                iVar63 = SUB164(auVar7 * auVar23,8);
              } while ((uVar43 != 0) &&
                      (auVar8._8_8_ = 0, auVar8._0_8_ = uVar43 * uVar57, auVar24._8_8_ = 0,
                      auVar24._0_8_ = uVar51, auVar9._8_8_ = 0,
                      auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90)
                                                * 4) + iVar63) - SUB164(auVar8 * auVar24,8)) *
                                     uVar57, auVar25._8_8_ = 0, auVar25._0_8_ = uVar51,
                      uVar56 <= SUB164(auVar9 * auVar25,8)));
            }
          }
          _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                           "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0);
LAB_0010e6a3:
          lVar59 = GLES3::Utilities::singleton;
          uVar4 = *(uint *)(lVar62 + 0x10);
          pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                    *)(GLES3::Utilities::singleton + 0x68);
          local_58 = (char *)CONCAT44(local_58._4_4_,uVar4);
          if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
             (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
            uVar57 = *(ulong *)(hash_table_size_primes_inv +
                               (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
            uVar43 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
            uVar43 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
            uVar55 = uVar43 ^ uVar43 >> 0x10;
            if (uVar43 == uVar43 >> 0x10) {
              uVar55 = 1;
              uVar60 = uVar57;
            }
            else {
              uVar60 = uVar55 * uVar57;
            }
            uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar51;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar60;
            lVar52 = SUB168(auVar10 * auVar26,8);
            uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
            iVar63 = SUB164(auVar10 * auVar26,8);
            if (uVar43 != 0) {
              uVar56 = 0;
              do {
                if ((uVar55 == uVar43) &&
                   (uVar4 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                                lVar52 * 8) + 0x10))) {
                  (*_glad_glDeleteBuffers)(1,&local_58);
                  puVar46 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                    ::operator[](pHVar1,(uint *)&local_58);
                  *(long *)(lVar59 + 0xf8) = *(long *)(lVar59 + 0xf8) - (ulong)*puVar46;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  ::erase(pHVar1,(uint *)&local_58);
                  goto LAB_0010e7f3;
                }
                uVar56 = uVar56 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (iVar63 + 1) * uVar57;
                auVar27._8_8_ = 0;
                auVar27._0_8_ = uVar51;
                lVar52 = SUB168(auVar11 * auVar27,8);
                uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
                iVar63 = SUB164(auVar11 * auVar27,8);
              } while ((uVar43 != 0) &&
                      (auVar12._8_8_ = 0, auVar12._0_8_ = uVar43 * uVar57, auVar28._8_8_ = 0,
                      auVar28._0_8_ = uVar51, auVar13._8_8_ = 0,
                      auVar13._0_8_ =
                           ((*(uint *)(hash_table_size_primes +
                                      (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) +
                            iVar63) - SUB164(auVar12 * auVar28,8)) * uVar57, auVar29._8_8_ = 0,
                      auVar29._0_8_ = uVar51, uVar56 <= SUB164(auVar13 * auVar29,8)));
            }
          }
          _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                           "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0);
LAB_0010e7f3:
          *(undefined8 *)(lVar62 + 8) = 0;
          *(undefined4 *)(lVar62 + 0x10) = 0;
          if (local_b8 == (ulong *)0x0) goto LAB_0010e80f;
          uVar60 = local_b8[-1];
        }
        if (uVar60 != 0) {
          iVar63 = (int)uVar60;
          local_70 = (undefined4 *)0x0;
          lVar59 = (long)(iVar63 * 6);
          uVar57 = lVar59 * 4;
          local_60 = (undefined8 *)0x0;
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_70,uVar57);
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,lVar59);
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
          puVar40 = local_70;
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
          puVar49 = local_60;
          uVar38 = _LC159;
          uVar44 = _LC158;
          if (1 < iVar63) {
            sVar58 = 0;
            iVar50 = 0;
            puVar45 = local_b8;
            puVar54 = puVar40;
            puVar61 = local_60;
            do {
              iVar50 = iVar50 + 1;
              *puVar54 = (int)*puVar45;
              uVar3 = *(undefined4 *)((long)puVar45 + 4);
              puVar54[2] = uVar44;
              puVar54[1] = uVar3;
              puVar54[3] = (int)puVar45[1];
              uVar3 = *(undefined4 *)((long)puVar45 + 0xc);
              puVar54[5] = uVar44;
              puVar54[4] = uVar3;
              puVar54[6] = (int)puVar45[1];
              uVar3 = *(undefined4 *)((long)puVar45 + 0xc);
              puVar54[8] = uVar38;
              puVar54[7] = uVar3;
              puVar54[9] = (int)*puVar45;
              uVar3 = *(undefined4 *)((long)puVar45 + 4);
              puVar54[0xb] = uVar38;
              puVar54[10] = uVar3;
              *puVar61 = CONCAT62(CONCAT42(CONCAT22(sVar58 + 2,sVar58 + 2),sVar58 + 1),sVar58);
              sVar42 = sVar58 + 3;
              *(short *)((long)puVar61 + 10) = sVar58;
              sVar58 = sVar58 + 4;
              *(short *)(puVar61 + 1) = sVar42;
              puVar45 = puVar45 + 2;
              puVar54 = puVar54 + 0xc;
              puVar61 = (undefined8 *)((long)puVar61 + 0xc);
            } while (iVar50 < (int)(((uint)(uVar60 >> 0x1f) & 1) + iVar63) >> 1);
          }
          if (*(int *)(lVar62 + 0xc) == 0) {
            *(int *)(lVar62 + 4) = iVar63;
            (*_glad_glGenVertexArrays)(1,lVar62 + 0xc);
            (*_glad_glBindVertexArray)(*(undefined4 *)(lVar62 + 0xc));
            (*_glad_glGenBuffers)(1,lVar62 + 8);
            (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar62 + 8));
            lVar59 = GLES3::Utilities::singleton;
            local_80 = 0;
            local_58 = "Occluder polygon vertex buffer";
            local_50[0] = (ulong *)0x1e;
            String::parse_latin1((StrRange *)&local_80);
            local_58 = (char *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar62 + 8));
            (*_glad_glBufferData)(0x8892,iVar63 * 0x18,puVar40,0x88e4);
            plVar2 = (long *)(lVar59 + 0xf8);
            *plVar2 = *plVar2 + (uVar57 & 0xffffffff);
            piVar47 = (int *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                             ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                           *)(lVar59 + 0x68),(uint *)&local_58);
            lVar59 = local_80;
            *piVar47 = iVar63 * 0x18;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar59 + -0x10),false);
              }
            }
            (*_glad_glEnableVertexAttribArray)(0);
            (*_glad_glVertexAttribPointer)(0,3,0x1406,0,0xc,0);
            (*_glad_glGenBuffers)(1,lVar62 + 0x10);
            (*_glad_glBindBuffer)(0x8893,*(undefined4 *)(lVar62 + 0x10));
            lVar59 = GLES3::Utilities::singleton;
            local_58 = "Occluder polygon index buffer";
            local_80 = 0;
            local_50[0] = (ulong *)0x1d;
            String::parse_latin1((StrRange *)&local_80);
            local_58 = (char *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar62 + 0x10));
            (*_glad_glBufferData)(0x8893,iVar63 * 6,puVar49);
            plVar2 = (long *)(lVar59 + 0xf8);
            *plVar2 = *plVar2 + (ulong)(uint)(iVar63 * 6);
            piVar47 = (int *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                             ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                           *)(lVar59 + 0x68),(uint *)&local_58);
            lVar59 = local_80;
            *piVar47 = iVar63 * 6;
            if (local_80 != 0) {
              LOCK();
              plVar2 = (long *)(local_80 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_80 = 0;
                Memory::free_static((void *)(lVar59 + -0x10),false);
              }
            }
            (*_glad_glBindVertexArray)(0);
            puVar49 = local_60;
          }
          else {
            (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar62 + 8));
            (*_glad_glBufferData)(0x8892,uVar57,puVar40,0x88e4);
            (*_glad_glBindBuffer)(0x8893,*(undefined4 *)(lVar62 + 0x10));
            (*_glad_glBufferData)(0x8893,lVar59,puVar49);
            (*_glad_glBindBuffer)(0x8892);
            (*_glad_glBindBuffer)(0x8893);
          }
          if (puVar49 != (undefined8 *)0x0) {
            LOCK();
            plVar2 = puVar49 + -2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static(local_60 + -2,false);
            }
          }
          if (local_70 != (undefined4 *)0x0) {
            LOCK();
            plVar2 = (long *)(local_70 + -4);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static(local_70 + -4,false);
            }
          }
        }
      }
      if (*(long *)(param_3 + 8) == 0) {
        if (((*(int *)(lVar62 + 0x18) == 0) || (*(int *)(lVar62 + 0x14) == 0)) ||
           (puVar45 = (ulong *)0x0, *(int *)(lVar62 + 0x20) == 0)) goto LAB_0010ef35;
LAB_0010e95c:
        (*_glad_glDeleteVertexArrays)(1,lVar62 + 0x20);
        lVar59 = GLES3::Utilities::singleton;
        uVar4 = *(uint *)(lVar62 + 0x1c);
        pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  *)(GLES3::Utilities::singleton + 0x68);
        local_58 = (char *)CONCAT44(local_58._4_4_,uVar4);
        if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
           (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
          uVar57 = *(ulong *)(hash_table_size_primes_inv +
                             (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
          uVar43 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
          uVar43 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
          uVar55 = uVar43 ^ uVar43 >> 0x10;
          if (uVar43 == uVar43 >> 0x10) {
            uVar55 = 1;
            uVar60 = uVar57;
          }
          else {
            uVar60 = uVar55 * uVar57;
          }
          uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar51;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar60;
          lVar52 = SUB168(auVar14 * auVar30,8);
          uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
          iVar63 = SUB164(auVar14 * auVar30,8);
          if (uVar43 != 0) {
            uVar56 = 0;
            do {
              if ((uVar55 == uVar43) &&
                 (uVar4 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                              lVar52 * 8) + 0x10))) {
                (*_glad_glDeleteBuffers)(1,&local_58);
                puVar46 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                  ::operator[](pHVar1,(uint *)&local_58);
                *(long *)(lVar59 + 0xf8) = *(long *)(lVar59 + 0xf8) - (ulong)*puVar46;
                HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                ::erase(pHVar1,(uint *)&local_58);
                goto LAB_0010ead8;
              }
              uVar56 = uVar56 + 1;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = (iVar63 + 1) * uVar57;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = uVar51;
              lVar52 = SUB168(auVar15 * auVar31,8);
              uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
              iVar63 = SUB164(auVar15 * auVar31,8);
            } while ((uVar43 != 0) &&
                    (auVar16._8_8_ = 0, auVar16._0_8_ = uVar43 * uVar57, auVar32._8_8_ = 0,
                    auVar32._0_8_ = uVar51, auVar17._8_8_ = 0,
                    auVar17._0_8_ =
                         ((*(uint *)(hash_table_size_primes +
                                    (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) +
                          iVar63) - SUB164(auVar16 * auVar32,8)) * uVar57, auVar33._8_8_ = 0,
                    auVar33._0_8_ = uVar51, uVar56 <= SUB164(auVar17 * auVar33,8)));
          }
        }
        _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                         "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010ead8:
        lVar59 = GLES3::Utilities::singleton;
        uVar4 = *(uint *)(lVar62 + 0x24);
        pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                  *)(GLES3::Utilities::singleton + 0x68);
        local_58 = (char *)CONCAT44(local_58._4_4_,uVar4);
        if ((*(long *)(GLES3::Utilities::singleton + 0x70) != 0) &&
           (*(int *)(GLES3::Utilities::singleton + 0x94) != 0)) {
          uVar57 = *(ulong *)(hash_table_size_primes_inv +
                             (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 8);
          uVar43 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
          uVar43 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
          uVar55 = uVar43 ^ uVar43 >> 0x10;
          if (uVar43 == uVar43 >> 0x10) {
            uVar55 = 1;
            uVar60 = uVar57;
          }
          else {
            uVar60 = uVar55 * uVar57;
          }
          uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4));
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar51;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar60;
          lVar52 = SUB168(auVar18 * auVar34,8);
          uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
          iVar63 = SUB164(auVar18 * auVar34,8);
          if (uVar43 != 0) {
            uVar56 = 0;
            do {
              if ((uVar43 == uVar55) &&
                 (uVar4 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0x70) +
                                              lVar52 * 8) + 0x10))) {
                (*_glad_glDeleteBuffers)(1,&local_58);
                puVar46 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                  ::operator[](pHVar1,(uint *)&local_58);
                *(long *)(lVar59 + 0xf8) = *(long *)(lVar59 + 0xf8) - (ulong)*puVar46;
                HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                ::erase(pHVar1,(uint *)&local_58);
                goto LAB_0010ec38;
              }
              uVar56 = uVar56 + 1;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (iVar63 + 1) * uVar57;
              auVar35._8_8_ = 0;
              auVar35._0_8_ = uVar51;
              lVar52 = SUB168(auVar19 * auVar35,8);
              uVar43 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0x78) + lVar52 * 4);
              iVar63 = SUB164(auVar19 * auVar35,8);
            } while ((uVar43 != 0) &&
                    (auVar20._8_8_ = 0, auVar20._0_8_ = uVar43 * uVar57, auVar36._8_8_ = 0,
                    auVar36._0_8_ = uVar51, auVar21._8_8_ = 0,
                    auVar21._0_8_ =
                         ((*(uint *)(hash_table_size_primes +
                                    (ulong)*(uint *)(GLES3::Utilities::singleton + 0x90) * 4) +
                          iVar63) - SUB164(auVar20 * auVar36,8)) * uVar57, auVar37._8_8_ = 0,
                    auVar37._0_8_ = uVar51, uVar56 <= SUB164(auVar21 * auVar37,8)));
          }
        }
        _err_print_error("buffer_free_data","drivers/gles3/storage/utilities.h",0x66,
                         "Condition \"!buffer_allocs_cache.has(p_id)\" is true.",0,0);
LAB_0010ec38:
        *(undefined8 *)(lVar62 + 0x1c) = 0;
        *(undefined4 *)(lVar62 + 0x24) = 0;
        lVar59 = *(long *)(param_3 + 8);
        if (puVar45 == (ulong *)0x0) {
          *(undefined4 *)(lVar62 + 0x18) = 0;
          if (lVar59 == 0) {
            *(undefined4 *)(lVar62 + 0x14) = 0;
          }
          else {
            *(int *)(lVar62 + 0x14) = (int)*(undefined8 *)(lVar59 + -8);
          }
          goto LAB_0010ef35;
        }
        uVar57 = puVar45[-1];
        *(int *)(lVar62 + 0x18) = (int)uVar57;
        if (lVar59 == 0) {
          *(undefined4 *)(lVar62 + 0x14) = 0;
          if (uVar57 != 0) {
            uVar44 = 0;
            goto LAB_0010ec7f;
          }
        }
        else {
          *(int *)(lVar62 + 0x14) = (int)*(undefined8 *)(lVar59 + -8);
          if (uVar57 != 0) {
LAB_0010ec7c:
            uVar44 = *(undefined4 *)(lVar59 + -8);
LAB_0010ec7f:
            local_b0 = lVar62 + 0x20;
            *(undefined4 *)(lVar62 + 0x14) = uVar44;
            (*_glad_glGenVertexArrays)(1,local_b0);
            (*_glad_glBindVertexArray)(*(undefined4 *)(lVar62 + 0x20));
            (*_glad_glGenBuffers)(1,lVar62 + 0x1c);
            (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar62 + 0x1c));
            lVar59 = GLES3::Utilities::singleton;
            local_58 = "Occluder polygon SDF vertex buffer";
            local_68 = 0;
            local_50[0] = (ulong *)0x22;
            String::parse_latin1((StrRange *)&local_68);
            local_50[0] = (ulong *)0x0;
            puVar48 = *(ulong **)(param_3 + 8);
            if (puVar48 != (ulong *)0x0) {
              sVar53 = *(long *)((long)puVar48 + -8) << 3;
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,sVar53);
              puVar48 = local_50[0];
              if (sVar53 != 0) {
                pvVar5 = *(void **)(param_3 + 8);
                CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                puVar48 = (ulong *)memcpy(local_50[0],pvVar5,sVar53);
              }
            }
            uVar4 = *(int *)(lVar62 + 0x14) * 8;
            local_78[0] = *(uint *)(lVar62 + 0x1c);
            (*_glad_glBufferData)(0x8892,(ulong)uVar4,puVar48,0x88e4);
            plVar2 = (long *)(lVar59 + 0xf8);
            *plVar2 = *plVar2 + (ulong)uVar4;
            puVar46 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                            *)(lVar59 + 0x68),local_78);
            *puVar46 = uVar4;
            if (puVar48 != (ulong *)0x0) {
              LOCK();
              plVar2 = (long *)((long)puVar48 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                Memory::free_static((void *)((long)local_50[0] + -0x10),false);
              }
            }
            lVar59 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar59 + -0x10),false);
              }
            }
            (*_glad_glEnableVertexAttribArray)(0);
            (*_glad_glVertexAttribPointer)(0,2,0x1406,0,8,0);
            (*_glad_glGenBuffers)(1,lVar62 + 0x24);
            (*_glad_glBindBuffer)(0x8893,*(undefined4 *)(lVar62 + 0x24));
            lVar59 = GLES3::Utilities::singleton;
            local_58 = "Occluder polygon SDF index buffer";
            local_68 = 0;
            local_50[0] = (ulong *)0x21;
            String::parse_latin1((StrRange *)&local_68);
            local_50[0] = (ulong *)0x0;
            sVar53 = puVar45[-1] * 4;
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,sVar53);
            puVar48 = local_50[0];
            if (sVar53 != 0) {
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
              puVar48 = local_50[0];
              memcpy(local_50[0],puVar45,sVar53);
            }
            uVar4 = *(int *)(lVar62 + 0x18) * 4;
            local_78[0] = *(uint *)(lVar62 + 0x24);
            (*_glad_glBufferData)(0x8893,(ulong)uVar4,puVar48,0x88e4);
            plVar2 = (long *)(lVar59 + 0xf8);
            *plVar2 = *plVar2 + (ulong)uVar4;
            puVar46 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                            *)(lVar59 + 0x68),local_78);
            *puVar46 = uVar4;
            if (puVar48 != (ulong *)0x0) {
              LOCK();
              puVar48 = puVar48 + -2;
              *puVar48 = *puVar48 - 1;
              UNLOCK();
              if (*puVar48 == 0) {
                Memory::free_static(local_50[0] + -2,false);
              }
            }
            lVar62 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar62 + -0x10),false);
              }
            }
            (*_glad_glBindVertexArray)(0);
          }
        }
LAB_0010ef23:
        puVar45 = puVar45 + -2;
        LOCK();
        *puVar45 = *puVar45 - 1;
        UNLOCK();
        if (*puVar45 == 0) {
          Memory::free_static(puVar45,false);
        }
      }
      else {
        lVar59 = *(long *)(*(long *)(param_3 + 8) + -8);
        if (lVar59 == 0) {
          if (((*(int *)(lVar62 + 0x18) != 0) && (*(int *)(lVar62 + 0x14) != 0)) &&
             (*(int *)(lVar62 + 0x20) != 0)) {
            puVar45 = (ulong *)0x0;
            goto LAB_0010e95c;
          }
        }
        else {
          if (param_4 != 0) {
            local_50[0] = (ulong *)0x0;
            cVar41 = Triangulate::triangulate(param_3,(Vector *)&local_58);
            puVar45 = local_50[0];
            if (cVar41 == '\0') {
              if (local_50[0] != (ulong *)0x0) {
                LOCK();
                puVar48 = local_50[0] + -2;
                *puVar48 = *puVar48 - 1;
                UNLOCK();
                if (*puVar48 == 0) {
                  local_50[0] = (ulong *)0x0;
                  Memory::free_static(puVar45 + -2,false);
                }
              }
LAB_0010f3a6:
              *(undefined1 *)(lVar62 + 0x28) = 0;
              uVar57 = (ulong)*(int *)(lVar62 + 0x18);
              goto LAB_0010f3af;
            }
            if (local_50[0] == (ulong *)0x0) goto LAB_0010f3a6;
            *(undefined1 *)(lVar62 + 0x28) = 0;
            uVar57 = (ulong)*(int *)(lVar62 + 0x18);
LAB_0010e91f:
            uVar60 = puVar45[-1];
            if (uVar57 != uVar60) goto LAB_0010e92c;
LAB_0010f3cd:
            if (uVar60 == 0) goto LAB_0010ef23;
            if (*(int *)(lVar62 + 0x20) == 0) {
              lVar59 = *(long *)(param_3 + 8);
              *(int *)(lVar62 + 0x18) = (int)uVar60;
              if (lVar59 != 0) goto LAB_0010ec7c;
              uVar44 = 0;
              goto LAB_0010ec7f;
            }
            (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar62 + 0x1c));
            pcVar39 = _glad_glBufferData;
            local_50[0] = (ulong *)0x0;
            if (*(long *)(param_3 + 8) == 0) {
              (*_glad_glBufferData)(0x8892,0,0,0x88e4);
            }
            else {
              sVar53 = *(long *)(*(long *)(param_3 + 8) + -8) << 3;
              CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,sVar53);
              if (sVar53 == 0) {
                lVar59 = *(long *)(param_3 + 8);
                puVar48 = local_50[0];
                if (lVar59 == 0) {
                  lVar59 = 0;
                }
                else {
LAB_0010f44b:
                  lVar59 = *(long *)(lVar59 + -8) << 3;
                }
                (*pcVar39)(0x8892,lVar59,puVar48,0x88e4);
                if (puVar48 == (ulong *)0x0) goto LAB_0010f480;
              }
              else {
                pvVar5 = *(void **)(param_3 + 8);
                CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                puVar48 = local_50[0];
                memcpy(local_50[0],pvVar5,sVar53);
                lVar59 = *(long *)(param_3 + 8);
                if (lVar59 != 0) goto LAB_0010f44b;
                (*pcVar39)(0x8892,0,puVar48,0x88e4);
              }
              LOCK();
              plVar2 = (long *)((long)puVar48 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                Memory::free_static((void *)((long)local_50[0] + -0x10),false);
              }
            }
LAB_0010f480:
            (*_glad_glBindBuffer)(0x8893,*(undefined4 *)(lVar62 + 0x24));
            pcVar39 = _glad_glBufferData;
            local_50[0] = (ulong *)0x0;
            sVar53 = puVar45[-1] * 4;
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,sVar53);
            puVar48 = local_50[0];
            if (sVar53 == 0) {
              (*pcVar39)(0x8893,puVar45[-1] * 4,local_50[0],0x88e4);
              if (puVar48 != (ulong *)0x0) goto LAB_0010f4e5;
            }
            else {
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
              puVar48 = local_50[0];
              memcpy(local_50[0],puVar45,sVar53);
              (*pcVar39)(0x8893,puVar45[-1] * 4,puVar48,0x88e4);
LAB_0010f4e5:
              LOCK();
              puVar48 = puVar48 + -2;
              *puVar48 = *puVar48 - 1;
              UNLOCK();
              if (*puVar48 == 0) {
                Memory::free_static(local_50[0] + -2,false);
              }
            }
            (*_glad_glBindBuffer)(0x8892);
            (*_glad_glBindBuffer)(0x8893);
            goto LAB_0010ef23;
          }
          iVar63 = (int)lVar59;
          uVar57 = (ulong)(iVar63 * 2);
          if ((long)uVar57 < 0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x157,
                             "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                             0);
LAB_0010f8a5:
            *(undefined1 *)(lVar62 + 0x28) = 1;
            uVar57 = (ulong)*(int *)(lVar62 + 0x18);
          }
          else {
            if (uVar57 == 0) goto LAB_0010f8a5;
            uVar60 = uVar57 * 4 - 1;
            uVar60 = uVar60 | uVar60 >> 1;
            uVar60 = uVar60 | uVar60 >> 2;
            uVar60 = uVar60 | uVar60 >> 4;
            uVar60 = uVar60 | uVar60 >> 8;
            uVar60 = uVar60 | uVar60 >> 0x10;
            puVar48 = (ulong *)Memory::alloc_static((uVar60 | uVar60 >> 0x20) + 0x11,false);
            if (puVar48 == (ulong *)0x0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x171,
                               "Parameter \"mem_new\" is null.",0,0);
              __src = (ulong *)0x0;
              if (iVar63 == 0) goto LAB_0010f8a5;
            }
            else {
              __src = puVar48 + 2;
              *puVar48 = 1;
              puVar48[1] = uVar57;
              if (1 < *puVar48) {
                uVar57 = puVar48[1];
                uVar60 = 0x10;
                sVar53 = uVar57 * 4;
                if (sVar53 != 0) {
                  uVar60 = sVar53 - 1 | sVar53 - 1 >> 1;
                  uVar60 = uVar60 | uVar60 >> 2;
                  uVar60 = uVar60 | uVar60 >> 4;
                  uVar60 = uVar60 | uVar60 >> 8;
                  uVar60 = uVar60 | uVar60 >> 0x10;
                  uVar60 = (uVar60 | uVar60 >> 0x20) + 0x11;
                }
                puVar49 = (undefined8 *)Memory::alloc_static(uVar60,false);
                if (puVar49 != (undefined8 *)0x0) {
                  puVar45 = puVar49 + 2;
                  *puVar49 = 1;
                  puVar49[1] = uVar57;
                  memcpy(puVar45,__src,sVar53);
                  LOCK();
                  *puVar48 = *puVar48 - 1;
                  UNLOCK();
                  if (*puVar48 == 0) {
                    Memory::free_static(puVar48,false);
                  }
                  __src = puVar45;
                  if (iVar63 == 0) {
                    *(undefined1 *)(lVar62 + 0x28) = 1;
                    uVar57 = (ulong)*(int *)(lVar62 + 0x18);
                    goto LAB_0010e91f;
                  }
                  goto LAB_0010e8ee;
                }
                _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              if (iVar63 == 0) {
                *(undefined1 *)(lVar62 + 0x28) = 1;
                uVar57 = (ulong)*(int *)(lVar62 + 0x18);
                puVar45 = __src;
                goto LAB_0010e91f;
              }
            }
LAB_0010e8ee:
            iVar50 = 0;
            puVar45 = __src;
            do {
              *(int *)puVar45 = iVar50;
              iVar50 = iVar50 + 1;
              *(int *)((long)puVar45 + 4) = iVar50 % iVar63;
              puVar45 = puVar45 + 1;
            } while (iVar50 < iVar63);
            *(undefined1 *)(lVar62 + 0x28) = 1;
            uVar57 = (ulong)*(int *)(lVar62 + 0x18);
            puVar45 = __src;
            if (__src != (ulong *)0x0) goto LAB_0010e91f;
          }
LAB_0010f3af:
          puVar45 = (ulong *)0x0;
          if (uVar57 != 0) {
LAB_0010e92c:
            if (*(long *)(param_3 + 8) == 0) {
              lVar59 = 0;
            }
            else {
              lVar59 = *(long *)(*(long *)(param_3 + 8) + -8);
            }
            if ((*(int *)(lVar62 + 0x14) != lVar59) && (*(int *)(lVar62 + 0x20) != 0))
            goto LAB_0010e95c;
            if (puVar45 != (ulong *)0x0) {
              uVar60 = puVar45[-1];
              goto LAB_0010f3cd;
            }
          }
        }
      }
LAB_0010ef35:
      if (local_b8 != (ulong *)0x0) {
        local_b8 = local_b8 + -2;
        LOCK();
        *local_b8 = *local_b8 - 1;
        UNLOCK();
        if (*local_b8 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(local_b8,false);
            return;
          }
          goto LAB_0010fcb6;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010fcb6;
    }
    if (*(int *)(lVar62 + 0x2c) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("occluder_polygon_set_shape","drivers/gles3/rasterizer_canvas_gles3.cpp",0x7c1,
                     "Parameter \"oc\" is null.",0,0);
    return;
  }
LAB_0010fcb6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<unsigned int>::push_back(unsigned int) [clone .isra.0] */

void __thiscall Vector<unsigned_int>::push_back(Vector<unsigned_int> *this,uint param_1)

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
  iVar1 = CowData<unsigned_int>::resize<false>((CowData<unsigned_int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int> *)(this + 8));
        *(uint *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::RasterizerCanvasGLES3() */

void __thiscall RasterizerCanvasGLES3::RasterizerCanvasGLES3(RasterizerCanvasGLES3 *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  RasterizerCanvasGLES3 *pRVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar20 = RendererCanvasRender::singleton != (RasterizerCanvasGLES3 *)0x0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_0011c460;
  pRVar7 = this;
  if (bVar20) {
    _err_print_error("RendererCanvasRender","./servers/rendering/renderer_canvas_render.h",0x229,
                     "Condition \"singleton != nullptr\" is true.",
                     "A RendererCanvasRender singleton already exists.",0,0);
    pRVar7 = RendererCanvasRender::singleton;
  }
  RendererCanvasRender::singleton = pRVar7;
  uVar15 = _UNK_0011ce78;
  uVar16 = __LC172;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x60) = &PTR__RID_Alloc_0011c550;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  uVar5 = _UNK_0011ce88;
  uVar4 = __LC173;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined ***)this = &PTR_request_polygon_0011c570;
  *(undefined ***)(this + 8) = &PTR__RID_Alloc_0011c530;
  *(undefined8 *)(this + 0x20) = uVar16;
  *(undefined8 *)(this + 0x28) = uVar15;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x78) = uVar4;
  *(undefined8 *)(this + 0x80) = uVar5;
  ShaderGLES3::ShaderGLES3((ShaderGLES3 *)(this + 0xb8));
  uVar4 = _UNK_0011ce98;
  uVar15 = __LC175;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined ***)(this + 0xb8) = &PTR__init_0011c508;
  uVar16 = _LC174;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = uVar16;
  *(undefined8 *)(this + 0x2a8) = 0x80000000000;
  uVar16 = _LC28;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  this[0x2b0] = (RasterizerCanvasGLES3)0x0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c0) = uVar16;
  this[0x2c8] = (RasterizerCanvasGLES3)0x0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x200300) = 0;
  *(undefined8 *)(this + 0x250) = uVar15;
  *(undefined8 *)(this + 600) = uVar4;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2002e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2002f0) = (undefined1  [16])0x0;
  singleton = this;
  plVar11 = (long *)GLES3::TextureStorage::get_singleton();
  plVar12 = (long *)GLES3::MaterialStorage::get_singleton();
  lVar19 = GLES3::Config::singleton;
  (*_glad_glVertexAttrib4f)(3);
  *(undefined8 *)(this + 0x220) = 1;
  (*_glad_glGenBuffers)(1,this + 0x228);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x228));
  local_b8 = (uint)__LC102;
  uStack_b4 = (undefined4)((ulong)__LC102 >> 0x20);
  uStack_b0 = (undefined4)_LC116;
  uStack_ac = (undefined4)((ulong)_LC116 >> 0x20);
  local_a8 = __LC176;
  uStack_a0 = _UNK_0011cea8;
  (*_glad_glBufferData)(0x8892,0x20,(StringName *)&local_b8,0x88e4);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenVertexArrays)(1,this + 0x22c);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x22c));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x228));
  (*_glad_glVertexAttribPointer)(0,2,0x1406,0,8,0);
  (*_glad_glEnableVertexAttribArray)(0);
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenBuffers)(1,this + 0x238);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x238));
  local_b8 = (uint)__LC114;
  uStack_b4 = (undefined4)((ulong)__LC114 >> 0x20);
  uStack_b0 = (undefined4)_UNK_0011ceb8;
  uStack_ac = (undefined4)((ulong)_UNK_0011ceb8 >> 0x20);
  local_a8 = __LC178;
  uStack_a0 = _UNK_0011cec8;
  local_98 = _LC112;
  uStack_90 = _UNK_0011ced8;
  local_88 = __LC180;
  uStack_80 = _UNK_0011cee8;
  (*_glad_glBufferData)(0x8892,0x40,(StringName *)&local_b8,0x88e4);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenVertexArrays)(1,this + 0x23c);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x23c));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x238));
  (*_glad_glEnableVertexAttribArray)(0);
  (*_glad_glVertexAttribPointer)(0,2,0x1406,0,0x10,0);
  (*_glad_glEnableVertexAttribArray)(4);
  (*_glad_glVertexAttribPointer)(4,2,0x1406,0,0x10,8);
  (*_glad_glBindVertexArray)(0);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenBuffers)(1,this + 0x240);
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x240));
  (*_glad_glBufferData)(0x8892,0x100,0,0x88e8);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glGenBuffers)(1,this + 0x244);
  (*_glad_glBindBuffer)(0x8893,*(undefined4 *)(this + 0x244));
  local_78 = __LC196;
  uStack_70 = _UNK_0011cf08;
  local_68 = __LC197;
  uStack_60 = _UNK_0011cf18;
  local_58 = __LC198;
  uStack_50 = (undefined6)_UNK_0011cf28;
  uStack_4a = 0xa0e;
  uStack_48 = 0x5090a0a0605;
  (*_glad_glBufferData)(0x8893,0x36,&local_78,0x88e4);
  (*_glad_glBindBuffer)(0x8893,0);
  uVar8 = 0x100;
  if (*(long *)(lVar19 + 0x18) < 0x10000) {
    uVar8 = 0x40;
  }
  *(undefined4 *)(this + 0x250) = uVar8;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_e8,"rendering/gl_compatibility/item_buffer_size",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_b8);
  uVar9 = Variant::operator_cast_to_unsigned_int((Variant *)&local_b8);
  *(uint *)(this + 600) = uVar9;
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  uVar9 = *(uint *)(this + 0x260);
  *(int *)(this + 0x25c) = *(int *)(this + 600) << 7;
  if (uVar9 < 4) {
    if (uVar9 != 3) {
      if (*(uint *)(this + 0x264) < 3) {
        *(undefined4 *)(this + 0x264) = 4;
        lVar19 = Memory::realloc_static(*(void **)(this + 0x268),0xa0,false);
        *(long *)(this + 0x268) = lVar19;
        if (lVar19 == 0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar9 = *(uint *)(this + 0x260);
        if (2 < uVar9) goto LAB_00110413;
      }
      uVar17 = (ulong)uVar9;
      lVar19 = *(long *)(this + 0x268) + uVar17 * 0x28;
      do {
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar9;
        *(undefined8 *)(lVar19 + 8) = 0;
        *(undefined8 *)(lVar19 + 0x10) = 0;
        *(undefined8 *)(lVar19 + 0x18) = 0xfffffffffffffffd;
        *(undefined8 *)(lVar19 + 0x20) = 0;
        lVar19 = lVar19 + 0x28;
      } while (uVar9 != 3);
      goto LAB_00110413;
    }
  }
  else {
    lVar19 = 0x78;
    uVar9 = 3;
    do {
      lVar18 = *(long *)(this + 0x268) + lVar19;
      if (*(long *)(lVar18 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar18 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar18 + 8);
          *(undefined8 *)(lVar18 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar19 = lVar19 + 0x28;
    } while (uVar9 < *(uint *)(this + 0x260));
LAB_00110413:
    *(undefined4 *)(this + 0x260) = 3;
  }
  if (*(uint *)(this + 0x274) < 0x100) {
    *(undefined4 *)(this + 0x274) = 0x100;
    lVar19 = Memory::realloc_static(*(void **)(this + 0x278),0x8000,false);
    *(long *)(this + 0x278) = lVar19;
    if (lVar19 == 0) {
      _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  lVar19 = 0;
  do {
    (*_glad_glGenBuffers)(3,(StringName *)&local_b8);
    (*_glad_glBindBuffer)(0x8892,local_b8);
    lVar18 = GLES3::Utilities::singleton;
    local_e8 = "Batch UBO[0][0]";
    local_f0 = 0;
    local_e0 = 0xf;
    String::parse_latin1((StrRange *)&local_f0);
    uVar9 = *(uint *)(this + 0x25c);
    local_e8 = (char *)CONCAT44(local_e8._4_4_,local_b8);
    (*_glad_glBufferData)(0x8892,(ulong)uVar9,0,0x88e0);
    plVar1 = (long *)(lVar18 + 0xf8);
    *plVar1 = *plVar1 + (ulong)uVar9;
    puVar13 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                      ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                    *)(lVar18 + 0x68),(uint *)&local_e8);
    lVar18 = local_f0;
    *puVar13 = uVar9;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    (*_glad_glBindBuffer)(0x8a11,uStack_b4);
    lVar18 = GLES3::Utilities::singleton;
    local_e8 = "2D lights UBO[0]";
    local_f0 = 0;
    local_e0 = 0x10;
    String::parse_latin1((StrRange *)&local_f0);
    uVar9 = *(int *)(this + 0x250) << 7;
    local_e8 = (char *)CONCAT44(local_e8._4_4_,uStack_b4);
    (*_glad_glBufferData)(0x8a11,(ulong)uVar9,0,0x88e0);
    plVar1 = (long *)(lVar18 + 0xf8);
    *plVar1 = *plVar1 + (ulong)uVar9;
    puVar13 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                      ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                    *)(lVar18 + 0x68),(uint *)&local_e8);
    lVar18 = local_f0;
    *puVar13 = uVar9;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    (*_glad_glBindBuffer)(0x8a11,uStack_b0);
    lVar18 = GLES3::Utilities::singleton;
    local_e8 = "2D state UBO[0]";
    local_f0 = 0;
    local_e0 = 0xf;
    String::parse_latin1((StrRange *)&local_f0);
    local_e8 = (char *)CONCAT44(local_e8._4_4_,uStack_b0);
    (*_glad_glBufferData)(0x8a11,0x110,0,0x88e0);
    plVar1 = (long *)(lVar18 + 0xf8);
    *plVar1 = *plVar1 + 0x110;
    puVar14 = (undefined4 *)
              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                            *)(lVar18 + 0x68),(uint *)&local_e8);
    lVar18 = local_f0;
    *puVar14 = 0x110;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar18 + -0x10),false);
      }
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0xfffffffffffffffd;
    local_c8 = 0;
    Vector<unsigned_int>::push_back((Vector<unsigned_int> *)&local_e8,local_b8);
    uVar16 = CONCAT44(uStack_b0,uStack_b4);
    local_d0 = 0;
    local_d8 = uVar16;
    uVar15 = (*_glad_glFenceSync)(0x9117);
    lVar18 = local_e0;
    local_c8 = uVar15;
    if (*(uint *)(this + 0x260) <= (uint)lVar19) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,lVar19,
                 (ulong)*(uint *)(this + 0x260),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(long *)(this + 0x268) + lVar19 * 0x28;
    if (*(long *)(lVar2 + 8) != local_e0) {
      CowData<unsigned_int>::_ref((CowData<unsigned_int> *)(lVar2 + 8),(CowData *)&local_e0);
    }
    *(undefined8 *)(lVar2 + 0x10) = uVar16;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = uVar15;
    if (lVar18 != 0) {
      LOCK();
      plVar1 = (long *)(lVar18 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_e0 + -0x10),false);
      }
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 3);
  (*_glad_glBindBuffer)(0x8892,0);
  (*_glad_glBindBuffer)(0x8a11,0);
  uVar17 = (ulong)*(uint *)(this + 600);
  if (uVar17 == 0) {
LAB_00110e20:
    lVar19 = 0;
  }
  else {
    lVar19 = Memory::alloc_static(uVar17 << 7,true);
    if (lVar19 == 0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      goto LAB_00110e20;
    }
    *(ulong *)(lVar19 + -8) = uVar17;
  }
  uVar17 = (ulong)*(uint *)(this + 0x250);
  *(long *)(this + 0x290) = lVar19;
  if (uVar17 != 0) {
    lVar19 = Memory::alloc_static(uVar17 << 7,true);
    if (lVar19 != 0) {
      *(ulong *)(lVar19 + -8) = uVar17;
      goto LAB_001107db;
    }
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  lVar19 = 0;
LAB_001107db:
  uVar15 = _UNK_0011cef8;
  uVar16 = __LC188;
  *(long *)(this + 0x298) = lVar19;
  local_b8 = (uint)uVar16;
  uStack_b4 = (undefined4)((ulong)uVar16 >> 0x20);
  uStack_b0 = (undefined4)uVar15;
  uStack_ac = (undefined4)((ulong)uVar15 >> 0x20);
  local_a8 = _LC174;
  (*_glad_glGenVertexArrays)(1,this + 0x234);
  (*_glad_glBindVertexArray)(*(undefined4 *)(this + 0x234));
  (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(this + 0x228));
  (*_glad_glGenBuffers)(1,this + 0x230);
  (*_glad_glBindBuffer)(0x8893,*(undefined4 *)(this + 0x230));
  (*_glad_glBufferData)(0x8893,0x18,(StringName *)&local_b8,0x88e4);
  (*_glad_glBindVertexArray)(0);
  local_108 = 0;
  String::operator+=((String_conflict *)&local_108,"#define MAX_GLOBAL_SHADER_UNIFORMS 256\n");
  local_e8 = "\n";
  local_f0 = 0;
  local_e0 = 1;
  String::parse_latin1((StrRange *)&local_f0);
  itos((long)&local_e8);
  operator+((char *)&local_f8,(String_conflict *)"#define MAX_LIGHTS ");
  String::operator+((String_conflict *)&local_100,(String_conflict *)&local_f8);
  String::operator+=((String_conflict *)&local_108,(String_conflict *)&local_100);
  lVar19 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  lVar19 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar1 = (long *)(local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  pcVar6 = local_e8;
  if (local_e8 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = (undefined *)0x0;
      Memory::free_static(pcVar6 + -0x10,false);
    }
  }
  lVar19 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  lVar19 = GLES3::MaterialStorage::get_singleton();
  ShaderGLES3::initialize((String_conflict *)(lVar19 + 0x1b8),(int)(String_conflict *)&local_108);
  GLES3::MaterialStorage::get_singleton();
  uVar16 = ShaderGLES3::version_create();
  *(undefined8 *)(this + 0x248) = uVar16;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_e8,"rendering/2d/shadow_atlas/size",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_b8);
  iVar10 = Variant::operator_cast_to_int((Variant *)&local_b8);
  *(int *)(this + 0x2ac) = iVar10;
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_f0 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  ShaderGLES3::initialize((String_conflict *)(this + 0xb8),(int)(StrRange *)&local_f0);
  lVar19 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  uVar16 = ShaderGLES3::version_create();
  *(undefined8 *)(this + 0x1e8) = uVar16;
  uVar16 = (**(code **)(*plVar12 + 0x70))(plVar12);
  *(undefined8 *)(this + 0x2002f0) = uVar16;
  (**(code **)(*plVar12 + 0x78))(plVar12,uVar16);
  pcVar3 = *(code **)(*plVar12 + 0x88);
  local_f0 = 0;
  local_e8 = 
  "\n// Default CanvasGroup shader.\n\nshader_type canvas_item;\nrender_mode unshaded;\n\nuniform sampler2D screen_texture : hint_screen_texture, repeat_disable, filter_nearest;\n\nvoid fragment() {\n\tvec4 c = textureLod(screen_texture, SCREEN_UV, 0.0);\n\n\tif (c.a > 0.0001) {\n\t\tc.rgb /= c.a;\n\t}\n\n\tCOLOR *= c;\n}\n"
  ;
  local_e0 = 299;
  String::parse_latin1((StrRange *)&local_f0);
  (*pcVar3)(plVar12,*(undefined8 *)(this + 0x2002f0),(StrRange *)&local_f0);
  lVar19 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  uVar16 = (**(code **)(*plVar12 + 200))(plVar12);
  *(undefined8 *)(this + 0x2002e8) = uVar16;
  (**(code **)(*plVar12 + 0xd0))(plVar12,uVar16);
  (**(code **)(*plVar12 + 0xe8))
            (plVar12,*(undefined8 *)(this + 0x2002e8),*(undefined8 *)(this + 0x2002f0));
  uVar16 = (**(code **)(*plVar12 + 0x70))(plVar12);
  *(undefined8 *)(this + 0x200300) = uVar16;
  (**(code **)(*plVar12 + 0x78))(plVar12,uVar16);
  pcVar3 = *(code **)(*plVar12 + 0x88);
  local_f0 = 0;
  local_e8 = 
  "\n// Default clip children shader.\n\nshader_type canvas_item;\nrender_mode unshaded;\n\nuniform sampler2D screen_texture : hint_screen_texture, repeat_disable, filter_nearest;\n\nvoid fragment() {\n\tvec4 c = textureLod(screen_texture, SCREEN_UV, 0.0);\n\tCOLOR.rgb = c.rgb;\n}\n"
  ;
  local_e0 = 0x10a;
  String::parse_latin1((StrRange *)&local_f0);
  (*pcVar3)(plVar12,*(undefined8 *)(this + 0x200300),(StrRange *)&local_f0);
  lVar19 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  uVar16 = (**(code **)(*plVar12 + 200))(plVar12);
  *(undefined8 *)(this + 0x2002f8) = uVar16;
  (**(code **)(*plVar12 + 0xd0))(plVar12,uVar16);
  (**(code **)(*plVar12 + 0xe8))
            (plVar12,*(undefined8 *)(this + 0x2002f8),*(undefined8 *)(this + 0x200300));
  uVar16 = (**(code **)*plVar11)(plVar11);
  *(undefined8 *)(this + 0x2002e0) = uVar16;
  (**(code **)(*plVar11 + 8))(plVar11);
  lVar19 = local_108;
  *(undefined8 *)(this + 0x2d0) = 0;
  if (local_108 != 0) {
    LOCK();
    plVar11 = (long *)(local_108 + -0x10);
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar19 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_allocate_instance_buffer() */

void __thiscall RasterizerCanvasGLES3::_allocate_instance_buffer(RasterizerCanvasGLES3 *this)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint local_98;
  uint local_94;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar7 = (ulong)*(uint *)(this + 0x280);
  uVar9 = (ulong)*(uint *)(this + 0x260);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(this + 0x284);
  *(int *)(this + 0x284) = iVar2 + 1;
  if (*(uint *)(this + 0x280) < *(uint *)(this + 0x260)) {
    lVar8 = *(long *)(*(long *)(this + 0x268) + uVar7 * 0x28 + 8);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar8 + -8);
    }
    if (iVar2 + 1 < lVar8) {
LAB_0011120a:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    (*_glad_glGenBuffers)(1,&local_98);
    (*_glad_glBindBuffer)(0x8892,local_98);
    lVar8 = GLES3::Utilities::singleton;
    local_60 = 0;
    local_58 = &_LC199;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_60);
    uVar7 = (ulong)*(uint *)(this + 0x280);
    uVar9 = (ulong)*(uint *)(this + 0x260);
    if (*(uint *)(this + 0x280) < *(uint *)(this + 0x260)) {
      itos((long)&local_70);
      local_58 = &_LC200;
      local_80 = 0;
      local_50 = 2;
      String::parse_latin1((StrRange *)&local_80);
      itos((long)&local_90);
      operator+((char *)&local_88,(String_conflict *)"Batch UBO[");
      String::operator+((String_conflict *)&local_78,(String_conflict *)&local_88);
      String::operator+((String_conflict *)&local_68,(String_conflict *)&local_78);
      String::operator+((String_conflict *)&local_58,(String_conflict *)&local_68);
      uVar3 = *(uint *)(this + 0x25c);
      local_94 = local_98;
      (*_glad_glBufferData)(0x8892,(ulong)uVar3,0,0x88e0);
      plVar1 = (long *)(lVar8 + 0xf8);
      *plVar1 = *plVar1 + (ulong)uVar3;
      puVar6 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                       ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                     *)(lVar8 + 0x68),&local_94);
      puVar5 = local_58;
      *puVar6 = uVar3;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar5 + -0x10,false);
        }
      }
      lVar8 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      uVar7 = (ulong)*(uint *)(this + 0x280);
      uVar9 = (ulong)*(uint *)(this + 0x260);
      if (*(uint *)(this + 0x280) < *(uint *)(this + 0x260)) {
        Vector<unsigned_int>::push_back
                  ((Vector<unsigned_int> *)(*(long *)(this + 0x268) + uVar7 * 0x28),local_98);
        (*_glad_glBindBuffer)(0x8892,0);
        goto LAB_0011120a;
      }
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar9,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_add_to_batch(unsigned int&, bool&) */

void __thiscall
RasterizerCanvasGLES3::_add_to_batch(RasterizerCanvasGLES3 *this,uint *param_1,bool *param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = (ulong)*(uint *)(this + 0x288);
  uVar6 = (ulong)*(uint *)(this + 0x270);
  if (*(uint *)(this + 0x288) < *(uint *)(this + 0x270)) {
    piVar1 = (int *)(uVar5 * 0x80 + *(long *)(this + 0x278) + 4);
    *piVar1 = *piVar1 + 1;
    uVar2 = *param_1;
    *param_1 = uVar2 + 1;
    if (uVar2 + 1 + *(int *)(this + 0x28c) < *(uint *)(this + 600)) {
      return;
    }
    uVar5 = (ulong)*(uint *)(this + 0x280);
    uVar6 = (ulong)*(uint *)(this + 0x260);
    if (*(uint *)(this + 0x280) < *(uint *)(this + 0x260)) {
      uVar6 = (ulong)*(uint *)(this + 0x284);
      lVar3 = *(long *)(*(long *)(this + 0x268) + uVar5 * 0x28 + 8);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar3 + -8);
        if ((long)uVar6 < lVar7) {
          (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar3 + uVar6 * 4));
          __dest = (void *)(*_glad_glMapBufferRange)
                                     (0x8892,(ulong)*(uint *)(this + 0x28c) << 7,
                                      (ulong)*param_1 << 7,0x22);
          memcpy(__dest,*(void **)(this + 0x290),(ulong)*param_1 << 7);
          (*_glad_glUnmapBuffer)(0x8892);
          _allocate_instance_buffer(this);
          *param_1 = 0;
          *(undefined4 *)(this + 0x28c) = 0;
          *param_2 = false;
          _new_batch(this,param_2);
          uVar5 = (ulong)*(uint *)(this + 0x288);
          uVar6 = (ulong)*(uint *)(this + 0x270);
          if (*(uint *)(this + 0x288) < *(uint *)(this + 0x270)) {
            *(undefined4 *)(uVar5 * 0x80 + *(long *)(this + 0x278)) = 0;
            return;
          }
          goto LAB_001114d0;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
LAB_001114d0:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar5,uVar6,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_record_item_commands(RendererCanvasRender::Item const*, RID, Transform2D
   const&, RendererCanvasRender::Item*&, GLES3::CanvasShaderData::BlendMode,
   RendererCanvasRender::Light*, unsigned int&, bool&, bool&, Vector2 const&) */

void __thiscall
RasterizerCanvasGLES3::_record_item_commands
          (RasterizerCanvasGLES3 *this,long param_1,undefined8 param_3,Transform2D *param_4,
          long *param_5,uint param_6,long param_7,uint *param_8,bool *param_9,byte *param_10,
          undefined8 *param_11)

{
  ulong *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double __y;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  byte bVar15;
  int iVar16;
  long lVar17;
  ushort uVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  short sVar26;
  uint uVar27;
  Color *this_00;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  uint local_158;
  char local_12d;
  Transform2D local_118 [16];
  undefined8 local_108;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [2] [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  iVar16 = *(int *)(param_1 + 0x140);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar16 == 0) {
    iVar16 = *(int *)(this + 0x2d8);
  }
  uVar19 = *(uint *)(this + 0x288);
  uVar21 = (ulong)*(uint *)(this + 0x270);
  uVar11 = (ulong)uVar19;
  if (*(uint *)(this + 0x270) <= uVar19) goto LAB_00111a72;
  lVar17 = *(long *)(this + 0x278);
  if (*(int *)(lVar17 + 0x18 + uVar11 * 0x80) == iVar16) {
    iVar16 = *(int *)(param_1 + 0x144);
    if (iVar16 == 0) goto LAB_00111e12;
LAB_00111626:
    if (*(int *)(lVar17 + 0x1c + uVar11 * 0x80) != iVar16) goto LAB_00111e31;
  }
  else {
    _new_batch(this,param_9);
    uVar19 = *(uint *)(this + 0x288);
    uVar21 = (ulong)*(uint *)(this + 0x270);
    uVar11 = (ulong)uVar19;
    if (*(uint *)(this + 0x270) <= uVar19) goto LAB_00111a72;
    lVar17 = *(long *)(this + 0x278);
    *(int *)(lVar17 + 0x18 + uVar11 * 0x80) = iVar16;
    iVar16 = *(int *)(param_1 + 0x144);
    if (iVar16 != 0) goto LAB_00111626;
LAB_00111e12:
    iVar16 = *(int *)(this + 0x2dc);
    if ((uint)uVar21 <= uVar19) goto LAB_00111a72;
    if (*(int *)(lVar17 + 0x1c + uVar11 * 0x80) != iVar16) {
LAB_00111e31:
      _new_batch(this,param_9);
      uVar11 = (ulong)*(uint *)(this + 0x288);
      uVar21 = (ulong)*(uint *)(this + 0x270);
      if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) goto LAB_00111a72;
      *(int *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x1c) = iVar16;
    }
  }
  local_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  local_a8 = *(undefined8 *)(param_1 + 0xb0);
  lVar17 = *(long *)(param_1 + 0xf8);
  if (lVar17 != 0) {
    fVar33 = (float)*param_11;
    fVar34 = (float)((ulong)*param_11 >> 0x20);
    if ((fVar33 != 0.0) || (fVar34 != 0.0)) {
      local_a8 = CONCAT44((float)((ulong)local_a8 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar17 + 0xa8) >> 0x20) * fVar34 +
                          (float)((ulong)*(undefined8 *)(lVar17 + 0xa0) >> 0x20) * fVar33,
                          (float)local_a8 +
                          (float)*(undefined8 *)(lVar17 + 0xa8) * fVar34 +
                          (float)*(undefined8 *)(lVar17 + 0xa0) * fVar33);
    }
  }
  Transform2D::operator*(local_118,param_4);
  local_98 = 0x3f800000;
  local_e8 = *(float *)(param_1 + 0x90);
  fStack_e4 = *(float *)(param_1 + 0x94);
  fStack_e0 = *(float *)(param_1 + 0x98);
  fStack_dc = *(float *)(param_1 + 0x9c);
  local_a8 = local_108;
  uStack_90 = 0x3f80000000000000;
  local_88 = 0;
  local_f0 = 0;
  local_d8 = (undefined1  [16])0x0;
  if (param_7 == 0) {
    local_158 = 0;
LAB_00111e80:
    bVar15 = (byte)this[0x2b0] ^ 1;
  }
  else {
    uVar19 = 0;
    uVar27 = 0;
    do {
      if ((((-1 < *(int *)(param_7 + 0x128)) &&
           ((*(uint *)(param_1 + 0x4c) & *(uint *)(param_7 + 0x60)) != 0)) &&
          (*(int *)(param_7 + 0x50) <= *(int *)(param_1 + 0x50))) &&
         (*(int *)(param_1 + 0x50) <= *(int *)(param_7 + 0x54))) {
        if (((*(float *)(param_1 + 0x108) <= 0.0 && *(float *)(param_1 + 0x108) != 0.0) ||
            (*(float *)(param_1 + 0x10c) <= 0.0 && *(float *)(param_1 + 0x10c) != 0.0)) ||
           ((fVar33 = *(float *)(param_7 + 0xb8), fVar33 < 0.0 ||
            (*(float *)(param_7 + 0xbc) <= 0.0 && *(float *)(param_7 + 0xbc) != 0.0)))) {
          _err_print_error("intersects","./core/math/rect2.h",0x39,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
          fVar33 = *(float *)(param_7 + 0xb8);
        }
        if ((*(float *)(param_1 + 0x100) < fVar33 + *(float *)(param_7 + 0xb0)) &&
           (*(float *)(param_7 + 0xb0) < *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0x108)))
        {
          if ((*(float *)(param_1 + 0x104) < *(float *)(param_7 + 0xbc) + *(float *)(param_7 + 0xb4)
              ) && (*(float *)(param_7 + 0xb4) <
                    *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x10c))) {
            *(uint *)(local_d8 + (ulong)(uVar27 >> 2 & 0x3fff) * 4) =
                 *(uint *)(local_d8 + (ulong)(uVar27 >> 2 & 0x3fff) * 4) |
                 *(int *)(param_7 + 0x128) << (sbyte)((uVar27 & 3) << 3);
            if ((*(uint *)(param_1 + 0x4c) & *(uint *)(param_7 + 100)) != 0) {
              uVar19 = uVar19 | 1 << ((byte)uVar27 & 0x1f);
            }
            uVar18 = (ushort)uVar19;
            uVar27 = uVar27 + 1;
            sVar26 = (short)uVar27;
            local_158 = *(int *)(this + 0x254) - 1;
            if ((uVar27 & 0xffff) == local_158) goto LAB_00111794;
          }
        }
      }
      sVar26 = (short)uVar27;
      uVar18 = (ushort)uVar19;
      param_7 = *(long *)(param_7 + 0x108);
    } while (param_7 != 0);
    local_158 = uVar27 & 0xffff;
LAB_00111794:
    bVar15 = 0;
    local_158 = (uint)uVar18 << 0xd | local_158;
    if (sVar26 == 0) goto LAB_00111e80;
  }
  uVar11 = (ulong)*(uint *)(this + 0x288);
  uVar21 = (ulong)*(uint *)(this + 0x270);
  if (*(uint *)(this + 0x288) < *(uint *)(this + 0x270)) {
    if (((byte)*(undefined8 *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x58) & 1) != bVar15) {
      _new_batch(this,param_9);
      uVar11 = (ulong)*(uint *)(this + 0x288);
      uVar21 = (ulong)*(uint *)(this + 0x270);
      if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) goto LAB_00111a72;
      puVar1 = (ulong *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x58);
      *puVar1 = *puVar1 ^ 1;
    }
    lVar17 = *(long *)(param_1 + 0x110);
    if (lVar17 != 0) {
      bVar8 = false;
      local_12d = '\0';
LAB_001117fc:
      do {
        iVar16 = *(int *)(lVar17 + 0x10);
        if (bVar8) {
          while (iVar16 != 9) {
            lVar17 = *(long *)(lVar17 + 8);
            if (lVar17 == 0) goto LAB_00111c63;
            iVar16 = *(int *)(lVar17 + 0x10);
          }
LAB_00111acb:
          puVar20 = (undefined4 *)((ulong)*param_8 * 0x80 + *(long *)(this + 0x290));
          Transform2D::operator*((Transform2D *)&local_58,(Transform2D *)&local_b8);
          iVar16 = *(int *)(lVar17 + 0x10);
          *puVar20 = (undefined4)local_58;
          puVar20[1] = local_58._4_4_;
          puVar20[2] = (undefined4)uStack_50;
          puVar20[3] = uStack_50._4_4_;
          *(undefined8 *)(puVar20 + 4) = local_48;
        }
        else if (iVar16 != 4) goto LAB_00111acb;
        lVar12 = *(long *)(this + 0x290);
        iVar22 = 0;
        do {
          lVar24 = (long)iVar22;
          iVar22 = iVar22 + 1;
          *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x20 + lVar24 * 4) = 0;
          *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x30 + lVar24 * 4) = 0;
          *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + lVar24 * 4) = 0;
          *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x40 + lVar24 * 4) = 0;
          *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x70 + lVar24 * 4) = 0;
        } while (iVar22 != 4);
        uVar10 = local_d8._0_4_;
        uVar4 = local_d8._8_4_;
        uVar5 = local_d8._12_4_;
        lVar24 = (ulong)*param_8 * 0x80 + lVar12;
        uVar25 = (ulong)param_6;
        *(undefined4 *)(lVar24 + 0x70) = local_d8._0_4_;
        uVar3 = local_d8._4_4_;
        *(undefined8 *)(lVar24 + 0x18) = 0;
        *(undefined4 *)(lVar12 + 0x74 + (ulong)*param_8 * 0x80) = local_d8._4_4_;
        *(undefined4 *)(lVar12 + 0x78 + (ulong)*param_8 * 0x80) = local_d8._8_4_;
        *(undefined4 *)(lVar12 + 0x7c + (ulong)*param_8 * 0x80) = local_d8._12_4_;
        *(uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80) = local_158;
        *(undefined4 *)(lVar12 + 0x6c + (ulong)*param_8 * 0x80) = *(undefined4 *)(param_1 + 0x78);
        local_178 = local_e8;
        fStack_174 = fStack_e4;
        fStack_170 = fStack_e0;
        fStack_16c = fStack_dc;
        if ((iVar16 == 0) && ((*(byte *)(lVar17 + 0x45) & 1) != 0)) {
          auVar39 = Color::operator*((Color *)(lVar17 + 0x24),(Color *)&local_e8);
          uVar25 = 6;
          local_178 = auVar39._0_4_;
          fStack_174 = auVar39._4_4_;
          fStack_170 = auVar39._8_4_;
          fStack_16c = auVar39._12_4_;
        }
        uVar19 = *(uint *)(this + 0x288);
        uVar11 = (ulong)uVar19;
        uVar21 = (ulong)*(uint *)(this + 0x270);
        if (*(uint *)(this + 0x270) <= uVar19) goto LAB_00111a72;
        lVar12 = *(long *)(this + 0x278);
        lVar24 = (ulong)uVar19 * 0x80 + lVar12;
        if ((((*(int *)(lVar24 + 0x20) != (int)uVar25) || (local_178 != *(float *)(lVar24 + 0x24)))
            || (fStack_174 != *(float *)(lVar24 + 0x28))) ||
           ((fStack_170 != *(float *)(lVar24 + 0x2c) || (fStack_16c != *(float *)(lVar24 + 0x30)))))
        {
          local_168 = CONCAT44(fStack_174,local_178);
          _new_batch(this,param_9);
          uVar19 = *(uint *)(this + 0x288);
          uVar11 = (ulong)uVar19;
          uVar21 = (ulong)*(uint *)(this + 0x270);
          if (*(uint *)(this + 0x270) <= uVar19) goto LAB_00111a72;
          lVar12 = *(long *)(this + 0x278);
          lVar24 = (ulong)uVar19 * 0x80 + lVar12;
          *(int *)(lVar24 + 0x20) = (int)uVar25;
          *(undefined8 *)(lVar24 + 0x24) = local_168;
          *(ulong *)(lVar24 + 0x2c) = CONCAT44(fStack_16c,fStack_170);
        }
        uVar19 = (uint)uVar11;
        uVar27 = (uint)uVar21;
        switch(*(undefined4 *)(lVar17 + 0x10)) {
        case 0:
          if ((*(byte *)(lVar17 + 0x44) & 2) == 0) {
            if (uVar27 <= uVar19) goto LAB_00111a72;
            lVar24 = uVar11 * 0x80 + lVar12;
          }
          else {
            if (uVar27 <= uVar19) goto LAB_00111a72;
            lVar24 = uVar11 * 0x80 + lVar12;
            if (*(int *)(lVar24 + 0x1c) != 2) {
              _new_batch(this,param_9);
              uVar19 = *(uint *)(this + 0x288);
              uVar11 = (ulong)uVar19;
              uVar21 = (ulong)*(uint *)(this + 0x270);
              if (*(uint *)(this + 0x270) <= uVar19) goto LAB_00111a72;
              lVar12 = *(long *)(this + 0x278);
              lVar24 = (ulong)uVar19 * 0x80 + lVar12;
              *(undefined4 *)(lVar24 + 0x1c) = 2;
            }
          }
          lVar14 = *(long *)(lVar17 + 0x50);
          if ((lVar14 != *(long *)(lVar24 + 0x10)) || (*(int *)(lVar24 + 0x68) != 0)) {
            _new_batch(this,param_9);
            uVar11 = (ulong)*(uint *)(this + 0x288);
            uVar19 = *(uint *)(this + 0x270);
            uVar21 = (ulong)uVar19;
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar12 = *(long *)(this + 0x278);
            lVar14 = *(long *)(lVar17 + 0x50);
            lVar24 = uVar11 * 0x80 + lVar12;
            *(ulong *)(lVar24 + 0x58) = *(ulong *)(lVar24 + 0x58) & 0xffffffffffffffc3;
            *(long *)(lVar24 + 0x10) = lVar14;
            *(undefined4 *)(lVar24 + 0x68) = 0;
            *(long *)(lVar24 + 0x60) = lVar17;
            *(undefined4 *)(lVar24 + 0x70) = 0;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
          }
          lVar12 = uVar11 * 0x80 + lVar12;
          _prepare_canvas_texture
                    (this,lVar14,*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                     param_8,&local_f0);
          fVar33 = _LC30;
          fVar34 = _LC30;
          if (*(long *)(lVar17 + 0x50) == 0) {
            fVar31 = *(float *)(lVar17 + 0x1c);
            fVar36 = *(float *)(lVar17 + 0x14);
            fVar32 = *(float *)(lVar17 + 0x18);
            fVar30 = *(float *)(lVar17 + 0x20);
            if (fVar31 < 0.0) {
              fVar36 = fVar36 + fVar31;
              fVar31 = (float)((uint)fVar31 ^ _LC101);
            }
            uVar18 = *(ushort *)(lVar17 + 0x44);
            lVar12 = *(long *)(this + 0x290);
            if (fVar30 < 0.0) {
              fVar32 = fVar32 + fVar30;
              fVar35 = 0.0;
              fVar37 = 0.0;
              fVar30 = (float)((uint)fVar30 ^ _LC101);
            }
            else {
              fVar35 = 0.0;
              fVar37 = 0.0;
            }
          }
          else {
            uVar18 = *(ushort *)(lVar17 + 0x44);
            if ((uVar18 & 1) == 0) {
              fVar35 = 0.0;
              fVar37 = 0.0;
            }
            else {
              fVar33 = *(float *)(lVar17 + 0x40) * local_f0._4_4_;
              fVar34 = *(float *)(lVar17 + 0x3c) * (float)local_f0;
              fVar35 = local_f0._4_4_ * *(float *)(lVar17 + 0x38);
              fVar37 = (float)local_f0 * *(float *)(lVar17 + 0x34);
            }
            fVar31 = *(float *)(lVar17 + 0x1c);
            fVar36 = *(float *)(lVar17 + 0x14);
            fVar32 = *(float *)(lVar17 + 0x18);
            fVar30 = *(float *)(lVar17 + 0x20);
            if (fVar31 < 0.0) {
              fVar36 = fVar36 + fVar31;
              fVar31 = (float)((uint)fVar31 ^ _LC101);
            }
            if (fVar30 < 0.0) {
              fVar32 = fVar32 + fVar30;
              fVar30 = (float)((uint)fVar30 ^ _LC101);
            }
            if ((uVar18 & 4) != 0) {
              fVar34 = (float)((uint)fVar34 ^ _LC101);
            }
            if ((uVar18 & 8) != 0) {
              fVar33 = (float)((uint)fVar33 ^ _LC101);
            }
            lVar12 = *(long *)(this + 0x290);
            if ((uVar18 & 0x10) != 0) {
              puVar2 = (uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80);
              *puVar2 = *puVar2 | 0x20;
            }
            if ((uVar18 & 0x20) != 0) {
              puVar2 = (uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80);
              *puVar2 = *puVar2 | 0x10;
            }
          }
          uVar11 = (ulong)*param_8;
          lVar24 = uVar11 * 0x80 + lVar12;
          if ((uVar18 & 0x80) == 0) {
            if ((uVar18 & 0x100) != 0) {
              puVar2 = (uint *)(lVar24 + 0x68);
              *puVar2 = *puVar2 | 0x80;
              uVar11 = (ulong)*param_8;
            }
          }
          else {
            puVar2 = (uint *)(lVar24 + 0x68);
            *puVar2 = *puVar2 | 0x40;
            *(undefined4 *)(lVar12 + 0x30 + (ulong)*param_8 * 0x80) = *(undefined4 *)(lVar17 + 0x4c)
            ;
            *(undefined4 *)(lVar12 + 0x34 + (ulong)*param_8 * 0x80) = *(undefined4 *)(lVar17 + 0x48)
            ;
            *(undefined4 *)(lVar12 + 0x38 + (ulong)*param_8 * 0x80) = 0;
            *(undefined4 *)(lVar12 + 0x3c + (ulong)*param_8 * 0x80) = 0;
            uVar11 = (ulong)*param_8;
          }
          *(float *)(lVar12 + 0x20 + uVar11 * 0x80) = *(float *)(lVar17 + 0x24) * local_e8;
          *(float *)(lVar12 + 0x24 + (ulong)*param_8 * 0x80) = *(float *)(lVar17 + 0x28) * fStack_e4
          ;
          *(float *)(lVar12 + 0x28 + (ulong)*param_8 * 0x80) = *(float *)(lVar17 + 0x2c) * fStack_e0
          ;
          *(float *)(lVar12 + 0x2c + (ulong)*param_8 * 0x80) = *(float *)(lVar17 + 0x30) * fStack_dc
          ;
          *(float *)(lVar12 + 0x50 + (ulong)*param_8 * 0x80) = fVar37;
          *(float *)(lVar12 + 0x54 + (ulong)*param_8 * 0x80) = fVar35;
          *(float *)(lVar12 + 0x58 + (ulong)*param_8 * 0x80) = fVar34;
          *(float *)(lVar12 + 0x5c + (ulong)*param_8 * 0x80) = fVar33;
          *(float *)(lVar12 + 0x40 + (ulong)*param_8 * 0x80) = fVar36;
          *(float *)(lVar12 + 0x44 + (ulong)*param_8 * 0x80) = fVar32;
          *(float *)(lVar12 + 0x48 + (ulong)*param_8 * 0x80) = fVar31;
          *(float *)(lVar12 + 0x4c + (ulong)*param_8 * 0x80) = fVar30;
          _add_to_batch(this,param_8,param_9);
          lVar17 = *(long *)(lVar17 + 8);
          *param_9 = false;
          goto joined_r0x0011225e;
        case 1:
          lVar24 = *(long *)(lVar17 + 0x60);
          lVar12 = (ulong)*(uint *)(this + 0x288) * 0x80 + lVar12;
          if ((lVar24 != *(long *)(lVar12 + 0x10)) || (*(int *)(lVar12 + 0x68) != 1)) {
            _new_batch(this,param_9);
            uVar11 = (ulong)*(uint *)(this + 0x288);
            uVar19 = *(uint *)(this + 0x270);
            uVar21 = (ulong)uVar19;
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar12 = *(long *)(this + 0x278);
            lVar24 = *(long *)(lVar17 + 0x60);
            lVar14 = uVar11 * 0x80 + lVar12;
            *(long *)(lVar14 + 0x10) = lVar24;
            *(undefined4 *)(lVar14 + 0x68) = 1;
            *(long *)(lVar14 + 0x60) = lVar17;
            *(undefined4 *)(lVar14 + 0x70) = 0;
            *(ulong *)(lVar14 + 0x58) = *(ulong *)(lVar14 + 0x58) & 0xffffffffffffffc3 | 4;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar12 = lVar12 + uVar11 * 0x80;
          }
          _prepare_canvas_texture
                    (this,lVar24,*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                     param_8,&local_f0);
          uVar10 = *(undefined4 *)(lVar17 + 0x20);
          uVar3 = *(undefined4 *)(lVar17 + 0x1c);
          uVar4 = *(undefined4 *)(lVar17 + 0x18);
          uVar5 = *(undefined4 *)(lVar17 + 0x14);
          fVar33 = _LC30;
          fVar34 = _LC30;
          if (*(long *)(lVar17 + 0x60) == 0) {
            local_f0 = CONCAT44(_UNK_0011cd94,_LC30);
            fVar36 = 0.0;
            fVar32 = 0.0;
            lVar12 = *(long *)(this + 0x290);
            lVar24 = (ulong)*param_8 * 0x80 + lVar12;
          }
          else {
            lVar12 = *(long *)(this + 0x290);
            lVar24 = (ulong)*param_8 * 0x80 + lVar12;
            if ((((*(float *)(lVar17 + 0x24) == 0.0) && (*(float *)(lVar17 + 0x28) == 0.0)) &&
                (*(float *)(lVar17 + 0x2c) == 0.0)) && (*(float *)(lVar17 + 0x30) == 0.0)) {
              fVar36 = 0.0;
              fVar32 = 0.0;
            }
            else {
              fVar33 = (float)*(undefined8 *)(lVar17 + 0x2c) * (float)local_f0;
              fVar32 = (float)local_f0 * *(float *)(lVar17 + 0x24);
              auVar39._8_8_ = 0;
              auVar39._0_8_ = CONCAT44(_UNK_0011cd94,_LC30);
              fVar34 = *(float *)(lVar17 + 0x30) * local_f0._4_4_;
              fVar36 = local_f0._4_4_ * *(float *)(lVar17 + 0x28);
              auVar38._8_8_ = CONCAT44(_UNK_0011cd94,_LC30);
              auVar38._0_8_ = *(undefined8 *)(lVar17 + 0x2c);
              auVar39 = divps(auVar39,auVar38);
              *(long *)(lVar24 + 0x18) = auVar39._0_8_;
            }
          }
          *(float *)(lVar24 + 0x20) = *(float *)(lVar17 + 0x48) * local_e8;
          *(float *)(lVar12 + 0x24 + (ulong)*param_8 * 0x80) = *(float *)(lVar17 + 0x4c) * fStack_e4
          ;
          *(float *)(lVar12 + 0x28 + (ulong)*param_8 * 0x80) = *(float *)(lVar17 + 0x50) * fStack_e0
          ;
          *(float *)(lVar12 + 0x2c + (ulong)*param_8 * 0x80) = *(float *)(lVar17 + 0x54) * fStack_dc
          ;
          *(float *)(lVar12 + 0x50 + (ulong)*param_8 * 0x80) = fVar32;
          *(float *)(lVar12 + 0x54 + (ulong)*param_8 * 0x80) = fVar36;
          *(float *)(lVar12 + 0x58 + (ulong)*param_8 * 0x80) = fVar33;
          *(float *)(lVar12 + 0x5c + (ulong)*param_8 * 0x80) = fVar34;
          *(undefined4 *)(lVar12 + 0x40 + (ulong)*param_8 * 0x80) = uVar5;
          *(undefined4 *)(lVar12 + 0x44 + (ulong)*param_8 * 0x80) = uVar4;
          *(undefined4 *)(lVar12 + 0x48 + (ulong)*param_8 * 0x80) = uVar3;
          *(undefined4 *)(lVar12 + 0x4c + (ulong)*param_8 * 0x80) = uVar10;
          puVar2 = (uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80);
          *puVar2 = *puVar2 | *(int *)(lVar17 + 0x58) << 9;
          puVar2 = (uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80);
          *puVar2 = *puVar2 | *(int *)(lVar17 + 0x5c) << 0xb;
          if (*(char *)(lVar17 + 0x44) != '\0') {
            puVar2 = (uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80);
            *puVar2 = *puVar2 | 0x100;
          }
          *(undefined4 *)(lVar12 + 0x30 + (ulong)*param_8 * 0x80) = *(undefined4 *)(lVar17 + 0x34);
          *(undefined4 *)(lVar12 + 0x34 + (ulong)*param_8 * 0x80) = *(undefined4 *)(lVar17 + 0x38);
          *(undefined4 *)(lVar12 + 0x38 + (ulong)*param_8 * 0x80) = *(undefined4 *)(lVar17 + 0x3c);
          *(undefined4 *)(lVar12 + 0x3c + (ulong)*param_8 * 0x80) = *(undefined4 *)(lVar17 + 0x40);
          _add_to_batch(this,param_8,param_9);
          lVar17 = *(long *)(lVar17 + 8);
          *(undefined8 *)((ulong)*param_8 * 0x80 + *(long *)(this + 0x290) + 0x18) = local_f0;
          *param_9 = false;
          goto joined_r0x0011225e;
        case 2:
          _new_batch(this,param_9);
          uVar11 = (ulong)*(uint *)(this + 0x288);
          uVar19 = *(uint *)(this + 0x270);
          uVar21 = (ulong)uVar19;
          if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
          lVar12 = *(long *)(this + 0x278);
          uVar6 = *(undefined8 *)(lVar17 + 0x30);
          lVar24 = uVar11 * 0x80 + lVar12;
          *(undefined8 *)(lVar24 + 0x10) = uVar6;
          *(undefined4 *)(lVar24 + 0x68) = 2;
          *(long *)(lVar24 + 0x60) = lVar17;
          *(undefined4 *)(lVar24 + 0x70) = 0;
          *(ulong *)(lVar24 + 0x58) = *(ulong *)(lVar24 + 0x58) & 0xffffffffffffffc3 | 0x10;
          uVar11 = (ulong)*(uint *)(this + 0x288);
          if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
          lVar12 = lVar12 + uVar11 * 0x80;
          _prepare_canvas_texture
                    (this,uVar6,*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                     param_8,&local_f0);
          lVar12 = *(long *)(this + 0x290);
          iVar16 = 0;
          *(float *)(lVar12 + 0x20 + (ulong)*param_8 * 0x80) = local_e8;
          *(float *)(lVar12 + 0x24 + (ulong)*param_8 * 0x80) = fStack_e4;
          *(float *)(lVar12 + 0x28 + (ulong)*param_8 * 0x80) = fStack_e0;
          *(float *)(lVar12 + 0x2c + (ulong)*param_8 * 0x80) = fStack_dc;
          do {
            lVar24 = (long)iVar16;
            iVar16 = iVar16 + 1;
            *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + lVar24 * 4) = 0;
            *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x40 + lVar24 * 4) = 0;
            *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x30 + lVar24 * 4) = 0;
          } while (iVar16 != 4);
LAB_00111c40:
          _add_to_batch(this,param_8,param_9);
          break;
        case 3:
          if (uVar27 <= uVar19) goto LAB_00111a72;
          lVar12 = uVar11 * 0x80 + lVar12;
          if ((*(int *)(lVar17 + 0x14) != *(int *)(lVar12 + 0x6c)) || (*(int *)(lVar12 + 0x68) != 3)
             ) {
            _new_batch(this,param_9);
            uVar11 = (ulong)*(uint *)(this + 0x288);
            uVar19 = *(uint *)(this + 0x270);
            uVar21 = (ulong)uVar19;
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar12 = *(long *)(this + 0x278);
            lVar24 = uVar11 * 0x80 + lVar12;
            *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar17 + 0x98);
            *(undefined4 *)(lVar24 + 0x6c) = *(undefined4 *)(lVar17 + 0x14);
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar24 = uVar11 * 0x80 + lVar12;
            *(undefined4 *)(lVar24 + 0x68) = 3;
            *(long *)(lVar24 + 0x60) = lVar17;
            *(undefined4 *)(lVar24 + 0x70) = 0;
            *(ulong *)(lVar24 + 0x58) = *(ulong *)(lVar24 + 0x58) & 0xffffffffffffffc3 | 8;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar12 = lVar12 + uVar11 * 0x80;
          }
          _prepare_canvas_texture
                    (this,*(undefined8 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x18),
                     *(undefined4 *)(lVar12 + 0x1c),param_8);
          if (*(int *)(lVar17 + 0x14) != 0) {
            this_00 = (Color *)(lVar17 + 0x58);
            lVar24 = 0;
            lVar12 = *(long *)(this + 0x290);
            do {
              uVar19 = (int)lVar24 * 2;
              uVar21 = (ulong)uVar19;
              uVar11 = (ulong)(uVar19 + 1);
              *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x20 + uVar21 * 4) =
                   *(undefined4 *)(lVar17 + 0x18 + lVar24 * 8);
              *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x20 + uVar11 * 4) =
                   *(undefined4 *)(lVar17 + 0x1c + lVar24 * 8);
              *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x38 + uVar21 * 4) =
                   *(undefined4 *)(lVar17 + 0x38 + lVar24 * 8);
              *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x38 + uVar11 * 4) =
                   *(undefined4 *)(lVar17 + 0x3c + lVar24 * 8);
              auVar39 = Color::operator*(this_00,(Color *)&local_e8);
              uVar19 = auVar39._4_4_;
              uVar27 = uVar19 & 0x7f800000;
              if (uVar27 < 0x47800000) {
                uVar23 = 0;
                if (0x38000000 < uVar27) {
                  uVar23 = ((uVar19 & 0x7fffff) >> 0xd | (uVar19 >> 0x1f) << 0xf |
                           uVar27 + 0xc8000000 >> 0xd) << 0x10;
                }
              }
              else {
                if (((auVar39 & (undefined1  [16])0x7fffff00000000) == (undefined1  [16])0x0) ||
                   (uVar27 != 0x7f800000)) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = 0x3ff;
                }
                uVar23 = ((uVar19 >> 0x1f) << 0xf | uVar27 | 0x7c00) << 0x10;
              }
              uVar27 = auVar39._0_4_ & 0x7f800000;
              uVar19 = (uint)(auVar39._0_8_ >> 0x1f) & 1;
              if (uVar27 < 0x47800000) {
                if (0x38000000 < uVar27) {
                  uVar23 = uVar23 | (auVar39._0_4_ & 0x7fffff) >> 0xd | uVar19 << 0xf |
                                    uVar27 + 0xc8000000 >> 0xd & 0xffff;
                }
              }
              else {
                if (((auVar39 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                   (uVar18 = 0x3ff, uVar27 != 0x7f800000)) {
                  uVar18 = 0;
                }
                uVar23 = uVar23 | (ushort)((ushort)(uVar19 << 0xf) | uVar18 | 0x7c00);
              }
              lVar12 = *(long *)(this + 0x290);
              *(uint *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + uVar21 * 4) = uVar23;
              uVar19 = auVar39._12_4_;
              uVar27 = uVar19 & 0x7f800000;
              if (uVar27 < 0x47800000) {
                uVar23 = 0;
                if (0x38000000 < uVar27) {
                  uVar23 = ((uVar19 >> 0x1f) << 0xf | (uVar19 & 0x7fffff) >> 0xd |
                           uVar27 + 0xc8000000 >> 0xd) << 0x10;
                }
              }
              else {
                if (((auVar39 & (undefined1  [16])0x7fffff00000000) == (undefined1  [16])0x0) ||
                   (uVar27 != 0x7f800000)) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = 0x3ff;
                }
                uVar23 = ((uVar19 >> 0x1f) << 0xf | uVar27 | 0x7c00) << 0x10;
              }
              uVar19 = auVar39._8_4_ & 0x7f800000;
              uVar27 = (uint)(auVar39._8_8_ >> 0x1f) & 1;
              if (uVar19 < 0x47800000) {
                if (0x38000000 < uVar19) {
                  uVar23 = uVar23 | uVar27 << 0xf | (auVar39._8_4_ & 0x7fffff) >> 0xd |
                                    uVar19 + 0xc8000000 >> 0xd & 0xffff;
                }
              }
              else {
                if (((auVar39 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                   (uVar18 = 0x3ff, uVar19 != 0x7f800000)) {
                  uVar18 = 0;
                }
                uVar23 = uVar23 | (ushort)((ushort)(uVar27 << 0xf) | uVar18 | 0x7c00);
              }
              lVar24 = lVar24 + 1;
              this_00 = this_00 + 0x10;
              *(uint *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + uVar11 * 4) = uVar23;
              uVar19 = *(uint *)(lVar17 + 0x14);
              if (3 < uVar19) {
                uVar19 = 3;
              }
            } while ((uint)lVar24 < uVar19);
          }
          _add_to_batch(this,param_8,param_9);
          if (*(int *)(lVar17 + 0x14) == 4) {
            puVar20 = (undefined4 *)((ulong)*param_8 * 0x80 + *(long *)(this + 0x290));
            Transform2D::operator*((Transform2D *)&local_58,(Transform2D *)&local_b8);
            uVar19 = *(uint *)(this + 0x270);
            uVar21 = (ulong)uVar19;
            *puVar20 = (undefined4)local_58;
            puVar20[1] = local_58._4_4_;
            puVar20[2] = (undefined4)uStack_50;
            puVar20[3] = uStack_50._4_4_;
            *(undefined8 *)(puVar20 + 4) = local_48;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (*(uint *)(this + 0x288) < uVar19) {
              lVar12 = uVar11 * 0x80 + *(long *)(this + 0x278);
              _prepare_canvas_texture
                        (this,*(undefined8 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x18),
                         *(undefined4 *)(lVar12 + 0x1c),param_8,&local_f0);
              lVar12 = *(long *)(this + 0x290);
              *(undefined4 *)(lVar12 + 0x70 + (ulong)*param_8 * 0x80) = uVar10;
              *(undefined4 *)(lVar12 + 0x74 + (ulong)*param_8 * 0x80) = uVar3;
              *(undefined4 *)(lVar12 + 0x78 + (ulong)*param_8 * 0x80) = uVar4;
              *(undefined4 *)(lVar12 + 0x7c + (ulong)*param_8 * 0x80) = uVar5;
              iVar16 = 0;
              *(uint *)(lVar12 + 0x68 + (ulong)*param_8 * 0x80) = local_158;
              *(undefined4 *)(lVar12 + 0x6c + (ulong)*param_8 * 0x80) =
                   *(undefined4 *)(param_1 + 0x78);
              do {
                uVar21 = (ulong)(uint)(iVar16 * 2);
                uVar11 = (ulong)((iVar16 + 1) - (uint)(iVar16 == 0));
                uVar25 = (ulong)(iVar16 * 2 + 1);
                lVar24 = lVar17 + uVar11 * 8;
                *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x20 + uVar21 * 4) =
                     *(undefined4 *)(lVar24 + 0x18);
                *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x20 + uVar25 * 4) =
                     *(undefined4 *)(lVar24 + 0x1c);
                *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x38 + uVar21 * 4) =
                     *(undefined4 *)(lVar24 + 0x38);
                *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x38 + uVar25 * 4) =
                     *(undefined4 *)(lVar24 + 0x3c);
                auVar39 = Color::operator*((Color *)(lVar17 + 0x58 + uVar11 * 0x10),
                                           (Color *)&local_e8);
                uVar19 = auVar39._4_4_;
                uVar27 = uVar19 & 0x7f800000;
                if (uVar27 < 0x47800000) {
                  uVar23 = 0;
                  if (0x38000000 < uVar27) {
                    uVar23 = (uVar27 + 0xc8000000 >> 0xd |
                             (uVar19 >> 0x1f) << 0xf | (uVar19 & 0x7fffff) >> 0xd) << 0x10;
                  }
                }
                else {
                  if (((auVar39 & (undefined1  [16])0x7fffff00000000) == (undefined1  [16])0x0) ||
                     (uVar23 = 0x3ff, uVar27 != 0x7f800000)) {
                    uVar23 = 0;
                  }
                  uVar23 = ((uVar19 >> 0x1f) << 0xf | uVar23 | 0x7c00) << 0x10;
                }
                uVar19 = auVar39._0_4_ & 0x7f800000;
                uVar27 = (uint)(auVar39._0_8_ >> 0x1f) & 1;
                if (uVar19 < 0x47800000) {
                  if (0x38000000 < uVar19) {
                    uVar23 = uVar23 | uVar19 + 0xc8000000 >> 0xd & 0xffff |
                                      uVar27 << 0xf | (auVar39._0_4_ & 0x7fffff) >> 0xd;
                  }
                }
                else {
                  if (((auVar39 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                     (uVar18 = 0x3ff, uVar19 != 0x7f800000)) {
                    uVar18 = 0;
                  }
                  uVar23 = uVar23 | (ushort)((ushort)(uVar27 << 0xf) | uVar18 | 0x7c00);
                }
                lVar12 = *(long *)(this + 0x290);
                *(uint *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + uVar21 * 4) = uVar23;
                uVar19 = auVar39._12_4_;
                uVar27 = uVar19 & 0x7f800000;
                if (uVar27 < 0x47800000) {
                  uVar23 = 0;
                  if (0x38000000 < uVar27) {
                    uVar23 = (uVar27 + 0xc8000000 >> 0xd |
                             (uVar19 >> 0x1f) << 0xf | (uVar19 & 0x7fffff) >> 0xd) << 0x10;
                  }
                }
                else {
                  if (((auVar39 & (undefined1  [16])0x7fffff00000000) == (undefined1  [16])0x0) ||
                     (uVar23 = 0x3ff, uVar27 != 0x7f800000)) {
                    uVar23 = 0;
                  }
                  uVar23 = ((uVar19 >> 0x1f) << 0xf | uVar23 | 0x7c00) << 0x10;
                }
                uVar19 = auVar39._8_4_ & 0x7f800000;
                uVar27 = (uint)(auVar39._8_8_ >> 0x1f) & 1;
                if (uVar19 < 0x47800000) {
                  if (0x38000000 < uVar19) {
                    uVar23 = uVar23 | uVar19 + 0xc8000000 >> 0xd & 0xffff |
                                      uVar27 << 0xf | (auVar39._8_4_ & 0x7fffff) >> 0xd;
                  }
                }
                else {
                  if (((auVar39 & (undefined1  [16])0x7fffff) == (undefined1  [16])0x0) ||
                     (uVar18 = 0x3ff, uVar19 != 0x7f800000)) {
                    uVar18 = 0;
                  }
                  uVar23 = uVar23 | (ushort)((ushort)(uVar27 << 0xf) | uVar18 | 0x7c00);
                }
                iVar16 = iVar16 + 1;
                *(uint *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + uVar25 * 4) = uVar23;
              } while (iVar16 != 3);
              goto LAB_00111c40;
            }
            goto LAB_00111a72;
          }
          break;
        case 4:
        case 5:
        case 6:
          _new_batch(this,param_9);
          uVar11 = (ulong)*(uint *)(this + 0x288);
          uVar19 = *(uint *)(this + 0x270);
          uVar21 = (ulong)uVar19;
          if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
          lVar12 = *(long *)(this + 0x278);
          lVar24 = uVar11 * 0x80 + lVar12;
          *(undefined4 *)(lVar24 + 0x70) = 0;
          *(ulong *)(lVar24 + 0x58) = *(ulong *)(lVar24 + 0x58) & 0xffffffffffffffc3 | 0x10;
          iVar16 = *(int *)(lVar17 + 0x10);
          if (iVar16 == 4) {
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            uVar19 = *param_8;
            *(undefined8 *)(lVar12 + 0x10 + uVar11 * 0x80) = *(undefined8 *)(lVar17 + 0x50);
            puVar20 = (undefined4 *)((ulong)uVar19 * 0x80 + *(long *)(this + 0x290));
            Transform2D::operator*((Transform2D *)local_78,(Transform2D *)&local_b8);
            Transform2D::operator*((Transform2D *)&local_58,(Transform2D *)local_78);
            uVar21 = (ulong)*(uint *)(this + 0x270);
            *puVar20 = (undefined4)local_58;
            puVar20[1] = local_58._4_4_;
            puVar20[2] = (undefined4)uStack_50;
            puVar20[3] = uStack_50._4_4_;
            *(undefined8 *)(puVar20 + 4) = local_48;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            fVar33 = *(float *)(lVar17 + 0x44);
            fVar34 = *(float *)(lVar17 + 0x38);
            fVar36 = *(float *)(lVar17 + 0x3c);
            fVar32 = *(float *)(lVar17 + 0x40);
          }
          else if (iVar16 == 5) {
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar12 = lVar12 + uVar11 * 0x80;
            uVar6 = *(undefined8 *)(lVar17 + 0x20);
            puVar1 = (ulong *)(lVar12 + 0x58);
            *puVar1 = *puVar1 | 0x20;
            *(undefined8 *)(lVar12 + 0x10) = uVar6;
            lVar12 = GLES3::MeshStorage::get_singleton();
            uVar11 = *(ulong *)(lVar17 + 0x18);
            if ((uVar11 == 0) || (*(uint *)(lVar12 + 0x26c) <= (uint)uVar11)) {
LAB_00118dcf:
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            lVar12 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x268)) * 0x118 +
                     *(long *)(*(long *)(lVar12 + 600) +
                              ((uVar11 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x268)) * 8);
            iVar16 = *(int *)(lVar12 + 0x110);
            if (iVar16 != (int)(uVar11 >> 0x20)) {
              if (iVar16 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar3);
              }
              goto LAB_00118dcf;
            }
            if (*(char *)(lVar12 + 0x10) != '\0') {
              uVar11 = (ulong)*(uint *)(this + 0x288);
              uVar21 = (ulong)*(uint *)(this + 0x270);
              if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) goto LAB_00111a72;
              puVar2 = (uint *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x70);
              *puVar2 = *puVar2 | 0x80;
            }
            lVar12 = GLES3::MeshStorage::get_singleton();
            uVar11 = *(ulong *)(lVar17 + 0x18);
            if ((uVar11 == 0) || (*(uint *)(lVar12 + 0x26c) <= (uint)uVar11)) {
LAB_00118d84:
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            lVar12 = ((uVar11 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x268)) * 0x118 +
                     *(long *)(*(long *)(lVar12 + 600) +
                              ((uVar11 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x268)) * 8);
            iVar16 = *(int *)(lVar12 + 0x110);
            if (iVar16 != (int)(uVar11 >> 0x20)) {
              if (iVar16 + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0,uVar25);
              }
              goto LAB_00118d84;
            }
            uVar11 = (ulong)*(uint *)(this + 0x288);
            uVar21 = (ulong)*(uint *)(this + 0x270);
            fVar33 = _LC30;
            fVar34 = _LC30;
            fVar36 = _LC30;
            fVar32 = _LC30;
            if (*(char *)(lVar12 + 0x11) != '\0') {
              if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) goto LAB_00111a72;
              puVar2 = (uint *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x70);
              *puVar2 = *puVar2 | 0x100;
              uVar11 = (ulong)*(uint *)(this + 0x288);
              fVar33 = _LC30;
              fVar34 = _LC30;
              fVar36 = _LC30;
              fVar32 = _LC30;
            }
          }
          else if (iVar16 == 6) {
            lVar12 = GLES3::ParticlesStorage::get_singleton();
            plVar13 = (long *)GLES3::TextureStorage::get_singleton();
            uVar19 = *(uint *)(this + 0x270);
            uVar21 = (ulong)uVar19;
            uVar25 = *(ulong *)(lVar17 + 0x18);
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            lVar24 = *(long *)(this + 0x278);
            uVar6 = *(undefined8 *)(lVar17 + 0x20);
            lVar14 = uVar11 * 0x80 + lVar24;
            *(ulong *)(lVar14 + 0x58) = *(ulong *)(lVar14 + 0x58) | 0x20;
            *(uint *)(lVar14 + 0x70) = *(uint *)(lVar14 + 0x70) | 0x80;
            *(undefined8 *)(lVar14 + 0x10) = uVar6;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            if (uVar19 <= *(uint *)(this + 0x288)) goto LAB_00111a72;
            puVar2 = (uint *)(lVar24 + 0x70 + uVar11 * 0x80);
            *puVar2 = *puVar2 | 0x100;
            iVar16 = (int)(uVar25 >> 0x20);
            if ((uVar25 == 0) || (*(uint *)(lVar12 + 0x184) <= (uint)uVar25)) {
LAB_00113687:
              _err_print_error("particles_has_collision","drivers/gles3/storage/particles_storage.h"
                               ,0x193,"Parameter \"particles\" is null.",0,0);
              local_58 = 0x3f800000;
              uStack_50 = 0x3f80000000000000;
              local_78[0]._0_8_ = 0;
              local_78[0]._8_8_ = 0;
              local_48 = 0;
              GLES3::ParticlesStorage::particles_set_canvas_sdf_collision
                        (lVar12,*(undefined8 *)(lVar17 + 0x18),0,&local_58,local_78,0);
              fVar33 = _LC30;
              if (uVar25 != 0) goto LAB_00113493;
LAB_0011373d:
              _err_print_error("particles_has_collision","drivers/gles3/storage/particles_storage.h"
                               ,0x193,"Parameter \"particles\" is null.",0,0);
              bVar15 = 0;
            }
            else {
              lVar24 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x180)) * 0x210 +
                       *(long *)(*(long *)(lVar12 + 0x170) +
                                ((uVar25 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x180)) * 8);
              iVar22 = *(int *)(lVar24 + 0x208);
              if (iVar22 != iVar16) {
                if (iVar22 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,
                                   *(long *)(lVar12 + 0x170));
                }
                goto LAB_00113687;
              }
              if (*(char *)(lVar24 + 0x59) == '\0') {
LAB_001135ba:
                local_58 = 0x3f800000;
                uStack_50 = 0x3f80000000000000;
                local_78[0]._0_8_ = 0;
                local_78[0]._8_8_ = 0;
                local_48 = 0;
                GLES3::ParticlesStorage::particles_set_canvas_sdf_collision
                          (lVar12,*(undefined8 *)(lVar17 + 0x18),0,&local_58,local_78,0);
                fVar33 = _LC30;
              }
              else {
                cVar9 = GLES3::TextureStorage::render_target_is_sdf_enabled(plVar13,param_3);
                if (cVar9 == '\0') goto LAB_001135ba;
                local_58 = *(undefined8 *)(param_1 + 0xa0);
                uStack_50 = *(undefined8 *)(param_1 + 0xa8);
                local_48 = *(undefined8 *)(param_1 + 0xb0);
                uVar10 = GLES3::TextureStorage::render_target_get_sdf_texture(plVar13,param_3);
                local_c8 = 0;
                uStack_c0 = 0;
                auVar39 = (**(code **)(*plVar13 + 0x2b0))(plVar13,param_3);
                local_78[0] = auVar39;
                auVar39 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_78);
                fVar33 = _LC30;
                fVar34 = _LC30 / auVar39._8_4_;
                fVar36 = _LC30 / auVar39._12_4_;
                local_c8 = CONCAT44((float)(auVar39._4_4_ ^ _LC101) * fVar36,
                                    (float)(auVar39._0_4_ ^ _LC101) * fVar34);
                uStack_c0 = CONCAT44(fVar36,fVar34);
                GLES3::ParticlesStorage::particles_set_canvas_sdf_collision
                          (lVar12,*(undefined8 *)(lVar17 + 0x18),1,&local_58,&local_c8,uVar10);
              }
LAB_00113493:
              if (*(uint *)(lVar12 + 0x184) <= (uint)uVar25) goto LAB_0011373d;
              lVar12 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(lVar12 + 0x180)) * 0x210 +
                       *(long *)(*(long *)(lVar12 + 0x170) +
                                ((uVar25 & 0xffffffff) / (ulong)*(uint *)(lVar12 + 0x180)) * 8);
              iVar22 = *(int *)(lVar12 + 0x208);
              if (iVar22 != iVar16) {
                if (iVar22 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0,
                                   "drivers/gles3/storage/particles_storage.h");
                }
                goto LAB_0011373d;
              }
              bVar15 = *(byte *)(lVar12 + 0x59);
            }
            uVar21 = (ulong)*(uint *)(this + 0x270);
            *param_10 = *param_10 | bVar15;
            uVar11 = (ulong)*(uint *)(this + 0x288);
            fVar34 = fVar33;
            fVar36 = fVar33;
            fVar32 = fVar33;
          }
          else {
            uVar11 = (ulong)*(uint *)(this + 0x288);
            fVar33 = _LC30;
            fVar34 = _LC30;
            fVar36 = _LC30;
            fVar32 = _LC30;
          }
          if ((uint)uVar21 <= (uint)uVar11) goto LAB_00111a72;
          lVar12 = uVar11 * 0x80 + *(long *)(this + 0x278);
          *(undefined4 *)(lVar12 + 0x68) = *(undefined4 *)(lVar17 + 0x10);
          *(long *)(lVar12 + 0x60) = lVar17;
          _prepare_canvas_texture
                    (this,*(undefined8 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x18),
                     *(undefined4 *)(lVar12 + 0x1c),param_8,&local_f0);
          iVar16 = 0;
          lVar12 = *(long *)(this + 0x290);
          *(float *)(lVar12 + 0x20 + (ulong)*param_8 * 0x80) = fVar34 * local_e8;
          *(float *)(lVar12 + 0x24 + (ulong)*param_8 * 0x80) = fVar36 * fStack_e4;
          *(float *)(lVar12 + 0x28 + (ulong)*param_8 * 0x80) = fVar32 * fStack_e0;
          *(float *)(lVar12 + 0x2c + (ulong)*param_8 * 0x80) = fVar33 * fStack_dc;
          do {
            lVar24 = (long)iVar16;
            iVar16 = iVar16 + 1;
            *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x50 + lVar24 * 4) = 0;
            *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x40 + lVar24 * 4) = 0;
            *(undefined4 *)((ulong)*param_8 * 0x80 + lVar12 + 0x30 + lVar24 * 4) = 0;
          } while (iVar16 != 4);
          _add_to_batch(this,param_8,param_9);
          break;
        case 7:
          local_88 = *(undefined8 *)(lVar17 + 0x24);
          local_98 = *(undefined8 *)(lVar17 + 0x14);
          uStack_90 = *(undefined8 *)(lVar17 + 0x1c);
          lVar17 = *(long *)(lVar17 + 8);
          *param_9 = false;
joined_r0x0011225e:
          if (lVar17 == 0) goto LAB_00111c63;
          goto LAB_001117fc;
        case 8:
          if ((*param_5 != 0) && (*(char *)(lVar17 + 0x14) != local_12d)) {
            _new_batch(this,param_9);
            local_12d = *(char *)(lVar17 + 0x14);
            if (local_12d == '\0') {
              uVar21 = (ulong)*(uint *)(this + 0x270);
              uVar11 = (ulong)*(uint *)(this + 0x288);
              if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) goto LAB_00111a72;
              *(long *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x38) = *param_5;
            }
            else {
              uVar11 = (ulong)*(uint *)(this + 0x288);
              uVar21 = (ulong)*(uint *)(this + 0x270);
              if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) goto LAB_00111a72;
              *(undefined8 *)(uVar11 * 0x80 + *(long *)(this + 0x278) + 0x38) = 0;
            }
          }
          break;
        case 9:
          if (*(code **)(*RenderingServerGlobals::rasterizer + 0x98) ==
              RasterizerGLES3::get_total_time) {
            dVar28 = (double)RenderingServerGlobals::rasterizer[4];
          }
          else {
            dVar28 = (double)(**(code **)(*RenderingServerGlobals::rasterizer + 0x98))();
          }
          dVar28 = dVar28 - *(double *)(lVar17 + 0x30);
          __y = *(double *)(lVar17 + 0x18);
          dVar29 = dVar28;
          do {
            dVar29 = dVar29 - (dVar29 / __y) * __y;
          } while ((in_FPUStatusWord & 0x400) != 0);
          if (NAN(dVar29)) {
            fmod(dVar28,__y);
LAB_001121a7:
            bVar8 = true;
          }
          else {
            if (dVar29 < 0.0) {
              if (0.0 < __y) goto LAB_00112c91;
            }
            else if ((0.0 < dVar29) && (__y < 0.0)) {
LAB_00112c91:
              dVar29 = dVar29 + __y;
            }
            if (dVar29 + 0.0 < *(double *)(lVar17 + 0x20)) goto LAB_001121a7;
            bVar8 = *(double *)(lVar17 + 0x28) <= dVar29 + 0.0;
          }
          lVar17 = *(long *)(lVar17 + 8);
          RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
          *param_9 = false;
          goto joined_r0x001121c1;
        }
        lVar17 = *(long *)(lVar17 + 8);
        *param_9 = false;
joined_r0x001121c1:
      } while (lVar17 != 0);
LAB_00111c63:
      if ((*param_5 != 0) && (local_12d != '\0')) {
        *param_5 = 0;
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00111a72:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar21,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_render_items(RID, int, Transform2D const&, RendererCanvasRender::Light*,
   bool&, bool, RenderingMethod::RenderInfo*, bool) */

void __thiscall
RasterizerCanvasGLES3::_render_items
          (RasterizerCanvasGLES3 *this,undefined8 param_2,int param_3,undefined8 param_4,
          void *param_5,undefined8 param_6,undefined1 param_7,ulong param_8,undefined1 param_9)

{
  Version *pVVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar19;
  ulong uVar18;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar26;
  ulong uVar25;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  char *pcVar31;
  long *in_R10;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  void *__src;
  long in_FS_OFFSET;
  bool bVar36;
  float fVar37;
  float fVar38;
  float local_d8;
  float local_d4;
  RasterizerCanvasGLES3 *local_d0;
  long local_c8;
  bool local_9d;
  uint local_9c;
  long local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = GLES3::MaterialStorage::get_singleton();
  canvas_begin(this,param_2,param_7,param_9);
  if (0 < param_3) {
    local_9c = 0;
    local_98 = 0;
    local_9d = false;
    _new_batch(this,&local_9d);
    uVar10 = (ulong)*(uint *)(this + 0x288);
    uVar15 = (ulong)*(uint *)(this + 0x270);
    if (*(uint *)(this + 0x288) < *(uint *)(this + 0x270)) {
      *(undefined4 *)(uVar10 * 0x80 + *(long *)(this + 0x278)) = *(undefined4 *)(this + 0x28c);
      local_c8 = 0;
      local_9c = 0;
      local_d0 = this;
      while( true ) {
        lVar14 = *(long *)(local_d0 + 0x2e0);
        uVar33 = *(uint *)(this + 0x288);
        uVar10 = (ulong)uVar33;
        if ((uint)uVar15 <= uVar33) break;
        lVar13 = *(long *)(this + 0x278);
        if (*(long *)(lVar14 + 200) != *(long *)(lVar13 + 0x38 + uVar10 * 0x80)) {
          _new_batch(this,&local_9d);
          uVar33 = *(uint *)(this + 0x288);
          uVar15 = (ulong)*(uint *)(this + 0x270);
          lVar11 = *(long *)(lVar14 + 200);
          uVar10 = (ulong)uVar33;
          if (*(uint *)(this + 0x270) <= uVar33) break;
          lVar13 = *(long *)(this + 0x278);
          *(long *)(lVar13 + 0x38 + uVar10 * 0x80) = lVar11;
          local_98 = lVar11;
        }
        lVar11 = *(long *)(lVar14 + 0xd0);
        if (*(long *)(lVar14 + 0xd0) == 0) {
          lVar11 = lVar14;
        }
        uVar25 = *(ulong *)(lVar11 + 0x68);
        if (*(char *)(lVar14 + 0x48) != '\0') {
          if (**(int **)(lVar14 + 0x40) == 2) {
LAB_00113c08:
            uVar25 = *(ulong *)(this + 0x2002f8);
          }
          else if (uVar25 == 0) {
            if (**(int **)(lVar14 + 0x40) == 1) goto LAB_00113c08;
            uVar25 = *(ulong *)(this + 0x2002e8);
          }
        }
        if ((uint)uVar15 <= uVar33) break;
        if (uVar25 == *(ulong *)(lVar13 + 0x40 + uVar10 * 0x80)) {
          if (local_c8 != 0) goto LAB_00113bb7;
LAB_00113a44:
          local_c8 = 0;
          uVar19 = 0;
        }
        else {
          _new_batch(this,&local_9d);
          if ((uVar25 == 0) || (*(uint *)(lVar9 + 0x16c) <= (uint)uVar25)) {
LAB_00113a22:
            local_c8 = 0;
            lVar13 = 0;
          }
          else {
            lVar13 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x168)) * 0xc0 +
                     *(long *)(*(long *)(lVar9 + 0x158) +
                              ((uVar25 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x168)) * 8);
            if (*(int *)(lVar13 + 0xb8) != (int)(uVar25 >> 0x20)) {
              if (*(int *)(lVar13 + 0xb8) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_00113a22;
            }
            if ((*(int *)(lVar13 + 0x18) != 1) || (lVar13 = *(long *)(lVar13 + 8), lVar13 == 0))
            goto LAB_00113a22;
            local_c8 = *(long *)(lVar13 + 0x80);
            if ((*(long *)(local_c8 + 0x78) == 0) || (*(char *)(local_c8 + 0x70) == '\0')) {
              local_c8 = 0;
            }
          }
          uVar10 = (ulong)*(uint *)(this + 0x288);
          uVar15 = (ulong)*(uint *)(this + 0x270);
          if (*(uint *)(this + 0x270) <= *(uint *)(this + 0x288)) break;
          lVar11 = uVar10 * 0x80 + *(long *)(this + 0x278);
          *(ulong *)(lVar11 + 0x40) = uVar25;
          *(long *)(lVar11 + 0x48) = lVar13;
          if (local_c8 == 0) goto LAB_00113a44;
          *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)(local_c8 + 0xc0);
LAB_00113bb7:
          uVar19 = *(undefined4 *)(local_c8 + 0xb0);
        }
        fVar38 = *(float *)(lVar14 + 0xec);
        if (fVar38 == 0.0) {
          fVar37 = *(float *)(lVar14 + 0xf0);
          if (fVar37 == 0.0) {
            local_48 = 0;
            _record_item_commands
                      (this,lVar14,param_2,param_4,&local_98,uVar19,param_5,&local_9c,&local_9d,
                       param_6,&local_48);
          }
          else {
            iVar28 = *(int *)(lVar14 + 0xf4);
            local_d8 = fVar37 * (float)-(iVar28 / 2);
            fVar38 = fVar38 * (float)-(iVar28 / 2);
            iVar24 = 0;
LAB_00114700:
            bVar36 = -1 < iVar28;
            iVar29 = iVar28;
            iVar28 = iVar24;
            if (bVar36) goto LAB_00114709;
          }
        }
        else {
          iVar28 = *(int *)(lVar14 + 0xf4);
          fVar37 = *(float *)(lVar14 + 0xf0);
          fVar38 = fVar38 * (float)-(iVar28 / 2);
          local_d8 = (float)-(iVar28 / 2) * fVar37;
          iVar24 = iVar28;
          if (fVar37 != 0.0) goto LAB_00114700;
          iVar29 = 0;
LAB_00114709:
          iVar24 = 0;
          while( true ) {
            iVar21 = 0;
            local_48 = CONCAT44(fVar37 * (float)iVar24 + local_d8,(undefined4)local_48);
            if (-1 < iVar28) {
              do {
                fVar37 = (float)iVar21;
                iVar21 = iVar21 + 1;
                local_48 = CONCAT44(local_48._4_4_,fVar37 * *(float *)(lVar14 + 0xec) + fVar38);
                _record_item_commands
                          (this,lVar14,param_2,param_4,&local_98,uVar19,param_5,&local_9c,&local_9d,
                           param_6,&local_48);
              } while (iVar21 <= iVar28);
            }
            iVar24 = iVar24 + 1;
            if (iVar29 < iVar24) break;
            fVar37 = *(float *)(lVar14 + 0xf0);
          }
        }
        local_d0 = local_d0 + 8;
        if (this + (long)param_3 * 8 == local_d0) {
          if (local_9c == 0) goto LAB_001146a1;
          uVar10 = (ulong)*(uint *)(this + 0x280);
          uVar15 = (ulong)*(uint *)(this + 0x260);
          if (*(uint *)(this + 0x280) < *(uint *)(this + 0x260)) {
            uVar15 = (ulong)*(uint *)(this + 0x284);
            lVar14 = *(long *)(*(long *)(this + 0x268) + uVar10 * 0x28 + 8);
            if (lVar14 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = *(long *)(lVar14 + -8);
              if ((long)uVar15 < lVar13) {
                uVar33 = 0;
                (*_glad_glBindBuffer)(0x8892,*(undefined4 *)(lVar14 + uVar15 * 4));
                uVar25 = 0;
                pvVar12 = (void *)(*_glad_glMapBufferRange)
                                            (0x8892,(ulong)*(uint *)(this + 0x28c) << 7,
                                             (ulong)local_9c << 7,0x22);
                __src = *(void **)(this + 0x290);
                memcpy(pvVar12,__src,(ulong)local_9c << 7);
                (*_glad_glUnmapBuffer)(0x8892);
                (*_glad_glDisable)(0xc11);
                local_d4 = _LC30;
                local_98 = 0;
                fVar37 = 0.0;
                bVar4 = *(byte *)(GLES3::Config::singleton + 0x70);
                fVar38 = 0.0;
                *(undefined8 *)(this + 0x2b8) = 0;
                local_d8 = 0.0;
                iVar28 = 0;
                pVVar1 = (Version *)(lVar9 + 0x1b8);
                goto LAB_00113d3f;
              }
            }
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar13,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          break;
        }
        uVar15 = (ulong)*(uint *)(this + 0x270);
      }
    }
LAB_00113be5:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,uVar15,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
LAB_001146a1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00113d3f:
  uVar23 = (undefined4)((ulong)__src >> 0x20);
  uVar19 = (undefined4)(uVar25 >> 0x20);
  uVar15 = (ulong)*(uint *)(this + 0x270);
  if (uVar33 < *(uint *)(this + 0x270)) {
    uVar10 = (ulong)uVar33;
    lVar13 = uVar10 * 0x80;
    lVar14 = lVar13 + *(long *)(this + 0x278);
    if (*(int *)(lVar14 + 4) == 0) goto LAB_00114658;
    lVar11 = *(long *)(lVar14 + 0x38);
    if (lVar11 != local_98) {
      uVar26 = 0;
      local_98 = lVar11;
      if (lVar11 == 0) {
        (*_glad_glDisable)(0xc11);
      }
      else {
        (*_glad_glEnable)();
        (*_glad_glScissor)(CONCAT44(uVar26,(int)*(float *)(lVar11 + 0xb8)),
                           CONCAT44(uVar23,(int)*(float *)(lVar11 + 0xbc)),
                           (int)*(float *)(lVar11 + 0xc0),
                           CONCAT44(uVar19,(int)*(float *)(lVar11 + 0xc4)));
      }
      uVar15 = (ulong)*(uint *)(this + 0x270);
      if (*(uint *)(this + 0x270) <= uVar33) goto LAB_00113be5;
      lVar14 = lVar13 + *(long *)(this + 0x278);
    }
    plVar7 = *(long **)(lVar14 + 0x48);
    uVar18 = *(ulong *)(this + 0x248);
    uVar22 = (ulong)(bVar4 ^ 1) * 2 | *(ulong *)(lVar14 + 0x58);
    if (((plVar7 != (long *)0x0) && (*(long *)(plVar7[0x10] + 0x78) != 0)) &&
       (*(char *)(plVar7[0x10] + 0x70) != '\0')) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      uVar18 = *(ulong *)(plVar7[0x10] + 0x78);
    }
    uVar17 = (uint)uVar18;
    local_90 = uVar22;
    if (*(int *)(lVar9 + 0x2d8) < 1) {
      uVar25 = 0;
      __src = (void *)0x0;
      _err_print_index_error
                ("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbb,0,
                 (long)*(int *)(lVar9 + 0x2d8),"p_variant","variant_count","",false,false);
      goto LAB_00114658;
    }
    if ((uVar18 == 0) || (*(uint *)(lVar9 + 0x20c) <= uVar17)) {
LAB_00114aeb:
      uVar25 = 0;
      __src = (void *)0x0;
      _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xbe,
                       "Parameter \"version\" is null.",0);
      goto LAB_00114658;
    }
    __src = (void *)(((uVar18 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x208)) * 0x80 +
                    *(long *)(*(long *)(lVar9 + 0x1f8) +
                             ((uVar18 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x208)) * 8));
    iVar24 = *(int *)((long)__src + 0x78);
    if (iVar24 != (int)(uVar18 >> 0x20)) {
      if (iVar24 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0,in_R10);
      }
      goto LAB_00114aeb;
    }
    if ((*(int *)((long)__src + 0x68) != 0) ||
       (ShaderGLES3::_initialize_version(pVVar1), *(int *)((long)__src + 0x68) != 0)) {
      uVar20 = local_90;
      plVar7 = *(long **)((long)__src + 0x70);
      uVar27 = *(uint *)(plVar7 + 3);
      uVar25 = (ulong)uVar27;
      in_R10 = (long *)plVar7[2];
      uVar15 = local_90 * 0x3ffff - 1;
      uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
      uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
      uVar15 = uVar15 >> 0x16 ^ uVar15;
      uVar35 = uVar15 & 0xffffffff;
      if ((int)uVar15 == 0) {
        uVar35 = 1;
      }
      pvVar12 = (void *)(uVar35 % uVar25);
      uVar32 = *(uint *)((long)in_R10 + (long)pvVar12 * 4);
      if (uVar32 != 0) {
        pcVar31 = (char *)0x0;
        while ((uVar32 != (uint)uVar35 || (local_90 != *(ulong *)(plVar7[1] + (long)pvVar12 * 8))))
        {
          uVar34 = (int)pcVar31 + 1;
          pcVar31 = (char *)(ulong)uVar34;
          pvVar12 = (void *)((ulong)((int)pvVar12 + 1) % uVar25);
          uVar32 = *(uint *)((long)in_R10 + (long)pvVar12 * 4);
          if ((uVar32 == 0) || (((uVar27 + (int)pvVar12) - uVar32 % uVar27) % uVar27 < uVar34))
          goto LAB_0011494a;
        }
        puVar16 = (undefined4 *)(*plVar7 + (long)pvVar12 * 0x38);
        if (puVar16 != (undefined4 *)0x0) {
          if (*(char *)(puVar16 + 0xc) == '\0') goto LAB_0011407c;
          uVar15 = *(long *)(lVar9 + 0x2c8) * 0x3ffff - 1;
          uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
          uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
          uVar15 = uVar15 >> 0x16 ^ uVar15;
          uVar20 = 1;
          if ((int)uVar15 != 0) {
            uVar20 = uVar15 & 0xffffffff;
          }
          pcVar31 = (char *)0x0;
          pvVar12 = (void *)(uVar20 % uVar25);
          uVar32 = *(uint *)((long)in_R10 + (long)pvVar12 * 4);
          __src = pvVar12;
          if (uVar32 == 0) goto LAB_001148c2;
          goto LAB_0011404f;
        }
      }
LAB_0011494a:
      local_58 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      ShaderGLES3::_compile_specialization
                ((Specialization *)pVVar1,(uint)(Specialization *)&local_88,(Version *)0x0,
                 (ulong)__src);
      if ((*(int *)((long)__src + 0x68) == 0) ||
         (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
          ::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                     **)((long)__src + 0x70),&local_90,(Specialization *)&local_88),
         *(int *)((long)__src + 0x68) == 0)) goto LAB_0011491d;
      plVar7 = *(long **)((long)__src + 0x70);
      uVar27 = *(uint *)(plVar7 + 3);
      in_R10 = (long *)(ulong)uVar27;
      pvVar12 = (void *)plVar7[2];
      uVar25 = uVar35 % (ulong)in_R10;
      uVar32 = *(uint *)((long)pvVar12 + uVar25 * 4);
      if (uVar32 != 0) {
        uVar34 = 0;
LAB_00114a63:
        pcVar31 = (char *)(ulong)uVar32;
        if ((uVar32 != (uint)uVar35) || (uVar20 != *(ulong *)(plVar7[1] + uVar25 * 8)))
        goto LAB_00114a20;
        puVar16 = (undefined4 *)(*plVar7 + uVar25 * 0x38);
        if (*(char *)(lVar9 + 600) != '\0') {
          ShaderGLES3::_save_to_cache(pVVar1);
          pvVar12 = __src;
        }
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_88);
LAB_00114073:
        __src = pvVar12;
        if (puVar16 == (undefined4 *)0x0) goto LAB_001148c2;
LAB_0011407c:
        __src = pvVar12;
        if (*(char *)((long)puVar16 + 0x31) == '\0') goto LAB_001148c2;
        (*_glad_glUseProgram)(*puVar16);
        uVar27 = *(uint *)(this + 0x270);
        uVar15 = (ulong)uVar27;
        *(undefined4 **)(lVar9 + 0x2e0) = puVar16;
        pcVar8 = _glad_glUniform1ui;
        if (uVar27 <= uVar33) goto LAB_00113be5;
        uVar19 = *(undefined4 *)(*(long *)(this + 0x278) + 0x70 + lVar13);
        if (*(int *)(lVar9 + 0x288) < 1) {
          pcVar31 = "p_which";
          _err_print_index_error
                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                     (long)*(int *)(lVar9 + 0x288),"p_which","uniform_count","",false,false);
          goto LAB_00114323;
        }
        if (uVar17 < *(uint *)(lVar9 + 0x20c)) {
          lVar14 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x208)) * 0x80 +
                   *(long *)(*(long *)(lVar9 + 0x1f8) +
                            ((uVar18 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x208)) * 8);
          if (iVar24 != *(int *)(lVar14 + 0x78)) {
            if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,lVar14);
            }
            goto LAB_001150a3;
          }
          if (*(int *)(lVar14 + 0x68) < 1) {
            pcVar31 = "p_variant";
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                       (long)*(int *)(lVar14 + 0x68),"p_variant","int(version->variants.size())","",
                       false,false);
            goto LAB_00114323;
          }
          plVar7 = *(long **)(lVar14 + 0x70);
          uVar27 = *(uint *)(plVar7 + 3);
          uVar15 = uVar22 * 0x3ffff - 1;
          uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
          uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
          uVar15 = uVar15 >> 0x16 ^ uVar15;
          uVar25 = uVar15 & 0xffffffff;
          if ((int)uVar15 == 0) {
            uVar25 = 1;
          }
          uVar15 = uVar25 % (ulong)uVar27;
          uVar32 = *(uint *)(plVar7[2] + uVar15 * 4);
          if (uVar32 == 0) {
LAB_00114fb1:
            pcVar31 = (char *)0x0;
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
          }
          else {
            in_R10 = (long *)0x0;
            while ((uVar32 != (uint)uVar25 || (uVar22 != *(ulong *)(plVar7[1] + uVar15 * 8)))) {
              uVar34 = (int)in_R10 + 1;
              in_R10 = (long *)(ulong)uVar34;
              uVar15 = (ulong)((int)uVar15 + 1) % (ulong)uVar27;
              uVar32 = *(uint *)(plVar7[2] + uVar15 * 4);
              if ((uVar32 == 0) ||
                 (uVar30 = uVar27 + (int)uVar15, pcVar31 = (char *)(ulong)uVar30,
                 (uVar30 - uVar32 % uVar27) % uVar27 < uVar34)) goto LAB_00114fb1;
            }
            lVar14 = *plVar7 + uVar15 * 0x38;
            if (lVar14 == 0) goto LAB_00114fb1;
            if (*(int *)(lVar14 + 0x10) < 1) {
              pcVar31 = "p_which";
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                         (long)*(int *)(lVar14 + 0x10),"p_which",
                         "int(spec->uniform_location.size())","",false,false);
            }
            else if (-1 < **(int **)(lVar14 + 0x18)) {
              if (*(int *)(lVar9 + 0x288) < 1) {
                pcVar31 = "p_which";
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,0,
                           (long)*(int *)(lVar9 + 0x288),"p_which","uniform_count","",false,false);
LAB_00114ec9:
                uVar23 = 0xffffffff;
              }
              else {
                if (*(uint *)(lVar9 + 0x20c) <= uVar17) {
LAB_00114f1a:
                  pcVar31 = (char *)0x0;
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                  goto LAB_00114ec9;
                }
                lVar14 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x208)) * 0x80 +
                         *(long *)(*(long *)(lVar9 + 0x1f8) +
                                  ((uVar18 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x208)) * 8);
                if (iVar24 != *(int *)(lVar14 + 0x78)) {
                  if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,uVar15);
                  }
                  goto LAB_00114f1a;
                }
                if (*(int *)(lVar14 + 0x68) < 1) {
                  pcVar31 = "p_variant";
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                             (long)*(int *)(lVar14 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00114ec9;
                }
                in_R10 = *(long **)(lVar14 + 0x70);
                uVar27 = *(uint *)(in_R10 + 3);
                uVar15 = uVar25 % (ulong)uVar27;
                uVar32 = *(uint *)(in_R10[2] + uVar15 * 4);
                if (uVar32 == 0) {
LAB_00114ea4:
                  pcVar31 = (char *)0x0;
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0);
                  goto LAB_00114ec9;
                }
                uVar34 = 0;
                while ((uVar32 != (uint)uVar25 || (uVar22 != *(ulong *)(in_R10[1] + uVar15 * 8)))) {
                  uVar34 = uVar34 + 1;
                  uVar15 = (ulong)((int)uVar15 + 1) % (ulong)uVar27;
                  uVar32 = *(uint *)(in_R10[2] + uVar15 * 4);
                  if ((uVar32 == 0) ||
                     (uVar30 = uVar27 + (int)uVar15, pcVar31 = (char *)(ulong)uVar30,
                     (uVar30 - uVar32 % uVar27) % uVar27 < uVar34)) goto LAB_00114ea4;
                }
                lVar14 = *in_R10 + uVar15 * 0x38;
                if (lVar14 == 0) goto LAB_00114ea4;
                if (*(int *)(lVar14 + 0x10) < 1) {
                  pcVar31 = "p_which";
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,0,
                             (long)*(int *)(lVar14 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                  goto LAB_00114ec9;
                }
                uVar23 = **(undefined4 **)(lVar14 + 0x18);
              }
              (*pcVar8)(uVar23,uVar19);
            }
          }
        }
        else {
LAB_001150a3:
          pcVar31 = (char *)0x0;
          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                           "Parameter \"version\" is null.",0);
        }
LAB_00114323:
        pcVar8 = _glad_glUniform1ui;
        uVar15 = (ulong)*(uint *)(this + 0x270);
        if (*(uint *)(this + 0x270) <= uVar33) goto LAB_00113be5;
        uVar19 = *(undefined4 *)(*(long *)(this + 0x278) + 0x74 + lVar13);
        if (*(int *)(lVar9 + 0x288) < 3) {
          _err_print_index_error
                    ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                     (long)*(int *)(lVar9 + 0x288),"p_which","uniform_count","",false,false);
          goto LAB_001145b5;
        }
        if (uVar17 < *(uint *)(lVar9 + 0x20c)) {
          lVar14 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x208)) * 0x80 +
                   *(long *)(*(long *)(lVar9 + 0x1f8) +
                            ((uVar18 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x208)) * 8);
          if (iVar24 != *(int *)(lVar14 + 0x78)) {
            if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
              in_R10 = (long *)0x0;
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0,pcVar31);
            }
            goto LAB_00114e03;
          }
          if (*(int *)(lVar14 + 0x68) < 1) {
            _err_print_index_error
                      ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                       (long)*(int *)(lVar14 + 0x68),"p_variant","int(version->variants.size())","",
                       false,false);
            goto LAB_001145b5;
          }
          in_R10 = *(long **)(lVar14 + 0x70);
          uVar27 = *(uint *)(in_R10 + 3);
          uVar15 = uVar22 * 0x3ffff - 1;
          uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
          uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
          uVar15 = uVar15 >> 0x16 ^ uVar15;
          uVar25 = uVar15 & 0xffffffff;
          if ((int)uVar15 == 0) {
            uVar25 = 1;
          }
          uVar15 = uVar25 % (ulong)uVar27;
          uVar32 = *(uint *)(in_R10[2] + uVar15 * 4);
          if (uVar32 == 0) {
LAB_00114c60:
            _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                             "Parameter \"spec\" is null.",0);
          }
          else {
            uVar34 = 0;
            while ((uVar32 != (uint)uVar25 || (uVar22 != *(ulong *)(in_R10[1] + uVar15 * 8)))) {
              uVar34 = uVar34 + 1;
              uVar15 = (ulong)((int)uVar15 + 1) % (ulong)uVar27;
              uVar32 = *(uint *)(in_R10[2] + uVar15 * 4);
              if ((uVar32 == 0) || (((uVar27 + (int)uVar15) - uVar32 % uVar27) % uVar27 < uVar34))
              goto LAB_00114c60;
            }
            lVar14 = *in_R10 + uVar15 * 0x38;
            if (lVar14 == 0) goto LAB_00114c60;
            if (*(int *)(lVar14 + 0x10) < 3) {
              _err_print_index_error
                        ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                         (long)*(int *)(lVar14 + 0x10),"p_which",
                         "int(spec->uniform_location.size())","",false,false);
            }
            else if (-1 < *(int *)(*(long *)(lVar14 + 0x18) + 8)) {
              if (*(int *)(lVar9 + 0x288) < 3) {
                _err_print_index_error
                          ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe4,2,
                           (long)*(int *)(lVar9 + 0x288),"p_which","uniform_count","",false,false);
LAB_00114c17:
                uVar23 = 0xffffffff;
              }
              else {
                if (*(uint *)(lVar9 + 0x20c) <= uVar17) {
LAB_00114d5d:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                                   "Parameter \"version\" is null.",0);
                  goto LAB_00114c17;
                }
                lVar14 = ((uVar18 & 0xffffffff) % (ulong)*(uint *)(lVar9 + 0x208)) * 0x80 +
                         *(long *)(*(long *)(lVar9 + 0x1f8) +
                                  ((uVar18 & 0xffffffff) / (ulong)*(uint *)(lVar9 + 0x208)) * 8);
                if (iVar24 != *(int *)(lVar14 + 0x78)) {
                  if (*(int *)(lVar14 + 0x78) + 0x80000000U < 0x7fffffff) {
                    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                     "Method/function failed. Returning: nullptr",
                                     "Attempting to use an uninitialized RID",0,0,
                                     *(long *)(lVar9 + 0x1f8));
                  }
                  goto LAB_00114d5d;
                }
                if (*(int *)(lVar14 + 0x68) < 1) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe7,0,
                             (long)*(int *)(lVar14 + 0x68),"p_variant",
                             "int(version->variants.size())","",false,false);
                  goto LAB_00114c17;
                }
                in_R10 = *(long **)(lVar14 + 0x70);
                uVar17 = *(uint *)(in_R10 + 3);
                uVar15 = uVar25 % (ulong)uVar17;
                uVar27 = *(uint *)(in_R10[2] + uVar15 * 4);
                if (uVar27 == 0) {
LAB_00114ce7:
                  _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe9,
                                   "Parameter \"spec\" is null.",0);
                  goto LAB_00114c17;
                }
                uVar32 = 0;
                while ((uVar27 != (uint)uVar25 || (uVar22 != *(ulong *)(in_R10[1] + uVar15 * 8)))) {
                  uVar32 = uVar32 + 1;
                  uVar15 = (ulong)((int)uVar15 + 1) % (ulong)uVar17;
                  uVar27 = *(uint *)(in_R10[2] + uVar15 * 4);
                  if ((uVar27 == 0) ||
                     (((uVar17 + (int)uVar15) - uVar27 % uVar17) % uVar17 < uVar32))
                  goto LAB_00114ce7;
                }
                lVar14 = *in_R10 + uVar15 * 0x38;
                if (lVar14 == 0) goto LAB_00114ce7;
                if (*(int *)(lVar14 + 0x10) < 3) {
                  _err_print_index_error
                            ("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xea,2,
                             (long)*(int *)(lVar14 + 0x10),"p_which",
                             "int(spec->uniform_location.size())","",false,false);
                  goto LAB_00114c17;
                }
                uVar23 = *(undefined4 *)(*(long *)(lVar14 + 0x18) + 8);
              }
              (*pcVar8)(uVar23,uVar19);
            }
          }
        }
        else {
LAB_00114e03:
          _err_print_error("_version_get_uniform","./drivers/gles3/shader_gles3.h",0xe6,
                           "Parameter \"version\" is null.",0);
        }
LAB_001145b5:
        uVar15 = (ulong)*(uint *)(this + 0x270);
        if (*(uint *)(this + 0x270) <= uVar33) goto LAB_00113be5;
        lVar13 = lVar13 + *(long *)(this + 0x278);
        fVar2 = *(float *)(lVar13 + 0x24);
        iVar24 = *(int *)(lVar13 + 0x20);
        fVar5 = *(float *)(lVar13 + 0x28);
        fVar6 = *(float *)(lVar13 + 0x30);
        fVar3 = *(float *)(lVar13 + 0x2c);
        if (iVar24 == iVar28) {
          if ((((local_d8 != fVar2) || (fVar5 != fVar38)) || (fVar3 != fVar37)) ||
             (fVar6 != local_d4)) {
            if (iVar28 != 5) goto LAB_00114ba3;
            goto LAB_00114b98;
          }
        }
        else {
          if (iVar28 == 5) {
LAB_00114b98:
            (*_glad_glEnable)(0xbe2);
LAB_00114ba3:
            switch(iVar24) {
            case 0:
              (*_glad_glBlendEquation)(0x8006);
              if (this[0x2c8] == (RasterizerCanvasGLES3)0x0) {
                (*_glad_glBlendFuncSeparate)(0x302,0x303,0,1);
              }
              else {
                (*_glad_glBlendFuncSeparate)(0x302,0x303,1,0x303);
              }
              break;
            case 1:
              (*_glad_glBlendEquation)(0x8006);
              if (this[0x2c8] != (RasterizerCanvasGLES3)0x0) goto LAB_001152b1;
LAB_001152fe:
              (*_glad_glBlendFuncSeparate)(0x302,1,0);
              break;
            case 2:
              (*_glad_glBlendEquation)(0x800b);
              if (this[0x2c8] == (RasterizerCanvasGLES3)0x0) goto LAB_001152fe;
LAB_001152b1:
              (*_glad_glBlendFuncSeparate)(0x302,1,0x302,1);
              break;
            case 3:
              (*_glad_glBlendEquation)(0x8006);
              if (this[0x2c8] == (RasterizerCanvasGLES3)0x0) {
                (*_glad_glBlendFuncSeparate)(0x306,0,0,1);
              }
              else {
                (*_glad_glBlendFuncSeparate)(0x306,0,0x304,0);
              }
              break;
            case 4:
              (*_glad_glBlendEquation)(0x8006);
              if (this[0x2c8] == (RasterizerCanvasGLES3)0x0) {
                (*_glad_glBlendFuncSeparate)(1,0x303,0,1);
              }
              else {
                (*_glad_glBlendFuncSeparate)(1,0x303,1,0x303);
              }
              break;
            case 6:
              (*_glad_glBlendEquation)(0x8006);
              if (this[0x2c8] == (RasterizerCanvasGLES3)0x0) {
                (*_glad_glBlendFuncSeparate)(0x8001,0x301,0,1);
              }
              else {
                (*_glad_glBlendFuncSeparate)(0x8001,0x301,1,0x303);
              }
              (*_glad_glBlendColor)();
            }
          }
          else {
            if (iVar24 != 5) goto LAB_00114ba3;
            (*_glad_glDisable)(0xbe2);
          }
          local_d8 = fVar2;
          local_d4 = fVar6;
          fVar38 = fVar5;
          fVar37 = fVar3;
        }
        uVar25 = param_8;
        __src = param_5;
        _render_batch((Light *)this,(uint)param_5,(RenderInfo *)(ulong)uVar33);
        iVar28 = iVar24;
        goto LAB_00114658;
      }
LAB_00114bbf:
      uVar25 = 0;
      if (*(char *)(lVar9 + 600) == '\0') {
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_88);
        __src = pvVar12;
      }
      else {
        ShaderGLES3::_save_to_cache(pVVar1);
        ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_88);
      }
      goto LAB_001148c2;
    }
LAB_0011491d:
    uVar15 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = (ulong)uVar33;
  }
  goto LAB_00113be5;
  while( true ) {
    uVar34 = (int)pcVar31 + 1;
    pcVar31 = (char *)(ulong)uVar34;
    __src = (void *)((ulong)((int)pvVar12 + 1) % uVar25);
    uVar32 = *(uint *)((long)in_R10 + (long)__src * 4);
    if ((uVar32 == 0) ||
       (pvVar12 = __src, ((uVar27 + (int)__src) - uVar32 % uVar27) % uVar27 < uVar34)) break;
LAB_0011404f:
    if ((uVar32 == (uint)uVar20) &&
       (*(long *)(lVar9 + 0x2c8) == *(long *)(plVar7[1] + (long)pvVar12 * 8))) {
      puVar16 = (undefined4 *)(*plVar7 + (long)pvVar12 * 0x38);
      goto LAB_00114073;
    }
  }
LAB_001148c2:
  if (ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print != '\0') {
    uVar25 = 0;
    __src = (void *)0x0;
    _err_print_error("_version_bind_shader","./drivers/gles3/shader_gles3.h",0xda,
                     "shader failed to compile, unable to bind shader.",0);
    ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print = '\0';
  }
LAB_00114658:
  uVar33 = uVar33 + 1;
  if (*(uint *)(this + 0x288) < uVar33) goto code_r0x00114669;
  goto LAB_00113d3f;
LAB_00114a20:
  uVar34 = uVar34 + 1;
  uVar25 = (ulong)((int)uVar25 + 1) % (ulong)in_R10;
  uVar32 = *(uint *)((long)pvVar12 + uVar25 * 4);
  if ((uVar32 == 0) || (((uVar27 + (int)uVar25) - uVar32 % uVar27) % uVar27 < uVar34))
  goto LAB_00114bbf;
  goto LAB_00114a63;
code_r0x00114669:
  (*_glad_glDisable)(0xc11);
  *(undefined4 *)(this + 0x288) = 0;
  if (*(int *)(this + 0x270) != 0) {
    *(undefined4 *)(this + 0x270) = 0;
  }
  *(uint *)(this + 0x28c) = *(int *)(this + 0x28c) + local_9c;
  goto LAB_001146a1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::_allocate_instance_data_buffer() */

void __thiscall RasterizerCanvasGLES3::_allocate_instance_data_buffer(RasterizerCanvasGLES3 *this)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint local_bc;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0 [5];
  undefined *local_78;
  long local_70 [2];
  long local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (*_glad_glGenBuffers)(3,&local_50);
  (*_glad_glBindBuffer)(0x8892,local_50);
  lVar6 = GLES3::Utilities::singleton;
  local_78 = &_LC208;
  local_a8 = 0;
  local_70[0] = 4;
  String::parse_latin1((StrRange *)&local_a8);
  itos((long)&local_b8);
  operator+((char *)&local_b0,(String_conflict *)"2D Batch UBO[");
  String::operator+((String_conflict *)&local_78,(String_conflict *)&local_b0);
  uVar5 = *(uint *)(this + 0x25c);
  local_bc = local_50;
  (*_glad_glBufferData)(0x8892,(ulong)uVar5,0,0x88e0);
  plVar1 = (long *)(lVar6 + 0xf8);
  *plVar1 = *plVar1 + (ulong)uVar5;
  puVar3 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                   ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                 *)(lVar6 + 0x68),&local_bc);
  puVar2 = local_78;
  *puVar3 = uVar5;
  if (local_78 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = (undefined *)0x0;
      Memory::free_static(puVar2 + -0x10,false);
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  (*_glad_glBindBuffer)(0x8a11,local_4c);
  lVar6 = GLES3::Utilities::singleton;
  local_78 = &_LC199;
  local_a8 = 0;
  local_70[0] = 1;
  String::parse_latin1((StrRange *)&local_a8);
  itos((long)&local_b8);
  operator+((char *)&local_b0,(String_conflict *)"2D Lights UBO[");
  String::operator+((String_conflict *)&local_78,(String_conflict *)&local_b0);
  uVar5 = *(int *)(this + 0x250) << 7;
  local_bc = local_4c;
  (*_glad_glBufferData)(0x8a11,(ulong)uVar5,0,0x88e0);
  plVar1 = (long *)(lVar6 + 0xf8);
  *plVar1 = *plVar1 + (ulong)uVar5;
  puVar3 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                   ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                 *)(lVar6 + 0x68),&local_bc);
  puVar2 = local_78;
  *puVar3 = uVar5;
  if (local_78 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = (undefined *)0x0;
      Memory::free_static(puVar2 + -0x10,false);
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  (*_glad_glBindBuffer)(0x8a11,uStack_48);
  lVar6 = GLES3::Utilities::singleton;
  local_78 = &_LC199;
  local_a8 = 0;
  local_70[0] = 1;
  String::parse_latin1((StrRange *)&local_a8);
  itos((long)&local_b8);
  operator+((char *)&local_b0,(String_conflict *)"2D State UBO[");
  String::operator+((String_conflict *)&local_78,(String_conflict *)&local_b0);
  local_bc = uStack_48;
  (*_glad_glBufferData)(0x8a11,0x110,0,0x88e0);
  plVar1 = (long *)(lVar6 + 0xf8);
  *plVar1 = *plVar1 + 0x110;
  puVar4 = (undefined4 *)
           HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
           ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                         *)(lVar6 + 0x68),&local_bc);
  puVar2 = local_78;
  *puVar4 = 0x110;
  if (local_78 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = (undefined *)0x0;
      Memory::free_static(puVar2 + -0x10,false);
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  lVar6 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  *(int *)(this + 0x280) = *(int *)(this + 0x280) + 1;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0xfffffffffffffffd;
  local_a0[3] = 0;
  Vector<unsigned_int>::push_back((Vector<unsigned_int> *)&local_a8,local_50);
  if (*(code **)(*RenderingServerGlobals::rasterizer + 0x88) == RasterizerGLES3::get_frame_number) {
    local_60 = RenderingServerGlobals::rasterizer[2];
  }
  else {
    local_60 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
  }
  lVar6 = local_a0[0];
  local_70[0] = 0;
  local_a0[2] = local_60;
  if (local_a0[0] != 0) {
    CowData<unsigned_int>::_ref((CowData<unsigned_int> *)local_70,(CowData *)local_a0);
  }
  local_58 = local_a0[3];
  LocalVector<RasterizerCanvasGLES3::DataBuffer,unsigned_int,false,false>::insert
            ((LocalVector<RasterizerCanvasGLES3::DataBuffer,unsigned_int,false,false> *)
             (this + 0x260),*(undefined4 *)(this + 0x280),(String_conflict *)&local_78);
  if (local_70[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_70[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    lVar6 = local_a0[0];
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70[0] + -0x10),false);
      lVar6 = local_a0[0];
    }
  }
  *(uint *)(this + 0x280) = *(uint *)(this + 0x280) % *(uint *)(this + 0x260);
  (*_glad_glBindBuffer)(0x8892);
  (*_glad_glBindBuffer)(0x8a11);
  if (lVar6 != 0) {
    LOCK();
    plVar1 = (long *)(lVar6 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_a0[0] + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RasterizerCanvasGLES3::canvas_render_items(RID, RendererCanvasRender::Item*, Color const&,
   RendererCanvasRender::Light*, RendererCanvasRender::Light*, Transform2D const&,
   RenderingServer::CanvasItemTextureFilter, RenderingServer::CanvasItemTextureRepeat, bool, bool&,
   RenderingMethod::RenderInfo*) */

void __thiscall
RasterizerCanvasGLES3::canvas_render_items
          (RasterizerCanvasGLES3 *this,undefined8 param_2,long param_3,undefined8 *param_4,
          byte *param_5,long param_6,ulong *param_7,undefined4 param_8,undefined4 param_9,
          uint param_10,undefined1 *param_11,undefined8 param_12)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  byte bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  double dVar20;
  undefined1 uVar21;
  int iVar22;
  undefined4 uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  void *__dest;
  int iVar27;
  uint uVar28;
  long lVar29;
  undefined4 uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  byte *pbVar35;
  char cVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  undefined8 *puVar41;
  long lVar42;
  ulong uVar43;
  long in_FS_OFFSET;
  bool bVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float local_288;
  float fStack_284;
  int local_1dc;
  undefined1 local_1d8 [16];
  Transform2D local_1c8 [32];
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  float local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar24 = (long *)GLES3::TextureStorage::get_singleton();
  lVar25 = GLES3::MaterialStorage::get_singleton();
  plVar26 = (long *)GLES3::MeshStorage::get_singleton();
  Transform2D::affine_inverse();
  reset_canvas();
  uVar34 = (ulong)*(uint *)(this + 0x280);
  uVar43 = (ulong)*(uint *)(this + 0x260);
  if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
  lVar42 = *(long *)(*(long *)(this + 0x268) + uVar34 * 0x28 + 0x20);
  if (lVar42 == 0) {
LAB_00115bc2:
    uVar38 = 0;
    pbVar35 = param_5;
    if (param_6 == 0) {
      this[0x2b0] = (RasterizerCanvasGLES3)0x0;
      local_288 = (float)uVar38;
      if (param_5 != (byte *)0x0) goto LAB_00115e10;
    }
    else {
      do {
        if (*(uint *)(this + 0x250) == uVar38) {
          *(undefined4 *)(param_6 + 0x128) = 0xffffffff;
          param_6 = *(long *)(param_6 + 0x108);
        }
        else {
          uVar34 = *(ulong *)(param_6 + 0x118);
          if ((uVar34 != 0) && ((uint)uVar34 < *(uint *)(this + 0x24))) {
            lVar42 = *(long *)(*(long *)(this + 0x10) +
                              ((uVar34 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8) +
                     ((uVar34 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x38;
            if (*(int *)(lVar42 + 0x30) == (int)(uVar34 >> 0x20)) {
              uVar48 = Vector2::normalized();
              dVar20 = _LC68;
              lVar32 = *(long *)(this + 0x298) + (ulong)uVar38 * 0x80;
              *(uint *)(lVar32 + 0x60) = (uint)uVar48 ^ _LC101;
              lVar29 = 0;
              *(uint *)(lVar32 + 100) = (uint)((ulong)uVar48 >> 0x20) ^ _LC101;
              *(undefined4 *)(lVar32 + 0x20) = *(undefined4 *)(lVar42 + 0x14);
              uVar23 = *(undefined4 *)(lVar42 + 0x1c);
              *(undefined4 *)(lVar32 + 0x28) = 0;
              *(undefined4 *)(lVar32 + 0x24) = uVar23;
              *(undefined4 *)(lVar32 + 0x2c) = *(undefined4 *)(lVar42 + 0x24);
              *(undefined4 *)(lVar32 + 0x30) = *(undefined4 *)(lVar42 + 0x18);
              uVar23 = *(undefined4 *)(lVar42 + 0x20);
              *(undefined4 *)(lVar32 + 0x38) = 0;
              *(undefined4 *)(lVar32 + 0x34) = uVar23;
              *(undefined4 *)(lVar32 + 0x3c) = *(undefined4 *)(lVar42 + 0x28);
              *(undefined4 *)(lVar32 + 0x5c) = *(undefined4 *)(param_6 + 0x44);
              do {
                iVar27 = (int)lVar29;
                iVar22 = (int)((double)*(float *)(param_6 + 0x9c + lVar29 * 4) * dVar20);
                if (0xff < iVar22) {
                  iVar22 = 0xff;
                }
                uVar21 = (undefined1)iVar22;
                if (iVar22 < 0) {
                  uVar21 = 0;
                }
                *(undefined1 *)((long)iVar27 + 0x50 + lVar32) = uVar21;
                lVar2 = lVar29 * 4;
                lVar29 = lVar29 + 1;
                lVar32 = *(long *)(this + 0x298) + (ulong)uVar38 * 0x80;
                *(undefined4 *)(lVar32 + 0x40 + (long)iVar27 * 4) =
                     *(undefined4 *)(param_6 + 4 + lVar2);
              } while (lVar29 != 4);
              iVar22 = *(int *)(this + 0x2a8);
              *(float *)(lVar32 + 0x4c) = *(float *)(lVar32 + 0x4c) * *(float *)(param_6 + 0x48);
              if (iVar22 == 0) {
                *(undefined4 *)(lVar32 + 0x58) = 0x3f800000;
                uVar23 = 0;
                *(undefined4 *)(lVar32 + 0x68) = 0x3f800000;
              }
              else {
                *(float *)(lVar32 + 0x58) =
                     (float)((_LC216 / (double)*(int *)(this + 0x2ac)) *
                            ((double)*(float *)(param_6 + 0xac) + _LC216));
                *(float *)(lVar32 + 0x68) = _LC30 / *(float *)(lVar42 + 0xc);
                uVar23 = *(undefined4 *)(lVar42 + 0x10);
              }
              iVar22 = *(int *)(param_6 + 0x70);
              iVar27 = *(int *)(param_6 + 0x98);
              *(undefined4 *)(lVar32 + 0x6c) = uVar23;
              uVar28 = iVar22 << 0x10 | iVar27 << 0x16;
              cVar36 = *(char *)(lVar42 + 8);
              *(uint *)(lVar32 + 0x54) = uVar28;
              if (cVar36 != '\0') {
                *(uint *)(lVar32 + 0x54) = uVar28 | 0x100000;
              }
              *(uint *)(param_6 + 0x128) = uVar38;
              param_6 = *(long *)(param_6 + 0x108);
              uVar38 = uVar38 + 1;
              goto LAB_00115dc5;
            }
            if (*(int *)(lVar42 + 0x30) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
          }
          *(undefined4 *)(param_6 + 0x128) = 0xffffffff;
          param_6 = *(long *)(param_6 + 0x108);
          _err_print_error("canvas_render_items","drivers/gles3/rasterizer_canvas_gles3.cpp",0xa2,
                           "Condition \"!clight\" is true. Continuing.",0);
        }
LAB_00115dc5:
      } while (param_6 != 0);
      this[0x2b0] = (RasterizerCanvasGLES3)(uVar38 != 0);
      local_288 = (float)uVar38;
      if (param_5 != (byte *)0x0) {
LAB_00115e10:
        do {
          if ((float)*(uint *)(this + 0x250) == local_288) {
            pbVar35[0x128] = 0xff;
            pbVar35[0x129] = 0xff;
            pbVar35[0x12a] = 0xff;
            pbVar35[299] = 0xff;
            pbVar35 = *(byte **)(pbVar35 + 0x108);
          }
          else {
            uVar34 = *(ulong *)(pbVar35 + 0x118);
            if ((uVar34 != 0) && ((uint)uVar34 < *(uint *)(this + 0x24))) {
              plVar1 = (long *)(*(long *)(*(long *)(this + 0x10) +
                                         ((uVar34 & 0xffffffff) / (ulong)*(uint *)(this + 0x20)) * 8
                                         ) +
                               ((uVar34 & 0xffffffff) % (ulong)*(uint *)(this + 0x20)) * 0x38);
              if ((int)plVar1[6] == (int)(uVar34 >> 0x20)) {
                local_188._8_8_ = 0x3f80000000000000;
                local_188._0_8_ = 0x3f800000;
                uVar48 = local_178._8_8_;
                auVar51._8_8_ = 0;
                auVar51._0_8_ = local_178._8_8_;
                local_178 = auVar51 << 0x40;
                if ((*(char *)(RenderingServerGlobals::canvas + 0x318) == '\0') ||
                   ((*pbVar35 & 4) == 0)) {
                  local_188 = *(undefined1 (*) [16])(pbVar35 + 0x14);
                  local_178._0_8_ = *(undefined8 *)(pbVar35 + 0x24);
                  local_178 = CONCAT88(uVar48,local_178._0_8_);
                }
                else {
                  lVar42 = Engine::get_singleton();
                  TransformInterpolator::interpolate_transform_2d
                            ((Transform2D *)(pbVar35 + 0x2c),(Transform2D *)(pbVar35 + 0x14),
                             (Transform2D *)local_188,(float)*(double *)(lVar42 + 0x60));
                }
                lVar32 = (ulong)(uint)local_288 * 0x80;
                puVar41 = (undefined8 *)(*(long *)(this + 0x298) + lVar32);
                puVar41[0xc] = CONCAT44((float)(param_7[1] >> 0x20) * local_178._4_4_ +
                                        (float)(*param_7 >> 0x20) * local_178._0_4_ +
                                        (float)(param_7[2] >> 0x20),
                                        (float)param_7[1] * local_178._4_4_ +
                                        (float)*param_7 * local_178._0_4_ + (float)param_7[2]);
                Transform2D::affine_inverse();
                *(undefined4 *)(puVar41 + 1) = 0;
                *puVar41 = CONCAT44(local_158._8_4_,local_158._0_4_);
                *(undefined4 *)((long)puVar41 + 0xc) = (undefined4)local_148;
                *(undefined4 *)(puVar41 + 2) = local_158._4_4_;
                *(undefined4 *)(puVar41 + 3) = 0;
                *(undefined4 *)((long)puVar41 + 0x14) = local_158._12_4_;
                *(undefined4 *)((long)puVar41 + 0x1c) = local_148._4_4_;
                lVar42 = *(long *)(this + 0x298);
                Transform2D::affine_inverse();
                lVar42 = lVar42 + lVar32;
                *(undefined4 *)(lVar42 + 0x28) = 0;
                *(ulong *)(lVar42 + 0x20) = CONCAT44(local_158._8_4_,local_158._0_4_);
                *(undefined4 *)(lVar42 + 0x2c) = (undefined4)local_148;
                *(undefined4 *)(lVar42 + 0x30) = local_158._4_4_;
                *(undefined4 *)(lVar42 + 0x38) = 0;
                *(undefined4 *)(lVar42 + 0x34) = local_158._12_4_;
                *(undefined4 *)(lVar42 + 0x3c) = local_148._4_4_;
                fVar47 = *(float *)(pbVar35 + 0x44);
                fVar45 = (float)Vector2::length();
                fVar46 = (float)Vector2::length();
                lVar29 = 0;
                lVar42 = *(long *)(this + 0x298) + lVar32;
                *(float *)(*(long *)(this + 0x298) + 0x5c + lVar32) =
                     (fVar46 + fVar45) * fVar47 * _LC113;
                do {
                  iVar27 = (int)lVar29;
                  iVar22 = (int)((double)*(float *)(pbVar35 + lVar29 * 4 + 0x9c) * _LC68);
                  if (0xff < iVar22) {
                    iVar22 = 0xff;
                  }
                  uVar21 = (undefined1)iVar22;
                  if (iVar22 < 0) {
                    uVar21 = 0;
                  }
                  *(undefined1 *)((long)iVar27 + 0x50 + lVar42) = uVar21;
                  lVar2 = lVar29 * 4;
                  lVar29 = lVar29 + 1;
                  lVar42 = *(long *)(this + 0x298) + lVar32;
                  *(undefined4 *)(lVar42 + 0x40 + (long)iVar27 * 4) =
                       *(undefined4 *)(pbVar35 + lVar2 + 4);
                } while (lVar29 != 4);
                iVar22 = *(int *)(this + 0x2a8);
                *(float *)(lVar42 + 0x4c) = *(float *)(lVar42 + 0x4c) * *(float *)(pbVar35 + 0x48);
                if (iVar22 == 0) {
                  *(undefined4 *)(lVar42 + 0x58) = 0x3f800000;
                  uVar23 = 0;
                  *(undefined4 *)(lVar42 + 0x68) = 0x3f800000;
                }
                else {
                  *(float *)(lVar42 + 0x58) =
                       (float)((_LC216 / (double)*(int *)(this + 0x2ac)) *
                              ((double)*(float *)(pbVar35 + 0xac) + _LC216));
                  *(float *)(lVar42 + 0x68) = _LC30 / *(float *)((long)plVar1 + 0xc);
                  uVar23 = (undefined4)plVar1[2];
                }
                iVar22 = *(int *)(pbVar35 + 0x70);
                iVar27 = *(int *)(pbVar35 + 0x98);
                *(undefined4 *)(lVar42 + 0x6c) = uVar23;
                uVar28 = iVar22 << 0x10 | iVar27 << 0x16;
                lVar29 = plVar1[1];
                *(uint *)(lVar42 + 0x54) = uVar28;
                if ((char)lVar29 != '\0') {
                  *(uint *)(lVar42 + 0x54) = uVar28 | 0x100000;
                }
                if (*plVar1 == 0) {
                  *(undefined1 (*) [16])(lVar42 + 0x70) = (undefined1  [16])0x0;
                }
                else {
                  lVar29 = GLES3::TextureStorage::get_singleton();
                  lVar42 = *(long *)(lVar29 + 0x138);
                  if ((lVar42 != 0) && (*(int *)(lVar29 + 0x15c) != 0)) {
                    uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(lVar29 + 0x158) * 4));
                    lVar2 = *(long *)(hash_table_size_primes_inv +
                                     (ulong)*(uint *)(lVar29 + 0x158) * 8);
                    uVar34 = *plVar1 * 0x3ffff - 1;
                    uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
                    uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
                    uVar39 = (uint)(uVar34 >> 0x16) ^ (uint)uVar34;
                    uVar28 = 1;
                    if (uVar39 != 0) {
                      uVar28 = uVar39;
                    }
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (ulong)uVar28 * lVar2;
                    auVar9._8_8_ = 0;
                    auVar9._0_8_ = uVar43;
                    lVar33 = SUB168(auVar5 * auVar9,8);
                    uVar39 = *(uint *)(*(long *)(lVar29 + 0x140) + lVar33 * 4);
                    uVar31 = SUB164(auVar5 * auVar9,8);
                    if (uVar39 != 0) {
                      uVar37 = 0;
                      do {
                        if ((uVar28 == uVar39) &&
                           (*plVar1 == *(long *)(*(long *)(lVar42 + lVar33 * 8) + 0x10))) {
                          lVar42 = *(long *)(lVar42 + (ulong)uVar31 * 8);
                          uVar48 = *(undefined8 *)(lVar42 + 0x1c);
                          uVar49 = *(undefined8 *)(lVar42 + 0x24);
                          goto LAB_00116ca4;
                        }
                        uVar37 = uVar37 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = (ulong)(uVar31 + 1) * lVar2;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar43;
                        lVar33 = SUB168(auVar6 * auVar10,8);
                        uVar39 = *(uint *)(*(long *)(lVar29 + 0x140) + lVar33 * 4);
                        uVar31 = SUB164(auVar6 * auVar10,8);
                      } while ((uVar39 != 0) &&
                              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar39 * lVar2,
                              auVar11._8_8_ = 0, auVar11._0_8_ = uVar43, auVar8._8_8_ = 0,
                              auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                               (ulong)*(uint *)(lVar29 + 0x158) * 4)
                                                     + uVar31) - SUB164(auVar7 * auVar11,8)) * lVar2
                              , auVar12._8_8_ = 0, auVar12._0_8_ = uVar43,
                              uVar37 <= SUB164(auVar8 * auVar12,8)));
                    }
                  }
                  uVar48 = 0;
                  uVar49 = 0;
LAB_00116ca4:
                  puVar41 = (undefined8 *)(*(long *)(this + 0x298) + 0x70 + lVar32);
                  *puVar41 = uVar48;
                  puVar41[1] = uVar49;
                }
                *(float *)(pbVar35 + 0x128) = local_288;
                local_288 = (float)((int)local_288 + 1);
                pbVar35 = *(byte **)(pbVar35 + 0x108);
                goto LAB_00116170;
              }
              if ((int)plVar1[6] + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
            }
            pbVar35[0x128] = 0xff;
            pbVar35[0x129] = 0xff;
            pbVar35[0x12a] = 0xff;
            pbVar35[299] = 0xff;
            pbVar35 = *(byte **)(pbVar35 + 0x108);
            _err_print_error("canvas_render_items","drivers/gles3/rasterizer_canvas_gles3.cpp",0xe2,
                             "Condition \"!clight\" is true. Continuing.",0);
          }
LAB_00116170:
        } while (pbVar35 != (byte *)0x0);
      }
      if (local_288 != 0.0) {
        uVar34 = (ulong)*(uint *)(this + 0x280);
        uVar43 = (ulong)*(uint *)(this + 0x260);
        if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
        (*_glad_glBindBufferBase)
                  (0x8a11,2,*(undefined4 *)(*(long *)(this + 0x268) + uVar34 * 0x28 + 0x10));
        __dest = (void *)(*_glad_glMapBufferRange)(0x8a11,0,(ulong)(uint)local_288 << 7,0x22);
        memcpy(__dest,*(void **)(this + 0x298),(ulong)(uint)local_288 << 7);
        (*_glad_glUnmapBuffer)(0x8a11);
        iVar22 = GLES3::TextureStorage::texture_atlas_get_texture();
        if (iVar22 == 0) {
          uVar34 = plVar24[3];
          if ((uVar34 == 0) || (*(uint *)((long)plVar24 + 0xf4) <= (uint)uVar34)) goto LAB_0011769a;
          lVar42 = ((uVar34 & 0xffffffff) % (ulong)*(uint *)(plVar24 + 0x1e)) * 0xf0 +
                   *(long *)(plVar24[0x1c] +
                            ((uVar34 & 0xffffffff) / (ulong)*(uint *)(plVar24 + 0x1e)) * 8);
          iVar22 = *(int *)(lVar42 + 0xe8);
          if (iVar22 == (int)(uVar34 >> 0x20)) {
            if (*(char *)(lVar42 + 8) != '\0') {
              if ((*(long *)(lVar42 + 0x10) == 0) ||
                 (uVar34 = *(ulong *)(lVar42 + 0x10),
                 *(uint *)((long)plVar24 + 0xf4) <= (uint)uVar34)) goto LAB_0011769a;
              lVar42 = ((uVar34 & 0xffffffff) % (ulong)*(uint *)(plVar24 + 0x1e)) * 0xf0 +
                       *(long *)(plVar24[0x1c] +
                                ((uVar34 & 0xffffffff) / (ulong)*(uint *)(plVar24 + 0x1e)) * 8);
              iVar22 = *(int *)(lVar42 + 0xe8);
              if (iVar22 != (int)(uVar34 >> 0x20)) goto joined_r0x00118e16;
            }
            iVar22 = *(int *)(lVar42 + 0x74);
            goto LAB_0011622f;
          }
joined_r0x00118e16:
          if (iVar22 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
LAB_0011769a:
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
LAB_0011622f:
        (*_glad_glActiveTexture)(*(int *)(GLES3::Config::singleton + 8) + 0x84be);
        (*_glad_glBindTexture)(0xde1,iVar22);
        iVar22 = *(int *)(this + 0x2a0);
        if (iVar22 == 0) {
          uVar34 = plVar24[3];
          if ((uVar34 == 0) || (*(uint *)((long)plVar24 + 0xf4) <= (uint)uVar34)) goto LAB_0011769a;
          lVar42 = ((uVar34 & 0xffffffff) % (ulong)*(uint *)(plVar24 + 0x1e)) * 0xf0 +
                   *(long *)(plVar24[0x1c] +
                            ((uVar34 & 0xffffffff) / (ulong)*(uint *)(plVar24 + 0x1e)) * 8);
          iVar22 = *(int *)(lVar42 + 0xe8);
          if (iVar22 != (int)(uVar34 >> 0x20)) goto joined_r0x00118e16;
          if (*(char *)(lVar42 + 8) != '\0') {
            if ((*(long *)(lVar42 + 0x10) == 0) ||
               (uVar34 = *(ulong *)(lVar42 + 0x10), *(uint *)((long)plVar24 + 0xf4) <= (uint)uVar34)
               ) goto LAB_0011769a;
            lVar42 = ((uVar34 & 0xffffffff) % (ulong)*(uint *)(plVar24 + 0x1e)) * 0xf0 +
                     *(long *)(plVar24[0x1c] +
                              ((uVar34 & 0xffffffff) / (ulong)*(uint *)(plVar24 + 0x1e)) * 8);
            iVar22 = *(int *)(lVar42 + 0xe8);
            if (iVar22 != (int)(uVar34 >> 0x20)) goto joined_r0x00118e16;
          }
          iVar22 = *(int *)(lVar42 + 0x74);
        }
        (*_glad_glActiveTexture)(*(int *)(GLES3::Config::singleton + 8) + 0x84bd);
        (*_glad_glBindTexture)(0xde1,iVar22);
      }
    }
    uVar48 = (**(code **)(*plVar24 + 0x210))(plVar24,param_2);
    lVar42 = (**(code **)(*plVar24 + 0x2f8))(plVar24,param_2);
    uVar30 = _UNK_0011cd94;
    fVar47 = _LC30;
    uVar23 = _LC213;
    if (lVar42 != 0) {
      uVar23 = _LC212;
    }
    auVar50._4_4_ = uVar23;
    auVar50._0_4_ = _LC213;
    auVar50._8_8_ = 0;
    auVar55._12_4_ = _UNK_0011cd94;
    auVar55._8_4_ = _LC30;
    iVar22 = (int)((ulong)uVar48 >> 0x20);
    auVar55._4_4_ = (float)iVar22;
    auVar55._0_4_ = (float)(int)uVar48;
    local_168 = 0x3f800000;
    auVar51 = divps(auVar50,auVar55);
    local_164 = 0;
    local_15c = 0;
    local_188 = ZEXT416(_LC217);
    local_178 = local_188;
    Transform3D::translate_local
              ((float)((uint)(_LC113 * (float)(int)uVar48) ^ _LC101),
               (float)((uint)((float)iVar22 * _LC113) ^ _LC101),0.0);
    local_158._8_4_ = 0x3f800000;
    local_158._0_8_ = auVar51._0_8_;
    Transform3D::scale((Vector3 *)local_188);
    uVar49 = _LC116;
    local_10c = 0;
    uVar48 = CONCAT44(_UNK_0011ce14,_LC217);
    local_fc = 0;
    local_e8 = local_164;
    local_ec = 0;
    local_118 = CONCAT44(local_188._12_4_,local_188._0_4_);
    local_148 = param_7[1];
    local_110 = local_178._8_4_;
    local_108 = local_188._4_4_;
    local_dc = 0x3f800000;
    local_104 = local_178._0_4_;
    local_158._8_8_ = 0;
    local_158._0_8_ = *param_7;
    local_100 = local_178._12_4_;
    local_f8 = local_188._8_4_;
    local_f4 = local_178._4_4_;
    local_f0 = local_168;
    local_e0 = local_15c;
    local_140 = (undefined1  [16])0x0;
    local_128 = param_7[2];
    local_1a8 = *param_7;
    uStack_1a0 = param_7[1];
    local_198 = param_7[2];
    local_120 = _LC116;
    local_130 = uVar48;
    Vector2::normalize();
    Vector2::normalize();
    local_a0 = uVar49;
    local_d8 = local_1a8;
    local_c0 = (undefined1  [16])0x0;
    local_c8 = uStack_1a0;
    local_198 = 0;
    local_d0 = 0;
    local_98 = *param_4;
    uStack_90 = param_4[1];
    local_a8 = 0;
    local_b0 = uVar48;
    local_1d8._0_8_ = (**(code **)(*plVar24 + 0x210))(plVar24,param_2);
    uVar48 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_1d8);
    uVar14 = CONCAT44(uVar30,fVar47);
    local_7c = param_10 & 0xff;
    auVar56._8_8_ = uVar14;
    auVar56._0_8_ = uVar48;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar14;
    auVar51 = divps(auVar52,auVar56);
    local_88 = auVar51._0_8_;
    local_80 = (float)*(double *)(this + 0x2d0);
    local_58 = uVar38;
    uVar49 = Transform2D::get_scale();
    fVar47 = (float)uVar49;
    fVar46 = (float)((ulong)uVar49 >> 0x20);
    fVar45 = (float)uVar48 / fVar47;
    fVar54 = (float)((ulong)uVar48 >> 0x20) / fVar46;
    local_68 = CONCAT44(fVar54,fVar45);
    uStack_60 = CONCAT44(_LC30 / fVar54,_LC30 / fVar45);
    local_1d8 = (**(code **)(*plVar24 + 0x2b0))(plVar24,param_2);
    auVar51 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_1d8);
    local_288 = auVar51._0_4_;
    fStack_284 = auVar51._4_4_;
    uVar43 = (ulong)*(uint *)(this + 0x260);
    uVar34 = (ulong)*(uint *)(this + 0x280);
    auVar57._12_4_ = (uint)(fStack_284 / fVar46) ^ _LC101;
    auVar57._8_4_ = (uint)(local_288 / fVar47) ^ _LC101;
    auVar53._8_4_ = auVar51._8_4_;
    auVar53._12_4_ = auVar51._12_4_;
    auVar57._0_8_ = uVar14;
    auVar53._0_8_ = auVar51._8_8_;
    auVar15._8_8_ = uVar49;
    auVar15._0_8_ = uVar49;
    auVar51 = divps(auVar53,auVar15);
    local_78 = divps(auVar57,auVar51);
    local_54 = (float)(_LC216 / ((double)(fVar46 + fVar47) * __LC218));
    if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
    (*_glad_glBindBufferBase)
              (0x8a11,0,*(undefined4 *)(*(long *)(this + 0x268) + uVar34 * 0x28 + 0x14));
    uVar30 = 0;
    (*_glad_glBufferData)(0x8a11,0x110,(Vector2i *)local_158,0x88e0);
    uVar23 = GLES3::MaterialStorage::global_shader_parameters_get_uniform_buffer();
    (*_glad_glBindBufferBase)(0x8a11,1,uVar23);
    (*_glad_glBindBuffer)(0x8a11,0);
    (*_glad_glActiveTexture)(*(int *)(GLES3::Config::singleton + 8) + 0x84bb);
    pcVar13 = _glad_glBindTexture;
    uVar23 = GLES3::TextureStorage::render_target_get_sdf_texture(plVar24,param_2);
    (*pcVar13)(0xde1,uVar23);
    *(undefined4 *)(this + 0x2d8) = param_8;
    *(undefined4 *)(this + 0x2dc) = param_9;
    uVar48 = (**(code **)(*plVar24 + 0x210))(plVar24,param_2);
    local_158._0_8_ = uVar48;
    uVar48 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_158);
    (*_glad_glViewport)(0,0,(int)(float)uVar48,CONCAT44(uVar30,(int)(float)((ulong)uVar48 >> 0x20)))
    ;
    local_1a8 = 0;
    uStack_1a0 = 0;
    *param_11 = 0;
    *(undefined4 *)(this + 0x28c) = 0;
    if (param_3 != 0) {
      bVar16 = 0;
      lVar42 = 0;
      bVar17 = false;
      uVar34 = 0;
      bVar19 = false;
      cVar36 = '\0';
      bVar18 = false;
LAB_001168e0:
      lVar29 = param_3;
      puVar4 = *(ulong **)(lVar29 + 0x88);
      bVar40 = puVar4 != (ulong *)0x0 && lVar42 == 0;
      if (bVar40) {
        if ((char)puVar4[4] == '\0') {
          local_1a8 = *puVar4;
          uStack_1a0 = puVar4[1];
        }
        else {
          local_1a8 = 0;
          uStack_1a0 = 0;
        }
      }
      lVar32 = *(long *)(lVar29 + 0xd0);
      if (*(long *)(lVar29 + 0xd0) == 0) {
        lVar32 = lVar29;
      }
      uVar43 = *(ulong *)(lVar32 + 0x68);
      if ((uVar43 == 0) || (*(uint *)(lVar25 + 0x16c) <= (uint)uVar43)) {
LAB_00116920:
        bVar3 = 0;
LAB_00116925:
        lVar32 = *(long *)(lVar29 + 0x70);
      }
      else {
        lVar32 = ((uVar43 & 0xffffffff) % (ulong)*(uint *)(lVar25 + 0x168)) * 0xc0 +
                 *(long *)(*(long *)(lVar25 + 0x158) +
                          ((uVar43 & 0xffffffff) / (ulong)*(uint *)(lVar25 + 0x168)) * 8);
        if (*(int *)(lVar32 + 0xb8) != (int)(uVar43 >> 0x20)) {
          if (*(int *)(lVar32 + 0xb8) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00116920;
        }
        if ((*(int *)(lVar32 + 0x18) != 1) || (*(long *)(lVar32 + 8) == 0)) goto LAB_00116920;
        lVar32 = *(long *)(*(long *)(lVar32 + 8) + 0x80);
        bVar3 = *(byte *)(lVar32 + 0x70);
        if (bVar3 == 0) goto LAB_00116925;
        bVar44 = (bool)(lVar42 == 0 & *(byte *)(lVar32 + 0xb4));
        bVar3 = bVar44;
        if (bVar44 != false) {
          if (bVar19) {
            bVar3 = 0;
            if (bVar16 == 0) {
              bVar3 = *(byte *)(lVar32 + 0xb5);
            }
          }
          else {
            local_1a8 = 0;
            bVar3 = *(byte *)(lVar32 + 0xb5);
            uStack_1a0 = 0;
            bVar40 = bVar44;
          }
        }
        if (*(char *)(lVar32 + 0xb6) != '\0') {
          *param_11 = 1;
        }
        if (*(char *)(lVar32 + 0xb7) != '\0') {
          cVar36 = *(char *)(lVar32 + 0xb7);
        }
        lVar32 = *(long *)(lVar29 + 0x70);
      }
      if ((lVar32 != 0) && (lVar32 = *(long *)(lVar29 + 0x110), lVar32 != 0)) {
        do {
          while ((*(int *)(lVar32 + 0x10) != 4 || (*(long *)(lVar32 + 0x48) == 0))) {
            lVar32 = *(long *)(lVar32 + 8);
            if (lVar32 == 0) goto LAB_001170f8;
          }
          (**(code **)(*plVar26 + 0xf0))(plVar26,*(undefined8 *)(lVar32 + 0x48));
          pcVar13 = *(code **)(*plVar26 + 0xf8);
          Transform2D::operator*((Transform2D *)local_158,local_1c8);
          (*pcVar13)(plVar26,*(undefined8 *)(lVar32 + 0x48),(Vector2i *)local_158);
          lVar32 = *(long *)(lVar32 + 8);
          bVar17 = true;
        } while (lVar32 != 0);
LAB_001170f8:
        uVar34 = (ulong)(int)uVar34;
      }
      if (*(long *)(lVar29 + 0xd8) != 0) {
        if (lVar42 != 0) {
          *(undefined8 *)(lVar29 + 0xd8) = 0;
          goto LAB_00116952;
        }
        if (bVar17) {
          (**(code **)(*plVar26 + 0x100))(plVar26);
        }
        _render_items(this,param_2,uVar34 & 0xffffffff,local_1c8,param_5,param_11,0,param_12,bVar16)
        ;
        lVar42 = *(long *)(lVar29 + 0xd8);
        if (**(int **)(lVar42 + 0x40) == 3) {
          if (!bVar18) {
            uVar34 = 0;
            local_188 = ZEXT816(0);
            local_158 = (undefined1  [16])0x0;
            GLES3::TextureStorage::render_target_clear_back_buffer
                      (plVar24,param_2,(Vector3 *)local_188,(Vector2i *)local_158);
            bVar18 = true;
            lVar42 = *(long *)(lVar29 + 0xd8);
            goto LAB_00116f0f;
          }
        }
        else {
          local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)(lVar42 + 0x100));
          GLES3::TextureStorage::render_target_copy_to_back_buffer
                    (plVar24,param_2,(Vector2i *)local_158,0);
          lVar42 = *(long *)(lVar29 + 0xd8);
          if (**(int **)(lVar42 + 0x40) == 2) {
            *(undefined1 *)(lVar42 + 0x48) = 0;
            uVar34 = 1;
            *(long *)(this + 0x2e0) = lVar42;
            lVar42 = *(long *)(lVar29 + 0xd8);
LAB_00116f0f:
            *(undefined8 *)(lVar29 + 0xd8) = 0;
            bVar17 = false;
            bVar40 = false;
            goto LAB_00116f20;
          }
        }
        *(undefined8 *)(lVar29 + 0xd8) = 0;
        if (lVar42 != lVar29) {
          *(undefined1 *)(lVar29 + 0x48) = 0;
          bVar44 = false;
          bVar17 = false;
          uVar34 = 0;
          goto LAB_00116f4d;
        }
        bVar40 = false;
        uVar34 = 0;
LAB_00117122:
        _render_items(this,param_2,uVar34 & 0xffffffff,local_1c8,param_5,param_11,1,param_12,bVar16)
        ;
        if (*(char *)(*(long *)(lVar29 + 0x40) + 0xc) != '\0') {
          local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)(lVar29 + 0x100));
          GLES3::TextureStorage::render_target_gen_back_buffer_mipmaps
                    (plVar24,param_2,(Vector2i *)local_158);
        }
        *(undefined1 *)(lVar29 + 0x48) = 1;
        if (bVar40 != false) {
          bVar18 = false;
          bVar44 = false;
          lVar42 = 0;
          uVar34 = 0;
          goto LAB_00116982;
        }
        bVar17 = false;
        if (bVar3 != 0) {
          bVar18 = false;
          bVar44 = false;
          lVar42 = 0;
          uVar34 = 0;
          goto LAB_00116f58;
        }
        bVar18 = false;
        uVar43 = 1;
        uVar34 = 0;
        lVar42 = 0;
LAB_00116e74:
        *(long *)(this + uVar34 * 8 + 0x2e0) = lVar29;
        if ((*(long *)(lVar29 + 0x80) == 0) || ((int)uVar43 == 0x3ffff)) goto LAB_00116e00;
        uVar34 = (ulong)(int)uVar43;
        param_3 = *(long *)(lVar29 + 0x80);
        goto LAB_001168e0;
      }
LAB_00116f20:
      if (lVar42 == 0) {
        if (*(int **)(lVar29 + 0x40) == (int *)0x0) goto LAB_0011695e;
        bVar44 = **(int **)(lVar29 + 0x40) != 2;
        *(undefined1 *)(lVar29 + 0x48) = 0;
      }
      else {
LAB_00116952:
        if (lVar42 == lVar29) {
          if (bVar17) {
            (**(code **)(*plVar26 + 0x100))(plVar26);
          }
          goto LAB_00117122;
        }
LAB_0011695e:
        bVar44 = false;
        *(undefined1 *)(lVar29 + 0x48) = 0;
      }
      if (bVar40 == false) {
LAB_00116f4d:
        if (bVar3 != 0) {
LAB_00116f58:
          local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_1a8);
          GLES3::TextureStorage::render_target_gen_back_buffer_mipmaps
                    (plVar24,param_2,(Vector2i *)local_158);
          bVar16 = 1;
        }
      }
      else {
        if (bVar17) {
          (**(code **)(*plVar26 + 0x100))(plVar26);
        }
LAB_00116982:
        _render_items(this,param_2,uVar34 & 0xffffffff,local_1c8,param_5,param_11,0,param_12,bVar16)
        ;
        local_158 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_1a8);
        GLES3::TextureStorage::render_target_copy_to_back_buffer
                  (plVar24,param_2,(Vector2i *)local_158);
        bVar19 = true;
        bVar17 = false;
        uVar34 = 0;
        bVar16 = bVar3;
      }
      if (!bVar44) {
        uVar43 = (ulong)((int)uVar34 + 1);
        goto LAB_00116e74;
      }
      uVar43 = uVar34 & 0xffffffff;
      param_3 = *(long *)(lVar29 + 0x80);
      if (*(long *)(lVar29 + 0x80) != 0) goto LAB_001168e0;
LAB_00116e00:
      if (bVar17) {
        (**(code **)(*plVar26 + 0x100))(plVar26);
      }
      _render_items(this,param_2,uVar43,local_1c8,param_5,param_11,lVar42 != 0,param_12,bVar16);
      if (*(long *)(lVar29 + 0x80) != 0) {
        bVar17 = false;
        uVar34 = 0;
        param_3 = *(long *)(lVar29 + 0x80);
        goto LAB_001168e0;
      }
      if (cVar36 != '\0') {
        RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
      }
    }
    uVar48 = (*_glad_glFenceSync)(0x9117,0);
    uVar34 = (ulong)*(uint *)(this + 0x280);
    uVar38 = *(uint *)(this + 0x260);
    if (*(uint *)(this + 0x280) < uVar38) {
      *(undefined8 *)(*(long *)(this + 0x268) + uVar34 * 0x28 + 0x20) = uVar48;
      reset_canvas();
      *(undefined4 *)(this + 0x284) = 0;
      *(uint *)(this + 0x280) = (*(int *)(this + 0x280) + 1U) % *(uint *)(this + 0x260);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  else {
    (*_glad_glGetSynciv)(lVar42,0x9114,1,0,&local_1dc);
    if (local_1dc == 0x9118) {
      uVar34 = (ulong)*(uint *)(this + 0x280);
      uVar43 = (ulong)*(uint *)(this + 0x260);
      if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
      lVar42 = *(long *)(this + 0x268) + uVar34 * 0x28;
      uVar34 = *(ulong *)(lVar42 + 0x18);
      if (*(code **)(*RenderingServerGlobals::rasterizer + 0x88) ==
          RasterizerGLES3::get_frame_number) {
        if (RenderingServerGlobals::rasterizer[2] - 2U <= uVar34) {
LAB_001176e8:
          _allocate_instance_data_buffer(this);
          goto LAB_00115bc2;
        }
      }
      else {
        lVar42 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
        if (lVar42 - 2U <= uVar34) goto LAB_001176e8;
        uVar34 = (ulong)*(uint *)(this + 0x280);
        uVar43 = (ulong)*(uint *)(this + 0x260);
        if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
        lVar42 = *(long *)(this + 0x268) + uVar34 * 0x28;
      }
      (*_glad_glClientWaitSync)(*(undefined8 *)(lVar42 + 0x20),0,100000000);
      if (*(code **)(*RenderingServerGlobals::rasterizer + 0x88) ==
          RasterizerGLES3::get_frame_number) {
        lVar42 = RenderingServerGlobals::rasterizer[2];
      }
      else {
        lVar42 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
      }
      uVar34 = (ulong)*(uint *)(this + 0x280);
      uVar43 = (ulong)*(uint *)(this + 0x260);
      if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
      lVar29 = *(long *)(this + 0x268) + uVar34 * 0x28;
      *(long *)(lVar29 + 0x18) = lVar42;
      uVar48 = *(undefined8 *)(lVar29 + 0x20);
LAB_00115b8a:
      (*_glad_glDeleteSync)(uVar48);
      uVar34 = (ulong)*(uint *)(this + 0x280);
      uVar43 = (ulong)*(uint *)(this + 0x260);
      if (*(uint *)(this + 0x260) <= *(uint *)(this + 0x280)) goto LAB_00116dc2;
      *(undefined8 *)(*(long *)(this + 0x268) + uVar34 * 0x28 + 0x20) = 0;
      goto LAB_00115bc2;
    }
    if (*(code **)(*RenderingServerGlobals::rasterizer + 0x88) == RasterizerGLES3::get_frame_number)
    {
      lVar42 = RenderingServerGlobals::rasterizer[2];
    }
    else {
      lVar42 = (**(code **)(*RenderingServerGlobals::rasterizer + 0x88))();
    }
    uVar34 = (ulong)*(uint *)(this + 0x280);
    uVar38 = *(uint *)(this + 0x260);
    if (*(uint *)(this + 0x280) < uVar38) {
      lVar29 = *(long *)(this + 0x268) + uVar34 * 0x28;
      *(long *)(lVar29 + 0x18) = lVar42;
      uVar48 = *(undefined8 *)(lVar29 + 0x20);
      goto LAB_00115b8a;
    }
  }
  uVar43 = (ulong)uVar38;
LAB_00116dc2:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar34,uVar43,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}



/* RasterizerCanvasGLES3::get_pipeline_compilations(RenderingServer::PipelineSource) */

undefined8 RasterizerCanvasGLES3::get_pipeline_compilations(void)

{
  return 0;
}



/* RasterizerGLES3::get_frame_number() const */

undefined8 __thiscall RasterizerGLES3::get_frame_number(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x10);
}



/* RasterizerGLES3::get_total_time() const */

undefined8 __thiscall RasterizerGLES3::get_total_time(RasterizerGLES3 *this)

{
  return *(undefined8 *)(this + 0x20);
}



/* CanvasOcclusionShaderGLES3::~CanvasOcclusionShaderGLES3() */

void __thiscall
CanvasOcclusionShaderGLES3::~CanvasOcclusionShaderGLES3(CanvasOcclusionShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_0011c508;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  return;
}



/* CanvasOcclusionShaderGLES3::~CanvasOcclusionShaderGLES3() */

void __thiscall
CanvasOcclusionShaderGLES3::~CanvasOcclusionShaderGLES3(CanvasOcclusionShaderGLES3 *this)

{
  *(undefined ***)this = &PTR__init_0011c508;
  ShaderGLES3::~ShaderGLES3((ShaderGLES3 *)this);
  operator_delete(this,0x130);
  return;
}



/* CanvasOcclusionShaderGLES3::_init() */

void __thiscall CanvasOcclusionShaderGLES3::_init(CanvasOcclusionShaderGLES3 *this)

{
  ShaderGLES3::_setup((char *)this,
                      "\nlayout(location = 0) in vec3 vertex;\n\nuniform highp mat4 projection;\nuniform highp vec4 modelview1;\nuniform highp vec4 modelview2;\nuniform highp vec2 direction;\nuniform highp float z_far;\n\n#ifdef MODE_SHADOW\nout float depth;\n#endif\n\nvoid main() {\n\thighp vec4 vtx = vec4(vertex, 1.0) * mat4(modelview1, modelview2, vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0));\n\n#ifdef MODE_SHADOW\n\tdepth = dot(direction, vtx.xy);\n#endif\n\tgl_Position = projection * vtx;\n}\n\n"
                      ,
                      "\n\nuniform highp mat4 projection;\nuniform highp vec4 modelview1;\nuniform highp vec4 modelview2;\nuniform highp vec2 direction;\nuniform highp float z_far;\n\n#ifdef MODE_SHADOW\nin highp float depth;\n#endif\n\n#ifdef USE_RGBA_SHADOWS\nlayout(location = 0) out lowp vec4 out_buf;\n#else\nlayout(location = 0) out highp float out_buf;\n#endif\n\nvoid main() {\n    float out_depth = 1.0;\n\n#ifdef MODE_SHADOW\n\tout_depth = depth / z_far;\n#endif\n\n#ifdef USE_RGBA_SHADOWS\n\tout_depth = clamp(out_depth, -1.0, 1.0);\n\tout_depth = out_depth * 0.5 + 0.5;\n\thighp vec4 comp = fract(out_depth * vec4(255.0 * 255.0 * 255.0, 255.0 * 255.0, 255.0, 1.0));\n\tcomp -= comp.xxyz * vec4(0.0, 1.0 / 255.0, 1.0 / 255.0, 1.0 / 255.0);\n\tout_buf = comp;\n#else\n\tout_buf = out_depth;\n#endif\n}\n"
                      ,0x1189d5,(char **)0x5,0x11cb40,(UBOPair *)0x0,(int)_init()::_ubo_pairs,
                      (Feedback *)0x0,(int)_init()::_feedbacks,(TexUnitPair *)0x0,
                      (int)_init()::_texunit_pairs,(Specialization *)0x0,(int)_init()::_spec_pairs,
                      (char **)0x3);
  return;
}



/* RasterizerCanvasGLES3::set_debug_redraw(bool, double, Color const&) */

void RasterizerCanvasGLES3::set_debug_redraw(bool param_1,double param_2,Color *param_3)

{
  if (((char)param_3 != '\0') && (set_debug_redraw(bool,double,Color_const&)::first_print != '\0'))
  {
    _err_print_error("set_debug_redraw","drivers/gles3/rasterizer_canvas_gles3.h",0x17b,
                     "Debug CanvasItem Redraw is not available yet when using the Compatibility renderer."
                     ,0,1);
    set_debug_redraw(bool,double,Color_const&)::first_print = 0;
    return;
  }
  return;
}



/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_int>::_copy_on_write(void)

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



/* RasterizerCanvasGLES3::canvas_begin(RID, bool, bool) [clone .cold] */

void RasterizerCanvasGLES3::canvas_begin(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00118b99(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RasterizerCanvasGLES3::_bind_canvas_texture(RID, RenderingServer::CanvasItemTextureFilter,
   RenderingServer::CanvasItemTextureRepeat) [clone .cold] */

void RasterizerCanvasGLES3::_bind_canvas_texture
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_5);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RasterizerCanvasGLES3::_render_batch(RendererCanvasRender::Light*, unsigned int,
   RenderingMethod::RenderInfo*) [clone .cold] */

void RasterizerCanvasGLES3::_render_batch(Light *param_1,uint param_2,RenderInfo *param_3)

{
  code *pcVar1;
  
  _err_print_error("particles_get_amount","drivers/gles3/storage/particles_storage.h",0x183,
                   "Parameter \"particles\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_00118c90(void)

{
  code *pcVar1;
  long in_RCX;
  long in_R8;
  
  _err_print_index_error
            ("mesh_get_surface","drivers/gles3/storage/mesh_storage.h",0x158,in_RCX,in_R8,
             "p_surface_index","mesh->surface_count","",false,false);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RasterizerCanvasGLES3::light_update_shadow(RID, int, Transform2D const&, int, float, float,
   RendererCanvasRender::LightOccluderInstance*, Rect2 const&) [clone .cold] */

void RasterizerCanvasGLES3::light_update_shadow(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RasterizerCanvasGLES3::light_update_directional_shadow(RID, int, Transform2D const&, int, float,
   Rect2 const&, RendererCanvasRender::LightOccluderInstance*) [clone .cold] */

void RasterizerCanvasGLES3::light_update_directional_shadow(void)

{
  code *pcVar1;
  int in_EAX;
  
  if (in_EAX + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
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

void FUN_00118d6a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RasterizerCanvasGLES3::_record_item_commands(RendererCanvasRender::Item const*, RID, Transform2D
   const&, RendererCanvasRender::Item*&, GLES3::CanvasShaderData::BlendMode,
   RendererCanvasRender::Light*, unsigned int&, bool&, bool&, Vector2 const&) [clone .cold] */

void RasterizerCanvasGLES3::_record_item_commands(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined8 in_R9;
  
  if (param_2 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,in_R9);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RasterizerCanvasGLES3::canvas_render_items(RID, RendererCanvasRender::Item*, Color const&,
   RendererCanvasRender::Light*, RendererCanvasRender::Light*, Transform2D const&,
   RenderingServer::CanvasItemTextureFilter, RenderingServer::CanvasItemTextureRepeat, bool, bool&,
   RenderingMethod::RenderInfo*) [clone .cold] */

void RasterizerCanvasGLES3::canvas_render_items(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderGLES3::Version::Specialization::~Specialization() */

void __thiscall ShaderGLES3::Version::Specialization::~Specialization(Specialization *this)

{
  if (*(void **)(this + 0x28) != (void *)0x0) {
    if (*(int *)(this + 0x20) != 0) {
      *(undefined4 *)(this + 0x20) = 0;
    }
    Memory::free_static(*(void **)(this + 0x28),false);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    Memory::free_static(*(void **)(this + 0x18),false);
    return;
  }
  return;
}



/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_insert_with_hash(unsigned int, unsigned long const&,
   ShaderGLES3::Version::Specialization const&) [clone .isra.0] */

void __thiscall
OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
::_insert_with_hash(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
                    *this,uint param_1,ulong *param_2,Specialization *param_3)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  long in_FS_OFFSET;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long local_a0;
  undefined2 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_68;
  uint uStack_64;
  long local_60;
  ulong local_58;
  long local_50;
  undefined2 local_48;
  long local_40;
  
  uVar29 = *(undefined8 *)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uVar14 = (ulong)param_1 % (ulong)*(uint *)(this + 0x18);
  local_80 = *(undefined4 *)(param_3 + 8);
  uVar9 = *(uint *)(param_3 + 0x10);
  local_78 = uVar29;
  local_70 = local_80;
  if (uVar9 != 0) {
    uVar8 = uVar9 - 1 | uVar9 - 1 >> 1;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uStack_64 = (uVar8 >> 0x10 | uVar8) + 1;
    local_68 = 0;
    local_60 = Memory::realloc_static((void *)0x0,(ulong)uStack_64 * 4,false);
    if (local_60 == 0) goto LAB_001193a5;
    local_68 = uVar9;
    if (*(int *)(param_3 + 0x10) != 0) {
      lVar19 = *(long *)(param_3 + 0x18);
      lVar12 = 0;
      do {
        *(undefined4 *)(local_60 + lVar12 * 4) = *(undefined4 *)(lVar19 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(param_3 + 0x10));
    }
  }
  local_58 = 0;
  iVar3 = *(int *)(param_3 + 0x20);
  local_50 = 0;
  if (iVar3 != 0) {
    uVar9 = iVar3 - 1U | iVar3 - 1U >> 1;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = (uVar9 >> 0x10 | uVar9) + 1;
    local_58 = (ulong)uVar9 << 0x20;
    local_50 = Memory::realloc_static((void *)0x0,(ulong)uVar9 * 4,false);
    if (local_50 == 0) goto LAB_001193a5;
    local_58 = CONCAT44(local_58._4_4_,iVar3);
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar19 = *(long *)(param_3 + 0x28);
      lVar12 = 0;
      do {
        *(undefined4 *)(local_50 + lVar12 * 4) = *(undefined4 *)(lVar19 + lVar12 * 4);
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(param_3 + 0x20));
    }
  }
  local_48 = *(undefined2 *)(param_3 + 0x30);
  lVar12 = *(long *)(this + 0x10);
  lVar19 = uVar14 * 4;
  puVar15 = (uint *)(lVar12 + lVar19);
  lVar13 = *(long *)(this + 8);
  uVar9 = *puVar15;
  lVar5 = *(long *)this;
  if (uVar9 != 0) {
    bVar7 = false;
    uVar8 = 0;
    uVar10 = (ulong)*(uint *)(this + 0x18);
    local_a0 = local_50;
    puVar16 = param_2;
    lVar18 = local_60;
    uVar20 = local_80;
    uVar22 = uVar29;
    uVar24 = local_68;
    uVar26 = uStack_64;
    uVar28 = local_58;
    local_88 = local_48;
    do {
      uVar11 = (uint)((ulong)(uint)(((int)uVar10 + (int)uVar14) - (int)((ulong)uVar9 % uVar10)) %
                     uVar10);
      param_2 = puVar16;
      lVar17 = lVar18;
      uVar21 = uVar22;
      uVar23 = uVar24;
      uVar25 = uVar26;
      uVar27 = uVar28;
      if (uVar11 < uVar8) {
        *puVar15 = param_1;
        bVar7 = true;
        puVar1 = (undefined8 *)(lVar13 + uVar14 * 8);
        param_2 = (ulong *)*puVar1;
        *puVar1 = puVar16;
        puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x38);
        uVar4 = *(undefined4 *)(puVar1 + 1);
        uVar23 = *(uint *)(puVar1 + 2);
        uVar25 = *(uint *)((long)puVar1 + 0x14);
        *(undefined4 *)(puVar1 + 1) = uVar20;
        uVar27 = puVar1[4];
        *(uint *)(puVar1 + 2) = uVar24;
        *(uint *)((long)puVar1 + 0x14) = uVar26;
        uVar21 = *puVar1;
        lVar17 = puVar1[3];
        *puVar1 = uVar22;
        lVar19 = puVar1[5];
        uVar2 = *(undefined2 *)(puVar1 + 6);
        puVar1[5] = local_a0;
        puVar1[3] = lVar18;
        puVar1[4] = uVar28;
        *(undefined2 *)(puVar1 + 6) = local_88;
        uVar10 = (ulong)*(uint *)(this + 0x18);
        param_1 = uVar9;
        uVar20 = uVar4;
        uVar8 = uVar11;
        local_a0 = lVar19;
        local_88 = uVar2;
      }
      uVar8 = uVar8 + 1;
      uVar14 = (ulong)((int)uVar14 + 1) % uVar10;
      lVar19 = uVar14 * 4;
      puVar15 = (uint *)(lVar12 + lVar19);
      uVar9 = *puVar15;
      puVar16 = param_2;
      lVar18 = lVar17;
      uVar22 = uVar21;
      uVar24 = uVar23;
      uVar26 = uVar25;
      uVar28 = uVar27;
    } while (uVar9 != 0);
    if (bVar7) {
      local_50 = local_a0;
      local_48 = local_88;
      uVar29 = uVar21;
      local_80 = uVar20;
      local_78 = uVar21;
      local_70 = uVar20;
      local_60 = lVar17;
      local_58 = uVar27;
      local_68 = uVar23;
      uStack_64 = uVar25;
    }
  }
  uVar9 = local_68;
  *(ulong **)(lVar13 + uVar14 * 8) = param_2;
  puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x38);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 1) = local_80;
  puVar1[3] = 0;
  *puVar1 = uVar29;
  if (local_68 != 0) {
    uVar8 = local_68 - 1 | local_68 - 1 >> 1;
    uVar8 = uVar8 >> 2 | uVar8;
    uVar8 = uVar8 >> 4 | uVar8;
    uVar8 = uVar8 >> 8 | uVar8;
    uVar8 = (uVar8 >> 0x10 | uVar8) + 1;
    *(uint *)((long)puVar1 + 0x14) = uVar8;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar8 * 4,false);
    puVar1[3] = lVar12;
    if (lVar12 == 0) goto LAB_001193a5;
    *(uint *)(puVar1 + 2) = uVar9;
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar12 + lVar13) = *(undefined4 *)(local_60 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != (ulong)uVar9 << 2);
  }
  uVar14 = local_58;
  iVar3 = (int)local_58;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if ((int)local_58 != 0) {
    uVar9 = (int)local_58 - 1U >> 1 | (int)local_58 - 1U;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = (uVar9 >> 0x10 | uVar9) + 1;
    *(uint *)((long)puVar1 + 0x24) = uVar9;
    lVar12 = Memory::realloc_static((void *)0x0,(ulong)uVar9 * 4,false);
    puVar1[5] = lVar12;
    if (lVar12 == 0) {
LAB_001193a5:
      _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(int *)(puVar1 + 4) = iVar3;
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar12 + lVar13) = *(undefined4 *)(local_50 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar13 != (uVar14 & 0xffffffff) << 2);
  }
  *(undefined2 *)(puVar1 + 6) = local_48;
  *(uint *)(*(long *)(this + 0x10) + lVar19) = param_1;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  ShaderGLES3::Version::Specialization::~Specialization((Specialization *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::insert(unsigned long const&,
   ShaderGLES3::Version::Specialization const&) */

void __thiscall
OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
::insert(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>
         *this,ulong *param_1,Specialization *param_2)

{
  undefined8 *puVar1;
  Specialization *pSVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  Specialization *pSVar10;
  undefined8 *puVar11;
  
  uVar9 = *(uint *)(this + 0x18);
  if ((double)uVar9 * __LC71 < (double)(*(int *)(this + 0x1c) + 1)) {
    uVar4 = (ulong)(uVar9 * 2);
    *(undefined4 *)(this + 0x1c) = 0;
    if (uVar9 * 2 == 0) {
      uVar4 = 1;
    }
    puVar1 = *(undefined8 **)(this + 8);
    pSVar2 = *(Specialization **)this;
    *(int *)(this + 0x18) = (int)uVar4;
    puVar3 = *(uint **)(this + 0x10);
    uVar5 = Memory::alloc_static(uVar4 << 3,false);
    *(undefined8 *)(this + 8) = uVar5;
    uVar5 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x38,false);
    *(undefined8 *)this = uVar5;
    lVar6 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    *(long *)(this + 0x10) = lVar6;
    if (*(int *)(this + 0x18) != 0) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(this + 0x18));
    }
    if (uVar9 != 0) {
      puVar8 = puVar3;
      pSVar10 = pSVar2;
      puVar11 = puVar1;
      do {
        if (*puVar8 != 0) {
          _insert_with_hash(this,*puVar8,(ulong *)*puVar11,pSVar10);
          if (*(void **)(pSVar10 + 0x28) != (void *)0x0) {
            if (*(int *)(pSVar10 + 0x20) != 0) {
              *(undefined4 *)(pSVar10 + 0x20) = 0;
            }
            Memory::free_static(*(void **)(pSVar10 + 0x28),false);
          }
          if (*(void **)(pSVar10 + 0x18) != (void *)0x0) {
            if (*(int *)(pSVar10 + 0x10) != 0) {
              *(undefined4 *)(pSVar10 + 0x10) = 0;
            }
            Memory::free_static(*(void **)(pSVar10 + 0x18),false);
          }
        }
        puVar11 = puVar11 + 1;
        puVar8 = puVar8 + 1;
        pSVar10 = pSVar10 + 0x38;
      } while (puVar11 != puVar1 + uVar9);
      Memory::free_static(puVar1,false);
      Memory::free_static(pSVar2,false);
      Memory::free_static(puVar3,false);
    }
  }
  uVar4 = (long)*param_1 * 0x3ffff - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uVar4 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uVar9 = (uint)(uVar4 >> 0x16) ^ (uint)uVar4;
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  _insert_with_hash(this,uVar9,(ulong *)*param_1,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::operator[](unsigned int const&) */

undefined1  [16] __thiscall
HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
::operator[](HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
             *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
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
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x119d8b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_001198f3;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x119dd4;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00119c73;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00119c73:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_00119c54;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_001198f3:
  if ((float)uVar51 * __LC85 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00119c54;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar38 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar42[1] = uVar38;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00119c54:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned long, RasterizerCanvasGLES3::PolygonBuffers, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long>, DefaultTypedAllocator<HashMapElement<unsigned long,
   RasterizerCanvasGLES3::PolygonBuffers> > >::operator[](unsigned long const&) */

undefined1 * __thiscall
HashMap<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers>>>
::operator[](HashMap<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,RasterizerCanvasGLES3::PolygonBuffers>>>
             *this,ulong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *__s;
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
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [16];
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  uint uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  void *local_f0;
  undefined4 uStack_54;
  undefined4 local_50;
  
  local_f0 = *(void **)(this + 8);
  uVar41 = *param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar57 = (ulong)*(uint *)(this + 0x28);
  uVar50 = *(uint *)(hash_table_size_primes + uVar57 * 4);
  uVar48 = CONCAT44(0,uVar50);
  if (local_f0 == (void *)0x0) {
    uVar41 = uVar48 * 4;
    uVar57 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    local_f0 = (void *)Memory::alloc_static(uVar57,false);
    *(void **)(this + 8) = local_f0;
    if (uVar50 == 0) {
      iVar45 = *(int *)(this + 0x2c);
      uVar41 = *param_1;
      if (local_f0 == (void *)0x0) goto LAB_0011a1ab;
    }
    else {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)local_f0 + uVar57)) &&
         (local_f0 < (void *)((long)pvVar5 + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar41 * 4) = 0;
          *(undefined8 *)((long)local_f0 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
        iVar45 = *(int *)(this + 0x2c);
        uVar41 = *param_1;
      }
      else {
        memset(pvVar5,0,uVar41);
        memset(local_f0,0,uVar57);
        iVar45 = *(int *)(this + 0x2c);
        uVar41 = *param_1;
      }
    }
    if (iVar45 != 0) {
      uVar57 = (ulong)*(uint *)(this + 0x28);
      lVar55 = *(long *)(this + 0x10);
      goto LAB_0011a084;
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 != 0) {
      lVar55 = *(long *)(this + 0x10);
      lVar4 = *(long *)(hash_table_size_primes_inv + uVar57 * 8);
      uVar40 = uVar41 * 0x3ffff - 1;
      uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
      uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar54 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
        uVar54 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar54 * lVar4;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar48;
      lVar46 = SUB168(auVar6 * auVar22,8);
      uVar44 = *(uint *)(lVar55 + lVar46 * 4);
      uVar53 = SUB164(auVar6 * auVar22,8);
      if (uVar44 != 0) {
        uVar52 = 0;
        do {
          if (((uint)uVar54 == uVar44) &&
             (uVar41 == *(ulong *)(*(long *)((long)local_f0 + lVar46 * 8) + 0x10))) {
            pauVar43 = *(undefined1 (**) [16])((long)local_f0 + (ulong)uVar53 * 8);
            goto LAB_0011a043;
          }
          uVar52 = uVar52 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar53 + 1) * lVar4;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar48;
          lVar46 = SUB168(auVar7 * auVar23,8);
          uVar44 = *(uint *)(lVar55 + lVar46 * 4);
          uVar53 = SUB164(auVar7 * auVar23,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar4, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar48, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar53 + uVar50) - SUB164(auVar8 * auVar24,8)) * lVar4,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar48, uVar52 <= SUB164(auVar9 * auVar25,8)));
      }
LAB_0011a084:
      uVar54 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar57 * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + uVar57 * 8);
      uVar40 = uVar41 * 0x3ffff - 1;
      uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
      uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
      uVar40 = uVar40 >> 0x16 ^ uVar40;
      uVar56 = uVar40 & 0xffffffff;
      if ((int)uVar40 == 0) {
        uVar56 = 1;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar56 * lVar4;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar54;
      lVar46 = SUB168(auVar10 * auVar26,8);
      uVar50 = *(uint *)(lVar55 + lVar46 * 4);
      uVar44 = SUB164(auVar10 * auVar26,8);
      if (uVar50 != 0) {
        uVar53 = 0;
        do {
          if (((uint)uVar56 == uVar50) &&
             (*(ulong *)(*(long *)((long)local_f0 + lVar46 * 8) + 0x10) == uVar41)) {
            pauVar43 = *(undefined1 (**) [16])((long)local_f0 + (ulong)uVar44 * 8);
            uVar41 = (ulong)_LC30;
            uVar42 = CONCAT44(_LC30,_LC30);
            *(uint *)(pauVar43[3] + 8) = _LC30;
            *(undefined8 *)(pauVar43[1] + 8) = 0;
            *(undefined8 *)pauVar43[2] = 0;
            *(ulong *)(pauVar43[2] + 8) = uVar41 << 0x20;
            *(undefined8 *)pauVar43[3] = uVar42;
            goto LAB_0011a043;
          }
          uVar53 = uVar53 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar44 + 1) * lVar4;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar54;
          lVar46 = SUB168(auVar11 * auVar27,8);
          uVar50 = *(uint *)(lVar55 + lVar46 * 4);
          uVar44 = SUB164(auVar11 * auVar27,8);
        } while ((uVar50 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar50 * lVar4, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar54, auVar13._8_8_ = 0,
                auVar13._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar57 * 4) + uVar44) -
                            SUB164(auVar12 * auVar28,8)) * lVar4, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar54, uVar53 <= SUB164(auVar13 * auVar29,8)));
      }
    }
  }
LAB_0011a1ab:
  if ((float)uVar48 * __LC85 < (float)(iVar45 + 1)) {
    uVar50 = *(uint *)(this + 0x28);
    if (uVar50 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011a043;
    }
    uVar41 = (ulong)(uVar50 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar50 * 4);
    if (uVar50 + 1 < 2) {
      uVar41 = 2;
    }
    uVar50 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar48 = (ulong)uVar50;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar5 = *(void **)(this + 0x10);
    uVar41 = uVar48 * 4;
    uVar57 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar57,false);
    *(void **)(this + 8) = __s_00;
    if (uVar50 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar57)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar57);
      }
    }
    if (uVar44 != 0) {
      uVar41 = 0;
      do {
        uVar50 = *(uint *)((long)pvVar5 + uVar41 * 4);
        if (uVar50 != 0) {
          lVar55 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar57 = CONCAT44(0,uVar53);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)uVar50 * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar57;
          lVar46 = SUB168(auVar14 * auVar30,8);
          puVar1 = (uint *)(lVar55 + lVar46 * 4);
          iVar45 = SUB164(auVar14 * auVar30,8);
          uVar52 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_f0 + uVar41 * 8);
          while (uVar52 != 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar52 * lVar4;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar57;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((uVar53 + iVar45) - SUB164(auVar15 * auVar31,8)) * lVar4;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar57;
            uVar39 = SUB164(auVar16 * auVar32,8);
            uVar49 = uVar42;
            if (uVar39 < uVar51) {
              *puVar1 = uVar50;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar42;
              uVar50 = uVar52;
              uVar51 = uVar39;
            }
            uVar51 = uVar51 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(iVar45 + 1) * lVar4;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar57;
            lVar46 = SUB168(auVar17 * auVar33,8);
            puVar1 = (uint *)(lVar55 + lVar46 * 4);
            iVar45 = SUB164(auVar17 * auVar33,8);
            uVar42 = uVar49;
            uVar52 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar50;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar41 != uVar44);
      Memory::free_static(local_f0,false);
      Memory::free_static(pvVar5,false);
    }
  }
  uVar41 = *param_1;
  pauVar43 = (undefined1 (*) [16])operator_new(0x40,"");
  uStack_54 = (undefined4)_UNK_0011cd98;
  local_50 = (undefined4)((ulong)_UNK_0011cd98 >> 0x20);
  uVar57 = (ulong)_LC30;
  uVar42 = CONCAT44(uStack_54,_UNK_0011cd94);
  *pauVar43 = (undefined1  [16])0x0;
  *(ulong *)pauVar43[1] = uVar41;
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  *(undefined8 *)pauVar43[2] = 0;
  *(ulong *)(pauVar43[2] + 8) = uVar57 << 0x20;
  *(undefined8 *)pauVar43[3] = uVar42;
  *(undefined4 *)(pauVar43[3] + 8) = local_50;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  lVar55 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar41 = *param_1 * 0x3ffff - 1;
  uVar41 = (uVar41 ^ uVar41 >> 0x1f) * 0x15;
  uVar41 = (uVar41 ^ uVar41 >> 0xb) * 0x41;
  uVar41 = uVar41 >> 0x16 ^ uVar41;
  uVar57 = uVar41 & 0xffffffff;
  if ((int)uVar41 == 0) {
    uVar57 = 1;
  }
  uVar52 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar57;
  uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar50);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar57 * lVar4;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar41;
  lVar47 = SUB168(auVar18 * auVar34,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar55 + lVar47 * 4);
  iVar45 = SUB164(auVar18 * auVar34,8);
  uVar44 = *puVar1;
  pauVar38 = pauVar43;
  while (uVar44 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar44 * lVar4;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar41;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar50 + iVar45) - SUB164(auVar19 * auVar35,8)) * lVar4;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar41;
    uVar53 = SUB164(auVar20 * auVar36,8);
    pauVar58 = pauVar38;
    if (uVar53 < uVar52) {
      *puVar1 = (uint)uVar57;
      uVar57 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar58 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar52 = uVar53;
    }
    uVar53 = (uint)uVar57;
    uVar52 = uVar52 + 1;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(iVar45 + 1) * lVar4;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar41;
    lVar47 = SUB168(auVar21 * auVar37,8);
    puVar1 = (uint *)(lVar55 + lVar47 * 4);
    iVar45 = SUB164(auVar21 * auVar37,8);
    pauVar38 = pauVar58;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar38;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011a043:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalVector<RasterizerCanvasGLES3::DataBuffer, unsigned int, false, false>::insert(unsigned int,
   RasterizerCanvasGLES3::DataBuffer) */

void __thiscall
LocalVector<RasterizerCanvasGLES3::DataBuffer,unsigned_int,false,false>::insert
          (LocalVector<RasterizerCanvasGLES3::DataBuffer,unsigned_int,false,false> *this,
          uint param_1,long param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar18 = (ulong)param_1;
  uVar3 = *(uint *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = uVar3 + 1;
  if (param_1 < uVar17) {
    uVar9 = *(uint *)(this + 4);
    pvVar12 = *(void **)(this + 8);
    if (uVar3 == param_1) {
      lVar16 = *(long *)(param_3 + 8);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 8) = 0;
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      local_60 = lVar16;
      local_58 = uVar4;
      local_50 = uVar5;
      local_48 = uVar6;
      if (param_1 == uVar9) {
        uVar18 = (ulong)(param_1 * 2);
        if (param_1 * 2 == 0) {
          uVar18 = 1;
        }
        *(int *)(this + 4) = (int)uVar18;
        pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar18 * 0x28,false);
        *(void **)(this + 8) = pvVar12;
        if (pvVar12 == (void *)0x0) {
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar18 = (ulong)*(uint *)this;
        uVar17 = *(uint *)this + 1;
      }
      *(uint *)this = uVar17;
      *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 8) = 0;
      if (lVar16 == 0) {
        *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x10) = uVar4;
        *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x18) = uVar5;
        *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x20) = uVar6;
      }
      else {
        CowData<unsigned_int>::_ref
                  ((CowData<unsigned_int> *)((long)pvVar12 + uVar18 * 0x28 + 8),(CowData *)&local_60
                  );
        *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x20) = uVar6;
        *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x10) = uVar4;
        *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x18) = uVar5;
        LOCK();
        plVar2 = (long *)(lVar16 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static((void *)(local_60 + -0x10),false);
            return;
          }
          goto LAB_0011abc2;
        }
      }
    }
    else {
      uVar13 = uVar3;
      if (uVar9 < uVar17) {
        uVar9 = uVar3 >> 1 | uVar3;
        uVar9 = uVar9 | uVar9 >> 2;
        uVar9 = uVar9 | uVar9 >> 4;
        uVar9 = uVar9 | uVar9 >> 8;
        uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
        *(uint *)(this + 4) = uVar9;
        pvVar12 = (void *)Memory::realloc_static(pvVar12,(ulong)uVar9 * 0x28,false);
        *(void **)(this + 8) = pvVar12;
        if (pvVar12 == (void *)0x0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar13 = *(uint *)this;
      }
      if (uVar13 < uVar17) {
        pvVar10 = (void *)((long)pvVar12 + (ulong)uVar13 * 0x28);
        do {
          *(undefined8 *)((long)pvVar10 + 8) = 0;
          pvVar11 = (void *)((long)pvVar10 + 0x28);
          *(undefined8 *)((long)pvVar10 + 0x10) = 0;
          *(undefined8 *)((long)pvVar10 + 0x18) = 0xfffffffffffffffd;
          *(undefined8 *)((long)pvVar10 + 0x20) = 0;
          pvVar10 = pvVar11;
        } while ((void *)((long)pvVar12 + ((ulong)(uVar3 - uVar13) + (ulong)uVar13) * 0x28 + 0x28)
                 != pvVar11);
      }
      *(uint *)this = uVar17;
      if (param_1 < uVar3) {
        uVar14 = (ulong)uVar3;
        pvVar10 = pvVar12;
        lVar16 = uVar14 * 0x28;
        do {
          lVar1 = ((uVar3 - 1) - uVar14) * 0x28 + lVar16;
          lVar7 = *(long *)((long)pvVar10 + lVar16 + 8);
          lVar15 = *(long *)((long)pvVar10 + lVar1 + 8);
          pvVar12 = pvVar10;
          if (lVar7 != lVar15) {
            if (lVar7 != 0) {
              LOCK();
              plVar2 = (long *)(lVar7 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar7 = *(long *)((long)pvVar10 + lVar16 + 8);
                *(undefined8 *)((long)pvVar10 + lVar16 + 8) = 0;
                Memory::free_static((void *)(lVar7 + -0x10),false);
                lVar15 = *(long *)((long)pvVar10 + lVar1 + 8);
                pvVar12 = *(void **)(this + 8);
              }
              else {
                lVar15 = *(long *)((long)pvVar10 + lVar1 + 8);
                pvVar12 = *(void **)(this + 8);
              }
            }
            *(long *)((long)pvVar10 + lVar16 + 8) = lVar15;
            *(undefined8 *)((long)pvVar10 + lVar1 + 8) = 0;
          }
          *(undefined8 *)((long)pvVar10 + lVar16 + 0x10) =
               *(undefined8 *)((long)pvVar10 + lVar1 + 0x10);
          *(undefined8 *)((long)pvVar10 + lVar16 + 0x18) =
               *(undefined8 *)((long)pvVar10 + lVar1 + 0x18);
          *(undefined8 *)((long)pvVar10 + lVar16 + 0x20) =
               *(undefined8 *)((long)pvVar10 + lVar1 + 0x20);
          bVar19 = lVar16 != (uVar14 - ((uVar3 - param_1) - 1)) * 0x28;
          pvVar10 = pvVar12;
          lVar16 = lVar16 + -0x28;
        } while (bVar19);
      }
      lVar16 = *(long *)(param_3 + 8);
      lVar1 = *(long *)((long)pvVar12 + uVar18 * 0x28 + 8);
      if (lVar1 != lVar16) {
        if (lVar1 != 0) {
          LOCK();
          plVar2 = (long *)(lVar1 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar16 = *(long *)((long)pvVar12 + uVar18 * 0x28 + 8);
            *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 8) = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
            lVar16 = *(long *)(param_3 + 8);
          }
          else {
            *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 8) = 0;
            lVar16 = *(long *)(param_3 + 8);
          }
        }
        *(long *)((long)pvVar12 + uVar18 * 0x28 + 8) = lVar16;
        *(undefined8 *)(param_3 + 8) = 0;
      }
      *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)((long)pvVar12 + uVar18 * 0x28 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    }
  }
  else {
    _err_print_index_error
              ("insert","./core/templates/local_vector.h",0xf7,(ulong)param_1,(ulong)uVar17,"p_pos",
               "count + 1","",false,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011abc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011ad90) */
/* WARNING: Removing unreachable block (ram,0x0011aec0) */
/* WARNING: Removing unreachable block (ram,0x0011b039) */
/* WARNING: Removing unreachable block (ram,0x0011aecc) */
/* WARNING: Removing unreachable block (ram,0x0011aed6) */
/* WARNING: Removing unreachable block (ram,0x0011b01b) */
/* WARNING: Removing unreachable block (ram,0x0011aee2) */
/* WARNING: Removing unreachable block (ram,0x0011aeec) */
/* WARNING: Removing unreachable block (ram,0x0011affd) */
/* WARNING: Removing unreachable block (ram,0x0011aef8) */
/* WARNING: Removing unreachable block (ram,0x0011af02) */
/* WARNING: Removing unreachable block (ram,0x0011afdf) */
/* WARNING: Removing unreachable block (ram,0x0011af0e) */
/* WARNING: Removing unreachable block (ram,0x0011af18) */
/* WARNING: Removing unreachable block (ram,0x0011afc1) */
/* WARNING: Removing unreachable block (ram,0x0011af24) */
/* WARNING: Removing unreachable block (ram,0x0011af2e) */
/* WARNING: Removing unreachable block (ram,0x0011afa3) */
/* WARNING: Removing unreachable block (ram,0x0011af36) */
/* WARNING: Removing unreachable block (ram,0x0011af40) */
/* WARNING: Removing unreachable block (ram,0x0011af88) */
/* WARNING: Removing unreachable block (ram,0x0011af48) */
/* WARNING: Removing unreachable block (ram,0x0011af5e) */
/* WARNING: Removing unreachable block (ram,0x0011af6a) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String_conflict *
vformat<unsigned_int,char_const*>(String_conflict *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RID_Alloc<RasterizerCanvasGLES3::CanvasLight, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false>::~RID_Alloc
          (RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_0011c530;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false>::~RID_Alloc
          (RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_0011c550;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(*(void **)(this + 8),false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false>::~RID_Alloc
          (RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_0011c550;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RasterizerCanvasGLES3::CanvasLight, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false>::~RID_Alloc
          (RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false> *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  uVar3 = *(uint *)(this + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_0011c530;
  if (uVar3 != 0) {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String_conflict *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar3);
    print_error((String_conflict *)&local_48);
    pcVar5 = local_48;
    lVar6 = local_50;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
        lVar6 = local_50;
      }
    }
    local_50 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      plVar1 = (long *)(lVar6 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  uVar3 = *(uint *)(this + 0x1c);
  uVar4 = *(uint *)(this + 0x18);
  if (uVar4 <= uVar3) {
    lVar6 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar6 * 8),false);
      lVar2 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
    } while ((uint)lVar6 < uVar3 / uVar4);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 8),false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RasterizerCanvasGLES3::CanvasLight, false>::make_rid(RasterizerCanvasGLES3::CanvasLight
   const&) */

ulong __thiscall
RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false>::make_rid
          (RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false> *this,CanvasLight *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar13 = *(uint *)(this + 0x20);
  if (uVar13 == *(uint *)(this + 0x1c)) {
    if (uVar13 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar13 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar5 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar5;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x38,false);
    pvVar2 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar12;
    lVar6 = Memory::realloc_static(pvVar2,uVar17,false);
    *(long *)(this + 0x10) = lVar6;
    uVar12 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar5 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar6 + lVar16) = uVar12;
    if (uVar8 != 0) {
      lVar6 = *(long *)(lVar5 + lVar16);
      lVar7 = 0;
      puVar11 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x30);
      do {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 0xe;
        *(int *)(lVar6 + lVar7 * 4) = *(int *)(this + 0x20) + (int)lVar7;
        uVar8 = *(uint *)(this + 0x18);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar8);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar8;
    uVar13 = *(uint *)(this + 0x20);
  }
  else {
    lVar5 = *(long *)(this + 0x10);
    uVar8 = *(uint *)(this + 0x18);
  }
  uVar13 = *(uint *)(*(long *)(lVar5 + ((ulong)uVar13 / (ulong)uVar8) * 8) +
                    ((ulong)uVar13 % (ulong)uVar8) * 4);
  uVar17 = (ulong)uVar13;
  LOCK();
  UNLOCK();
  uVar9 = (int)RID_AllocBase::base_id + 1;
  uVar10 = uVar9 & 0x7fffffff;
  if (uVar10 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)(*(long *)(lVar16 + (uVar17 / uVar8) * 8) + (uVar17 % (ulong)uVar8) * 0x38 + 0x30) =
         uVar10 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar9,uVar13) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar1 = (undefined8 *)
               (*(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8) +
               (uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x38);
      if ((int)*(uint *)(puVar1 + 6) < 0) {
        uVar13 = (uint)(uVar14 >> 0x20);
        if (uVar13 == (*(uint *)(puVar1 + 6) & 0x7fffffff)) {
          uVar12 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)(param_1 + 8);
          *(uint *)(puVar1 + 6) = uVar13;
          *puVar1 = uVar12;
          puVar1[1] = uVar4;
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          puVar1[2] = *(undefined8 *)(param_1 + 0x10);
          puVar1[3] = uVar12;
          uVar12 = *(undefined8 *)(param_1 + 0x28);
          puVar1[4] = *(undefined8 *)(param_1 + 0x20);
          puVar1[5] = uVar12;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar12 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar12 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar12,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,
   false>::make_rid(RasterizerCanvasGLES3::OccluderPolygon const&) */

ulong __thiscall
RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false>::make_rid
          (RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false> *this,OccluderPolygon *param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  
  uVar10 = *(uint *)(this + 0x20);
  if (uVar10 == *(uint *)(this + 0x1c)) {
    if (uVar10 == 0) {
      lVar16 = 0;
      uVar17 = 8;
    }
    else {
      uVar17 = (ulong)((int)((ulong)uVar10 / (ulong)*(uint *)(this + 0x18)) + 1) << 3;
      lVar16 = ((ulong)uVar10 / (ulong)*(uint *)(this + 0x18)) * 8;
    }
    lVar4 = Memory::realloc_static(*(void **)(this + 8),uVar17,false);
    *(long *)(this + 8) = lVar4;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0x30,false);
    pvVar1 = *(void **)(this + 0x10);
    *(undefined8 *)(lVar4 + lVar16) = uVar13;
    lVar5 = Memory::realloc_static(pvVar1,uVar17,false);
    *(long *)(this + 0x10) = lVar5;
    uVar13 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar5 + lVar16) = uVar13;
    if (uVar7 != 0) {
      lVar5 = *(long *)(lVar4 + lVar16);
      lVar6 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + lVar16) + 0x2c);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0xc;
        *(int *)(lVar5 + lVar6 * 4) = *(int *)(this + 0x20) + (int)lVar6;
        uVar7 = *(uint *)(this + 0x18);
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar7);
    }
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar7;
    uVar10 = *(uint *)(this + 0x20);
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    uVar7 = *(uint *)(this + 0x18);
  }
  uVar10 = *(uint *)(*(long *)(lVar4 + ((ulong)uVar10 / (ulong)uVar7) * 8) +
                    ((ulong)uVar10 % (ulong)uVar7) * 4);
  uVar17 = (ulong)uVar10;
  LOCK();
  UNLOCK();
  uVar8 = (int)RID_AllocBase::base_id + 1;
  uVar9 = uVar8 & 0x7fffffff;
  if (uVar9 != 0x7fffffff) {
    lVar16 = *(long *)(this + 8);
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    *(uint *)((uVar17 % (ulong)uVar7) * 0x30 + *(long *)(lVar16 + (uVar17 / uVar7) * 8) + 0x2c) =
         uVar9 | 0x80000000;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    uVar14 = CONCAT44(uVar8,uVar10) & 0x7fffffffffffffff;
    if ((uVar14 != 0) && ((uint)uVar14 < *(uint *)(this + 0x1c))) {
      puVar11 = (undefined8 *)
                ((uVar17 % (ulong)*(uint *)(this + 0x18)) * 0x30 +
                *(long *)(lVar16 + (uVar17 / *(uint *)(this + 0x18)) * 8));
      if ((int)*(uint *)((long)puVar11 + 0x2c) < 0) {
        uVar10 = (uint)(uVar14 >> 0x20);
        if (uVar10 == (*(uint *)((long)puVar11 + 0x2c) & 0x7fffffff)) {
          uVar13 = *(undefined8 *)param_1;
          uVar3 = *(undefined8 *)(param_1 + 8);
          *(uint *)((long)puVar11 + 0x2c) = uVar10;
          *puVar11 = uVar13;
          puVar11[1] = uVar3;
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          puVar11[2] = *(undefined8 *)(param_1 + 0x10);
          puVar11[3] = uVar13;
          uVar13 = *(undefined8 *)(param_1 + 0x24);
          *(undefined8 *)((long)puVar11 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
          *(undefined8 *)((long)puVar11 + 0x24) = uVar13;
          return uVar14;
        }
        pcVar15 = "Attempting to initialize the wrong RID";
        uVar13 = 0xfc;
      }
      else {
        pcVar15 = "Initializing already initialized RID";
        uVar13 = 0xf8;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar13,
                       "Method/function failed. Returning: nullptr",pcVar15,0,0);
    }
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return uVar14;
  }
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                   "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                   "Overflow in RID validator",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
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



/* CowData<unsigned int>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this,long param_1)

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
/* Error CowData<unsigned int>::resize<false>(long) */

undefined8 __thiscall CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this,long param_1)

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
LAB_0011c1e0:
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
  if (lVar8 == 0) goto LAB_0011c1e0;
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
        goto LAB_0011c0f1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0011c0f1:
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



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false>::~RID_Alloc
          (RID_Alloc<RasterizerCanvasGLES3::OccluderPolygon,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RasterizerCanvasGLES3::CanvasLight, false>::~RID_Alloc() */

void __thiscall
RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false>::~RID_Alloc
          (RID_Alloc<RasterizerCanvasGLES3::CanvasLight,false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderGLES3::Version::Specialization::~Specialization() */

void __thiscall ShaderGLES3::Version::Specialization::~Specialization(Specialization *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CanvasOcclusionShaderGLES3::~CanvasOcclusionShaderGLES3() */

void __thiscall
CanvasOcclusionShaderGLES3::~CanvasOcclusionShaderGLES3(CanvasOcclusionShaderGLES3 *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




