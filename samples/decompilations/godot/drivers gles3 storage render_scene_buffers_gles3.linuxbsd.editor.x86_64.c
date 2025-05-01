
/* CowData<RenderSceneBuffersGLES3::FBDEF>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderSceneBuffersGLES3::FBDEF>::_copy_on_write
          (CowData<RenderSceneBuffersGLES3::FBDEF> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0xc;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::RenderSceneBuffersGLES3() */

void __thiscall RenderSceneBuffersGLES3::RenderSceneBuffersGLES3(RenderSceneBuffersGLES3 *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RenderSceneBuffersGLES3 *pRVar4;
  RenderSceneBuffersGLES3 *pRVar5;
  
  RefCounted::RefCounted((RefCounted *)this);
  uVar3 = _UNK_001069a8;
  uVar2 = __LC9;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00106668;
  uVar1 = _LC8;
  *(undefined8 *)(this + 0x184) = 0;
  this[0x194] = (RenderSceneBuffersGLES3)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  this[0x1b4] = (RenderSceneBuffersGLES3)0x0;
  *(undefined8 *)(this + 0x1b8) = 1;
  *(undefined8 *)(this + 0x1c0) = 0;
  this[0x1c8] = (RenderSceneBuffersGLES3)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1a0) = uVar2;
  *(undefined8 *)(this + 0x1a8) = uVar3;
  *(undefined8 *)(this + 0x18c) = uVar1;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  pRVar4 = this + 0x1f8;
  do {
    *(undefined8 *)pRVar4 = 0;
    pRVar5 = pRVar4 + 0x10;
    *(undefined8 *)(pRVar4 + 8) = 0;
    pRVar4 = pRVar5;
  } while (this + 0x238 != pRVar5);
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::_rt_attach_textures(unsigned int, unsigned int, int, unsigned int) */

void __thiscall
RenderSceneBuffersGLES3::_rt_attach_textures
          (RenderSceneBuffersGLES3 *this,uint param_1,uint param_2,int param_3,uint param_4)

{
  if (param_4 < 2) {
    if (param_3 < 2) {
      (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x001005e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_glad_glFramebufferTexture2D)(0x8d40,0x8d00,0xde1,param_2,0);
      return;
    }
    if (_rt_attach_textures(unsigned_int,unsigned_int,int,unsigned_int)::first_print != '\0') {
      _err_print_error("_rt_attach_textures","drivers/gles3/storage/render_scene_buffers_gles3.cpp",
                       0x54,
                       "MSAA via EXT_multisampled_render_to_texture isn\'t supported on this platform."
                       ,0,0);
      _rt_attach_textures(unsigned_int,unsigned_int,int,unsigned_int)::first_print = '\0';
    }
  }
  else {
    if (param_3 < 2) {
      (*_glad_glFramebufferTextureMultiviewOVR)(0x8d40,0x8ce0,param_1,0,0,param_4);
                    /* WARNING: Could not recover jumptable at 0x00100567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_glad_glFramebufferTextureMultiviewOVR)(0x8d40,0x8d00,param_2,0,0,param_4);
      return;
    }
    if (_rt_attach_textures(unsigned_int,unsigned_int,int,unsigned_int)::first_print != '\0') {
      _err_print_error("_rt_attach_textures","drivers/gles3/storage/render_scene_buffers_gles3.cpp",
                       0x44,"Multiview MSAA isn\'t supported on this platform.",0,0);
      _rt_attach_textures(unsigned_int,unsigned_int,int,unsigned_int)::first_print = 0;
      return;
    }
  }
  return;
}



/* RenderSceneBuffersGLES3::_rt_get_cached_fbo(unsigned int, unsigned int, int, unsigned int) */

undefined8
RenderSceneBuffersGLES3::_rt_get_cached_fbo(uint param_1,uint param_2,int param_3,uint param_4)

{
  return 0;
}



/* RenderSceneBuffersGLES3::configure_for_probe(Vector2i) */

void __thiscall
RenderSceneBuffersGLES3::configure_for_probe(RenderSceneBuffersGLES3 *this,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = _LC8;
  *(undefined8 *)(this + 0x17c) = param_2;
  *(undefined8 *)(this + 0x184) = param_2;
  *(undefined8 *)(this + 0x18c) = uVar1;
  return;
}



/* RenderSceneBuffersGLES3::set_apply_color_adjustments_in_post(bool) */

void __thiscall
RenderSceneBuffersGLES3::set_apply_color_adjustments_in_post
          (RenderSceneBuffersGLES3 *this,bool param_1)

{
  this[0x194] = (RenderSceneBuffersGLES3)param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::_clear_intermediate_buffers() */

void __thiscall RenderSceneBuffersGLES3::_clear_intermediate_buffers(RenderSceneBuffersGLES3 *this)

{
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *this_00;
  ulong uVar1;
  undefined1 auVar2 [16];
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
  long lVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1e8) != 0) {
    (*_glad_glDeleteFramebuffers)(1,this + 0x1e8);
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  lVar18 = GLES3::Utilities::singleton;
  uVar19 = *(uint *)(this + 0x1e0);
  if (uVar19 == 0) {
    uVar27 = *(uint *)(this + 0x1e4);
    uVar19 = local_44;
  }
  else {
    this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
               *)(GLES3::Utilities::singleton + 200);
    local_44 = uVar19;
    if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
       (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv +
                        (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
      uVar27 = (uVar19 >> 0x10 ^ uVar19) * -0x7a143595;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar26 = 1;
        uVar22 = uVar1;
      }
      else {
        uVar22 = uVar26 * uVar1;
      }
      uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                   (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar24;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      lVar23 = SUB168(auVar2 * auVar10,8);
      uVar27 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar23 * 4);
      iVar21 = SUB164(auVar2 * auVar10,8);
      if (uVar27 != 0) {
        uVar25 = 0;
        do {
          if ((uVar26 == uVar27) &&
             (uVar19 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) +
                                           lVar23 * 8) + 0x10))) {
            (*_glad_glDeleteTextures)(1,&local_44);
            puVar20 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[](this_00,&local_44);
            *(long *)(lVar18 + 0x108) = *(long *)(lVar18 + 0x108) - (ulong)*puVar20;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase(this_00,&local_44);
            goto LAB_00100863;
          }
          uVar25 = uVar25 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (iVar21 + 1) * uVar1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar24;
          lVar23 = SUB168(auVar3 * auVar11,8);
          uVar27 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar23 * 4);
          iVar21 = SUB164(auVar3 * auVar11,8);
        } while ((uVar27 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = uVar27 * uVar1, auVar12._8_8_ = 0,
                auVar12._0_8_ = uVar24, auVar5._8_8_ = 0,
                auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4)
                                + iVar21) - SUB164(auVar4 * auVar12,8)) * uVar1, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar24, uVar25 <= SUB164(auVar5 * auVar13,8)));
      }
    }
    _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                     "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_00100863:
    *(undefined4 *)(this + 0x1e0) = 0;
    uVar27 = *(uint *)(this + 0x1e4);
    lVar18 = GLES3::Utilities::singleton;
    uVar19 = local_44;
  }
  local_44 = uVar27;
  GLES3::Utilities::singleton = lVar18;
  if (local_44 != 0) {
    if ((*(long *)(lVar18 + 0xd0) != 0) && (*(int *)(lVar18 + 0xf4) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar18 + 0xf0) * 8);
      uVar19 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
      uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
      uVar27 = uVar19 ^ uVar19 >> 0x10;
      if (uVar19 == uVar19 >> 0x10) {
        uVar27 = 1;
        uVar22 = uVar1;
      }
      else {
        uVar22 = uVar27 * uVar1;
      }
      uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar18 + 0xf0) * 4));
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar24;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar22;
      lVar23 = SUB168(auVar6 * auVar14,8);
      uVar19 = *(uint *)(*(long *)(lVar18 + 0xd8) + lVar23 * 4);
      iVar21 = SUB164(auVar6 * auVar14,8);
      if (uVar19 != 0) {
        uVar26 = 0;
        do {
          if ((uVar27 == uVar19) &&
             (local_44 == *(uint *)(*(long *)(*(long *)(lVar18 + 0xd0) + lVar23 * 8) + 0x10))) {
            (*_glad_glDeleteTextures)(1,&local_44);
            puVar20 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                            *)(lVar18 + 200),&local_44);
            *(long *)(lVar18 + 0x108) = *(long *)(lVar18 + 0x108) - (ulong)*puVar20;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                     *)(lVar18 + 200),&local_44);
            goto LAB_001009d3;
          }
          uVar26 = uVar26 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (iVar21 + 1) * uVar1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar24;
          lVar23 = SUB168(auVar7 * auVar15,8);
          uVar19 = *(uint *)(*(long *)(lVar18 + 0xd8) + lVar23 * 4);
          iVar21 = SUB164(auVar7 * auVar15,8);
        } while ((uVar19 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar19 * uVar1, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar24, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(lVar18 + 0xf0) * 4) + iVar21) -
                               SUB164(auVar8 * auVar16,8)) * uVar1, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar24, uVar26 <= SUB164(auVar9 * auVar17,8)));
      }
    }
    _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                     "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_001009d3:
    *(undefined4 *)(this + 0x1e4) = 0;
    uVar19 = local_44;
  }
  local_44 = uVar19;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::_clear_back_buffers() */

void __thiscall RenderSceneBuffersGLES3::_clear_back_buffers(RenderSceneBuffersGLES3 *this)

{
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *this_00;
  ulong uVar1;
  undefined1 auVar2 [16];
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
  long lVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 500) != 0) {
    (*_glad_glDeleteFramebuffers)(1,this + 500);
    *(undefined4 *)(this + 500) = 0;
  }
  lVar18 = GLES3::Utilities::singleton;
  uVar19 = *(uint *)(this + 0x1ec);
  if (uVar19 == 0) {
    uVar27 = *(uint *)(this + 0x1f0);
    uVar19 = local_44;
  }
  else {
    this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
               *)(GLES3::Utilities::singleton + 200);
    local_44 = uVar19;
    if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
       (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv +
                        (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
      uVar27 = (uVar19 >> 0x10 ^ uVar19) * -0x7a143595;
      uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
        uVar26 = 1;
        uVar22 = uVar1;
      }
      else {
        uVar22 = uVar26 * uVar1;
      }
      uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                   (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar24;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      lVar23 = SUB168(auVar2 * auVar10,8);
      uVar27 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar23 * 4);
      iVar21 = SUB164(auVar2 * auVar10,8);
      if (uVar27 != 0) {
        uVar25 = 0;
        do {
          if ((uVar26 == uVar27) &&
             (uVar19 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) +
                                           lVar23 * 8) + 0x10))) {
            (*_glad_glDeleteTextures)(1,&local_44);
            puVar20 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[](this_00,&local_44);
            *(long *)(lVar18 + 0x108) = *(long *)(lVar18 + 0x108) - (ulong)*puVar20;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase(this_00,&local_44);
            goto LAB_00100c43;
          }
          uVar25 = uVar25 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (iVar21 + 1) * uVar1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar24;
          lVar23 = SUB168(auVar3 * auVar11,8);
          uVar27 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar23 * 4);
          iVar21 = SUB164(auVar3 * auVar11,8);
        } while ((uVar27 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = uVar27 * uVar1, auVar12._8_8_ = 0,
                auVar12._0_8_ = uVar24, auVar5._8_8_ = 0,
                auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4)
                                + iVar21) - SUB164(auVar4 * auVar12,8)) * uVar1, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar24, uVar25 <= SUB164(auVar5 * auVar13,8)));
      }
    }
    _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                     "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_00100c43:
    *(undefined4 *)(this + 0x1ec) = 0;
    uVar27 = *(uint *)(this + 0x1f0);
    lVar18 = GLES3::Utilities::singleton;
    uVar19 = local_44;
  }
  local_44 = uVar27;
  GLES3::Utilities::singleton = lVar18;
  if (local_44 != 0) {
    if ((*(long *)(lVar18 + 0xd0) != 0) && (*(int *)(lVar18 + 0xf4) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar18 + 0xf0) * 8);
      uVar19 = (local_44 >> 0x10 ^ local_44) * -0x7a143595;
      uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
      uVar27 = uVar19 ^ uVar19 >> 0x10;
      if (uVar19 == uVar19 >> 0x10) {
        uVar27 = 1;
        uVar22 = uVar1;
      }
      else {
        uVar22 = uVar27 * uVar1;
      }
      uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar18 + 0xf0) * 4));
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar24;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar22;
      lVar23 = SUB168(auVar6 * auVar14,8);
      uVar19 = *(uint *)(*(long *)(lVar18 + 0xd8) + lVar23 * 4);
      iVar21 = SUB164(auVar6 * auVar14,8);
      if (uVar19 != 0) {
        uVar26 = 0;
        do {
          if ((uVar27 == uVar19) &&
             (local_44 == *(uint *)(*(long *)(*(long *)(lVar18 + 0xd0) + lVar23 * 8) + 0x10))) {
            (*_glad_glDeleteTextures)(1,&local_44);
            puVar20 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                              ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                            *)(lVar18 + 200),&local_44);
            *(long *)(lVar18 + 0x108) = *(long *)(lVar18 + 0x108) - (ulong)*puVar20;
            HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
            ::erase((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                     *)(lVar18 + 200),&local_44);
            goto LAB_00100db3;
          }
          uVar26 = uVar26 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (iVar21 + 1) * uVar1;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar24;
          lVar23 = SUB168(auVar7 * auVar15,8);
          uVar19 = *(uint *)(*(long *)(lVar18 + 0xd8) + lVar23 * 4);
          iVar21 = SUB164(auVar7 * auVar15,8);
        } while ((uVar19 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar19 * uVar1, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar24, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(lVar18 + 0xf0) * 4) + iVar21) -
                               SUB164(auVar8 * auVar16,8)) * uVar1, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar24, uVar26 <= SUB164(auVar9 * auVar17,8)));
      }
    }
    _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                     "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_00100db3:
    *(undefined4 *)(this + 0x1f0) = 0;
    uVar19 = local_44;
  }
  local_44 = uVar19;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::check_backbuffer(bool, bool) */

void __thiscall
RenderSceneBuffersGLES3::check_backbuffer(RenderSceneBuffersGLES3 *this,bool param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GLES3::TextureStorage::get_singleton();
  iVar4 = *(int *)(this + 500);
  if (iVar4 == 0) {
    (*_glad_glGenFramebuffers)(1,this + 500);
    iVar4 = *(int *)(this + 500);
  }
  (*_glad_glBindFramebuffer)(0x8d40,iVar4);
  if ((*(uint *)(this + 400) < 2) || (*(char *)(GLES3::Config::singleton + 0x88) == '\0')) {
    if ((*(int *)(this + 0x1ec) == 0) && (param_1)) {
      bVar8 = false;
      uVar7 = 0xde1;
      (*_glad_glGenTextures)(1,this + 0x1ec);
      (*_glad_glBindTexture)(0xde1,*(undefined4 *)(this + 0x1ec));
      (*_glad_glTexImage2D)
                (0xde1,0,*(undefined4 *)(this + 0x1a0),*(undefined4 *)(this + 0x17c),
                 *(undefined4 *)(this + 0x180),0,*(undefined4 *)(this + 0x1a4),
                 *(undefined4 *)(this + 0x1a8),0);
      goto LAB_00101236;
    }
    if ((*(int *)(this + 0x1f0) != 0) || (!param_2)) {
      uVar7 = 0xde1;
      goto LAB_0010109c;
    }
    uVar7 = 0xde1;
    (*_glad_glGenTextures)(1,this + 0x1f0);
    (*_glad_glBindTexture)(0xde1,*(undefined4 *)(this + 0x1f0));
LAB_00101523:
    bVar8 = false;
    (*_glad_glTexImage2D)
              (uVar7,0,0x81a6,*(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),0,0x1902,
               0x1405,0);
LAB_00100f58:
    (*_glad_glTexParameteri)(uVar7,0x2800,0x2600);
    (*_glad_glTexParameteri)(uVar7,0x2801,0x2600);
    (*_glad_glTexParameteri)(uVar7,0x2802,0x812f);
    (*_glad_glTexParameteri)(uVar7,0x2803,0x812f);
    lVar2 = GLES3::Utilities::singleton;
    local_58 = "3D back buffer depth texture";
    local_60 = 0;
    local_50 = 0x1c;
    String::parse_latin1((StrRange *)&local_60);
    uVar6 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) * *(int *)(this + 400) * 3;
    local_58 = (char *)CONCAT44(local_58._4_4_,*(undefined4 *)(this + 0x1f0));
    plVar1 = (long *)(lVar2 + 0x108);
    *plVar1 = *plVar1 + (ulong)uVar6;
    puVar5 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                     ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                   *)(lVar2 + 200),(uint *)&local_58);
    lVar2 = local_60;
    *puVar5 = uVar6;
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
    if (bVar8) {
      (*_glad_glFramebufferTextureMultiviewOVR)
                (0x8d40,0x8d00,*(undefined4 *)(this + 0x1f0),0,0,*(undefined4 *)(this + 400));
    }
    else {
      (*_glad_glFramebufferTexture2D)(0x8d40,0x8d00,uVar7,*(undefined4 *)(this + 0x1f0),0);
    }
  }
  else {
    bVar8 = *(int *)(this + 0x1ec) == 0 && param_1;
    if (bVar8) {
      uVar7 = 0x8c1a;
      (*_glad_glGenTextures)(1,this + 0x1ec);
      (*_glad_glBindTexture)(0x8c1a,*(undefined4 *)(this + 0x1ec));
      (*_glad_glTexImage3D)
                (0x8c1a,0,*(undefined4 *)(this + 0x1a0),*(undefined4 *)(this + 0x17c),
                 *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 400),0,
                 *(undefined4 *)(this + 0x1a4),*(undefined4 *)(this + 0x1a8),0);
LAB_00101236:
      (*_glad_glTexParameteri)(uVar7,0x2800,0x2600);
      (*_glad_glTexParameteri)(uVar7,0x2801,0x2600);
      (*_glad_glTexParameteri)(uVar7,0x2802,0x812f);
      (*_glad_glTexParameteri)(uVar7,0x2803,0x812f);
      lVar2 = GLES3::Utilities::singleton;
      local_60 = 0;
      local_58 = "3D Back buffer color texture";
      local_50 = 0x1c;
      String::parse_latin1((StrRange *)&local_60);
      uVar6 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) *
              *(int *)(this + 400) * *(int *)(this + 0x1ac);
      local_58 = (char *)CONCAT44(local_58._4_4_,*(undefined4 *)(this + 0x1ec));
      plVar1 = (long *)(lVar2 + 0x108);
      *plVar1 = *plVar1 + (ulong)uVar6;
      puVar5 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                       ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                     *)(lVar2 + 200),(uint *)&local_58);
      lVar2 = local_60;
      *puVar5 = uVar6;
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
      if (bVar8) {
        (*_glad_glFramebufferTextureMultiviewOVR)
                  (0x8d40,0x8ce0,*(undefined4 *)(this + 0x1ec),0,0,*(undefined4 *)(this + 400));
        if ((*(int *)(this + 0x1f0) == 0) && (param_2)) {
          (*_glad_glGenTextures)(1,this + 0x1f0);
          (*_glad_glBindTexture)(uVar7,*(undefined4 *)(this + 0x1f0));
          goto LAB_00100f1c;
        }
      }
      else {
        (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,uVar7,*(undefined4 *)(this + 0x1ec),0);
        if ((*(int *)(this + 0x1f0) == 0) && (param_2)) {
          (*_glad_glGenTextures)(1,this + 0x1f0);
          (*_glad_glBindTexture)(uVar7,*(undefined4 *)(this + 0x1f0));
          goto LAB_00101523;
        }
      }
    }
    else {
      if ((*(int *)(this + 0x1f0) == 0) && (param_2)) {
        uVar7 = 0x8c1a;
        (*_glad_glGenTextures)(1,this + 0x1f0);
        (*_glad_glBindTexture)(0x8c1a,*(undefined4 *)(this + 0x1f0));
LAB_00100f1c:
        bVar8 = true;
        (*_glad_glTexImage3D)
                  (uVar7,0,0x81a6,*(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),
                   *(undefined4 *)(this + 400),0,0x1902,0x1405,0);
        goto LAB_00100f58;
      }
      uVar7 = 0x8c1a;
    }
  }
LAB_0010109c:
  iVar4 = (*_glad_glCheckFramebufferStatus)(0x8d40);
  if (iVar4 == 0x8cd5) goto LAB_00101190;
  _clear_back_buffers(this);
  if (iVar4 == 0x8cd6) {
    local_58 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
    local_50 = 0x24;
LAB_00101436:
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    if (iVar4 == 0x8cd7) {
      local_58 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
      local_50 = 0x2c;
      goto LAB_00101436;
    }
    if (iVar4 == 0x8cdb) {
      local_58 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
      local_50 = 0x25;
      goto LAB_00101436;
    }
    if (iVar4 == 0x8cdc) {
      local_58 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
      local_50 = 0x25;
      goto LAB_00101436;
    }
    itos((long)&local_60);
  }
  operator+((char *)&local_58,(String *)"Could not create 3D back buffers, status: ");
  _err_print_error("check_backbuffer","drivers/gles3/storage/render_scene_buffers_gles3.cpp",0x21a,
                   &local_58,0,1);
  pcVar3 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
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
LAB_00101190:
  (*_glad_glBindTexture)(uVar7,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001011c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::_clear_glow_buffers() */

void __thiscall RenderSceneBuffersGLES3::_clear_glow_buffers(RenderSceneBuffersGLES3 *this)

{
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *this_00;
  uint uVar1;
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
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  RenderSceneBuffersGLES3 *pRVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  pRVar20 = this + 0x204;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while( true ) {
      if (*(int *)pRVar20 != 0) {
        (*_glad_glDeleteFramebuffers)(1,pRVar20);
        *(int *)pRVar20 = 0;
      }
      lVar11 = GLES3::Utilities::singleton;
      uVar1 = *(uint *)(pRVar20 + -4);
      if (uVar1 == 0) break;
      this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                 *)(GLES3::Utilities::singleton + 200);
      local_44 = uVar1;
      if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
         (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
        uVar2 = *(ulong *)(hash_table_size_primes_inv +
                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
        uVar12 = (uVar1 >> 0x10 ^ uVar1) * -0x7a143595;
        uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
        uVar19 = uVar12 ^ uVar12 >> 0x10;
        if (uVar12 == uVar12 >> 0x10) {
          uVar19 = 1;
          uVar14 = uVar2;
        }
        else {
          uVar14 = uVar19 * uVar2;
        }
        uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                     (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar16 = SUB168(auVar3 * auVar7,8);
        uVar12 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar16 * 4);
        iVar15 = SUB164(auVar3 * auVar7,8);
        if (uVar12 != 0) {
          uVar18 = 0;
          do {
            if ((uVar19 == uVar12) &&
               (uVar1 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) +
                                            lVar16 * 8) + 0x10))) {
              (*_glad_glDeleteTextures)(1,&local_44);
              puVar13 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                ::operator[](this_00,&local_44);
              *(long *)(lVar11 + 0x108) = *(long *)(lVar11 + 0x108) - (ulong)*puVar13;
              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              ::erase(this_00,&local_44);
              goto LAB_00101785;
            }
            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (iVar15 + 1) * uVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar16 = SUB168(auVar4 * auVar8,8);
            uVar12 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar16 * 4);
            iVar15 = SUB164(auVar4 * auVar8,8);
          } while ((uVar12 != 0) &&
                  (auVar5._8_8_ = 0, auVar5._0_8_ = uVar12 * uVar2, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
                  auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4
                                            ) + iVar15) - SUB164(auVar5 * auVar9,8)) * uVar2,
                  auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar18 <= SUB164(auVar6 * auVar10,8)));
        }
      }
      _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                       "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
LAB_00101785:
      *(int *)(pRVar20 + -4) = 0;
      pRVar20 = pRVar20 + 0x10;
      if (this + 0x244 == pRVar20) goto LAB_0010179b;
    }
    pRVar20 = pRVar20 + 0x10;
  } while (this + 0x244 != pRVar20);
LAB_0010179b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::check_glow_buffers() */

void __thiscall RenderSceneBuffersGLES3::check_glow_buffers(RenderSceneBuffersGLES3 *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  RenderSceneBuffersGLES3 *pRVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  uint local_6c;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x200) == 0) {
    lVar10 = 0;
    GLES3::TextureStorage::get_singleton();
    iVar9 = *(int *)(this + 0x17c);
    iVar8 = *(int *)(this + 0x180);
    pRVar7 = this + 0x200;
    do {
      iVar8 = iVar8 >> 1;
      if (iVar8 < 4) {
        iVar8 = 4;
      }
      iVar9 = iVar9 >> 1;
      if (iVar9 < 4) {
        iVar9 = 4;
      }
      *(int *)(pRVar7 + -4) = iVar8;
      *(int *)(pRVar7 + -8) = iVar9;
      (*_glad_glGenTextures)(1,pRVar7);
      (*_glad_glActiveTexture)(0x84c0);
      (*_glad_glBindTexture)(0xde1,*(undefined4 *)pRVar7);
      (*_glad_glTexImage2D)
                (0xde1,0,*(undefined4 *)(this + 0x1a0),iVar9,iVar8,0,*(undefined4 *)(this + 0x1a4),
                 *(undefined4 *)(this + 0x1a8),0);
      (*_glad_glTexParameteri)(0xde1,0x2800,0x2601);
      (*_glad_glTexParameteri)(0xde1,0x2801,0x2601);
      (*_glad_glTexParameteri)(0xde1,0x2802,0x812f);
      (*_glad_glTexParameteri)(0xde1,0x2803,0x812f);
      (*_glad_glTexParameteri)(0xde1,0x813c,0);
      (*_glad_glTexParameteri)(0xde1,0x813d,0);
      lVar2 = GLES3::Utilities::singleton;
      String::num_int64((long)&local_60,(int)lVar10,true);
      local_58 = "Glow buffer ";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      String::operator+((String *)&local_58,(String *)&local_68);
      local_6c = *(uint *)pRVar7;
      uVar6 = iVar8 * iVar9 * *(int *)(this + 0x1ac);
      plVar1 = (long *)(lVar2 + 0x108);
      *plVar1 = *plVar1 + (ulong)uVar6;
      puVar5 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                       ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                     *)(lVar2 + 200),&local_6c);
      pcVar3 = local_58;
      *puVar5 = uVar6;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      (*_glad_glGenFramebuffers)(1,pRVar7 + 4);
      (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(pRVar7 + 4));
      (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,*(undefined4 *)pRVar7,0);
      iVar4 = (*_glad_glCheckFramebufferStatus)(0x8d40);
      if (iVar4 != 0x8cd5) {
        if (iVar4 == 0x8cd6) {
          local_60 = 0;
          local_58 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
          local_50 = 0x24;
          String::parse_latin1((StrRange *)&local_60);
        }
        else if (iVar4 == 0x8cd7) {
          local_60 = 0;
          local_58 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
          local_50 = 0x2c;
          String::parse_latin1((StrRange *)&local_60);
        }
        else {
          if (iVar4 == 0x8cdb) {
            local_58 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
          }
          else {
            if (iVar4 != 0x8cdc) {
              itos((long)&local_60);
              goto LAB_00101b7d;
            }
            local_58 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
          }
          local_60 = 0;
          local_50 = 0x25;
          String::parse_latin1((StrRange *)&local_60);
        }
LAB_00101b7d:
        operator+((char *)&local_58,(String *)"Could not create glow buffers, status: ");
        _err_print_error("check_glow_buffers","drivers/gles3/storage/render_scene_buffers_gles3.cpp"
                         ,0x25c,(String *)&local_58,0,1);
        pcVar3 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar10 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        _clear_glow_buffers(this);
        break;
      }
      lVar10 = lVar10 + 1;
      pRVar7 = pRVar7 + 0x10;
    } while (lVar10 != 4);
    (*_glad_glBindTexture)(0xde1,0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::_clear_msaa3d_buffers() */

void __thiscall RenderSceneBuffersGLES3::_clear_msaa3d_buffers(RenderSceneBuffersGLES3 *this)

{
  long *plVar1;
  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
  *pHVar2;
  uint uVar3;
  ulong uVar4;
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint *puVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  uint uVar45;
  long lVar46;
  uint uVar47;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<RenderSceneBuffersGLES3::FBDEF>::_copy_on_write
            ((CowData<RenderSceneBuffersGLES3::FBDEF> *)(this + 0x1d8));
  lVar43 = *(long *)(this + 0x1d8);
  CowData<RenderSceneBuffersGLES3::FBDEF>::_copy_on_write
            ((CowData<RenderSceneBuffersGLES3::FBDEF> *)(this + 0x1d8));
  lVar41 = *(long *)(this + 0x1d8);
  if (lVar41 == 0) {
    lVar46 = 0;
    if (lVar43 == 0) goto LAB_00101d7a;
LAB_00101d30:
    do {
      local_44 = *(uint *)(lVar43 + 8);
      lVar43 = lVar43 + 0xc;
      (*_glad_glDeleteFramebuffers)(1);
    } while (lVar43 != lVar46);
    lVar41 = *(long *)(this + 0x1d8);
    if (lVar41 == 0) goto LAB_00101d7a;
    lVar40 = *(long *)(lVar41 + -8);
  }
  else {
    lVar40 = *(long *)(lVar41 + -8);
    lVar46 = lVar41 + lVar40 * 0xc;
    if (lVar46 != lVar43) goto LAB_00101d30;
  }
  if (lVar40 != 0) {
    LOCK();
    plVar1 = (long *)(lVar41 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar43 = *(long *)(this + 0x1d8);
      *(undefined8 *)(this + 0x1d8) = 0;
      Memory::free_static((void *)(lVar43 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x1d8) = 0;
    }
  }
LAB_00101d7a:
  if (*(int *)(this + 0x1c4) != 0) {
    (*_glad_glDeleteFramebuffers)(1,this + 0x1c4);
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  lVar43 = GLES3::Utilities::singleton;
  uVar3 = *(uint *)(this + 0x1bc);
  if (uVar3 != 0) {
    local_44 = uVar3;
    if (*(int *)(this + 400) == 1) {
      pHVar2 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                *)(GLES3::Utilities::singleton + 0x98);
      if ((*(long *)(GLES3::Utilities::singleton + 0xa0) != 0) &&
         (*(int *)(GLES3::Utilities::singleton + 0xc4) != 0)) {
        uVar4 = *(ulong *)(hash_table_size_primes_inv +
                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xc0) * 8);
        uVar37 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
        uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
        uVar47 = uVar37 ^ uVar37 >> 0x10;
        if (uVar37 == uVar37 >> 0x10) {
          uVar47 = 1;
          uVar42 = uVar4;
        }
        else {
          uVar42 = uVar47 * uVar4;
        }
        uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                     (ulong)*(uint *)(GLES3::Utilities::singleton + 0xc0) * 4));
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar44;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar42;
        lVar41 = SUB168(auVar13 * auVar29,8);
        uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xa8) + lVar41 * 4);
        iVar39 = SUB164(auVar13 * auVar29,8);
        if (uVar37 != 0) {
          uVar45 = 0;
          do {
            if ((uVar37 == uVar47) &&
               (uVar3 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xa0) +
                                            lVar41 * 8) + 0x10))) {
              (*_glad_glDeleteRenderbuffers)(1,&local_44);
              puVar38 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                ::operator[](pHVar2,&local_44);
              plVar1 = (long *)(lVar43 + 0x100);
              *plVar1 = *plVar1 - (ulong)*puVar38;
              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              ::erase(pHVar2,&local_44);
              goto LAB_00101f13;
            }
            uVar45 = uVar45 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (iVar39 + 1) * uVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar44;
            lVar41 = SUB168(auVar14 * auVar30,8);
            uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xa8) + lVar41 * 4);
            iVar39 = SUB164(auVar14 * auVar30,8);
          } while ((uVar37 != 0) &&
                  (auVar15._8_8_ = 0, auVar15._0_8_ = uVar37 * uVar4, auVar31._8_8_ = 0,
                  auVar31._0_8_ = uVar44, auVar16._8_8_ = 0,
                  auVar16._0_8_ =
                       ((*(uint *)(hash_table_size_primes +
                                  (ulong)*(uint *)(GLES3::Utilities::singleton + 0xc0) * 4) + iVar39
                        ) - SUB164(auVar15 * auVar31,8)) * uVar4, auVar32._8_8_ = 0,
                  auVar32._0_8_ = uVar44, uVar45 <= SUB164(auVar16 * auVar32,8)));
        }
      }
      _err_print_error("render_buffer_free_data","drivers/gles3/storage/utilities.h",0x7a,
                       "Condition \"!render_buffer_allocs_cache.has(p_id)\" is true.",0,0);
    }
    else {
      pHVar2 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                *)(GLES3::Utilities::singleton + 200);
      if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
         (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
        uVar4 = *(ulong *)(hash_table_size_primes_inv +
                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
        uVar37 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
        uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
        uVar47 = uVar37 ^ uVar37 >> 0x10;
        if (uVar37 == uVar37 >> 0x10) {
          uVar47 = 1;
          uVar42 = uVar4;
        }
        else {
          uVar42 = uVar47 * uVar4;
        }
        uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                     (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar44;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar42;
        lVar41 = SUB168(auVar5 * auVar21,8);
        uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar41 * 4);
        iVar39 = SUB164(auVar5 * auVar21,8);
        if (uVar37 != 0) {
          uVar45 = 0;
          do {
            if ((uVar37 == uVar47) &&
               (uVar3 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) +
                                            lVar41 * 8) + 0x10))) {
              (*_glad_glDeleteTextures)(1,&local_44);
              puVar38 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                ::operator[](pHVar2,&local_44);
              plVar1 = (long *)(lVar43 + 0x108);
              *plVar1 = *plVar1 - (ulong)*puVar38;
              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              ::erase(pHVar2,&local_44);
              goto LAB_00101f13;
            }
            uVar45 = uVar45 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (iVar39 + 1) * uVar4;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            lVar41 = SUB168(auVar6 * auVar22,8);
            uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar41 * 4);
            iVar39 = SUB164(auVar6 * auVar22,8);
          } while ((uVar37 != 0) &&
                  (auVar7._8_8_ = 0, auVar7._0_8_ = uVar37 * uVar4, auVar23._8_8_ = 0,
                  auVar23._0_8_ = uVar44, auVar8._8_8_ = 0,
                  auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4
                                            ) + iVar39) - SUB164(auVar7 * auVar23,8)) * uVar4,
                  auVar24._8_8_ = 0, auVar24._0_8_ = uVar44, uVar45 <= SUB164(auVar8 * auVar24,8)));
        }
      }
      _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                       "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
    }
LAB_00101f13:
    *(undefined4 *)(this + 0x1bc) = 0;
  }
  lVar43 = GLES3::Utilities::singleton;
  uVar3 = *(uint *)(this + 0x1c0);
  if (uVar3 != 0) {
    local_44 = uVar3;
    if (*(int *)(this + 400) == 1) {
      pHVar2 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                *)(GLES3::Utilities::singleton + 0x98);
      if ((*(long *)(GLES3::Utilities::singleton + 0xa0) != 0) &&
         (*(int *)(GLES3::Utilities::singleton + 0xc4) != 0)) {
        uVar4 = *(ulong *)(hash_table_size_primes_inv +
                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xc0) * 8);
        uVar37 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
        uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
        uVar47 = uVar37 ^ uVar37 >> 0x10;
        if (uVar37 == uVar37 >> 0x10) {
          uVar47 = 1;
          uVar42 = uVar4;
        }
        else {
          uVar42 = uVar47 * uVar4;
        }
        uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                     (ulong)*(uint *)(GLES3::Utilities::singleton + 0xc0) * 4));
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar44;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar42;
        lVar41 = SUB168(auVar17 * auVar33,8);
        uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xa8) + lVar41 * 4);
        iVar39 = SUB164(auVar17 * auVar33,8);
        if (uVar37 != 0) {
          uVar45 = 0;
          do {
            if ((uVar37 == uVar47) &&
               (uVar3 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xa0) +
                                            lVar41 * 8) + 0x10))) {
              (*_glad_glDeleteRenderbuffers)(1,&local_44);
              puVar38 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                ::operator[](pHVar2,&local_44);
              plVar1 = (long *)(lVar43 + 0x100);
              *plVar1 = *plVar1 - (ulong)*puVar38;
              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              ::erase(pHVar2,&local_44);
              goto LAB_0010208b;
            }
            uVar45 = uVar45 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (iVar39 + 1) * uVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar44;
            lVar41 = SUB168(auVar18 * auVar34,8);
            uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xa8) + lVar41 * 4);
            iVar39 = SUB164(auVar18 * auVar34,8);
          } while ((uVar37 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = uVar37 * uVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar44, auVar20._8_8_ = 0,
                  auVar20._0_8_ =
                       ((*(uint *)(hash_table_size_primes +
                                  (ulong)*(uint *)(GLES3::Utilities::singleton + 0xc0) * 4) + iVar39
                        ) - SUB164(auVar19 * auVar35,8)) * uVar4, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar44, uVar45 <= SUB164(auVar20 * auVar36,8)));
        }
      }
      _err_print_error("render_buffer_free_data","drivers/gles3/storage/utilities.h",0x7a,
                       "Condition \"!render_buffer_allocs_cache.has(p_id)\" is true.",0,0);
    }
    else {
      pHVar2 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                *)(GLES3::Utilities::singleton + 200);
      if ((*(long *)(GLES3::Utilities::singleton + 0xd0) != 0) &&
         (*(int *)(GLES3::Utilities::singleton + 0xf4) != 0)) {
        uVar4 = *(ulong *)(hash_table_size_primes_inv +
                          (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 8);
        uVar37 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
        uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
        uVar47 = uVar37 ^ uVar37 >> 0x10;
        if (uVar37 == uVar37 >> 0x10) {
          uVar47 = 1;
          uVar42 = uVar4;
        }
        else {
          uVar42 = uVar47 * uVar4;
        }
        uVar44 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                     (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4));
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar44;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar42;
        lVar41 = SUB168(auVar9 * auVar25,8);
        uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar41 * 4);
        iVar39 = SUB164(auVar9 * auVar25,8);
        if (uVar37 != 0) {
          uVar45 = 0;
          do {
            if ((uVar37 == uVar47) &&
               (uVar3 == *(uint *)(*(long *)(*(long *)(GLES3::Utilities::singleton + 0xd0) +
                                            lVar41 * 8) + 0x10))) {
              (*_glad_glDeleteTextures)(1,&local_44);
              puVar38 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                ::operator[](pHVar2,&local_44);
              plVar1 = (long *)(lVar43 + 0x108);
              *plVar1 = *plVar1 - (ulong)*puVar38;
              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
              ::erase(pHVar2,&local_44);
              goto LAB_0010208b;
            }
            uVar45 = uVar45 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (iVar39 + 1) * uVar4;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar44;
            lVar41 = SUB168(auVar10 * auVar26,8);
            uVar37 = *(uint *)(*(long *)(GLES3::Utilities::singleton + 0xd8) + lVar41 * 4);
            iVar39 = SUB164(auVar10 * auVar26,8);
          } while ((uVar37 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = uVar37 * uVar4, auVar27._8_8_ = 0,
                  auVar27._0_8_ = uVar44, auVar12._8_8_ = 0,
                  auVar12._0_8_ =
                       ((*(uint *)(hash_table_size_primes +
                                  (ulong)*(uint *)(GLES3::Utilities::singleton + 0xf0) * 4) + iVar39
                        ) - SUB164(auVar11 * auVar27,8)) * uVar4, auVar28._8_8_ = 0,
                  auVar28._0_8_ = uVar44, uVar45 <= SUB164(auVar12 * auVar28,8)));
        }
      }
      _err_print_error("texture_free_data","drivers/gles3/storage/utilities.h",0x90,
                       "Condition \"!texture_allocs_cache.has(p_id)\" is true.",0,0);
    }
LAB_0010208b:
    *(undefined4 *)(this + 0x1c0) = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderSceneBuffersGLES3::free_render_buffer_data() */

void __thiscall RenderSceneBuffersGLES3::free_render_buffer_data(RenderSceneBuffersGLES3 *this)

{
  _clear_msaa3d_buffers(this);
  _clear_intermediate_buffers(this);
  _clear_back_buffers(this);
  _clear_glow_buffers(this);
  return;
}



/* RenderSceneBuffersGLES3::~RenderSceneBuffersGLES3() */

void __thiscall RenderSceneBuffersGLES3::~RenderSceneBuffersGLES3(RenderSceneBuffersGLES3 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106668;
  _clear_msaa3d_buffers(this);
  _clear_intermediate_buffers(this);
  _clear_back_buffers(this);
  _clear_glow_buffers(this);
  if (*(long *)(this + 0x1d8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1d8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1d8);
      *(undefined8 *)(this + 0x1d8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00106508;
  Object::~Object((Object *)this);
  return;
}



/* RenderSceneBuffersGLES3::~RenderSceneBuffersGLES3() */

void __thiscall RenderSceneBuffersGLES3::~RenderSceneBuffersGLES3(RenderSceneBuffersGLES3 *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106668;
  _clear_msaa3d_buffers(this);
  _clear_intermediate_buffers(this);
  _clear_back_buffers(this);
  _clear_glow_buffers(this);
  if (*(long *)(this + 0x1d8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1d8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1d8);
      *(undefined8 *)(this + 0x1d8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00106508;
  Object::~Object((Object *)this);
  operator_delete(this,0x238);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::configure(RenderSceneBuffersConfiguration const*) */

void __thiscall
RenderSceneBuffersGLES3::configure
          (RenderSceneBuffersGLES3 *this,RenderSceneBuffersConfiguration *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar8 = 1;
  uVar7 = GLES3::TextureStorage::get_singleton();
  lVar3 = GLES3::Config::singleton;
  _clear_msaa3d_buffers(this);
  _clear_intermediate_buffers(this);
  _clear_back_buffers(this);
  _clear_glow_buffers(this);
  lVar1 = *(long *)(param_1 + 0x180);
  uVar6 = *(undefined4 *)(param_1 + 0x1a0);
  cVar4 = *(char *)(lVar3 + 0x88);
  *(undefined8 *)(this + 0x17c) = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(this + 0x184) = *(undefined8 *)(param_1 + 400);
  iVar5 = *(int *)(param_1 + 0x19c);
  *(long *)(this + 0x198) = lVar1;
  *(int *)(this + 0x18c) = iVar5;
  *(undefined4 *)(this + 0x1b0) = uVar6;
  if (cVar4 != '\0') {
    uVar8 = *(uint *)(param_1 + 0x198);
  }
  *(uint *)(this + 400) = uVar8;
  uVar2 = _UNK_001069a8;
  if (lVar1 == 0) {
    *(undefined8 *)(this + 0x1a0) = __LC9;
    *(undefined8 *)(this + 0x1a8) = uVar2;
  }
  else {
    uVar6 = GLES3::TextureStorage::render_target_get_color_internal_format
                      (uVar7,*(undefined8 *)(this + 0x198));
    *(undefined4 *)(this + 0x1a0) = uVar6;
    uVar6 = GLES3::TextureStorage::render_target_get_color_format
                      (uVar7,*(undefined8 *)(this + 0x198));
    *(undefined4 *)(this + 0x1a4) = uVar6;
    uVar6 = GLES3::TextureStorage::render_target_get_color_type(uVar7,*(undefined8 *)(this + 0x198))
    ;
    *(undefined4 *)(this + 0x1a8) = uVar6;
    uVar6 = GLES3::TextureStorage::render_target_get_color_format_size
                      (uVar7,*(undefined8 *)(this + 0x198));
    *(undefined4 *)(this + 0x1ac) = uVar6;
    iVar5 = *(int *)(this + 0x18c);
  }
  if (iVar5 == 0xff) goto LAB_001026d5;
  if ((*(int *)(this + 0x17c) == 0) && (*(int *)(this + 0x180) == 0)) {
    *(undefined4 *)(this + 0x18c) = 0xff;
    if (*(int *)(this + 0x1b0) == 0) {
      return;
    }
    goto LAB_00102772;
  }
  cVar4 = Vector2i::operator==((Vector2i *)(this + 0x17c),this + 0x184);
  if (cVar4 == '\0') {
    if ((*(int *)(this + 0x18c) == 0xff) || (*(int *)(this + 0x18c) == 0)) goto LAB_001026d5;
    if (configure(RenderSceneBuffersConfiguration_const*)::first_print != '\0') {
      _err_print_error("configure","drivers/gles3/storage/render_scene_buffers_gles3.cpp",0xad,
                       "GLES only supports bilinear scaling.",0,1);
      configure(RenderSceneBuffersConfiguration_const*)::first_print = '\0';
    }
    *(undefined4 *)(this + 0x18c) = 0;
    iVar5 = *(int *)(this + 0x1b0);
  }
  else {
    *(undefined4 *)(this + 0x18c) = 0xff;
LAB_001026d5:
    iVar5 = *(int *)(this + 0x1b0);
  }
  if (iVar5 == 0) {
    return;
  }
  if ((*(int *)(this + 0x17c) != 0) || (*(int *)(this + 0x180) != 0)) {
    if (uVar8 < 2) {
      if (*(char *)(lVar3 + 0x84) != '\0') {
        return;
      }
      if (*(char *)(lVar3 + 0x86) != '\0') {
        return;
      }
      if (configure(RenderSceneBuffersConfiguration_const*)::first_print != '\0') {
        _err_print_error("configure","drivers/gles3/storage/render_scene_buffers_gles3.cpp",0xb6,
                         "MSAA is not supported on this device.",0,1);
        configure(RenderSceneBuffersConfiguration_const*)::first_print = '\0';
      }
    }
    else {
      if (*(char *)(lVar3 + 0x85) != '\0') {
        return;
      }
      if (*(char *)(lVar3 + 0x87) != '\0') {
        return;
      }
      if (configure(RenderSceneBuffersConfiguration_const*)::first_print != '\0') {
        _err_print_error("configure","drivers/gles3/storage/render_scene_buffers_gles3.cpp",0xb9,
                         "Multiview MSAA is not supported on this device.",0,1);
        configure(RenderSceneBuffersConfiguration_const*)::first_print = '\0';
      }
    }
  }
LAB_00102772:
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::_check_render_buffers() */

void __thiscall RenderSceneBuffersGLES3::_check_render_buffers(RenderSceneBuffersGLES3 *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 extraout_RDX;
  undefined8 uVar10;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GLES3::TextureStorage::get_singleton();
  lVar3 = GLES3::Config::singleton;
  iVar7 = *(int *)(this + 400);
  if (iVar7 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_check_render_buffers",
                       "drivers/gles3/storage/render_scene_buffers_gles3.cpp",0xc4,
                       "Condition \"view_count == 0\" is true.",0,0);
      return;
    }
    goto LAB_00103199;
  }
  if (((*(int *)(this + 0x18c) == 0xff) && (this[0x194] == (RenderSceneBuffersGLES3)0x0)) ||
     (*(int *)(this + 0x1e0) != 0)) {
    iVar5 = *(int *)(this + 0x1b0);
    if ((iVar5 != 0) && (*(int *)(this + 0x1bc) == 0)) goto LAB_00102dd4;
  }
  else {
    if (iVar7 == 1) {
      uVar10 = 0xde1;
      (*_glad_glGenTextures)(1,this + 0x1e0);
      (*_glad_glBindTexture)(0xde1,*(undefined4 *)(this + 0x1e0));
      (*_glad_glTexImage2D)
                (0xde1,0,*(undefined4 *)(this + 0x1a0),*(undefined4 *)(this + 0x17c),
                 *(undefined4 *)(this + 0x180),0,*(undefined4 *)(this + 0x1a4),
                 *(undefined4 *)(this + 0x1a8),0);
    }
    else {
      uVar10 = 0x8c1a;
      (*_glad_glGenTextures)(1,this + 0x1e0);
      (*_glad_glBindTexture)(0x8c1a,*(undefined4 *)(this + 0x1e0));
      (*_glad_glTexImage3D)
                (0x8c1a,0,*(undefined4 *)(this + 0x1a0),*(undefined4 *)(this + 0x17c),
                 *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 400),0,
                 *(undefined4 *)(this + 0x1a4),*(undefined4 *)(this + 0x1a8),0);
    }
    (*_glad_glTexParameteri)(uVar10,0x2800,0x2600);
    (*_glad_glTexParameteri)(uVar10,0x2801,0x2600);
    (*_glad_glTexParameteri)(uVar10,0x2802,0x812f);
    (*_glad_glTexParameteri)(uVar10,0x2803,0x812f);
    lVar2 = GLES3::Utilities::singleton;
    local_70 = 0;
    local_68 = "3D color texture";
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_70);
    uVar9 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) *
            *(int *)(this + 400) * *(int *)(this + 0x1ac);
    local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x1e0));
    plVar1 = (long *)(lVar2 + 0x108);
    *plVar1 = *plVar1 + (ulong)uVar9;
    puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                     ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                   *)(lVar2 + 200),(uint *)&local_68);
    lVar2 = local_70;
    *puVar8 = uVar9;
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
    (*_glad_glGenTextures)(1,this + 0x1e4);
    (*_glad_glBindTexture)(uVar10,*(undefined4 *)(this + 0x1e4));
    if (iVar7 == 1) {
      (*_glad_glTexImage2D)
                (uVar10,0,0x81a6,*(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),0,
                 0x1902,0x1405,0);
    }
    else {
      (*_glad_glTexImage3D)
                (uVar10,0,0x81a6,*(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),
                 *(undefined4 *)(this + 400),0,0x1902,0x1405,0);
    }
    (*_glad_glTexParameteri)(uVar10,0x2800,0x2600);
    (*_glad_glTexParameteri)(uVar10,0x2801,0x2600);
    (*_glad_glTexParameteri)(uVar10,0x2802,0x812f);
    (*_glad_glTexParameteri)(uVar10,0x2803,0x812f);
    lVar2 = GLES3::Utilities::singleton;
    local_70 = 0;
    local_68 = "3D depth texture";
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_70);
    uVar9 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) * *(int *)(this + 400) * 3;
    local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x1e4));
    plVar1 = (long *)(lVar2 + 0x108);
    *plVar1 = *plVar1 + (ulong)uVar9;
    puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                     ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                   *)(lVar2 + 200),(uint *)&local_68);
    lVar2 = local_70;
    *puVar8 = uVar9;
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
    (*_glad_glGenFramebuffers)(1,this + 0x1e8);
    (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x1e8));
    if (iVar7 == 1) {
      (*_glad_glFramebufferTexture2D)(0x8d40,0x8ce0,uVar10,*(undefined4 *)(this + 0x1e0),0);
      (*_glad_glFramebufferTexture2D)(0x8d40,0x8d00,uVar10,*(undefined4 *)(this + 0x1e4),0);
    }
    else {
      (*_glad_glFramebufferTextureMultiviewOVR)
                (0x8d40,0x8ce0,*(undefined4 *)(this + 0x1e0),0,0,*(undefined4 *)(this + 400));
      (*_glad_glFramebufferTextureMultiviewOVR)
                (0x8d40,0x8d00,*(undefined4 *)(this + 0x1e4),0,0,*(undefined4 *)(this + 400));
    }
    iVar5 = (*_glad_glCheckFramebufferStatus)(0x8d40);
    if (iVar5 != 0x8cd5) {
      _clear_intermediate_buffers(this);
      if (iVar5 == 0x8cd6) {
        local_70 = 0;
        local_68 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
        local_60 = 0x24;
        String::parse_latin1((StrRange *)&local_70);
      }
      else if (iVar5 == 0x8cd7) {
        local_70 = 0;
        local_68 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
        local_60 = 0x2c;
        String::parse_latin1((StrRange *)&local_70);
      }
      else {
        if (iVar5 == 0x8cdb) {
          local_68 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
        }
        else {
          if (iVar5 != 0x8cdc) {
            itos((long)&local_70);
            goto LAB_00102cbb;
          }
          local_68 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
        }
        local_70 = 0;
        local_60 = 0x25;
        String::parse_latin1((StrRange *)&local_70);
      }
LAB_00102cbb:
      operator+((char *)&local_68,(String *)"Could not create 3D internal buffers, status: ");
      _err_print_error("_check_render_buffers",
                       "drivers/gles3/storage/render_scene_buffers_gles3.cpp",0x109,&local_68,0,1);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
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
    }
    (*_glad_glBindTexture)(uVar10,0);
    (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
    iVar5 = *(int *)(this + 0x1b0);
    if ((iVar5 == 0) || (*(int *)(this + 0x1bc) != 0)) {
      *(undefined4 *)(this + 0x1b8) = 1;
      this[0x1c8] = (RenderSceneBuffersGLES3)0x0;
    }
    else {
LAB_00102dd4:
      local_58 = __LC47;
      uStack_50 = _UNK_001069b8;
      iVar5 = *(int *)((long)&local_58 + (long)iVar5 * 4);
      *(int *)(this + 0x1b8) = iVar5;
      iVar6 = *(int *)(lVar3 + 0x80);
      if (iVar5 < *(int *)(lVar3 + 0x80)) {
        iVar6 = iVar5;
      }
      *(int *)(this + 0x1b8) = iVar6;
      if (iVar7 == 1) {
        if (*(char *)(lVar3 + 0x86) == '\0') {
          this[0x1b4] = (RenderSceneBuffersGLES3)0x1;
          this[0x1c8] = (RenderSceneBuffersGLES3)0x0;
          (*_glad_glGenRenderbuffers)(1,this + 0x1bc);
          (*_glad_glBindRenderbuffer)(0x8d41,*(undefined4 *)(this + 0x1bc));
          (*_glad_glRenderbufferStorageMultisample)
                    (0x8d41,*(undefined4 *)(this + 0x1b8),*(undefined4 *)(this + 0x1a0),
                     *(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180));
          lVar3 = GLES3::Utilities::singleton;
          local_68 = "MSAA 3D color render buffer";
          local_70 = 0;
          local_60 = 0x1b;
          String::parse_latin1((StrRange *)&local_70);
          local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x1bc));
          uVar9 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) *
                  *(int *)(this + 400) * *(int *)(this + 0x1b8) * 4;
          plVar1 = (long *)(lVar3 + 0x100);
          *plVar1 = *plVar1 + (ulong)uVar9;
          puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                           ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                         *)(lVar3 + 0x98),(uint *)&local_68);
          lVar3 = local_70;
          *puVar8 = uVar9;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          (*_glad_glGenRenderbuffers)(1,this + 0x1c0);
          (*_glad_glBindRenderbuffer)(0x8d41,*(undefined4 *)(this + 0x1c0));
          (*_glad_glRenderbufferStorageMultisample)
                    (0x8d41,*(undefined4 *)(this + 0x1b8),0x81a6,*(undefined4 *)(this + 0x17c),
                     *(undefined4 *)(this + 0x180));
          lVar3 = GLES3::Utilities::singleton;
          local_68 = "MSAA 3D depth render buffer";
          local_70 = 0;
          local_60 = 0x1b;
          String::parse_latin1((StrRange *)&local_70);
          uVar9 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) *
                  *(int *)(this + 400) * *(int *)(this + 0x1b8) * 3;
          local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x1c0));
          plVar1 = (long *)(lVar3 + 0x100);
          *plVar1 = *plVar1 + (ulong)uVar9;
          puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                           ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                         *)(lVar3 + 0x98),(uint *)&local_68);
          lVar3 = local_70;
          *puVar8 = uVar9;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          (*_glad_glGenFramebuffers)(1,this + 0x1c4);
          (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x1c4));
          (*_glad_glFramebufferRenderbuffer)(0x8d40,0x8ce0,0x8d41,*(undefined4 *)(this + 0x1bc));
          (*_glad_glFramebufferRenderbuffer)(0x8d40,0x8d00,0x8d41,*(undefined4 *)(this + 0x1c0));
          iVar7 = (*_glad_glCheckFramebufferStatus)(0x8d40);
          if (iVar7 != 0x8cd5) {
            _clear_msaa3d_buffers(this);
            *(undefined4 *)(this + 0x1b0) = 0;
            if (iVar7 == 0x8cd6) {
              local_70 = 0;
              local_68 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
              local_60 = 0x24;
              String::parse_latin1((StrRange *)&local_70);
            }
            else if (iVar7 == 0x8cd7) {
              local_70 = 0;
              local_68 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
              local_60 = 0x2c;
              String::parse_latin1((StrRange *)&local_70);
            }
            else {
              if (iVar7 == 0x8cdb) {
                local_68 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
              }
              else {
                if (iVar7 != 0x8cdc) {
                  itos((long)&local_70);
                  goto LAB_001034e3;
                }
                local_68 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
              }
              local_70 = 0;
              local_60 = 0x25;
              String::parse_latin1((StrRange *)&local_70);
            }
LAB_001034e3:
            operator+((char *)&local_68,(String *)"Could not create 3D MSAA buffers, status: ");
            _err_print_error("_check_render_buffers",
                             "drivers/gles3/storage/render_scene_buffers_gles3.cpp",0x13c,&local_68,
                             0,1);
            pcVar4 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar4 + -0x10,false);
              }
            }
            lVar3 = local_70;
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
          }
          (*_glad_glBindRenderbuffer)(0x8d41,0);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103591;
          goto LAB_00103199;
        }
      }
      else if (*(char *)(lVar3 + 0x87) == '\0') {
        this[0x1b4] = (RenderSceneBuffersGLES3)0x1;
        this[0x1c8] = (RenderSceneBuffersGLES3)0x0;
        (*_glad_glGenTextures)(1,this + 0x1bc);
        (*_glad_glBindTexture)(0x9102,*(undefined4 *)(this + 0x1bc));
        (*_glad_glTexImage3DMultisample)
                  (0x9102,*(undefined4 *)(this + 0x1b8),*(undefined4 *)(this + 0x1a0),
                   *(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180),
                   *(undefined4 *)(this + 400),1);
        lVar3 = GLES3::Utilities::singleton;
        local_68 = "MSAA 3D color texture";
        local_70 = 0;
        local_60 = 0x15;
        String::parse_latin1((StrRange *)&local_70);
        uVar9 = *(int *)(this + 400) * *(int *)(this + 0x1ac) * *(int *)(this + 0x1b8) *
                *(int *)(this + 0x17c) * *(int *)(this + 0x180);
        local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x1bc));
        plVar1 = (long *)(lVar3 + 0x108);
        *plVar1 = *plVar1 + (ulong)uVar9;
        puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                         ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                       *)(lVar3 + 200),(uint *)&local_68);
        lVar3 = local_70;
        *puVar8 = uVar9;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        (*_glad_glGenTextures)(1,this + 0x1c0);
        (*_glad_glBindTexture)(0x9102,*(undefined4 *)(this + 0x1c0));
        uVar10 = 1;
        (*_glad_glTexImage3DMultisample)
                  (0x9102,*(undefined4 *)(this + 0x1b8),0x81a6,*(undefined4 *)(this + 0x17c),
                   *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 400));
        lVar3 = GLES3::Utilities::singleton;
        local_68 = "MSAA 3D depth texture";
        local_70 = 0;
        local_60 = 0x15;
        String::parse_latin1((StrRange *)&local_70);
        uVar9 = *(int *)(this + 0x17c) * *(int *)(this + 0x180) *
                *(int *)(this + 400) * *(int *)(this + 0x1b8) * 3;
        local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(this + 0x1c0));
        plVar1 = (long *)(lVar3 + 0x108);
        *plVar1 = *plVar1 + (ulong)uVar9;
        puVar8 = (uint *)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                         ::operator[]((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>
                                       *)(lVar3 + 200),(uint *)&local_68);
        lVar3 = local_70;
        *puVar8 = uVar9;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
            uVar10 = extraout_RDX;
          }
        }
        (*_glad_glGenFramebuffers)(1,this + 0x1c4,uVar10);
        (*_glad_glBindFramebuffer)(0x8d40,*(undefined4 *)(this + 0x1c4));
        (*_glad_glFramebufferTextureMultiviewOVR)
                  (0x8d40,0x8ce0,*(undefined4 *)(this + 0x1bc),0,0,*(undefined4 *)(this + 400));
        (*_glad_glFramebufferTextureMultiviewOVR)
                  (0x8d40,0x8d00,*(undefined4 *)(this + 0x1c0),0,0,*(undefined4 *)(this + 400));
        iVar7 = (*_glad_glCheckFramebufferStatus)(0x8d40);
        if (iVar7 != 0x8cd5) {
          _clear_msaa3d_buffers(this);
          *(undefined4 *)(this + 0x1b0) = 0;
          if (iVar7 == 0x8cd6) {
            local_70 = 0;
            local_68 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
            local_60 = 0x24;
            String::parse_latin1((StrRange *)&local_70);
          }
          else if (iVar7 == 0x8cd7) {
            local_70 = 0;
            local_68 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
            local_60 = 0x2c;
            String::parse_latin1((StrRange *)&local_70);
          }
          else {
            if (iVar7 == 0x8cdb) {
              local_68 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
            }
            else {
              if (iVar7 != 0x8cdc) {
                itos((long)&local_70);
                goto LAB_001030e9;
              }
              local_68 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
            }
            local_70 = 0;
            local_60 = 0x25;
            String::parse_latin1((StrRange *)&local_70);
          }
LAB_001030e9:
          operator+((char *)&local_68,(String *)"Could not create 3D MSAA buffers, status: ");
          _err_print_error("_check_render_buffers",
                           "drivers/gles3/storage/render_scene_buffers_gles3.cpp",0x16a,&local_68,0,
                           1);
          pcVar4 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          lVar3 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
        }
        (*_glad_glBindTexture)(0x9102,0);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00103591:
                    /* WARNING: Could not recover jumptable at 0x001035aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
          return;
        }
        goto LAB_00103199;
      }
      if (_check_render_buffers()::first_print != '\0') {
        _err_print_error("_check_render_buffers",
                         "drivers/gles3/storage/render_scene_buffers_gles3.cpp",0x18e,
                         "MSAA is not supported on this device.",0,1);
        _check_render_buffers()::first_print = '\0';
      }
      *(undefined4 *)(this + 0x1b0) = 0;
      *(undefined4 *)(this + 0x1b8) = 1;
      this[0x1c8] = (RenderSceneBuffersGLES3)0x0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103199:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderSceneBuffersGLES3::get_render_fbo() */

int __thiscall RenderSceneBuffersGLES3::get_render_fbo(RenderSceneBuffersGLES3 *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = GLES3::TextureStorage::get_singleton();
  _check_render_buffers(this);
  if (this[0x1c8] == (RenderSceneBuffersGLES3)0x0) {
    if (*(int *)(this + 0x1c4) != 0) {
      return *(int *)(this + 0x1c4);
    }
    if (*(int *)(this + 0x1e8) != 0) {
      return *(int *)(this + 0x1e8);
    }
    iVar2 = GLES3::TextureStorage::render_target_get_fbo(uVar5,*(undefined8 *)(this + 0x198));
  }
  else {
    GLES3::TextureStorage::render_target_get_color(uVar5,*(undefined8 *)(this + 0x198));
    GLES3::TextureStorage::render_target_get_depth(uVar5,*(undefined8 *)(this + 0x198));
    iVar2 = GLES3::TextureStorage::render_target_get_fbo(uVar5,*(undefined8 *)(this + 0x198));
  }
  cVar1 = GLES3::TextureStorage::render_target_is_reattach_textures
                    (uVar5,*(undefined8 *)(this + 0x198));
  if (cVar1 == '\0') {
    return iVar2;
  }
  uVar3 = GLES3::TextureStorage::render_target_get_color(uVar5,*(undefined8 *)(this + 0x198));
  uVar4 = GLES3::TextureStorage::render_target_get_depth(uVar5,*(undefined8 *)(this + 0x198));
  (*_glad_glBindFramebuffer)(0x8d40,iVar2);
  _rt_attach_textures(this,uVar3,uVar4,*(int *)(this + 0x1b8),*(uint *)(this + 400));
  (*_glad_glBindFramebuffer)(0x8d40,(undefined4)GLES3::TextureStorage::system_fbo);
  return iVar2;
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
  return (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RenderSceneBuffersGLES3::is_class_ptr(void*) const */

uint __thiscall RenderSceneBuffersGLES3::is_class_ptr(RenderSceneBuffersGLES3 *this,void *param_1)

{
  return (uint)CONCAT71(0x1067,(undefined4 *)param_1 ==
                               &RenderSceneBuffers::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1067,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RenderSceneBuffersGLES3::_getv(StringName const&, Variant&) const */

undefined8 RenderSceneBuffersGLES3::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneBuffersGLES3::_setv(StringName const&, Variant const&) */

undefined8 RenderSceneBuffersGLES3::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneBuffersGLES3::_validate_propertyv(PropertyInfo&) const */

void RenderSceneBuffersGLES3::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RenderSceneBuffersGLES3::_property_can_revertv(StringName const&) const */

undefined8 RenderSceneBuffersGLES3::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RenderSceneBuffersGLES3::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RenderSceneBuffersGLES3::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RenderSceneBuffersGLES3::_notificationv(int, bool) */

void RenderSceneBuffersGLES3::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RenderSceneBuffersGLES3::set_anisotropic_filtering_level(RenderingServer::ViewportAnisotropicFiltering)
    */

void RenderSceneBuffersGLES3::set_anisotropic_filtering_level(void)

{
  return;
}



/* RenderSceneBuffersGLES3::set_fsr_sharpness(float) */

void RenderSceneBuffersGLES3::set_fsr_sharpness(float param_1)

{
  return;
}



/* RenderSceneBuffersGLES3::set_texture_mipmap_bias(float) */

void RenderSceneBuffersGLES3::set_texture_mipmap_bias(float param_1)

{
  return;
}



/* RenderSceneBuffersGLES3::set_use_debanding(bool) */

void RenderSceneBuffersGLES3::set_use_debanding(bool param_1)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106508;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106508;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<RenderSceneBuffersGLES3::FBDEF>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderSceneBuffersGLES3::FBDEF>::_copy_on_write(void)

{
  code *pcVar1;
  
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
LAB_00103e33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103e33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00103e9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00103e9e:
  return &_get_class_namev()::_class_name_static;
}



/* RenderSceneBuffersGLES3::_get_class_namev() const */

undefined8 * RenderSceneBuffersGLES3::_get_class_namev(void)

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
LAB_00103f23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103f23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneBuffersGLES3");
      goto LAB_00103f8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RenderSceneBuffersGLES3");
LAB_00103f8e:
  return &_get_class_namev()::_class_name_static;
}



/* RenderSceneBuffersGLES3::get_class() const */

void RenderSceneBuffersGLES3::get_class(void)

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
            if (lVar5 == 0) goto LAB_001041ef;
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
LAB_001041ef:
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
    if (cVar6 != '\0') goto LAB_001042a3;
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
              if (lVar5 == 0) goto LAB_00104353;
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
LAB_00104353:
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
      if (cVar6 != '\0') goto LAB_001042a3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001042a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderSceneBuffersGLES3::is_class(String const&) const */

undefined8 __thiscall
RenderSceneBuffersGLES3::is_class(RenderSceneBuffersGLES3 *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010448f;
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
LAB_0010448f:
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
    if (cVar6 != '\0') goto LAB_00104543;
  }
  cVar6 = String::operator==(param_1,"RenderSceneBuffersGLES3");
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
              if (lVar5 == 0) goto LAB_00104603;
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
LAB_00104603:
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
      if (cVar6 != '\0') goto LAB_00104543;
    }
    cVar6 = String::operator==(param_1,"RenderSceneBuffers");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001046ac;
    }
  }
LAB_00104543:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001046ac:
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
LAB_001049c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001049c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001049e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001049e6:
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



/* RenderSceneBuffersGLES3::_initialize_classv() */

void RenderSceneBuffersGLES3::_initialize_classv(void)

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
    if (RenderSceneBuffers::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00109010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RenderSceneBuffers";
      local_70 = 0;
      local_50 = 0x12;
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
      if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
        RenderSceneBuffers::_bind_methods();
      }
      RenderSceneBuffers::initialize_class()::initialized = '\x01';
    }
    local_58 = "RenderSceneBuffers";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RenderSceneBuffersGLES3";
    local_70 = 0;
    local_50 = 0x17;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderSceneBuffers::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
RenderSceneBuffers::_get_property_listv(RenderSceneBuffers *this,List *param_1,bool param_2)

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
  local_78 = "RenderSceneBuffers";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneBuffers";
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
LAB_001051e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001051e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105205;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105205:
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
  StringName::StringName((StringName *)&local_78,"RenderSceneBuffers",false);
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



/* RenderSceneBuffersGLES3::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
RenderSceneBuffersGLES3::_get_property_listv
          (RenderSceneBuffersGLES3 *this,List *param_1,bool param_2)

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
    RenderSceneBuffers::_get_property_listv((RenderSceneBuffers *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RenderSceneBuffersGLES3";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderSceneBuffersGLES3";
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
LAB_00105638:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105638;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105655;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105655:
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
  StringName::StringName((StringName *)&local_78,"RenderSceneBuffersGLES3",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderSceneBuffers::_get_property_listv((RenderSceneBuffers *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    lStack_90 = 0x10630b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00105e73;
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
        lStack_90 = 0x106354;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_001061f3;
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
LAB_001061f3:
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
            goto LAB_001061d4;
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
LAB_00105e73:
  if ((float)uVar51 * __LC15 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001061d4;
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
LAB_001061d4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
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


