
/* GodotBroadPhase2DBVH::_pair_callback(void*, unsigned int, GodotCollisionObject2D*, int, unsigned
   int, GodotCollisionObject2D*, int) */

undefined8
GodotBroadPhase2DBVH::_pair_callback
          (void *param_1,uint param_2,GodotCollisionObject2D *param_3,int param_4,uint param_5,
          GodotCollisionObject2D *param_6,int param_7)

{
  undefined8 uVar1;
  
  if (*(code **)((long)param_1 + 0x188) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((long)param_1 + 0x188))
                      (param_3,param_4,param_6,param_7,*(undefined8 *)((long)param_1 + 400));
    return uVar1;
  }
  return 0;
}



/* GodotBroadPhase2DBVH::_unpair_callback(void*, unsigned int, GodotCollisionObject2D*, int,
   unsigned int, GodotCollisionObject2D*, int, void*) */

void GodotBroadPhase2DBVH::_unpair_callback
               (void *param_1,uint param_2,GodotCollisionObject2D *param_3,int param_4,uint param_5,
               GodotCollisionObject2D *param_6,int param_7,void *param_8)

{
  if (*(code **)((long)param_1 + 0x198) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010006b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)param_1 + 0x198))
              (param_3,param_4,param_6,param_7,param_8,*(undefined8 *)((long)param_1 + 0x1a0));
    return;
  }
  return;
}



/* GodotBroadPhase2DBVH::set_pair_callback(void* (*)(GodotCollisionObject2D*, int,
   GodotCollisionObject2D*, int, void*), void*) */

void __thiscall
GodotBroadPhase2DBVH::set_pair_callback
          (GodotBroadPhase2DBVH *this,
          _func_void_ptr_GodotCollisionObject2D_ptr_int_GodotCollisionObject2D_ptr_int_void_ptr
          *param_1,void *param_2)

{
  *(_func_void_ptr_GodotCollisionObject2D_ptr_int_GodotCollisionObject2D_ptr_int_void_ptr **)
   (this + 0x188) = param_1;
  *(void **)(this + 400) = param_2;
  return;
}



/* GodotBroadPhase2DBVH::set_unpair_callback(void (*)(GodotCollisionObject2D*, int,
   GodotCollisionObject2D*, int, void*, void*), void*) */

void __thiscall
GodotBroadPhase2DBVH::set_unpair_callback
          (GodotBroadPhase2DBVH *this,
          _func_void_GodotCollisionObject2D_ptr_int_GodotCollisionObject2D_ptr_int_void_ptr_void_ptr
          *param_1,void *param_2)

{
  *(_func_void_GodotCollisionObject2D_ptr_int_GodotCollisionObject2D_ptr_int_void_ptr_void_ptr **)
   (this + 0x198) = param_1;
  *(void **)(this + 0x1a0) = param_2;
  return;
}



/* LocalVector<BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::_cull_aabb_iterative(unsigned int, BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::CullParams&, bool)::CullAABBParams, unsigned int, false, false>::resize(unsigned int)
   [clone .part.0] */

void LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
     ::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotBroadPhase2DBVH::get_subindex(unsigned int) const */

undefined4 __thiscall GodotBroadPhase2DBVH::get_subindex(GodotBroadPhase2DBVH *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    _err_print_error("get_subindex","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x48,
                     "Condition \"!p_id\" is true. Returning: 0",0,0);
    return 0;
  }
  uVar2 = param_1 - 1;
  if (uVar2 < *(uint *)(this + 0x60)) {
    return *(undefined4 *)((ulong)uVar2 * 0x20 + *(long *)(this + 0x68) + 0xc);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar2,
             (ulong)*(uint *)(this + 0x60),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotBroadPhase2DBVH::is_static(unsigned int) const */

undefined4 __thiscall GodotBroadPhase2DBVH::is_static(GodotBroadPhase2DBVH *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    _err_print_error("is_static","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x42,
                     "Condition \"!p_id\" is true. Returning: false",0,0);
    return 0;
  }
  uVar3 = param_1 - 1;
  if (uVar3 < *(uint *)(this + 0x60)) {
    iVar1 = *(int *)((ulong)uVar3 * 0x20 + *(long *)(this + 0x68));
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar3,
             (ulong)*(uint *)(this + 0x60),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GodotBroadPhase2DBVH::get_object(unsigned int) const */

long __thiscall GodotBroadPhase2DBVH::get_object(GodotBroadPhase2DBVH *this,uint param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    _err_print_error("get_object","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x3b,
                     "Condition \"!p_id\" is true. Returning: nullptr",0,0);
    return 0;
  }
  uVar3 = param_1 - 1;
  if (uVar3 < *(uint *)(this + 0x60)) {
    lVar1 = *(long *)((ulong)uVar3 * 0x20 + *(long *)(this + 0x68) + 0x10);
    if (lVar1 == 0) {
      _err_print_error("get_object","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x3d,
                       "Parameter \"it\" is null.",0,0);
    }
    return lVar1;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar3,
             (ulong)*(uint *)(this + 0x60),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* BVH_Manager<GodotCollisionObject2D, 2, true, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, Rect2, Vector2,
   true>::_add_changed_item(BVHHandle, Rect2 const&, bool) [clone .isra.0] */

void BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
     ::_add_changed_item(long param_1,uint param_2)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  uint uVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  uVar12 = (ulong)param_2;
  uVar13 = (ulong)*(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x80) <= param_2) goto LAB_0010044b;
  uVar10 = *(uint *)(param_1 + 0x30);
  uVar7 = (ulong)param_2;
  if (param_2 < uVar10) {
    uVar13 = (ulong)*(uint *)(param_1 + 0xa8);
    puVar1 = (uint *)(*(long *)(param_1 + 0x38) + uVar7 * 8);
    uVar10 = *puVar1;
    uVar12 = (ulong)uVar10;
    if (*(uint *)(param_1 + 0xa8) <= uVar10) goto LAB_0010044b;
    uVar13 = (ulong)*(uint *)(param_1 + 0xd0);
    uVar10 = -*(int *)(uVar12 * 0x20 + *(long *)(param_1 + 0xb0) + 0x10);
    uVar12 = (ulong)uVar10;
    if (*(uint *)(param_1 + 0xd0) <= uVar10) goto LAB_0010044b;
    pfVar11 = (float *)((ulong)puVar1[1] * 0x10 + 0x204 + uVar12 * 0xa04 + *(long *)(param_1 + 0xd8)
                       );
    fVar3 = *pfVar11;
    fVar4 = pfVar11[1];
    fVar6 = pfVar11[1];
    fVar14 = (float)((uint)pfVar11[2] ^ _LC16);
    fVar15 = (float)((uint)pfVar11[3] ^ _LC16);
    pfVar2 = (float *)(*(long *)(param_1 + 0x88) + uVar7 * 0x28);
    *pfVar2 = *pfVar11;
    pfVar2[1] = fVar6;
    pfVar2[2] = fVar14 - fVar3;
    pfVar2[3] = fVar15 - fVar4;
    uVar10 = *(uint *)(param_1 + 0x58);
    if (param_2 < uVar10) {
      lVar8 = uVar7 * 0x20 + *(long *)(param_1 + 0x60);
      if (*(int *)(lVar8 + 8) != *(int *)(param_1 + 0x148)) {
        *(int *)(lVar8 + 8) = *(int *)(param_1 + 0x148);
        uVar10 = *(uint *)(param_1 + 0x138);
        pvVar9 = *(void **)(param_1 + 0x140);
        if (uVar10 == *(uint *)(param_1 + 0x13c)) {
          uVar12 = (ulong)(uVar10 * 2);
          if (uVar10 * 2 == 0) {
            uVar12 = 1;
          }
          *(int *)(param_1 + 0x13c) = (int)uVar12;
          pvVar9 = (void *)Memory::realloc_static(pvVar9,uVar12 * 4,false);
          *(void **)(param_1 + 0x140) = pvVar9;
          if (pvVar9 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar10 = *(uint *)(param_1 + 0x138);
        }
        *(uint *)(param_1 + 0x138) = uVar10 + 1;
        *(uint *)((long)pvVar9 + (ulong)uVar10 * 4) = param_2;
      }
      return;
    }
  }
  uVar13 = (ulong)uVar10;
  uVar12 = uVar7;
LAB_0010044b:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar12,uVar13,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* WARNING: Removing unreachable block (ram,0x0010052b) */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::_cull_segment_iterative(unsigned int, BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::CullParams&) [clone .isra.0] */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::_cull_segment_iterative
          (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
           *this,uint param_1,CullParams *param_2)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  void *pvVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  CullParams *pCVar17;
  long lVar18;
  ushort *puVar19;
  long in_FS_OFFSET;
  byte bVar20;
  uint auStack_2a0 [131];
  uint local_94;
  uint local_90;
  int local_8c;
  uint *local_88;
  uint local_80;
  int local_7c;
  uint *local_78;
  CullParams *local_70;
  Vector2 *local_68;
  Vector2 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  bVar20 = 0;
  uVar9 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = 0;
  uVar12 = (ulong)*(uint *)(this + 0x78);
  local_88 = (uint *)0x0;
  pCVar17 = param_2 + 0x60;
  local_78 = auStack_2a0;
  local_80 = 0;
  local_90 = 0;
  local_7c = 0x7e;
  local_70 = param_2;
  auStack_2a0[0] = param_1;
  if (param_1 < *(uint *)(this + 0x78)) {
    do {
      lVar13 = uVar9 * 0x20 + *(long *)(this + 0x80);
      iVar2 = *(int *)(lVar13 + 0x10);
      if (iVar2 < 0) {
        if (*(int *)(local_70 + 8) <= *(int *)(this + 0xe0)) goto LAB_001007f4;
        uVar12 = (ulong)*(uint *)(this + 0xa0);
        uVar5 = -iVar2;
        if (*(uint *)(this + 0xa0) <= uVar5) {
          uVar9 = (ulong)uVar5;
          break;
        }
        puVar7 = (ushort *)((long)(int)uVar5 * 0xa04 + *(long *)(this + 0xa8));
        if (*puVar7 != 0) {
          puVar19 = puVar7 + 0x102;
          lVar13 = 0;
          local_68 = (Vector2 *)(local_70 + 0x68);
          local_60 = (Vector2 *)&local_58;
          local_8c = iVar16;
          do {
            while( true ) {
              local_58 = *(undefined8 *)puVar19;
              local_50 = CONCAT44((float)((uint)((ulong)*(undefined8 *)(puVar19 + 4) >> 0x20) ^
                                         _LC18._4_4_) -
                                  (float)((ulong)*(undefined8 *)puVar19 >> 0x20),
                                  (float)((uint)*(undefined8 *)(puVar19 + 4) ^ (uint)_LC18) -
                                  (float)*(undefined8 *)puVar19);
              cVar4 = Rect2::intersects_segment(local_60,(Vector2 *)pCVar17,local_68,(Vector2 *)0x0)
              ;
              if (cVar4 == '\0') break;
              uVar5 = *(uint *)(puVar7 + lVar13 * 2 + 2);
              uVar9 = (ulong)uVar5;
              uVar12 = (ulong)*(uint *)(this + 0x28);
              if (*(uint *)(this + 0x28) <= uVar5) goto LAB_00100650;
              uVar14 = *(uint *)(this + 0xe0);
              pvVar10 = *(void **)(this + 0xe8);
              if (uVar14 == *(uint *)(this + 0xe4)) {
                uVar9 = (ulong)(uVar14 * 2);
                if (uVar14 * 2 == 0) {
                  uVar9 = 1;
                }
                *(int *)(this + 0xe4) = (int)uVar9;
                local_94 = uVar5;
                pvVar10 = (void *)Memory::realloc_static(pvVar10,uVar9 * 4,false);
                *(void **)(this + 0xe8) = pvVar10;
                if (pvVar10 == (void *)0x0) goto LAB_001009e0;
                uVar14 = *(uint *)(this + 0xe0);
                uVar5 = local_94;
              }
              lVar13 = lVar13 + 1;
              puVar19 = puVar19 + 8;
              *(uint *)(this + 0xe0) = uVar14 + 1;
              *(uint *)((long)pvVar10 + (ulong)uVar14 * 4) = uVar5;
              iVar16 = local_8c;
              if ((int)(uint)*puVar7 <= (int)lVar13) goto joined_r0x001007ee;
            }
            lVar13 = lVar13 + 1;
            puVar19 = puVar19 + 8;
            iVar16 = local_8c;
          } while ((int)lVar13 < (int)(uint)*puVar7);
        }
      }
      else {
        lVar18 = 0;
        if (iVar2 != 0) {
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x18);
          local_60 = (Vector2 *)pCVar17;
          if ((uint)*(ushort *)(lVar13 + 0x18) < (uint)uVar12) {
            do {
              puVar6 = (undefined8 *)(uVar9 * 0x20 + *(long *)(this + 0x80));
              local_58 = *puVar6;
              local_50 = CONCAT44((float)((uint)((ulong)puVar6[1] >> 0x20) ^ _LC18._4_4_) -
                                  (float)((ulong)*puVar6 >> 0x20),
                                  (float)((uint)puVar6[1] ^ (uint)_LC18) - (float)*puVar6);
              cVar4 = Rect2::intersects_segment
                                ((Vector2 *)&local_58,local_60,(Vector2 *)(local_70 + 0x68),
                                 (Vector2 *)0x0);
              if (cVar4 != '\0') {
                if (local_7c < iVar16) {
                  if (local_80 == 0) {
                    if (local_90 < 0x100) {
                      puVar11 = (uint *)Memory::realloc_static(local_88,0x400,false);
                      uVar14 = (uint)local_88;
                      local_88 = puVar11;
                      if (puVar11 == (uint *)0x0) {
LAB_001009d3:
                        LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
                        ::resize(uVar14);
LAB_001009e0:
                        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                         "FATAL: Condition \"!data\" is true.","Out of memory",0);
                        _err_flush_stdout();
                    /* WARNING: Does not return */
                        pcVar3 = (code *)invalidInstructionException();
                        (*pcVar3)();
                      }
                      local_90 = 0x100;
                    }
                    *(undefined8 *)local_88 = *(undefined8 *)local_78;
                    *(undefined8 *)(local_88 + 0x7e) = *(undefined8 *)(local_78 + 0x7e);
                    lVar8 = (long)local_88 - (long)((ulong)(local_88 + 2) & 0xfffffffffffffff8);
                    puVar6 = (undefined8 *)((long)local_78 - lVar8);
                    puVar15 = (undefined8 *)((ulong)(local_88 + 2) & 0xfffffffffffffff8);
                    for (uVar12 = (ulong)((int)lVar8 + 0x200U >> 3); uVar12 != 0;
                        uVar12 = uVar12 - 1) {
                      *puVar15 = *puVar6;
                      puVar6 = puVar6 + (ulong)bVar20 * -2 + 1;
                      puVar15 = puVar15 + (ulong)bVar20 * -2 + 1;
                    }
                    local_78 = local_88;
                    local_7c = 0xfe;
                    local_80 = 0x100;
                  }
                  else {
                    uVar5 = local_80 * 2;
                    if (local_80 <= uVar5) {
                      if (uVar5 <= local_80) {
                        local_7c = local_80 - 2;
                        local_78 = local_88;
                        goto LAB_0010089f;
                      }
                      if (local_90 < uVar5) {
                        local_68 = (Vector2 *)CONCAT44(local_68._4_4_,uVar5);
                        uVar5 = uVar5 - 1 | uVar5 - 1 >> 1;
                        uVar5 = uVar5 >> 2 | uVar5;
                        uVar5 = uVar5 >> 4 | uVar5;
                        uVar5 = uVar5 | uVar5 >> 8;
                        local_90 = (uVar5 | uVar5 >> 0x10) + 1;
                        puVar11 = (uint *)Memory::realloc_static
                                                    (local_88,(ulong)local_90 << 2,false);
                        uVar14 = (uint)local_88;
                        uVar5 = (uint)local_68;
                        local_88 = puVar11;
                        if (puVar11 == (uint *)0x0) goto LAB_001009d3;
                      }
                    }
                    local_7c = uVar5 - 2;
                    local_78 = local_88;
                    local_80 = uVar5;
                  }
                }
LAB_0010089f:
                lVar8 = (long)iVar16;
                iVar16 = iVar16 + 1;
                local_78[lVar8] = (uint)uVar9;
              }
              lVar18 = lVar18 + 1;
              pCVar17 = (CullParams *)local_60;
              if (*(int *)(lVar13 + 0x10) <= (int)lVar18) goto joined_r0x001007ee;
              uVar1 = *(ushort *)(lVar13 + 0x18 + lVar18 * 2);
              uVar9 = (ulong)uVar1;
              uVar12 = (ulong)*(uint *)(this + 0x78);
              if (*(uint *)(this + 0x78) <= (uint)uVar1) break;
            } while( true );
          }
          break;
        }
      }
joined_r0x001007ee:
      if (iVar16 == 0) {
LAB_001007f4:
        if (local_88 != (uint *)0x0) {
          Memory::free_static(local_88,false);
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      iVar16 = iVar16 + -1;
      uVar12 = (ulong)*(uint *)(this + 0x78);
      uVar9 = (ulong)local_78[iVar16];
    } while (local_78[iVar16] < *(uint *)(this + 0x78));
  }
LAB_00100650:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,uVar12,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GodotBroadPhase2DBVH::cull_segment(Vector2 const&, Vector2 const&, GodotCollisionObject2D**, int,
   int*) */

int __thiscall
GodotBroadPhase2DBVH::cull_segment
          (GodotBroadPhase2DBVH *this,Vector2 *param_1,Vector2 *param_2,
          GodotCollisionObject2D **param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint extraout_EDX;
  pthread_mutex_t *__mutex;
  int iVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_b8;
  uint local_b4;
  int local_b0;
  GodotCollisionObject2D **local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] != (GodotBroadPhase2DBVH)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar7 = pthread_mutex_lock(__mutex);
    if (iVar7 != 0) {
      std::__throw_system_error(iVar7);
      uVar8 = extraout_EDX;
      goto LAB_00100c64;
    }
  }
  local_58 = *(undefined8 *)param_1;
  local_90 = 0;
  local_50 = *(undefined8 *)param_2;
  local_88 = 0;
  local_80 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_48 = 0xffffffff;
  if (*(int *)(this + 0x118) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  local_b4 = 0;
  local_b0 = param_4;
  local_a8 = param_3;
  local_a0 = param_5;
  if (*(uint *)(this + 0x128) == 0xffffffff) {
    uVar8 = *(uint *)(this + 300);
    if (uVar8 != 0xffffffff) goto LAB_00100c04;
  }
  else {
    BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
    ::_cull_segment_iterative
              ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                *)(this + 0x38),*(uint *)(this + 0x128),(CullParams *)&local_b8);
    uVar8 = *(uint *)(this + 300);
    if ((uVar8 != 0xffffffff) && ((local_48 & 2) != 0)) {
LAB_00100c04:
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::_cull_segment_iterative
                ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                  *)(this + 0x38),uVar8,(CullParams *)&local_b8);
    }
  }
  uVar1 = *(uint *)(this + 0x118);
  uVar8 = local_b0 - local_b8;
  if ((int)uVar1 < local_b0 - local_b8) {
    uVar8 = uVar1;
  }
  if (0 < (int)uVar8) {
    uVar4 = 0;
    uVar6 = uVar4;
    if (uVar1 != 0) {
      do {
        uVar1 = *(uint *)(this + 0x60);
        uVar2 = *(uint *)(*(long *)(this + 0x120) + uVar4 * 4);
        uVar6 = (ulong)uVar2;
        if (uVar1 <= uVar2) break;
        lVar5 = (ulong)uVar2 * 0x20 + *(long *)(this + 0x68);
        local_a8[(long)local_b8 + uVar4] = *(GodotCollisionObject2D **)(lVar5 + 0x10);
        if (local_a0 != (int *)0x0) {
          local_a0[(long)local_b8 + uVar4] = *(int *)(lVar5 + 0xc);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)uVar8 == uVar4) goto LAB_00100c64;
        uVar1 = *(uint *)(this + 0x118);
        uVar6 = uVar4;
      } while ((uint)uVar4 < uVar1);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,(ulong)uVar1,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_00100c64:
  iVar7 = local_b8 + uVar8;
  local_b8 = iVar7;
  local_b4 = uVar8;
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* WARNING: Removing unreachable block (ram,0x00100cde) */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::_cull_aabb_iterative(unsigned int, BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::CullParams&, bool) [clone .isra.0] */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::_cull_aabb_iterative
          (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
           *this,uint param_1,CullParams *param_2,bool param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  float *pfVar7;
  void *pvVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined1 uVar18;
  ulong uVar19;
  uint *puVar20;
  ushort *puVar21;
  uint uVar22;
  uint *puVar24;
  int iVar25;
  uint *puVar26;
  long in_FS_OFFSET;
  byte bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uStack_4a0;
  undefined1 uStack_49c;
  uint local_90;
  uint local_8c;
  long local_88;
  ushort *local_80;
  CullParams *local_78;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  int local_50;
  uint local_4c;
  long local_40;
  uint uVar23;
  
  bVar27 = 0;
  uVar11 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar17 = (uint *)0x0;
  iVar12 = 0x7e;
  iVar25 = 0;
  uVar4 = 0;
  local_4c = 0;
  puVar26 = &uStack_4a0;
  uStack_4a0 = param_1;
  uStack_49c = param_3;
  do {
    uVar19 = (ulong)*(uint *)(this + 0x78);
    puVar24 = (uint *)((long)iVar25 * 8);
    if (*(uint *)(this + 0x78) <= (uint)uVar11) {
LAB_0010109a:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar19,"p_index","count"
                 ,"",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puVar5 = (uint *)(uVar11 * 0x20 + *(long *)(this + 0x80));
    uVar10 = puVar5[4];
    uVar11 = (ulong)uVar10;
    if ((int)uVar10 < 0) {
      if (*(int *)(param_2 + 8) <= *(int *)(this + 0xe0)) goto LAB_00100f48;
      uVar19 = (ulong)*(uint *)(this + 0xa0);
      uVar10 = -uVar10;
      if (*(uint *)(this + 0xa0) <= uVar10) {
        uVar11 = (ulong)uVar10;
        goto LAB_0010109a;
      }
      puVar21 = (ushort *)((long)(int)uVar10 * 0xa04 + *(long *)(this + 0xa8));
      uVar1 = *puVar21;
      if ((char)(puVar26 + 1)[(long)iVar25 * 2] == '\0') {
        fVar29 = (float)(*(uint *)(param_2 + 0x3c) ^ _LC16);
        fVar28 = (float)(*(uint *)(param_2 + 0x38) ^ _LC16);
        fVar31 = (float)(*(uint *)(param_2 + 0x34) ^ _LC16);
        fVar30 = (float)(*(uint *)(param_2 + 0x30) ^ _LC16);
        if (uVar1 != 0) {
          lVar6 = (ulong)uVar1 << 2;
          lVar13 = 0;
          local_58 = puVar17;
          do {
            if (((*(float *)(puVar21 + lVar13 * 2 + 0x102) <= fVar28) &&
                (*(float *)(puVar21 + lVar13 * 2 + 0x104) <= fVar29)) &&
               ((*(float *)(puVar21 + lVar13 * 2 + 0x106) <= fVar30 &&
                (*(float *)(puVar21 + lVar13 * 2 + 0x108) <= fVar31)))) {
              uVar10 = *(uint *)((long)puVar21 + lVar13 + 4);
              if (*(uint *)(this + 0x28) <= uVar10) {
                uVar19 = (ulong)*(uint *)(this + 0x28);
                uVar11 = (ulong)uVar10;
                goto LAB_0010109a;
              }
              uVar22 = *(uint *)(this + 0xe0);
              pvVar8 = *(void **)(this + 0xe8);
              if (uVar22 == *(uint *)(this + 0xe4)) {
                uVar11 = (ulong)(uVar22 * 2);
                if (uVar22 * 2 == 0) {
                  uVar11 = 1;
                }
                *(int *)(this + 0xe4) = (int)uVar11;
                local_78 = (CullParams *)CONCAT44(local_78._4_4_,fVar30);
                local_70 = (uint *)CONCAT44(local_70._4_4_,fVar31);
                local_68 = (uint *)CONCAT44(local_68._4_4_,fVar28);
                local_60 = (uint *)CONCAT44(local_60._4_4_,fVar29);
                local_90 = uVar10;
                local_8c = uVar4;
                local_88 = lVar6;
                local_80 = puVar21;
                local_50 = iVar12;
                pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar11 * 4,false);
                *(void **)(this + 0xe8) = pvVar8;
                if (pvVar8 == (void *)0x0) {
LAB_0010140d:
                  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                uVar22 = *(uint *)(this + 0xe0);
                lVar6 = local_88;
                puVar21 = local_80;
                fVar28 = local_68._0_4_;
                fVar29 = local_60._0_4_;
                fVar30 = local_78._0_4_;
                fVar31 = local_70._0_4_;
                uVar10 = local_90;
                iVar12 = local_50;
                uVar4 = local_8c;
              }
              *(uint *)(this + 0xe0) = uVar22 + 1;
              *(uint *)((long)pvVar8 + (ulong)uVar22 * 4) = uVar10;
            }
            lVar13 = lVar13 + 4;
            puVar17 = local_58;
          } while (lVar6 != lVar13);
        }
      }
      else if (uVar1 != 0) {
        lVar6 = 0;
        do {
          uVar10 = *(uint *)(puVar21 + lVar6 * 2 + 2);
          if (*(uint *)(this + 0x28) <= uVar10) {
            uVar11 = (ulong)uVar10;
            uVar19 = (ulong)*(uint *)(this + 0x28);
            goto LAB_0010109a;
          }
          uVar22 = *(uint *)(this + 0xe0);
          pvVar8 = *(void **)(this + 0xe8);
          if (uVar22 == *(uint *)(this + 0xe4)) {
            uVar11 = (ulong)(uVar22 * 2);
            if (uVar22 * 2 == 0) {
              uVar11 = 1;
            }
            local_70 = (uint *)CONCAT44(local_70._4_4_,uVar4);
            *(int *)(this + 0xe4) = (int)uVar11;
            local_60 = (uint *)CONCAT44(local_60._4_4_,iVar25);
            local_58 = (uint *)CONCAT44(local_58._4_4_,iVar12);
            local_78 = param_2;
            local_68 = puVar17;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar11 * 4,false);
            *(void **)(this + 0xe8) = pvVar8;
            if (pvVar8 == (void *)0x0) goto LAB_0010140d;
            uVar22 = *(uint *)(this + 0xe0);
            puVar17 = local_68;
            param_2 = local_78;
            iVar12 = (uint)local_58;
            uVar4 = (uint)local_70._0_4_;
            iVar25 = (int)local_60._0_4_;
          }
          lVar6 = lVar6 + 1;
          *(uint *)(this + 0xe0) = uVar22 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar22 * 4) = uVar10;
        } while ((int)lVar6 < (int)(uint)*puVar21);
      }
    }
    else if ((char)(puVar26 + 1)[(long)iVar25 * 2] == '\0') {
      if (uVar10 != 0) {
        uVar14 = 0;
        uVar10 = _LC16;
        do {
          uVar1 = *(ushort *)((long)puVar5 + uVar14 * 2 + 0x18);
          uVar11 = (ulong)uVar1;
          uVar23 = (uint)uVar1;
          uVar22 = (uint)uVar1;
          if ((uint)uVar19 <= (uint)uVar1) goto LAB_0010109a;
          pfVar7 = (float *)(uVar11 * 0x20 + *(long *)(this + 0x80));
          puVar9 = puVar17;
          if ((*(float *)(param_2 + 0x30) <= (float)((uint)pfVar7[2] ^ uVar10)) &&
             (*(float *)(param_2 + 0x34) <= (float)((uint)pfVar7[3] ^ uVar10))) {
            if ((*pfVar7 <= (float)((uint)*(float *)(param_2 + 0x38) ^ uVar10)) &&
               (pfVar7[1] <= (float)((uint)*(float *)(param_2 + 0x3c) ^ uVar10))) {
              if (((pfVar7[2] < *(float *)(param_2 + 0x38)) ||
                  (pfVar7[3] < *(float *)(param_2 + 0x3c))) ||
                 (*pfVar7 < *(float *)(param_2 + 0x30))) {
                uVar18 = false;
              }
              else {
                uVar18 = *(float *)(param_2 + 0x34) <= pfVar7[1];
              }
              if (iVar12 < iVar25) {
                if (uVar4 == 0) {
                  uVar22 = uVar23;
                  if (local_4c < 0x100) {
                    local_58 = (uint *)CONCAT71(local_58._1_7_,uVar18);
                    local_60 = puVar5;
                    local_4c = (uint)uVar1;
                    puVar9 = (uint *)Memory::realloc_static(puVar17,0x800,false);
                    uVar22 = local_4c;
                    uVar4 = (uint)puVar17;
                    puVar24 = (uint *)(ulong)local_4c;
                    puVar20 = (uint *)((ulong)local_58 & 0xff);
                    puVar5 = local_60;
                    if (puVar9 == (uint *)0x0) goto LAB_001011cb;
                    local_4c = 0x100;
                    uVar10 = _LC16;
                    uVar18 = local_58._0_1_;
                  }
                  iVar12 = 0xfe;
                  *(undefined8 *)puVar9 = *(undefined8 *)puVar26;
                  *(undefined8 *)(puVar9 + 0xfe) = *(undefined8 *)(puVar26 + 0xfe);
                  lVar6 = (long)puVar9 - (long)((ulong)(puVar9 + 2) & 0xfffffffffffffff8);
                  puVar15 = (undefined8 *)((long)puVar26 - lVar6);
                  puVar16 = (undefined8 *)((ulong)(puVar9 + 2) & 0xfffffffffffffff8);
                  for (uVar11 = (ulong)((int)lVar6 + 0x400U >> 3); uVar11 != 0; uVar11 = uVar11 - 1)
                  {
                    *puVar16 = *puVar15;
                    puVar15 = puVar15 + (ulong)bVar27 * -2 + 1;
                    puVar16 = puVar16 + (ulong)bVar27 * -2 + 1;
                  }
                  uVar4 = 0x100;
                  puVar26 = puVar9;
                }
                else {
                  uVar3 = uVar4 * 2;
                  if (uVar4 <= uVar3) {
                    if (uVar3 <= uVar4) {
                      iVar12 = uVar4 - 2;
                      puVar26 = puVar17;
                      goto LAB_00101068;
                    }
                    if (local_4c < uVar3) {
                      local_68 = (uint *)CONCAT71(local_68._1_7_,uVar18);
                      local_60 = (uint *)CONCAT44(local_60._4_4_,(uint)uVar1);
                      uVar4 = uVar3 - 1 | uVar3 - 1 >> 1;
                      local_58 = (uint *)CONCAT44(local_58._4_4_,uVar3);
                      uVar4 = uVar4 | uVar4 >> 2;
                      uVar4 = uVar4 >> 4 | uVar4;
                      uVar4 = uVar4 >> 8 | uVar4;
                      local_4c = (uVar4 | uVar4 >> 0x10) + 1;
                      local_70 = puVar5;
                      puVar9 = (uint *)Memory::realloc_static(puVar17,(ulong)local_4c << 3,false);
                      uVar4 = (uint)puVar17;
                      uVar11 = (ulong)local_58 & 0xffffffff;
                      puVar24 = (uint *)((ulong)local_60 & 0xffffffff);
                      puVar20 = (uint *)((ulong)local_68 & 0xff);
                      puVar5 = local_70;
                      uVar10 = _LC16;
                      uVar3 = (uint)local_58;
                      uVar18 = local_68._0_1_;
                      uVar23 = (uint)local_60._0_4_;
                      if (puVar9 == (uint *)0x0) goto LAB_001011cb;
                    }
                  }
                  uVar22 = uVar23;
                  uVar4 = uVar3;
                  iVar12 = uVar4 - 2;
                  puVar26 = puVar9;
                }
              }
LAB_00101068:
              lVar6 = (long)iVar25;
              iVar25 = iVar25 + 1;
              puVar26[lVar6 * 2] = uVar22;
              *(undefined1 *)(puVar26 + lVar6 * 2 + 1) = uVar18;
            }
          }
          uVar14 = uVar14 + 1;
          puVar17 = puVar9;
          if ((int)puVar5[4] <= (int)uVar14) break;
          uVar19 = (ulong)*(uint *)(this + 0x78);
        } while( true );
      }
    }
    else {
      puVar20 = (uint *)0x0;
      if (uVar10 != 0) {
        do {
          uVar1 = *(ushort *)((long)puVar5 + (long)puVar20 * 2 + 0x18);
          uVar14 = (ulong)uVar1;
          uVar10 = (uint)uVar1;
          if (iVar12 < iVar25) {
            puVar9 = puVar17;
            if (uVar4 == 0) {
              if (local_4c < 0x100) {
                local_68 = puVar5;
                local_60 = puVar20;
                local_58 = puVar24;
                puVar9 = (uint *)Memory::realloc_static(puVar17,0x800,false);
                uVar4 = (uint)puVar17;
                if (puVar9 == (uint *)0x0) {
LAB_001011cb:
                  LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
                  ::resize(uVar4);
                  uVar10 = (uint)uVar14;
                  goto LAB_001011d0;
                }
                local_4c = 0x100;
                puVar20 = local_60;
                puVar24 = local_58;
                puVar5 = local_68;
              }
              iVar12 = 0xfe;
              *(undefined8 *)puVar9 = *(undefined8 *)puVar26;
              *(undefined8 *)(puVar9 + 0xfe) = *(undefined8 *)(puVar26 + 0xfe);
              lVar6 = (long)puVar9 - (long)((ulong)(puVar9 + 2) & 0xfffffffffffffff8);
              puVar15 = (undefined8 *)((long)puVar26 - lVar6);
              puVar16 = (undefined8 *)((ulong)(puVar9 + 2) & 0xfffffffffffffff8);
              for (uVar11 = (ulong)((int)lVar6 + 0x400U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar16 = *puVar15;
                puVar15 = puVar15 + (ulong)bVar27 * -2 + 1;
                puVar16 = puVar16 + (ulong)bVar27 * -2 + 1;
              }
              uVar4 = 0x100;
              uVar11 = 0;
              puVar17 = puVar9;
              puVar26 = puVar9;
              uVar10 = (uint)uVar1;
            }
            else {
              uVar22 = uVar4 * 2;
              uVar11 = (ulong)uVar22;
              uVar10 = (uint)uVar1;
              if (uVar4 <= uVar22) {
                if (uVar22 <= uVar4) {
                  iVar12 = uVar4 - 2;
                  puVar26 = puVar17;
                  uVar10 = (uint)uVar1;
                  goto LAB_00100dd9;
                }
                if (local_4c < uVar22) {
                  uVar4 = uVar22 - 1 | uVar22 - 1 >> 1;
                  local_58 = (uint *)CONCAT44(local_58._4_4_,uVar22);
                  uVar4 = uVar4 | uVar4 >> 2;
                  uVar4 = uVar4 | uVar4 >> 4;
                  uVar4 = uVar4 | uVar4 >> 8;
                  local_4c = (uVar4 | uVar4 >> 0x10) + 1;
                  local_70 = puVar5;
                  local_68 = puVar20;
                  local_60 = puVar24;
                  puVar9 = (uint *)Memory::realloc_static(puVar17,(ulong)local_4c << 3,false);
                  uVar4 = (uint)puVar17;
                  uVar11 = (ulong)local_58 & 0xffffffff;
                  puVar20 = local_68;
                  puVar24 = local_60;
                  puVar5 = local_70;
                  uVar10 = (uint)uVar1;
                  if (puVar9 == (uint *)0x0) goto LAB_001011cb;
                }
              }
LAB_001011d0:
              uVar4 = (uint)uVar11;
              iVar12 = uVar4 - 2;
              puVar17 = puVar9;
              puVar26 = puVar9;
            }
          }
LAB_00100dd9:
          puVar9 = (uint *)((long)puVar26 + (long)puVar24);
          iVar25 = iVar25 + 1;
          puVar20 = (uint *)((long)puVar20 + 1);
          puVar24 = puVar24 + 2;
          *puVar9 = uVar10;
          *(undefined1 *)(puVar9 + 1) = 1;
        } while ((int)puVar20 < (int)puVar5[4]);
      }
    }
    if (iVar25 == 0) {
LAB_00100f48:
      if (puVar17 != (uint *)0x0) {
        Memory::free_static(puVar17,false);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar25 = iVar25 + -1;
    uVar11 = (ulong)puVar26[(long)iVar25 * 2];
  } while( true );
}



/* GodotBroadPhase2DBVH::cull_aabb(Rect2 const&, GodotCollisionObject2D**, int, int*) */

uint __thiscall
GodotBroadPhase2DBVH::cull_aabb
          (GodotBroadPhase2DBVH *this,Rect2 *param_1,GodotCollisionObject2D **param_2,int param_3,
          int *param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  pthread_mutex_t *__mutex;
  long in_FS_OFFSET;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  GodotCollisionObject2D **local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] != (GodotBroadPhase2DBVH)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) {
      std::__throw_system_error(iVar4);
      goto LAB_001016d0;
    }
  }
  local_90 = 0;
  local_88 = *(undefined8 *)param_1;
  local_b8 = 0;
  local_58 = 0;
  local_80 = CONCAT44((uint)((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20)) ^ _LC18._4_4_,
                      (uint)((float)*(undefined8 *)param_1 + (float)*(undefined8 *)(param_1 + 8)) ^
                      (uint)_LC18);
  local_50 = 0;
  local_48 = 0xffffffff;
  local_98 = 0;
  if (*(int *)(this + 0x118) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  local_b4 = 0;
  local_b0 = param_3;
  local_a8 = param_2;
  local_a0 = param_4;
  if (*(uint *)(this + 0x128) != 0xffffffff) {
    BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
    ::_cull_aabb_iterative
              ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                *)(this + 0x38),*(uint *)(this + 0x128),(CullParams *)&local_b8,false);
  }
  if (*(uint *)(this + 300) != 0xffffffff) {
    BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
    ::_cull_aabb_iterative
              ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                *)(this + 0x38),*(uint *)(this + 300),(CullParams *)&local_b8,false);
  }
  uVar1 = *(uint *)(this + 0x118);
  if ((int)uVar1 <= param_3) {
    param_3 = uVar1;
  }
  if (0 < param_3) {
    uVar5 = 0;
    uVar7 = uVar5;
    if (uVar1 != 0) {
      do {
        uVar1 = *(uint *)(this + 0x60);
        uVar2 = *(uint *)(*(long *)(this + 0x120) + uVar5 * 4);
        uVar7 = (ulong)uVar2;
        if (uVar1 <= uVar2) break;
        lVar6 = (ulong)uVar2 * 0x20 + *(long *)(this + 0x68);
        param_2[uVar5] = *(GodotCollisionObject2D **)(lVar6 + 0x10);
        if (param_4 != (int *)0x0) {
          param_4[uVar5] = *(int *)(lVar6 + 0xc);
        }
        uVar5 = uVar5 + 1;
        if ((long)param_3 == uVar5) goto LAB_001016d0;
        uVar1 = *(uint *)(this + 0x118);
        uVar7 = uVar5;
      } while ((uint)uVar5 < uVar1);
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar1,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_001016d0:
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* GodotBroadPhase2DBVH::GodotBroadPhase2DBVH() */

void __thiscall GodotBroadPhase2DBVH::GodotBroadPhase2DBVH(GodotBroadPhase2DBVH *this)

{
  pthread_mutex_t *__mutex;
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  __mutex = (pthread_mutex_t *)(this + 0x158);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_create_001073f0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x130) = 0x3f000000;
  this[0x134] = (GodotBroadPhase2DBVH)0x1;
  *(undefined8 *)(this + 0x138) = 0x3dcccccd;
  *(undefined8 *)(this + 0x128) = 0xffffffffffffffff;
  PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
  ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
             *)(this + 0xd8),&local_24);
  uVar1 = _LC27;
  *(undefined1 (*) [16])(this + 0x168) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x138) = uVar1;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 1;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x168) = 1;
  this[0x180] = (GodotBroadPhase2DBVH)0x1;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    *(GodotBroadPhase2DBVH **)(this + 0x20) = this;
    *(undefined8 *)(this + 8) = 0x100000;
    pthread_mutex_unlock(__mutex);
    if (this[0x180] == (GodotBroadPhase2DBVH)0x0) {
      *(GodotBroadPhase2DBVH **)(this + 0x28) = this;
      *(code **)(this + 0x10) = _unpair_callback;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001019b0;
    }
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 == 0) {
      *(GodotBroadPhase2DBVH **)(this + 0x28) = this;
      *(code **)(this + 0x10) = _unpair_callback;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock(__mutex);
        return;
      }
      goto LAB_001019b0;
    }
  }
  std::__throw_system_error(iVar2);
LAB_001019b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBroadPhase2DBVH::_create() */

GodotBroadPhase2DBVH * GodotBroadPhase2DBVH::_create(void)

{
  GodotBroadPhase2DBVH *this;
  
  this = (GodotBroadPhase2DBVH *)operator_new(0x1a8,"");
  GodotBroadPhase2DBVH(this);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotBroadPhase2DBVH::create(GodotCollisionObject2D*, int, Rect2 const&, bool) */

int __thiscall
GodotBroadPhase2DBVH::create
          (GodotBroadPhase2DBVH *this,GodotCollisionObject2D *param_1,int param_2,Rect2 *param_3,
          bool param_4)

{
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  *this_00;
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  uint uVar15;
  ulong unaff_RBX;
  uint *puVar16;
  uint uVar17;
  long in_FS_OFFSET;
  pthread_mutex_t *local_90;
  uint *local_80;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  uVar12 = (ulong)(uint)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (pthread_mutex_t *)0x0;
  uVar17 = (uint)!param_4;
  if (this[0x180] == (GodotBroadPhase2DBVH)0x0) {
LAB_00101a49:
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar4 = *(undefined8 *)param_3;
    local_58 = *(undefined8 *)param_3;
    uVar7 = *(uint *)(this + 0x38);
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    local_50 = CONCAT44((uint)((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar4 >> 0x20)) ^
                        _LC18._4_4_,(uint)((float)uVar3 + (float)uVar4) ^ (uint)_LC18);
    if (*(int *)(this + 0x48) == 0) {
      if (0xfffffffe < uVar7) {
        *(undefined4 *)(this + 0x38) = 0;
LAB_00102058:
        uVar12 = 0;
        uVar14 = 0xffffffff;
        goto LAB_00101e2d;
      }
      pvVar13 = *(void **)(this + 0x40);
      if (*(uint *)(this + 0x3c) < uVar7 + 1) {
        uVar9 = uVar7 >> 1 | uVar7;
        uVar9 = uVar9 | uVar9 >> 2;
        uVar9 = uVar9 | uVar9 >> 4;
        uVar9 = uVar9 | uVar9 >> 8;
        uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
        *(uint *)(this + 0x3c) = uVar9;
        pvVar13 = (void *)Memory::realloc_static(pvVar13,(ulong)uVar9 * 8,false);
        *(void **)(this + 0x40) = pvVar13;
        if (pvVar13 == (void *)0x0) goto LAB_00101f7c;
      }
      unaff_RBX = (ulong)uVar7;
      *(uint *)(this + 0x38) = uVar7 + 1;
      local_80 = (uint *)((long)pvVar13 + unaff_RBX * 8);
LAB_00101ab1:
      *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
      uVar7 = *(uint *)(this + 0x60);
      uVar12 = (ulong)uVar7;
      if (*(int *)(this + 0x70) == 0) {
        if (0xfffffffe < uVar7) {
          *(undefined4 *)(this + 0x60) = 0;
          goto LAB_00102058;
        }
        pvVar13 = *(void **)(this + 0x68);
        if (*(uint *)(this + 100) < uVar7 + 1) {
          uVar9 = uVar7 >> 1 | uVar7;
          uVar9 = uVar9 | uVar9 >> 2;
          uVar9 = uVar9 | uVar9 >> 4;
          uVar9 = uVar9 | uVar9 >> 8;
          uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
          *(uint *)(this + 100) = uVar9;
          pvVar13 = (void *)Memory::realloc_static(pvVar13,(ulong)uVar9 << 5,false);
          *(void **)(this + 0x68) = pvVar13;
          if (pvVar13 == (void *)0x0) {
LAB_00101f7c:
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        *(uint *)(this + 0x60) = uVar7 + 1;
        puVar16 = (uint *)((long)pvVar13 + (ulong)uVar7 * 0x20);
      }
      else {
        uVar9 = *(int *)(this + 0x70) - 1;
        uVar15 = *(uint *)(*(long *)(this + 0x78) + (ulong)uVar9 * 4);
        *(uint *)(this + 0x70) = uVar9;
        if (uVar7 <= uVar15) {
          uVar14 = (ulong)uVar15;
          goto LAB_00101e2d;
        }
        puVar16 = (uint *)((ulong)uVar15 * 0x20 + *(long *)(this + 0x68));
      }
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
      uVar7 = *(uint *)(this + 0x88);
      if (*(int *)(this + 0x98) != 0) {
        uVar9 = *(int *)(this + 0x98) - 1;
        uVar15 = *(uint *)(*(long *)(this + 0xa0) + (ulong)uVar9 * 4);
        *(uint *)(this + 0x98) = uVar9;
        if (uVar7 <= uVar15) {
          uVar14 = (ulong)uVar15;
          uVar12 = (ulong)uVar7;
          goto LAB_00101e2d;
        }
        puVar10 = (undefined8 *)(*(long *)(this + 0x90) + (ulong)uVar15 * 0x28);
LAB_00101b32:
        *(undefined4 *)(puVar10 + 2) = 0;
        if (*(int *)(puVar10 + 3) != 0) {
          *(undefined4 *)(puVar10 + 3) = 0;
        }
        if ((void *)puVar10[4] != (void *)0x0) {
          Memory::free_static((void *)puVar10[4],false);
          puVar10[4] = 0;
          *(undefined4 *)((long)puVar10 + 0x1c) = 0;
        }
        *puVar10 = 0;
        pvVar13 = *(void **)(this + 0x108);
        puVar10[1] = 0;
        puVar16[3] = param_2;
        *(GodotCollisionObject2D **)(puVar16 + 4) = param_1;
        uVar7 = *(uint *)(this + 0x100);
        puVar16[2] = 0;
        puVar16[6] = uVar7;
        if (uVar7 == *(uint *)(this + 0x104)) {
          uVar12 = (ulong)(uVar7 * 2);
          if (uVar7 * 2 == 0) {
            uVar12 = 1;
          }
          *(int *)(this + 0x104) = (int)uVar12;
          pvVar13 = (void *)Memory::realloc_static(pvVar13,uVar12 * 4,false);
          *(void **)(this + 0x108) = pvVar13;
          if (pvVar13 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar7 = *(uint *)(this + 0x100);
        }
        *(uint *)(this + 0x100) = uVar7 + 1;
        *(int *)((long)pvVar13 + (ulong)uVar7 * 4) = (int)unaff_RBX;
        iVar8 = *(int *)(this + (long)(int)uVar17 * 4 + 0x128);
        *puVar16 = uVar17;
        uVar12 = (long)(int)uVar17 + 0x3c;
        puVar16[1] = 3 - param_4;
        if (iVar8 == -1) goto LAB_00101da0;
        goto LAB_00101be7;
      }
      LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::ItemPairs,unsigned_int,false,false>
      ::resize((LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::ItemPairs,unsigned_int,false,false>
                *)(this + 0x88),uVar7 + 1);
      uVar9 = *(uint *)(this + 0x88);
      uVar14 = (ulong)uVar7;
      if (uVar7 < uVar9) {
        puVar10 = (undefined8 *)(*(long *)(this + 0x90) + uVar14 * 0x28);
        goto LAB_00101b32;
      }
LAB_00101ee0:
      uVar12 = (ulong)uVar9;
      goto LAB_00101e2d;
    }
    uVar9 = *(int *)(this + 0x48) - 1;
    uVar15 = *(uint *)(*(long *)(this + 0x50) + (ulong)uVar9 * 4);
    unaff_RBX = (ulong)uVar15;
    *(uint *)(this + 0x48) = uVar9;
    if (uVar15 < uVar7) {
      local_80 = (uint *)(*(long *)(this + 0x40) + (ulong)uVar15 * 8);
      goto LAB_00101ab1;
    }
  }
  else {
    local_90 = (pthread_mutex_t *)(this + 0x158);
    iVar8 = pthread_mutex_lock(local_90);
    if (iVar8 == 0) goto LAB_00101a49;
    std::__throw_system_error(iVar8);
LAB_00101da0:
    puVar10 = (undefined8 *)
              PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
                         *)(this + 0xb0),&local_60);
    *(undefined4 *)((long)puVar10 + 0x1c) = 0;
    puVar10[1] = __LC32;
    puVar10[2] = 0xffffffff00000000;
    *puVar10 = 0x7f7fffff7f7fffff;
    *(uint *)(this + uVar12 * 4 + 0x38) = local_60;
    puVar11 = (undefined4 *)
              PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
                         *)(this + 0xd8),&local_5c);
    *puVar11 = 0;
    *(uint *)(puVar10 + 2) = -local_5c;
LAB_00101be7:
    this_00 = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
               *)(this + 0x38);
    uVar7 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::_logic_choose_item_add_node
                      (this_00,*(uint *)(this + (ulong)!param_4 * 4 + 0x128),(BVH_ABB *)&local_58);
    uVar15 = (uint)unaff_RBX;
    *local_80 = uVar7;
    cVar6 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::_node_add_item(this_00,uVar7,uVar15,(BVH_ABB *)&local_58);
    if (cVar6 != '\0') {
      uVar9 = *(uint *)(this + 0xb0);
      uVar14 = (ulong)*local_80;
      if (uVar9 <= *local_80) goto LAB_00101ee0;
      uVar7 = *(uint *)(uVar14 * 0x20 + *(long *)(this + 0xb8) + 0x14);
      if (uVar7 != 0xffffffff) {
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::refit_upward_and_balance(this_00,uVar7,uVar17);
      }
    }
    uVar7 = *(uint *)(this + 0x88);
    if (uVar15 < uVar7) {
      uVar3 = *(undefined8 *)(param_3 + 8);
      pfVar1 = (float *)(*(long *)(this + 0x90) + (unaff_RBX & 0xffffffff) * 0x28);
      *(undefined8 *)pfVar1 = *(undefined8 *)param_3;
      *(undefined8 *)(pfVar1 + 2) = uVar3;
      fVar2 = *(float *)(this + 0x138);
      *pfVar1 = *pfVar1 - fVar2;
      pfVar1[1] = pfVar1[1] - fVar2;
      pfVar1[2] = fVar2 + fVar2 + pfVar1[2];
      pfVar1[3] = fVar2 + fVar2 + pfVar1[3];
      BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
      ::_add_changed_item((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                           *)(this + 8),unaff_RBX & 0xffffffff);
      BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
      ::_check_for_collisions
                ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                  *)(this + 8),true);
      if (local_90 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(local_90);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar15 + 1;
    }
  }
  uVar12 = (ulong)uVar7;
  uVar14 = unaff_RBX & 0xffffffff;
LAB_00101e2d:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar12,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* GodotBroadPhase2DBVH::remove(unsigned int) */

void GodotBroadPhase2DBVH::remove(uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  int in_ESI;
  undefined4 in_register_0000003c;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong in_R8;
  ulong uVar18;
  ulong in_R10;
  pthread_mutex_t *__mutex;
  uint uVar19;
  ulong uVar20;
  undefined8 local_40;
  
  lVar15 = CONCAT44(in_register_0000003c,param_1);
  if (in_ESI == 0) {
    _err_print_error("remove","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x36,
                     "Condition \"!p_id\" is true.",0,0);
    return;
  }
  uVar1 = in_ESI - 1;
  uVar20 = (ulong)uVar1;
  __mutex = (pthread_mutex_t *)0x0;
  if (*(char *)(lVar15 + 0x180) != '\0') {
    __mutex = (pthread_mutex_t *)(lVar15 + 0x158);
    iVar11 = pthread_mutex_lock(__mutex);
    if (iVar11 != 0) {
      std::__throw_system_error(iVar11);
LAB_00102330:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,in_R10,in_R8,"p_index","count",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  }
  if (*(uint *)(lVar15 + 0x88) <= uVar1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
               (ulong)*(uint *)(lVar15 + 0x88),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  in_R10 = uVar20 * 5;
  lVar2 = *(long *)(lVar15 + 0x90) + uVar20 * 0x28;
  iVar11 = *(int *)(lVar2 + 0x18);
  do {
    if (iVar11 == 0) {
      uVar18 = (ulong)*(uint *)(lVar15 + 0x140);
      uVar14 = 0;
      if (0 < (int)*(uint *)(lVar15 + 0x140)) {
        do {
          uVar16 = (uint)uVar14;
          if ((uint)uVar18 <= uVar16) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar18,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          in_R10 = *(ulong *)(lVar15 + 0x148);
          puVar13 = (uint *)(in_R10 + uVar14 * 4);
          if (uVar1 == *puVar13) {
            uVar17 = (uint)uVar18 - 1;
            uVar18 = (ulong)uVar17;
            *(uint *)(lVar15 + 0x140) = uVar17;
            if (uVar16 < uVar17) {
              uVar16 = *(uint *)(in_R10 + uVar18 * 4);
              in_R10 = (ulong)uVar16;
              *puVar13 = uVar16;
            }
          }
          else {
            uVar18 = (ulong)*(uint *)(lVar15 + 0x140);
            uVar14 = (ulong)(uVar16 + 1);
          }
        } while ((int)uVar14 < (int)uVar18);
      }
      if (uVar1 < *(uint *)(lVar15 + 0x60)) {
        *(undefined4 *)(uVar20 * 0x20 + *(long *)(lVar15 + 0x68) + 8) = 0;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::item_remove((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                       *)(lVar15 + 0x38),uVar1,in_R10);
        BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                    *)(lVar15 + 8),true);
        if (__mutex != (pthread_mutex_t *)0x0) {
          pthread_mutex_unlock(__mutex);
          return;
        }
        return;
      }
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar20,
                 (ulong)*(uint *)(lVar15 + 0x60),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar16 = **(uint **)(lVar2 + 0x20);
    uVar19 = uVar16;
    uVar17 = uVar1;
    if (uVar1 <= uVar16) {
      uVar19 = uVar1;
      uVar17 = uVar16;
    }
    in_R10 = (ulong)uVar17;
    uVar16 = *(uint *)(lVar15 + 0x60);
    if (uVar16 <= uVar19) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar19,(ulong)uVar16,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar14 = (ulong)uVar19;
    lVar3 = *(long *)(lVar15 + 0x68) + uVar14 * 0x20;
    if (uVar16 <= uVar17) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,in_R10,(ulong)uVar16,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    lVar6 = *(long *)(lVar3 + 0x10);
    lVar12 = *(long *)(lVar15 + 0x68) + in_R10 * 0x20;
    lVar7 = *(long *)(lVar12 + 0x10);
    if ((lVar6 != lVar7) || (lVar6 == 0)) {
      uVar16 = *(uint *)(lVar15 + 0x88);
      in_R8 = (ulong)uVar16;
      if (uVar16 <= uVar19) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,in_R8,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      lVar8 = *(long *)(lVar15 + 0x90);
      lVar4 = lVar8 + uVar14 * 0x28;
      if (uVar16 <= uVar17) goto LAB_00102330;
      iVar11 = *(int *)(lVar4 + 0x10);
      if (0 < iVar11) {
        uVar14 = 0;
        do {
          if (uVar14 == *(uint *)(lVar4 + 0x18)) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar14,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          puVar13 = (uint *)(uVar14 * 0x10 + *(long *)(lVar4 + 0x20));
          if (uVar17 == *puVar13) {
            local_40 = *(undefined8 *)(puVar13 + 2);
            uVar16 = *(uint *)(lVar4 + 0x18) - 1;
            *(uint *)(lVar4 + 0x18) = uVar16;
            if ((uint)uVar14 < uVar16) {
              puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x20) + (ulong)uVar16 * 0x10);
              uVar10 = puVar5[1];
              *(undefined8 *)puVar13 = *puVar5;
              *(undefined8 *)(puVar13 + 2) = uVar10;
            }
            *(int *)(lVar4 + 0x10) = iVar11 + -1;
            goto LAB_00102381;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (long)iVar11);
      }
      local_40 = 0;
LAB_00102381:
      lVar8 = lVar8 + in_R10 * 0x28;
      iVar11 = *(int *)(lVar8 + 0x10);
      if (0 < iVar11) {
        uVar14 = 0;
        do {
          if (uVar14 == *(uint *)(lVar8 + 0x18)) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar14,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          puVar13 = (uint *)(uVar14 * 0x10 + *(long *)(lVar8 + 0x20));
          if (uVar19 == *puVar13) {
            uVar16 = *(uint *)(lVar8 + 0x18) - 1;
            *(uint *)(lVar8 + 0x18) = uVar16;
            if ((uint)uVar14 < uVar16) {
              puVar5 = (undefined8 *)(*(long *)(lVar8 + 0x20) + (ulong)uVar16 * 0x10);
              uVar10 = puVar5[1];
              *(undefined8 *)puVar13 = *puVar5;
              *(undefined8 *)(puVar13 + 2) = uVar10;
            }
            *(int *)(lVar8 + 0x10) = iVar11 + -1;
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (long)iVar11);
      }
      if (*(code **)(lVar15 + 0x10) != (code *)0x0) {
        uVar14 = (ulong)*(uint *)(lVar12 + 0xc);
        (**(code **)(lVar15 + 0x10))
                  (*(undefined8 *)(lVar15 + 0x20),uVar19,lVar6,*(undefined4 *)(lVar3 + 0xc),in_R10,
                   lVar7,uVar14,local_40);
        in_R10 = uVar14;
      }
    }
    iVar11 = *(int *)(lVar2 + 0x18);
  } while( true );
}



/* GodotBroadPhase2DBVH::move(unsigned int, Rect2 const&) */

void GodotBroadPhase2DBVH::move(uint param_1,Rect2 *param_2)

{
  long lVar1;
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  *this;
  uint *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  char extraout_DL;
  int iVar9;
  undefined8 in_RDX;
  uint uVar10;
  pthread_mutex_t *ppVar11;
  undefined4 in_register_0000003c;
  ulong uVar12;
  ulong in_R8;
  ulong in_R9;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  uint uStack_6c;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  long lStack_50;
  pthread_mutex_t *ppStack_48;
  
  iVar9 = (int)param_2;
  lVar8 = CONCAT44(in_register_0000003c,param_1);
  if (iVar9 == 0) {
    _err_print_error(&_LC56,"modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x2a,
                     "Condition \"!p_id\" is true.",0,0);
    return;
  }
  lVar1 = lVar8 + 8;
  uVar10 = iVar9 - 1;
  uVar7 = (ulong)uVar10;
  if (*(char *)(lVar8 + 0x180) == '\0') {
    cVar4 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::item_move((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                         *)(lVar8 + 0x38),uVar10);
    if (cVar4 != '\0') {
      BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
      ::_add_changed_item(lVar1,uVar10);
      return;
    }
    return;
  }
  ppVar11 = (pthread_mutex_t *)(lVar8 + 0x158);
  uVar5 = pthread_mutex_lock(ppVar11);
  if (uVar5 == 0) {
    cVar4 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::item_move((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                         *)(lVar8 + 0x38),uVar10,in_RDX);
    if (cVar4 != '\0') {
      BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
      ::_add_changed_item(lVar1,uVar10);
    }
    pthread_mutex_unlock(ppVar11);
    return;
  }
  uVar12 = (ulong)uVar5;
  std::__throw_system_error(uVar5);
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_60 = lVar8;
  uStack_58 = uVar7;
  lStack_50 = lVar1;
  ppStack_48 = ppVar11;
  if (iVar9 == 0) {
    if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_static","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x2f,
                       "Condition \"!p_id\" is true.",0,0);
      return;
    }
    goto LAB_00102994;
  }
  uVar10 = iVar9 - 1;
  uStack_6c = uVar10;
  if (*(char *)(uVar12 + 0x180) == '\0') {
    cVar4 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::item_set_tree((BVHHandle *)(uVar12 + 0x38),(uint)&uStack_6c,
                            (uint)(extraout_DL == '\0'));
    if (cVar4 != '\0') {
      ppVar11 = (pthread_mutex_t *)0x0;
LAB_00102803:
      uVar5 = *(uint *)(uVar12 + 0x38);
      if (uVar5 <= uVar10) {
        uVar7 = (ulong)uVar10;
        iVar9 = 0xae;
        goto LAB_0010294a;
      }
      uVar10 = *(uint *)(*(long *)(uVar12 + 0x40) + (ulong)uVar10 * 8);
      uVar7 = (ulong)uVar10;
      if (uVar10 != 0xfffffffe) {
        uVar5 = *(uint *)(uVar12 + 0xb0);
        if (uVar10 < uVar5) {
          uVar5 = *(uint *)(uVar12 + 0xd8);
          uVar10 = -*(int *)(uVar7 * 0x20 + *(long *)(uVar12 + 0xb8) + 0x10);
          uVar7 = (ulong)uVar10;
          if (uVar10 < uVar5) {
            BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
            ::_add_changed_item((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                                 *)(uVar12 + 8),uStack_6c);
            BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
            ::_check_for_collisions
                      ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                        *)(uVar12 + 8),true);
            goto LAB_0010281e;
          }
        }
        iVar9 = 0xb2;
LAB_0010294a:
        uStack_98 = 0x10295d;
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar9,uVar7,(ulong)uVar5,"p_index"
                   ,"count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
LAB_0010281e:
      if (ppVar11 != (pthread_mutex_t *)0x0) goto LAB_00102823;
    }
    if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102994:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ppVar11 = (pthread_mutex_t *)(uVar12 + 0x158);
  uVar5 = pthread_mutex_lock(ppVar11);
  if (uVar5 == 0) {
    cVar4 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::item_set_tree((BVHHandle *)(uVar12 + 0x38),(uint)&uStack_6c,
                            (uint)(extraout_DL == '\0'));
    if (cVar4 != '\0') goto LAB_00102803;
LAB_00102823:
    if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(ppVar11);
      return;
    }
    goto LAB_00102994;
  }
  uVar7 = (ulong)uVar5;
  std::__throw_system_error(uVar5);
  ppVar11 = (pthread_mutex_t *)0x0;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = (ulong)uVar10;
  uStack_98 = uVar12;
  if (*(char *)(uVar7 + 0x180) == '\0') {
LAB_001029d8:
    this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            *)(uVar7 + 0x38);
    if (*(uint *)(uVar7 + 0x128) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::refit_branch(this,*(uint *)(uVar7 + 0x128));
    }
    if (*(uint *)(uVar7 + 300) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::refit_branch(this,*(uint *)(uVar7 + 300));
    }
    uVar10 = *(uint *)(uVar7 + 0x110);
    if (uVar10 < *(uint *)(uVar7 + 0x100)) {
      iVar9 = uVar10 + 1;
      lVar8 = (ulong)uVar10 << 2;
    }
    else {
      *(undefined4 *)(uVar7 + 0x110) = 0;
      if (*(uint *)(uVar7 + 0x100) == 0) goto LAB_00102adf;
      lVar8 = 0;
      iVar9 = 1;
    }
    *(int *)(uVar7 + 0x110) = iVar9;
    in_R8 = (ulong)*(uint *)(uVar7 + 0x38);
    uVar10 = *(uint *)(*(long *)(uVar7 + 0x108) + lVar8);
    in_R9 = (ulong)uVar10;
    if (uVar10 < *(uint *)(uVar7 + 0x38)) {
      in_R9 = (ulong)uVar10;
      puVar2 = (uint *)(*(long *)(uVar7 + 0x40) + in_R9 * 8);
      if ((*puVar2 == 0xfffffffe) || (puVar2[1] == 0xffffffff)) {
LAB_00102adf:
        BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                    *)(uVar7 + 8),false);
        if (ppVar11 == (pthread_mutex_t *)0x0) {
          if (lStack_b0 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (lStack_b0 == *(long *)(in_FS_OFFSET + 0x28)) {
          pthread_mutex_unlock(ppVar11);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      in_R8 = (ulong)*(uint *)(uVar7 + 0x60);
      if (uVar10 < *(uint *)(uVar7 + 0x60)) {
        uVar5 = *(uint *)(in_R9 * 0x20 + *(long *)(uVar7 + 0x68));
        uStack_c8 = 0;
        uStack_c0 = 0;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::node_remove_item(this,uVar10,uVar5,(BVH_ABB *)&uStack_c8);
        uVar6 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                ::_logic_choose_item_add_node
                          (this,*(uint *)(uVar7 + 0x128 + (ulong)uVar5 * 4),(BVH_ABB *)&uStack_c8);
        *puVar2 = uVar6;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::_node_add_item(this,uVar6,uVar10,(BVH_ABB *)&uStack_c8);
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::refit_upward_and_balance(this,*puVar2,uVar5);
        goto LAB_00102adf;
      }
      iVar9 = 0xae;
      goto LAB_00102bb3;
    }
  }
  else {
    ppVar11 = (pthread_mutex_t *)(uVar7 + 0x158);
    iVar9 = pthread_mutex_lock(ppVar11);
    if (iVar9 == 0) goto LAB_001029d8;
    std::__throw_system_error(iVar9);
  }
  in_R9 = in_R9 & 0xffffffff;
  iVar9 = 0xb2;
LAB_00102bb3:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar9,in_R9,in_R8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GodotBroadPhase2DBVH::set_static(unsigned int, bool) */

void GodotBroadPhase2DBVH::set_static(uint param_1,bool param_2)

{
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  *this;
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  char in_DL;
  int iVar8;
  uint uVar9;
  pthread_mutex_t *ppVar10;
  undefined7 in_register_00000031;
  undefined4 in_register_0000003c;
  ulong in_R8;
  ulong in_R9;
  long in_FS_OFFSET;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  ulong uStack_68;
  long lStack_60;
  uint local_34;
  long local_30;
  
  lVar7 = CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = (int)CONCAT71(in_register_00000031,param_2);
  if (iVar8 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_static","modules/godot_physics_2d/godot_broad_phase_2d_bvh.cpp",0x2f,
                       "Condition \"!p_id\" is true.",0,0);
      return;
    }
    goto LAB_00102994;
  }
  uVar9 = iVar8 - 1;
  local_34 = uVar9;
  if (*(char *)(lVar7 + 0x180) == '\0') {
    cVar3 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::item_set_tree((BVHHandle *)(lVar7 + 0x38),(uint)&local_34,(uint)(in_DL == '\0'));
    if (cVar3 != '\0') {
      ppVar10 = (pthread_mutex_t *)0x0;
LAB_00102803:
      uVar4 = *(uint *)(lVar7 + 0x38);
      if (uVar4 <= uVar9) {
        uVar6 = (ulong)uVar9;
        iVar8 = 0xae;
        goto LAB_0010294a;
      }
      uVar9 = *(uint *)(*(long *)(lVar7 + 0x40) + (ulong)uVar9 * 8);
      uVar6 = (ulong)uVar9;
      if (uVar9 != 0xfffffffe) {
        uVar4 = *(uint *)(lVar7 + 0xb0);
        if (uVar9 < uVar4) {
          uVar4 = *(uint *)(lVar7 + 0xd8);
          uVar9 = -*(int *)(uVar6 * 0x20 + *(long *)(lVar7 + 0xb8) + 0x10);
          uVar6 = (ulong)uVar9;
          if (uVar9 < uVar4) {
            BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
            ::_add_changed_item((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                                 *)(lVar7 + 8),local_34);
            BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
            ::_check_for_collisions
                      ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                        *)(lVar7 + 8),true);
            goto LAB_0010281e;
          }
        }
        iVar8 = 0xb2;
LAB_0010294a:
        lStack_60 = 0x10295d;
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar8,uVar6,(ulong)uVar4,"p_index"
                   ,"count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_0010281e:
      if (ppVar10 != (pthread_mutex_t *)0x0) goto LAB_00102823;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102994:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ppVar10 = (pthread_mutex_t *)(lVar7 + 0x158);
  uVar4 = pthread_mutex_lock(ppVar10);
  if (uVar4 == 0) {
    cVar3 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            ::item_set_tree((BVHHandle *)(lVar7 + 0x38),(uint)&local_34,(uint)(in_DL == '\0'));
    if (cVar3 != '\0') goto LAB_00102803;
LAB_00102823:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(ppVar10);
      return;
    }
    goto LAB_00102994;
  }
  uVar6 = (ulong)uVar4;
  std::__throw_system_error(uVar4);
  ppVar10 = (pthread_mutex_t *)0x0;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_68 = (ulong)uVar9;
  lStack_60 = lVar7;
  if (*(char *)(uVar6 + 0x180) == '\0') {
LAB_001029d8:
    this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            *)(uVar6 + 0x38);
    if (*(uint *)(uVar6 + 0x128) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::refit_branch(this,*(uint *)(uVar6 + 0x128));
    }
    if (*(uint *)(uVar6 + 300) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::refit_branch(this,*(uint *)(uVar6 + 300));
    }
    uVar9 = *(uint *)(uVar6 + 0x110);
    if (uVar9 < *(uint *)(uVar6 + 0x100)) {
      iVar8 = uVar9 + 1;
      lVar7 = (ulong)uVar9 << 2;
    }
    else {
      *(undefined4 *)(uVar6 + 0x110) = 0;
      if (*(uint *)(uVar6 + 0x100) == 0) goto LAB_00102adf;
      lVar7 = 0;
      iVar8 = 1;
    }
    *(int *)(uVar6 + 0x110) = iVar8;
    in_R8 = (ulong)*(uint *)(uVar6 + 0x38);
    uVar9 = *(uint *)(*(long *)(uVar6 + 0x108) + lVar7);
    in_R9 = (ulong)uVar9;
    if (uVar9 < *(uint *)(uVar6 + 0x38)) {
      in_R9 = (ulong)uVar9;
      puVar1 = (uint *)(*(long *)(uVar6 + 0x40) + in_R9 * 8);
      if ((*puVar1 == 0xfffffffe) || (puVar1[1] == 0xffffffff)) {
LAB_00102adf:
        BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                    *)(uVar6 + 8),false);
        if (ppVar10 == (pthread_mutex_t *)0x0) {
          if (lStack_78 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (lStack_78 == *(long *)(in_FS_OFFSET + 0x28)) {
          pthread_mutex_unlock(ppVar10);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      in_R8 = (ulong)*(uint *)(uVar6 + 0x60);
      if (uVar9 < *(uint *)(uVar6 + 0x60)) {
        uVar4 = *(uint *)(in_R9 * 0x20 + *(long *)(uVar6 + 0x68));
        uStack_90 = 0;
        uStack_88 = 0;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::node_remove_item(this,uVar9,uVar4,(BVH_ABB *)&uStack_90);
        uVar5 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                ::_logic_choose_item_add_node
                          (this,*(uint *)(uVar6 + 0x128 + (ulong)uVar4 * 4),(BVH_ABB *)&uStack_90);
        *puVar1 = uVar5;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::_node_add_item(this,uVar5,uVar9,(BVH_ABB *)&uStack_90);
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::refit_upward_and_balance(this,*puVar1,uVar4);
        goto LAB_00102adf;
      }
      iVar8 = 0xae;
      goto LAB_00102bb3;
    }
  }
  else {
    ppVar10 = (pthread_mutex_t *)(uVar6 + 0x158);
    iVar8 = pthread_mutex_lock(ppVar10);
    if (iVar8 == 0) goto LAB_001029d8;
    std::__throw_system_error(iVar8);
  }
  in_R9 = in_R9 & 0xffffffff;
  iVar8 = 0xb2;
LAB_00102bb3:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar8,in_R9,in_R8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GodotBroadPhase2DBVH::update() */

void __thiscall GodotBroadPhase2DBVH::update(GodotBroadPhase2DBVH *this)

{
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  *this_00;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  pthread_mutex_t *__mutex;
  ulong in_R8;
  ulong in_R9;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] == (GodotBroadPhase2DBVH)0x0) {
LAB_001029d8:
    this_00 = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
               *)(this + 0x38);
    if (*(uint *)(this + 0x128) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::refit_branch(this_00,*(uint *)(this + 0x128));
    }
    if (*(uint *)(this + 300) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::refit_branch(this_00,*(uint *)(this + 300));
    }
    uVar2 = *(uint *)(this + 0x110);
    if (uVar2 < *(uint *)(this + 0x100)) {
      iVar7 = uVar2 + 1;
      lVar6 = (ulong)uVar2 << 2;
    }
    else {
      *(undefined4 *)(this + 0x110) = 0;
      if (*(uint *)(this + 0x100) == 0) goto LAB_00102adf;
      lVar6 = 0;
      iVar7 = 1;
    }
    *(int *)(this + 0x110) = iVar7;
    in_R8 = (ulong)*(uint *)(this + 0x38);
    uVar2 = *(uint *)(*(long *)(this + 0x108) + lVar6);
    in_R9 = (ulong)uVar2;
    if (uVar2 < *(uint *)(this + 0x38)) {
      in_R9 = (ulong)uVar2;
      puVar1 = (uint *)(*(long *)(this + 0x40) + in_R9 * 8);
      if ((*puVar1 == 0xfffffffe) || (puVar1[1] == 0xffffffff)) {
LAB_00102adf:
        BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
                    *)(this + 8),false);
        if (__mutex == (pthread_mutex_t *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pthread_mutex_unlock(__mutex);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      in_R8 = (ulong)*(uint *)(this + 0x60);
      if (uVar2 < *(uint *)(this + 0x60)) {
        uVar3 = *(uint *)(in_R9 * 0x20 + *(long *)(this + 0x68));
        local_58 = 0;
        local_50 = 0;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::node_remove_item(this_00,uVar2,uVar3,(BVH_ABB *)&local_58);
        uVar5 = BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                ::_logic_choose_item_add_node
                          (this_00,*(uint *)(this + (ulong)uVar3 * 4 + 0x128),(BVH_ABB *)&local_58);
        *puVar1 = uVar5;
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::_node_add_item(this_00,uVar5,uVar2,(BVH_ABB *)&local_58);
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::refit_upward_and_balance(this_00,*puVar1,uVar3);
        goto LAB_00102adf;
      }
      iVar7 = 0xae;
      goto LAB_00102bb3;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar7 = pthread_mutex_lock(__mutex);
    if (iVar7 == 0) goto LAB_001029d8;
    std::__throw_system_error(iVar7);
  }
  in_R9 = in_R9 & 0xffffffff;
  iVar7 = 0xb2;
LAB_00102bb3:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar7,in_R9,in_R8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::_node_add_item(unsigned int, unsigned int, BVH_ABB<Rect2, Vector2> const&) */

undefined8 __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::_node_add_item(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                 *this,uint param_1,uint param_2,BVH_ABB *param_3)

{
  uint *puVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  float *pfVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar8 = (ulong)*(uint *)this;
  if (*(uint *)this <= param_2) {
    uVar9 = (ulong)param_2;
LAB_00102f6a:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,uVar8,"p_index","count","",
               false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar4 = *(uint *)(this + 0x78);
  uVar8 = (ulong)uVar4;
  puVar1 = (uint *)(*(long *)(this + 8) + (ulong)param_2 * 8);
  *puVar1 = param_1;
  if (uVar4 <= param_1) {
    uVar9 = (ulong)param_1;
    goto LAB_00102f6a;
  }
  uVar8 = (ulong)*(uint *)(this + 0xa0);
  pfVar11 = (float *)((ulong)param_1 * 0x20 + *(long *)(this + 0x80));
  uVar9 = (ulong)(uint)-(int)pfVar11[4];
  if (*(uint *)(this + 0xa0) <= (uint)-(int)pfVar11[4]) goto LAB_00102f6a;
  puVar10 = (ushort *)(uVar9 * 0xa04 + *(long *)(this + 0xa8));
  fVar16 = *(float *)(this + 0xf8);
  uVar3 = *puVar10;
  fVar13 = *(float *)param_3 - fVar16;
  fVar14 = *(float *)(param_3 + 4) - fVar16;
  fVar15 = *(float *)(param_3 + 8) - fVar16;
  fVar16 = *(float *)(param_3 + 0xc) - fVar16;
  if (uVar3 == 0) {
    *pfVar11 = fVar13;
    pfVar11[1] = fVar14;
    pfVar11[2] = fVar15;
    pfVar11[3] = fVar16;
    uVar12 = 1;
  }
  else {
    fVar2 = pfVar11[2];
    fVar18 = *pfVar11;
    fVar20 = pfVar11[1];
    fVar19 = pfVar11[3];
    fVar17 = fVar15;
    if (fVar15 < fVar2) {
LAB_00102fbc:
      pfVar11[2] = fVar17;
      if (fVar13 <= fVar18) {
LAB_00102ff8:
        fVar18 = fVar13;
      }
      if (fVar16 <= fVar19) {
        fVar19 = fVar16;
      }
      if (fVar14 <= fVar20) {
        fVar20 = fVar14;
      }
      *pfVar11 = fVar18;
      uVar12 = 1;
      pfVar11[3] = fVar19;
      pfVar11[1] = fVar20;
    }
    else {
      if (fVar16 < fVar19) {
LAB_00102fb8:
        fVar17 = fVar2;
        if (fVar15 <= fVar2) {
          fVar17 = fVar15;
        }
        goto LAB_00102fbc;
      }
      if (fVar13 < fVar18) {
        if (fVar15 <= fVar2) {
          pfVar11[2] = fVar15;
        }
        goto LAB_00102ff8;
      }
      uVar12 = 0;
      if (fVar14 < fVar20) goto LAB_00102fb8;
    }
    if (0x7f < uVar3) {
      _err_print_error("request_item","./core/math/bvh_structs.inc",0x69,
                       "Method/function failed. Returning: 0","BVH request_item error.",0,0);
      uVar8 = 0;
      goto LAB_00102f3a;
    }
  }
  uVar8 = (ulong)uVar3;
  *puVar10 = uVar3 + 1;
LAB_00102f3a:
  uVar6 = *(undefined8 *)param_3;
  uVar7 = *(undefined8 *)(param_3 + 8);
  puVar1[1] = (uint)uVar8;
  *(undefined8 *)(puVar10 + uVar8 * 8 + 0x102) = uVar6;
  *(undefined8 *)(puVar10 + uVar8 * 8 + 0x102 + 4) = uVar7;
  *(uint *)(puVar10 + uVar8 * 2 + 2) = param_2;
  return uVar12;
}



/* BVH_Manager<GodotCollisionObject2D, 2, true, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, Rect2, Vector2,
   true>::_collide(BVHHandle, BVHHandle) */

void __thiscall
BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
::_collide(BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
           *this,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint *puVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  uVar13 = *(uint *)(this + 0x58);
  uVar10 = (ulong)uVar13;
  uVar16 = (ulong)param_2;
  if (param_3 < param_2) {
    uVar16 = (ulong)param_3;
    param_3 = param_2;
  }
  uVar15 = (uint)uVar16;
  uVar11 = uVar16;
  if (uVar15 < uVar13) {
    lVar18 = uVar16 * 0x20 + *(long *)(this + 0x60);
    if (param_3 < uVar13) {
      uVar11 = (ulong)param_3;
      lVar4 = *(long *)(lVar18 + 0x10);
      lVar17 = *(long *)(this + 0x60) + uVar11 * 0x20;
      lVar5 = *(long *)(lVar17 + 0x10);
      if ((((*(uint *)(lVar5 + 0x78) & *(uint *)(lVar4 + 0x7c)) == 0) &&
          ((*(uint *)(lVar4 + 0x78) & *(uint *)(lVar5 + 0x7c)) == 0)) || (lVar5 == lVar4)) {
        return;
      }
      uVar13 = *(uint *)(this + 0x80);
      uVar10 = (ulong)uVar13;
      if (uVar15 < uVar13) {
        lVar1 = *(long *)(this + 0x88) + uVar16 * 0x28;
        if (uVar13 <= param_3) {
          iVar12 = 0xb2;
          uVar16 = uVar11;
          goto LAB_00103125;
        }
        iVar12 = *(int *)(lVar1 + 0x10);
        lVar2 = *(long *)(this + 0x88) + uVar11 * 0x28;
        iVar3 = *(int *)(lVar2 + 0x10);
        if (iVar3 < iVar12) {
          if (0 < iVar3) {
            uVar10 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar14 = 0;
            do {
              uVar11 = uVar10;
              if (uVar10 == uVar14) goto LAB_00103120;
              if (uVar15 == *(uint *)(uVar14 * 0x10 + *(long *)(lVar2 + 0x20))) {
                return;
              }
              uVar14 = uVar14 + 1;
            } while ((long)iVar3 != uVar14);
          }
        }
        else if (0 < iVar12) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            if (uVar10 == *(uint *)(lVar1 + 0x18)) goto LAB_00103120;
            if (param_3 == *(uint *)(uVar10 * 0x10 + *(long *)(lVar1 + 0x20))) {
              return;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != (long)iVar12);
        }
        uVar7 = 0;
        if (*(code **)this != (code *)0x0) {
          uVar7 = (**(code **)this)(*(undefined8 *)(this + 0x18),uVar16,lVar4,
                                    *(undefined4 *)(lVar18 + 0xc),param_3,lVar5,
                                    *(undefined4 *)(lVar17 + 0xc));
        }
        uVar13 = *(uint *)(lVar1 + 0x18);
        pvVar9 = *(void **)(lVar1 + 0x20);
        if (uVar13 == *(uint *)(lVar1 + 0x1c)) {
          uVar13 = uVar13 * 2;
          if (uVar13 == 0) {
            uVar13 = 1;
          }
          *(uint *)(lVar1 + 0x1c) = uVar13;
          pvVar9 = (void *)Memory::realloc_static(pvVar9,(ulong)uVar13 << 4,false);
          *(void **)(lVar1 + 0x20) = pvVar9;
          if (pvVar9 == (void *)0x0) goto LAB_00103303;
          uVar13 = *(uint *)(lVar1 + 0x18);
        }
        puVar8 = (uint *)((ulong)uVar13 * 0x10 + (long)pvVar9);
        *(uint *)(lVar1 + 0x18) = uVar13 + 1;
        pvVar9 = *(void **)(lVar2 + 0x20);
        *puVar8 = param_3;
        uVar13 = *(uint *)(lVar2 + 0x18);
        *(undefined8 *)(puVar8 + 2) = uVar7;
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
        if (uVar13 == *(uint *)(lVar2 + 0x1c)) {
          uVar13 = uVar13 * 2;
          if (uVar13 == 0) {
            uVar13 = 1;
          }
          *(uint *)(lVar2 + 0x1c) = uVar13;
          pvVar9 = (void *)Memory::realloc_static(pvVar9,(ulong)uVar13 << 4,false);
          *(void **)(lVar2 + 0x20) = pvVar9;
          if (pvVar9 == (void *)0x0) {
LAB_00103303:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          uVar13 = *(uint *)(lVar2 + 0x18);
        }
        puVar8 = (uint *)((long)pvVar9 + (ulong)uVar13 * 0x10);
        *(uint *)(lVar2 + 0x18) = uVar13 + 1;
        *puVar8 = uVar15;
        *(undefined8 *)(puVar8 + 2) = uVar7;
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
        return;
      }
      iVar12 = 0xb2;
      goto LAB_00103125;
    }
    uVar11 = (ulong)param_3;
  }
LAB_00103120:
  iVar12 = 0xae;
  uVar16 = uVar11;
LAB_00103125:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar12,uVar16,uVar10,"p_index","count",
             "",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* BVH_Manager<GodotCollisionObject2D, 2, true, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, Rect2, Vector2,
   true>::_check_for_collisions(bool) */

void __thiscall
BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
::_check_for_collisions
          (BVH_Manager<GodotCollisionObject2D,2,true,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,Rect2,Vector2,true>
           *this,bool param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  float *pfVar18;
  undefined4 *puVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 local_d8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x138) != 0) {
    puVar26 = *(uint **)(this + 0x140);
    local_90 = 0;
    local_88 = 0;
    puVar1 = puVar26 + *(uint *)(this + 0x138);
    local_80 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = 0;
    local_b0 = 0x7fffffff;
    local_a8 = (undefined1  [16])0x0;
    do {
      uVar25 = *puVar26;
      uVar16 = (ulong)*(uint *)(this + 0x80);
      if (*(uint *)(this + 0x80) <= uVar25) {
        uVar27 = (ulong)uVar25;
LAB_00103672:
        uVar14 = uVar27;
        iVar17 = 0xb2;
LAB_00103692:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar17,uVar14,uVar16,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar22 = (ulong)uVar25;
      uVar16 = (ulong)*(uint *)(this + 0x58);
      puVar2 = (undefined8 *)(*(long *)(this + 0x88) + uVar22 * 0x28);
      uVar7 = *puVar2;
      fVar28 = (float)puVar2[1] + (float)*puVar2;
      fVar29 = (float)((ulong)puVar2[1] >> 0x20) + (float)((ulong)*puVar2 >> 0x20);
      uVar30 = CONCAT44(_LC18._4_4_ ^ (uint)fVar29,(uint)_LC18 ^ (uint)fVar28);
      uVar14 = uVar22;
      if (*(uint *)(this + 0x58) <= uVar25) {
LAB_00103881:
        iVar17 = 0xae;
        goto LAB_00103692;
      }
      lVar12 = uVar22 * 0x20 + *(long *)(this + 0x60);
      uVar6 = *(uint *)(lVar12 + 4);
      local_98 = *(undefined8 *)(lVar12 + 0x10);
      local_48 = uVar6;
      if (*(int *)(puVar2 + 3) != 0) {
        uVar23 = 0;
        do {
          uVar16 = (ulong)*(uint *)(this + 0x30);
          uVar24 = *(uint *)(uVar23 * 0x10 + puVar2[4]);
          uVar21 = (ulong)uVar24;
          if (*(uint *)(this + 0x30) <= uVar24) {
            uVar27 = (ulong)uVar24;
            goto LAB_00103672;
          }
          uVar16 = (ulong)*(uint *)(this + 0xa8);
          puVar3 = (uint *)(*(long *)(this + 0x38) + uVar21 * 8);
          uVar15 = *puVar3;
          uVar27 = (ulong)uVar15;
          if (*(uint *)(this + 0xa8) <= uVar15) goto LAB_00103672;
          uVar16 = (ulong)*(uint *)(this + 0xd0);
          uVar15 = -*(int *)((ulong)uVar15 * 0x20 + *(long *)(this + 0xb0) + 0x10);
          uVar27 = (ulong)uVar15;
          if (*(uint *)(this + 0xd0) <= uVar15) goto LAB_00103672;
          pfVar18 = (float *)((ulong)puVar3[1] * 0x10 + 0x204 + (ulong)uVar15 * 0xa04 +
                             *(long *)(this + 0xd8));
          if ((((fVar28 < *pfVar18) || (fVar29 < pfVar18[1])) ||
              ((float)((uint)pfVar18[2] ^ _LC16) < (float)uVar7)) ||
             ((float)((uint)pfVar18[3] ^ _LC16) < (float)((ulong)uVar7 >> 0x20))) {
            uVar16 = (ulong)*(uint *)(this + 0x58);
            uVar14 = uVar21;
            uVar15 = uVar25;
            if (uVar25 <= uVar24) {
              uVar14 = (ulong)uVar25;
              uVar15 = uVar24;
            }
            uVar24 = uVar15;
            if ((uint)uVar14 < *(uint *)(this + 0x58)) {
              lVar12 = *(long *)(this + 0x60);
LAB_00103732:
              puVar19 = (undefined4 *)(uVar14 * 0x20 + lVar12);
              uVar15 = uVar24;
              if (uVar24 < (uint)uVar16) goto LAB_00103745;
              uVar27 = (ulong)uVar24;
              goto LAB_00103672;
            }
LAB_001038e0:
            iVar17 = 0xb2;
            goto LAB_00103692;
          }
          if (param_1) {
            uVar15 = *(uint *)(this + 0x58);
            uVar16 = (ulong)uVar15;
            uVar14 = uVar22;
            if (uVar15 <= uVar25) goto LAB_00103881;
            lVar12 = *(long *)(this + 0x60);
            puVar4 = (undefined4 *)(lVar12 + uVar22 * 0x20);
            uVar14 = uVar21;
            if (uVar15 <= uVar24) goto LAB_00103881;
            puVar19 = (undefined4 *)(uVar21 * 0x20 + lVar12);
            if ((1 << ((byte)*puVar4 & 0x1f) & puVar19[1]) != 0 ||
                (1 << ((byte)*puVar19 & 0x1f) & puVar4[1]) != 0) {
              if (((*(uint *)(*(long *)(puVar4 + 4) + 0x7c) &
                   *(uint *)(*(long *)(puVar19 + 4) + 0x78)) != 0) ||
                 ((*(uint *)(*(long *)(puVar19 + 4) + 0x7c) &
                  *(uint *)(*(long *)(puVar4 + 4) + 0x78)) != 0)) goto LAB_00103559;
            }
            uVar15 = uVar25;
            if (uVar25 <= uVar24) {
              uVar14 = (ulong)uVar25;
              goto LAB_00103732;
            }
LAB_00103745:
            uVar27 = (ulong)uVar15;
            lVar8 = *(long *)(puVar19 + 4);
            lVar12 = uVar27 * 0x20 + lVar12;
            lVar9 = *(long *)(lVar12 + 0x10);
            if ((lVar8 != lVar9) || (lVar8 == 0)) {
              uVar24 = *(uint *)(this + 0x80);
              uVar16 = (ulong)uVar24;
              if (uVar24 <= (uint)uVar14) goto LAB_001038e0;
              lVar10 = *(long *)(this + 0x88);
              lVar5 = lVar10 + uVar14 * 0x28;
              if (uVar24 <= uVar15) goto LAB_00103672;
              iVar17 = *(int *)(lVar5 + 0x10);
              if (0 < iVar17) {
                uVar16 = 0;
                do {
                  if (uVar16 == *(uint *)(lVar5 + 0x18)) {
                    iVar17 = 0xb2;
                    uVar14 = uVar16;
                    goto LAB_00103692;
                  }
                  pauVar13 = (undefined1 (*) [16])(uVar16 * 0x10 + *(long *)(lVar5 + 0x20));
                  if (uVar15 == *(uint *)*pauVar13) {
                    local_d8 = *(undefined8 *)(*pauVar13 + 8);
                    uVar24 = *(uint *)(lVar5 + 0x18) - 1;
                    *(uint *)(lVar5 + 0x18) = uVar24;
                    if ((uint)uVar16 < uVar24) {
                      *pauVar13 = *(undefined1 (*) [16])
                                   (*(long *)(lVar5 + 0x20) + (ulong)uVar24 * 0x10);
                    }
                    *(int *)(lVar5 + 0x10) = iVar17 + -1;
                    goto LAB_00103919;
                  }
                  uVar16 = uVar16 + 1;
                } while ((long)iVar17 != uVar16);
              }
              local_d8 = 0;
LAB_00103919:
              lVar10 = lVar10 + uVar27 * 0x28;
              iVar17 = *(int *)(lVar10 + 0x10);
              if (0 < iVar17) {
                uVar16 = 0;
                do {
                  if (uVar16 == *(uint *)(lVar10 + 0x18)) {
                    iVar17 = 0xb2;
                    uVar14 = uVar16;
                    goto LAB_00103692;
                  }
                  pauVar13 = (undefined1 (*) [16])(uVar16 * 0x10 + *(long *)(lVar10 + 0x20));
                  if ((uint)uVar14 == *(uint *)*pauVar13) {
                    uVar24 = *(uint *)(lVar10 + 0x18) - 1;
                    *(uint *)(lVar10 + 0x18) = uVar24;
                    if ((uint)uVar16 < uVar24) {
                      *pauVar13 = *(undefined1 (*) [16])
                                   (*(long *)(lVar10 + 0x20) + (ulong)uVar24 * 0x10);
                    }
                    *(int *)(lVar10 + 0x10) = iVar17 + -1;
                    break;
                  }
                  uVar16 = uVar16 + 1;
                } while ((long)iVar17 != uVar16);
              }
              if (*(code **)(this + 8) != (code *)0x0) {
                (**(code **)(this + 8))
                          (*(undefined8 *)(this + 0x18),uVar14,lVar8,puVar19[3],uVar15,lVar9,
                           *(undefined4 *)(lVar12 + 0xc),local_d8);
              }
            }
          }
          else {
LAB_00103559:
            uVar23 = (ulong)((int)uVar23 + 1);
          }
        } while ((uint)uVar23 < *(uint *)(puVar2 + 3));
        uVar25 = *puVar26;
      }
      if (*(int *)(this + 0x110) != 0) {
        *(undefined4 *)(this + 0x110) = 0;
      }
      local_b4 = 0;
      local_88 = uVar7;
      local_80 = uVar30;
      if ((*(uint *)(this + 0x120) != 0xffffffff) && ((uVar6 & 1) != 0)) {
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::_cull_aabb_iterative
                  ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                    *)(this + 0x30),*(uint *)(this + 0x120),(CullParams *)&local_b8,false);
      }
      if ((*(uint *)(this + 0x124) != 0xffffffff) && ((uVar6 & 2) != 0)) {
        BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
        ::_cull_aabb_iterative
                  ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                    *)(this + 0x30),*(uint *)(this + 0x124),(CullParams *)&local_b8,false);
      }
      puVar20 = *(uint **)(this + 0x118);
      puVar3 = puVar20 + *(uint *)(this + 0x110);
      for (; puVar3 != puVar20; puVar20 = puVar20 + 1) {
        if (*puVar20 != uVar25) {
          _collide(this,*puVar26);
        }
      }
      puVar26 = puVar26 + 1;
    } while (puVar1 != puVar26);
    if (*(int *)(this + 0x138) != 0) {
      *(undefined4 *)(this + 0x138) = 0;
    }
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PooledList<BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2, Vector2>::TLeaf,
   unsigned int, true, false>::request(unsigned int&) */

long __thiscall
PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
::request(PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
          *this,uint *param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  if (iVar1 == 0) {
    uVar5 = *(uint *)this;
    *param_1 = uVar5;
    uVar4 = uVar5 + 1;
    if (uVar5 < 0xffffffff) {
      if (*(uint *)(this + 4) < uVar4) {
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        *(uint *)(this + 4) = uVar5;
        lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar5 * 0xa04,false);
        *(long *)(this + 8) = lVar6;
        if (lVar6 == 0) {
LAB_00103baa:
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      *(uint *)this = uVar4;
      uVar5 = *param_1;
      if (uVar5 < uVar4) {
        return (ulong)uVar5 * 0xa04 + *(long *)(this + 8);
      }
      uVar8 = (ulong)uVar4;
      uVar7 = (ulong)uVar5;
    }
    else {
      uVar8 = 0;
      *(undefined4 *)this = 0;
      uVar7 = (ulong)*param_1;
    }
    goto LAB_00103bf0;
  }
  pvVar2 = *(void **)(this + 0x18);
  uVar5 = iVar1 - 1;
  uVar4 = *(uint *)((long)pvVar2 + (ulong)uVar5 * 4);
  *param_1 = uVar4;
  if (uVar5 < *(uint *)(this + 0x10)) {
LAB_00103af0:
    *(uint *)(this + 0x10) = uVar5;
    uVar4 = *param_1;
  }
  else if (*(uint *)(this + 0x10) < uVar5) {
    if (*(uint *)(this + 0x14) < uVar5) {
      uVar4 = iVar1 - 2U | iVar1 - 2U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
      *(uint *)(this + 0x14) = uVar4;
      lVar6 = Memory::realloc_static(pvVar2,(ulong)uVar4 * 4,false);
      *(long *)(this + 0x18) = lVar6;
      if (lVar6 == 0) goto LAB_00103baa;
    }
    goto LAB_00103af0;
  }
  uVar7 = (ulong)uVar4;
  uVar8 = (ulong)*(uint *)this;
  if (uVar4 < *(uint *)this) {
    return uVar7 * 0xa04 + *(long *)(this + 8);
  }
LAB_00103bf0:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* LocalVector<BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::ItemPairs, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::ItemPairs,unsigned_int,false,false>
::resize(LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::ItemPairs,unsigned_int,false,false>
         *this,uint param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 * 0x28;
    uVar7 = param_1;
    do {
      lVar2 = *(long *)(this + 8) + lVar6;
      if (*(void **)(lVar2 + 0x20) != (void *)0x0) {
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
        }
        Memory::free_static(*(void **)(lVar2 + 0x20),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 * 0x28,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_00103cf3;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)(lVar6 + (ulong)uVar7 * 0x28);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 5;
      puVar3[1] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x28 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x28)
            );
  }
LAB_00103cf3:
  *(uint *)this = param_1;
  return;
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::~BVH_Tree() */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::~BVH_Tree(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            *this)

{
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    if (*(int *)(this + 0xe0) != 0) {
      *(undefined4 *)(this + 0xe0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xe8),false);
  }
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    if (*(int *)(this + 200) != 0) {
      *(undefined4 *)(this + 200) = 0;
    }
    Memory::free_static(*(void **)(this + 0xd0),false);
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    if (*(int *)(this + 0xb0) != 0) {
      *(undefined4 *)(this + 0xb0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xb8),false);
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    if (*(int *)(this + 0xa0) != 0) {
      *(undefined4 *)(this + 0xa0) = 0;
    }
    Memory::free_static(*(void **)(this + 0xa8),false);
  }
  if (*(void **)(this + 0x90) != (void *)0x0) {
    if (*(int *)(this + 0x88) != 0) {
      *(undefined4 *)(this + 0x88) = 0;
    }
    Memory::free_static(*(void **)(this + 0x90),false);
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    if (*(int *)(this + 0x78) != 0) {
      *(undefined4 *)(this + 0x78) = 0;
    }
    Memory::free_static(*(void **)(this + 0x80),false);
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    if (*(int *)(this + 0x60) != 0) {
      *(undefined4 *)(this + 0x60) = 0;
    }
    Memory::free_static(*(void **)(this + 0x68),false);
  }
  if (*(long *)(this + 0x58) != 0) {
    LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::ItemPairs,unsigned_int,false,false>
    ::resize((LocalVector<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::ItemPairs,unsigned_int,false,false>
              *)(this + 0x50),0);
    if (*(void **)(this + 0x58) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x58),false);
    }
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    if (*(int *)(this + 0x38) != 0) {
      *(undefined4 *)(this + 0x38) = 0;
    }
    Memory::free_static(*(void **)(this + 0x40),false);
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    Memory::free_static(*(void **)(this + 0x30),false);
  }
  if (*(void **)(this + 0x18) != (void *)0x0) {
    if (*(int *)(this + 0x10) != 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    Memory::free_static(*(void **)(this + 0x18),false);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 0;
    }
    Memory::free_static(*(void **)(this + 8),false);
    return;
  }
  return;
}



/* GodotBroadPhase2DBVH::~GodotBroadPhase2DBVH() */

void __thiscall GodotBroadPhase2DBVH::~GodotBroadPhase2DBVH(GodotBroadPhase2DBVH *this)

{
  *(undefined ***)this = &PTR_create_001073f0;
  if (*(void **)(this + 0x148) != (void *)0x0) {
    if (*(int *)(this + 0x140) != 0) {
      *(undefined4 *)(this + 0x140) = 0;
    }
    Memory::free_static(*(void **)(this + 0x148),false);
  }
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  ::~BVH_Tree((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
               *)(this + 0x38));
  GodotBroadPhase2D::~GodotBroadPhase2D((GodotBroadPhase2D *)this);
  return;
}



/* GodotBroadPhase2DBVH::~GodotBroadPhase2DBVH() */

void __thiscall GodotBroadPhase2DBVH::~GodotBroadPhase2DBVH(GodotBroadPhase2DBVH *this)

{
  *(undefined ***)this = &PTR_create_001073f0;
  if (*(void **)(this + 0x148) != (void *)0x0) {
    if (*(int *)(this + 0x140) != 0) {
      *(undefined4 *)(this + 0x140) = 0;
    }
    Memory::free_static(*(void **)(this + 0x148),false);
  }
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  ::~BVH_Tree((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
               *)(this + 0x38));
  GodotBroadPhase2D::~GodotBroadPhase2D((GodotBroadPhase2D *)this);
  operator_delete(this,0x1a8);
  return;
}



/* PooledList<BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2, Vector2>::TNode,
   unsigned int, true, false>::request(unsigned int&) */

long __thiscall
PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
::request(PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
          *this,uint *param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  if (iVar1 == 0) {
    uVar5 = *(uint *)this;
    *param_1 = uVar5;
    uVar4 = uVar5 + 1;
    if (uVar5 < 0xffffffff) {
      if (*(uint *)(this + 4) < uVar4) {
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        *(uint *)(this + 4) = uVar5;
        lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar5 << 5,false);
        *(long *)(this + 8) = lVar6;
        if (lVar6 == 0) {
LAB_001041e2:
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      *(uint *)this = uVar4;
      uVar5 = *param_1;
      if (uVar5 < uVar4) {
        return (ulong)uVar5 * 0x20 + *(long *)(this + 8);
      }
      uVar8 = (ulong)uVar4;
      uVar7 = (ulong)uVar5;
    }
    else {
      uVar8 = 0;
      *(undefined4 *)this = 0;
      uVar7 = (ulong)*param_1;
    }
    goto LAB_00104228;
  }
  pvVar2 = *(void **)(this + 0x18);
  uVar5 = iVar1 - 1;
  uVar4 = *(uint *)((long)pvVar2 + (ulong)uVar5 * 4);
  *param_1 = uVar4;
  if (uVar5 < *(uint *)(this + 0x10)) {
LAB_00104130:
    *(uint *)(this + 0x10) = uVar5;
    uVar4 = *param_1;
  }
  else if (*(uint *)(this + 0x10) < uVar5) {
    if (*(uint *)(this + 0x14) < uVar5) {
      uVar4 = iVar1 - 2U | iVar1 - 2U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
      *(uint *)(this + 0x14) = uVar4;
      lVar6 = Memory::realloc_static(pvVar2,(ulong)uVar4 * 4,false);
      *(long *)(this + 0x18) = lVar6;
      if (lVar6 == 0) goto LAB_001041e2;
    }
    goto LAB_00104130;
  }
  uVar7 = (ulong)uVar4;
  uVar8 = (ulong)*(uint *)this;
  if (uVar4 < *(uint *)this) {
    return uVar7 * 0x20 + *(long *)(this + 8);
  }
LAB_00104228:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::_logic_balance(int, unsigned int) */

ulong __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::_logic_balance(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                 *this,int param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort local_3a;
  
  uVar5 = (ulong)(uint)param_1;
  fVar13 = *(float *)(this + 0x78);
  if ((uint)fVar13 <= (uint)param_1) goto LAB_001043e4;
  lVar10 = *(long *)(this + 0x80);
  pfVar4 = (float *)(uVar5 * 0x20 + lVar10);
  if ((int)pfVar4[4] < 0) {
    return uVar5;
  }
  if (pfVar4[7] == 1.4013e-45) {
    return uVar5;
  }
  if (pfVar4[4] != 2.8026e-45) {
    _err_print_error("_logic_balance","./core/math/bvh_logic.inc",0x54,
                     "FATAL: Condition \"A->num_children != 2\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = *(ushort *)(pfVar4 + 6);
  uVar2 = *(ushort *)((long)pfVar4 + 0x1a);
  if ((uint)fVar13 <= (uint)uVar1) {
    uVar5 = (ulong)uVar1;
    goto LAB_001043e4;
  }
  pfVar9 = (float *)((ulong)uVar1 * 0x20 + lVar10);
  if ((uint)fVar13 <= (uint)uVar2) {
    uVar5 = (ulong)uVar2;
    goto LAB_001043e4;
  }
  fVar14 = pfVar9[7];
  pfVar11 = (float *)((ulong)uVar2 * 0x20 + lVar10);
  fVar17 = pfVar11[7];
  if ((int)fVar17 - (int)fVar14 < 2) {
    if (-2 < (int)fVar17 - (int)fVar14) {
      return uVar5;
    }
    uVar2 = *(ushort *)(pfVar9 + 6);
    local_3a = *(ushort *)((long)pfVar9 + 0x1a);
    if ((uint)fVar13 <= (uint)uVar2) {
      uVar5 = (ulong)uVar2;
      goto LAB_001043e4;
    }
    pfVar12 = (float *)((ulong)uVar2 * 0x20 + lVar10);
    if ((uint)local_3a < (uint)fVar13) {
      fVar15 = pfVar4[5];
      pfVar8 = (float *)((ulong)local_3a * 0x20 + lVar10);
      if (fVar15 == -NAN) {
        *(uint *)(this + (ulong)param_2 * 4 + 0xf0) = (uint)uVar1;
        pfVar9[5] = -NAN;
        fVar15 = pfVar4[5];
LAB_001045fa:
        fVar7 = pfVar12[7];
        fVar6 = pfVar8[7];
        *(short *)((long)pfVar9 + 0x1a) = (short)param_1;
        fVar13 = pfVar11[1];
        fVar14 = *pfVar11;
        pfVar9[5] = fVar15;
        fVar15 = pfVar11[3];
        fVar16 = pfVar11[2];
        pfVar4[5] = (float)(uint)uVar1;
        if ((int)fVar6 < (int)fVar7) {
          if (pfVar8[2] <= fVar16) {
            fVar16 = pfVar8[2];
          }
          if (*pfVar8 <= fVar14) {
            fVar14 = *pfVar8;
          }
          *(ushort *)(pfVar9 + 6) = uVar2;
          if (pfVar8[3] <= fVar15) {
            fVar15 = pfVar8[3];
          }
          if (pfVar8[1] <= fVar13) {
            fVar13 = pfVar8[1];
          }
          *(ushort *)(pfVar4 + 6) = local_3a;
          pfVar8[5] = (float)param_1;
          if ((int)fVar6 <= (int)fVar17) {
            fVar6 = fVar17;
          }
          *pfVar4 = fVar14;
          pfVar4[1] = fVar13;
          pfVar4[2] = fVar16;
          pfVar4[3] = fVar15;
          if (pfVar12[2] <= fVar16) {
            fVar16 = pfVar12[2];
          }
          if (*pfVar12 <= fVar14) {
            fVar14 = *pfVar12;
          }
          if (pfVar12[3] <= fVar15) {
            fVar15 = pfVar12[3];
          }
          if (pfVar12[1] <= fVar13) {
            fVar13 = pfVar12[1];
          }
          fVar6 = (float)((int)fVar6 + 1);
          *pfVar9 = fVar14;
          pfVar9[1] = fVar13;
          pfVar9[2] = fVar16;
          pfVar9[3] = fVar15;
          pfVar4[7] = fVar6;
          if ((int)fVar6 < (int)pfVar12[7]) {
            fVar6 = pfVar12[7];
          }
        }
        else {
          if (pfVar12[2] <= fVar16) {
            fVar16 = pfVar12[2];
          }
          if (*pfVar12 <= fVar14) {
            fVar14 = *pfVar12;
          }
          if (pfVar12[3] <= fVar15) {
            fVar15 = pfVar12[3];
          }
          if (pfVar12[1] <= fVar13) {
            fVar13 = pfVar12[1];
          }
          if ((int)fVar7 <= (int)fVar17) {
            fVar7 = fVar17;
          }
          fVar7 = (float)((int)fVar7 + 1);
          *(ushort *)(pfVar9 + 6) = local_3a;
          *(ushort *)(pfVar4 + 6) = uVar2;
          pfVar12[5] = (float)param_1;
          *pfVar4 = fVar14;
          pfVar4[1] = fVar13;
          pfVar4[2] = fVar16;
          pfVar4[3] = fVar15;
          if (pfVar8[2] <= fVar16) {
            fVar16 = pfVar8[2];
          }
          if (*pfVar8 <= fVar14) {
            fVar14 = *pfVar8;
          }
          if (pfVar8[3] <= fVar15) {
            fVar15 = pfVar8[3];
          }
          if (pfVar8[1] <= fVar13) {
            fVar13 = pfVar8[1];
          }
          *pfVar9 = fVar14;
          pfVar9[1] = fVar13;
          pfVar9[2] = fVar16;
          pfVar9[3] = fVar15;
          pfVar4[7] = fVar7;
          fVar6 = pfVar8[7];
          if ((int)pfVar8[7] <= (int)fVar7) {
            fVar6 = fVar7;
          }
        }
        pfVar9[7] = (float)((int)fVar6 + 1);
        return (ulong)(uint)uVar1;
      }
      if ((uint)fVar15 < (uint)fVar13) {
        lVar10 = lVar10 + (ulong)(uint)fVar15 * 0x20;
        if (param_1 == (uint)*(ushort *)(lVar10 + 0x18)) {
          *(ushort *)(lVar10 + 0x18) = uVar1;
        }
        else {
          *(ushort *)(lVar10 + 0x1a) = uVar1;
        }
        goto LAB_001045fa;
      }
LAB_001046aa:
      uVar5 = (ulong)(uint)fVar15;
      goto LAB_001043e4;
    }
  }
  else {
    uVar1 = *(ushort *)(pfVar11 + 6);
    local_3a = *(ushort *)((long)pfVar11 + 0x1a);
    if ((uint)fVar13 <= (uint)uVar1) {
      uVar5 = (ulong)uVar1;
      goto LAB_001043e4;
    }
    pfVar12 = (float *)((ulong)uVar1 * 0x20 + lVar10);
    if ((uint)local_3a < (uint)fVar13) {
      fVar15 = pfVar4[5];
      pfVar8 = (float *)((ulong)local_3a * 0x20 + lVar10);
      if (fVar15 == -NAN) {
        *(uint *)(this + (ulong)param_2 * 4 + 0xf0) = (uint)uVar2;
        pfVar11[5] = -NAN;
        fVar15 = pfVar4[5];
LAB_001044cd:
        fVar7 = pfVar12[7];
        fVar6 = pfVar8[7];
        *(short *)(pfVar11 + 6) = (short)param_1;
        fVar13 = *pfVar9;
        fVar17 = pfVar9[1];
        pfVar11[5] = fVar15;
        fVar15 = pfVar9[2];
        fVar16 = pfVar9[3];
        pfVar4[5] = (float)(uint)uVar2;
        if ((int)fVar6 < (int)fVar7) {
          if (pfVar8[2] <= fVar15) {
            fVar15 = pfVar8[2];
          }
          if (*pfVar8 <= fVar13) {
            fVar13 = *pfVar8;
          }
          *(ushort *)((long)pfVar11 + 0x1a) = uVar1;
          if (pfVar8[3] <= fVar16) {
            fVar16 = pfVar8[3];
          }
          if (pfVar8[1] <= fVar17) {
            fVar17 = pfVar8[1];
          }
          if ((int)fVar6 <= (int)fVar14) {
            fVar6 = fVar14;
          }
          fVar6 = (float)((int)fVar6 + 1);
          *(ushort *)((long)pfVar4 + 0x1a) = local_3a;
          pfVar8[5] = (float)param_1;
          *pfVar4 = fVar13;
          pfVar4[1] = fVar17;
          pfVar4[2] = fVar15;
          pfVar4[3] = fVar16;
          if (pfVar12[2] <= fVar15) {
            fVar15 = pfVar12[2];
          }
          if (*pfVar12 <= fVar13) {
            fVar13 = *pfVar12;
          }
          if (pfVar12[3] <= fVar16) {
            fVar16 = pfVar12[3];
          }
          if (pfVar12[1] <= fVar17) {
            fVar17 = pfVar12[1];
          }
          *pfVar11 = fVar13;
          pfVar11[1] = fVar17;
          pfVar11[2] = fVar15;
          pfVar11[3] = fVar16;
          pfVar4[7] = fVar6;
          if ((int)fVar6 < (int)pfVar12[7]) {
            fVar6 = pfVar12[7];
          }
        }
        else {
          if (pfVar12[2] <= fVar15) {
            fVar15 = pfVar12[2];
          }
          if (*pfVar12 <= fVar13) {
            fVar13 = *pfVar12;
          }
          if (pfVar12[3] <= fVar16) {
            fVar16 = pfVar12[3];
          }
          if (pfVar12[1] <= fVar17) {
            fVar17 = pfVar12[1];
          }
          if ((int)fVar14 < (int)fVar7) {
            fVar14 = fVar7;
          }
          fVar6 = (float)((int)fVar14 + 1);
          *(ushort *)((long)pfVar11 + 0x1a) = local_3a;
          *(ushort *)((long)pfVar4 + 0x1a) = uVar1;
          pfVar12[5] = (float)param_1;
          *pfVar4 = fVar13;
          pfVar4[1] = fVar17;
          pfVar4[2] = fVar15;
          pfVar4[3] = fVar16;
          if (pfVar8[2] <= fVar15) {
            fVar15 = pfVar8[2];
          }
          if (*pfVar8 <= fVar13) {
            fVar13 = *pfVar8;
          }
          if (pfVar8[3] <= fVar16) {
            fVar16 = pfVar8[3];
          }
          if (pfVar8[1] <= fVar17) {
            fVar17 = pfVar8[1];
          }
          *pfVar11 = fVar13;
          pfVar11[1] = fVar17;
          pfVar11[2] = fVar15;
          pfVar11[3] = fVar16;
          pfVar4[7] = fVar6;
          if ((int)fVar6 < (int)pfVar8[7]) {
            fVar6 = pfVar8[7];
          }
        }
        pfVar11[7] = (float)((int)fVar6 + 1);
        return (ulong)(uint)uVar2;
      }
      if ((uint)fVar15 < (uint)fVar13) {
        lVar10 = (ulong)(uint)fVar15 * 0x20 + lVar10;
        if (param_1 == (uint)*(ushort *)(lVar10 + 0x18)) {
          *(ushort *)(lVar10 + 0x18) = uVar2;
        }
        else {
          *(ushort *)(lVar10 + 0x1a) = uVar2;
        }
        goto LAB_001044cd;
      }
      goto LAB_001046aa;
    }
  }
  uVar5 = (ulong)local_3a;
LAB_001043e4:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar5,(ulong)(uint)fVar13,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::refit_upward_and_balance(unsigned int, unsigned int) */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::refit_upward_and_balance
          (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
           *this,uint param_1,uint param_2)

{
  float fVar1;
  ushort uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  ushort *puVar8;
  ulong uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar5 = CONCAT44(_UNK_00107494,_LC32);
  if (param_1 != 0xffffffff) {
    do {
      uVar6 = _logic_balance(this,param_1,param_2);
      uVar10 = *(uint *)(this + 0x78);
      uVar14 = (ulong)uVar10;
      if (uVar10 <= uVar6) {
        uVar9 = (ulong)uVar6;
LAB_00104a14:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,uVar14,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(this + 0x80);
      pfVar7 = (float *)((ulong)uVar6 * 0x20 + lVar3);
      fVar16 = pfVar7[4];
      *(undefined8 *)(pfVar7 + 2) = uVar5;
      pfVar7[0] = 3.4028235e+38;
      pfVar7[1] = 3.4028235e+38;
      pfVar7[7] = 0.0;
      if ((int)fVar16 < 0) {
        uVar14 = (ulong)*(uint *)(this + 0xa0);
        uVar10 = -(int)fVar16;
        if (*(uint *)(this + 0xa0) <= uVar10) {
          uVar9 = (ulong)uVar10;
          goto LAB_00104a14;
        }
        fVar16 = *pfVar7;
        fVar15 = pfVar7[1];
        puVar8 = (ushort *)((long)(int)uVar10 * 0xa04 + *(long *)(this + 0xa8));
        uVar2 = *puVar8;
        fVar17 = _LC32;
        fVar18 = _LC32;
        if (uVar2 != 0) {
          pfVar11 = (float *)(puVar8 + 0x102);
          do {
            if (pfVar11[2] <= fVar17) {
              fVar17 = pfVar11[2];
            }
            pfVar12 = pfVar11 + 4;
            pfVar7[2] = fVar17;
            if (*pfVar11 <= fVar16) {
              fVar16 = *pfVar11;
            }
            *pfVar7 = fVar16;
            if (pfVar11[3] <= fVar18) {
              fVar18 = pfVar11[3];
            }
            pfVar7[3] = fVar18;
            if (pfVar11[1] <= fVar15) {
              fVar15 = pfVar11[1];
            }
            pfVar7[1] = fVar15;
            pfVar11 = pfVar12;
          } while (pfVar12 != (float *)(puVar8 + (ulong)(uVar2 - 1) * 8 + 0x10a));
        }
        fVar1 = *(float *)(this + 0xf8);
        *pfVar7 = fVar16 - fVar1;
        pfVar7[1] = fVar15 - fVar1;
        pfVar7[2] = fVar17 - fVar1;
        pfVar7[3] = fVar18 - fVar1;
      }
      else {
        if (fVar16 == 0.0) {
          fVar16 = 1.4013e-45;
        }
        else {
          lVar13 = 0;
          do {
            uVar2 = *(ushort *)((long)pfVar7 + lVar13 * 2 + 0x18);
            uVar9 = (ulong)uVar2;
            if (uVar10 <= uVar2) goto LAB_00104a14;
            pfVar11 = (float *)(uVar9 * 0x20 + lVar3);
            fVar15 = pfVar7[2];
            if (pfVar11[2] <= pfVar7[2]) {
              fVar15 = pfVar11[2];
            }
            pfVar7[2] = fVar15;
            fVar15 = *pfVar7;
            if (*pfVar11 <= *pfVar7) {
              fVar15 = *pfVar11;
            }
            *pfVar7 = fVar15;
            fVar15 = pfVar7[3];
            if (pfVar11[3] <= pfVar7[3]) {
              fVar15 = pfVar11[3];
            }
            pfVar7[3] = fVar15;
            fVar15 = pfVar7[1];
            if (pfVar11[1] <= pfVar7[1]) {
              fVar15 = pfVar11[1];
            }
            fVar17 = pfVar11[7];
            pfVar7[1] = fVar15;
            if ((int)pfVar7[7] < (int)fVar17) {
              pfVar7[7] = fVar17;
            }
            lVar13 = lVar13 + 1;
          } while ((int)fVar16 != lVar13);
          fVar16 = (float)((int)pfVar7[7] + 1);
        }
        pfVar7[7] = fVar16;
      }
      param_1 = (uint)pfVar7[5];
    } while ((float)param_1 != -NAN);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::refit_upward(unsigned int) */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::refit_upward(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
               *this,uint param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  float fVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  ushort *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_1 == 0xffffffff) {
    return;
  }
  fVar4 = *(float *)(this + 0x78);
  uVar7 = CONCAT44(_UNK_00107494,_LC32);
  do {
    if ((uint)fVar4 <= param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)param_1,
                 (ulong)(uint)fVar4,"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar5 = *(long *)(this + 0x80);
    pfVar1 = (float *)(lVar5 + (ulong)param_1 * 0x20);
    fVar14 = pfVar1[4];
    *(undefined8 *)(pfVar1 + 2) = uVar7;
    pfVar1[0] = 3.4028235e+38;
    pfVar1[1] = 3.4028235e+38;
    pfVar1[7] = 0.0;
    if ((int)fVar14 < 0) {
      uVar8 = -(int)fVar14;
      if (*(uint *)(this + 0xa0) <= uVar8) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,
                   (ulong)*(uint *)(this + 0xa0),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      fVar14 = *pfVar1;
      fVar13 = pfVar1[1];
      puVar11 = (ushort *)((long)(int)uVar8 * 0xa04 + *(long *)(this + 0xa8));
      uVar3 = *puVar11;
      fVar15 = _LC32;
      fVar16 = _LC32;
      if (uVar3 != 0) {
        pfVar9 = (float *)(puVar11 + 0x102);
        do {
          if (pfVar9[2] <= fVar15) {
            fVar15 = pfVar9[2];
          }
          pfVar10 = pfVar9 + 4;
          pfVar1[2] = fVar15;
          if (*pfVar9 <= fVar14) {
            fVar14 = *pfVar9;
          }
          *pfVar1 = fVar14;
          if (pfVar9[3] <= fVar16) {
            fVar16 = pfVar9[3];
          }
          pfVar1[3] = fVar16;
          if (pfVar9[1] <= fVar13) {
            fVar13 = pfVar9[1];
          }
          pfVar1[1] = fVar13;
          pfVar9 = pfVar10;
        } while (pfVar10 != (float *)(puVar11 + (ulong)(uVar3 - 1) * 8 + 0x10a));
      }
      fVar2 = *(float *)(this + 0xf8);
      *pfVar1 = fVar14 - fVar2;
      pfVar1[1] = fVar13 - fVar2;
      pfVar1[2] = fVar15 - fVar2;
      pfVar1[3] = fVar16 - fVar2;
    }
    else {
      if (fVar14 == 0.0) {
        fVar14 = 1.4013e-45;
      }
      else {
        lVar12 = 0;
        do {
          uVar3 = *(ushort *)((long)pfVar1 + lVar12 * 2 + 0x18);
          if ((uint)fVar4 <= (uint)uVar3) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar3,
                       (ulong)(uint)fVar4,"p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          pfVar9 = (float *)((ulong)uVar3 * 0x20 + lVar5);
          fVar13 = pfVar1[2];
          if (pfVar9[2] <= pfVar1[2]) {
            fVar13 = pfVar9[2];
          }
          pfVar1[2] = fVar13;
          fVar13 = *pfVar1;
          if (*pfVar9 <= *pfVar1) {
            fVar13 = *pfVar9;
          }
          *pfVar1 = fVar13;
          fVar13 = pfVar1[3];
          if (pfVar9[3] <= pfVar1[3]) {
            fVar13 = pfVar9[3];
          }
          pfVar1[3] = fVar13;
          fVar13 = pfVar1[1];
          if (pfVar9[1] <= pfVar1[1]) {
            fVar13 = pfVar9[1];
          }
          fVar15 = pfVar9[7];
          pfVar1[1] = fVar13;
          if ((int)pfVar1[7] < (int)fVar15) {
            pfVar1[7] = fVar15;
          }
          lVar12 = lVar12 + 1;
        } while ((int)fVar14 != lVar12);
        fVar14 = (float)((int)pfVar1[7] + 1);
      }
      pfVar1[7] = fVar14;
    }
    param_1 = (uint)pfVar1[5];
  } while ((float)param_1 != -NAN);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104d2d) */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::refit_branch(unsigned int) */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::refit_branch(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
               *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  byte bVar18;
  uint auStack_270 [132];
  uint *local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (uint *)0x0;
  uVar13 = 0;
  uVar6 = 0;
  iVar14 = 0x7e;
  iVar8 = 0;
  uVar12 = *(uint *)(this + 0x78);
  puVar16 = auStack_270;
  uVar7 = param_1;
  auStack_270[0] = param_1;
  if (param_1 < uVar12) {
    do {
      lVar15 = (ulong)param_1 * 0x20 + *(long *)(this + 0x80);
      iVar1 = *(int *)(lVar15 + 0x10);
      if (iVar1 < 0) {
        uVar12 = *(uint *)(this + 0xa0);
        uVar7 = -iVar1;
        if (uVar12 <= uVar7) break;
        lVar15 = (long)(int)uVar7 * 0xa04 + *(long *)(this + 0xa8);
        if (*(short *)(lVar15 + 2) != 0) {
          *(undefined2 *)(lVar15 + 2) = 0;
          local_58 = (uint *)CONCAT44(local_58._4_4_,iVar14);
          local_60 = puVar3;
          local_50 = uVar6;
          local_4c = uVar13;
          refit_upward(this,param_1);
          iVar14 = (uint)local_58;
          puVar3 = local_60;
          uVar6 = local_50;
          uVar13 = local_4c;
        }
      }
      else if (iVar1 != 0) {
        lVar17 = 0;
        puVar11 = (uint *)((long)iVar8 << 2);
        do {
          uVar12 = (uint)*(ushort *)(lVar15 + 0x18 + lVar17 * 2);
          if (iVar14 < iVar8) {
            if (uVar6 == 0) {
              if (uVar13 < 0x100) {
                local_58 = puVar11;
                local_4c = uVar12;
                puVar3 = (uint *)Memory::realloc_static(puVar3,0x400,false);
                if (puVar3 == (uint *)0x0) {
LAB_00104fa5:
                  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                uVar13 = 0x100;
                puVar11 = local_58;
                uVar12 = local_4c;
              }
              iVar14 = 0xfe;
              lVar4 = (long)puVar3 - (long)((ulong)(puVar3 + 2) & 0xfffffffffffffff8);
              *(undefined8 *)puVar3 = *(undefined8 *)puVar16;
              *(undefined8 *)(puVar3 + 0x7e) = *(undefined8 *)(puVar16 + 0x7e);
              puVar9 = (undefined8 *)((long)puVar16 - lVar4);
              puVar10 = (undefined8 *)((ulong)(puVar3 + 2) & 0xfffffffffffffff8);
              for (uVar5 = (ulong)((int)lVar4 + 0x200U >> 3); puVar16 = puVar3, uVar6 = 0x100,
                  uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + (ulong)bVar18 * -2 + 1;
                puVar10 = puVar10 + (ulong)bVar18 * -2 + 1;
              }
            }
            else {
              uVar7 = uVar6 * 2;
              if (uVar6 <= uVar7) {
                if (uVar7 <= uVar6) {
                  iVar14 = uVar6 - 2;
                  puVar16 = puVar3;
                  goto LAB_00104e07;
                }
                if (uVar13 < uVar7) {
                  local_58 = (uint *)CONCAT44(local_58._4_4_,uVar7);
                  uVar7 = uVar7 - 1 | uVar7 - 1 >> 1;
                  uVar7 = uVar7 >> 2 | uVar7;
                  uVar7 = uVar7 | uVar7 >> 4;
                  uVar7 = uVar7 | uVar7 >> 8;
                  local_4c = (uVar7 | uVar7 >> 0x10) + 1;
                  local_60 = puVar11;
                  local_50 = uVar12;
                  puVar3 = (uint *)Memory::realloc_static(puVar3,(ulong)local_4c << 2,false);
                  puVar11 = local_60;
                  uVar13 = local_4c;
                  uVar7 = (uint)local_58;
                  uVar12 = local_50;
                  if (puVar3 == (uint *)0x0) goto LAB_00104fa5;
                }
              }
              iVar14 = uVar7 - 2;
              puVar16 = puVar3;
              uVar6 = uVar7;
            }
          }
LAB_00104e07:
          *(uint *)((long)puVar16 + (long)puVar11) = uVar12;
          iVar8 = iVar8 + 1;
          lVar17 = lVar17 + 1;
          puVar11 = puVar11 + 1;
        } while ((int)lVar17 < *(int *)(lVar15 + 0x10));
      }
      if (iVar8 == 0) {
        if (puVar3 != (uint *)0x0) {
          Memory::free_static(puVar3,false);
        }
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      iVar8 = iVar8 + -1;
      uVar12 = *(uint *)(this + 0x78);
      param_1 = puVar16[iVar8];
      uVar7 = param_1;
    } while (param_1 < uVar12);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar7,(ulong)uVar12,
             "p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Removing unreachable block (ram,0x001050f7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::split_leaf_complex(unsigned int, BVH_ABB<Rect2, Vector2> const&) */

uint __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::split_leaf_complex
          (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
           *this,uint param_1,BVH_ABB *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  BVH_ABB *pBVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  uint *puVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ushort uVar21;
  int iVar22;
  ushort *puVar23;
  uint *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ushort *puVar33;
  BVH_ABB *pBVar34;
  void *pvVar35;
  uint uVar36;
  long in_FS_OFFSET;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_c8 [8];
  uint local_c0 [2];
  uint auStack_b8 [2];
  ulong local_b0;
  long local_a8;
  BVH_ABB *local_a0;
  uint local_94;
  ushort *local_90;
  uint *local_88;
  BVH_ABB *local_80;
  uint *local_78;
  uint local_70;
  uint local_6c;
  BVH_ABB *local_68;
  BVH_ABB *local_60;
  int local_54;
  undefined8 local_50;
  uint local_48 [2];
  long local_40;
  undefined1 *puVar26;
  
  uVar5 = __LC32;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar26 = auStack_c8;
  puVar25 = auStack_c8;
  puVar28 = auStack_c8;
  local_68 = (BVH_ABB *)&local_54;
  puVar24 = local_c0;
  local_78 = auStack_b8;
  local_60 = (BVH_ABB *)(this + 0xa0);
  local_88 = puVar24;
  local_80 = param_2;
  local_6c = param_1;
  do {
    puVar14 = (undefined8 *)
              PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
                         *)(this + 0x78),puVar24);
    *puVar14 = 0x7f7fffff7f7fffff;
    *(undefined4 *)(puVar14 + 2) = 0;
    uVar13 = *puVar24;
    *(undefined4 *)((long)puVar14 + 0x1c) = 0;
    puVar14[1] = uVar5;
    *(uint *)((long)puVar14 + 0x14) = local_6c;
    puVar15 = (undefined4 *)
              PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
                         *)local_60,(uint *)local_68);
    puVar11 = local_88;
    uVar30 = *(uint *)(this + 0x78);
    uVar16 = (ulong)uVar30;
    *puVar15 = 0;
    if (uVar30 <= uVar13) {
      uVar19 = (ulong)uVar13;
      goto LAB_001053aa;
    }
    lVar20 = *(long *)(this + 0x80);
    puVar24 = puVar24 + 1;
    *(int *)(lVar20 + 0x10 + (ulong)uVar13 * 0x20) = -local_54;
  } while (local_78 != puVar24);
  if (local_6c < uVar30) {
    uVar16 = (ulong)*(uint *)(this + 0xa0);
    puVar14 = (undefined8 *)(lVar20 + (ulong)local_6c * 0x20);
    uVar13 = -*(int *)(puVar14 + 2);
    local_88 = (uint *)CONCAT44(local_88._4_4_,uVar13);
    uVar19 = (ulong)uVar13;
    puVar28 = auStack_c8;
    if (uVar13 < *(uint *)(this + 0xa0)) {
      local_b0 = (ulong)uVar13;
      lVar20 = *(long *)(this + 0xa8);
      *(undefined4 *)(puVar14 + 2) = 2;
      uVar30 = *puVar11;
      *(short *)(puVar14 + 3) = (short)uVar30;
      uVar31 = puVar11[1];
      local_90 = (ushort *)(lVar20 + local_b0 * 0xa04);
      *(short *)((long)puVar14 + 0x1a) = (short)uVar31;
      uVar12 = *local_90;
      uVar13 = uVar12 + 1;
      uVar36 = (uint)uVar12;
      local_60 = (BVH_ABB *)CONCAT44(local_60._4_4_,uVar36);
      lVar20 = (long)(int)uVar13;
      uVar32 = uVar13 * 2 + 0x17;
      puVar28 = auStack_c8;
      while (puVar26 != auStack_c8 + -(ulong)(uVar32 & 0x7f000)) {
        puVar25 = puVar28 + -0x1000;
        *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
        puVar26 = puVar28 + -0x1000;
        puVar28 = puVar28 + -0x1000;
      }
      lVar8 = -(ulong)(uVar32 & 0xff0);
      puVar27 = puVar25 + lVar8;
      if ((ulong)(uVar32 & 0xff0) != 0) {
        *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
      }
      puVar33 = (ushort *)((ulong)(puVar25 + lVar8 + 0xf) & 0xfffffffffffffff0);
      for (; puVar27 != puVar25 + (lVar8 - (ulong)(uVar32 & 0x7f000)); puVar27 = puVar27 + -0x1000)
      {
        *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
      }
      lVar8 = -(ulong)(uVar32 & 0xff0);
      puVar29 = puVar27 + lVar8;
      if ((ulong)(uVar32 & 0xff0) != 0) {
        *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
      }
      local_68 = (BVH_ABB *)((ulong)(puVar27 + lVar8 + 0xf) & 0xfffffffffffffff0);
      uVar16 = lVar20 * 0x10 + 0x10;
      for (; puVar29 != puVar27 + (lVar8 - (uVar16 & 0xfffffffffffff000));
          puVar29 = puVar29 + -0x1000) {
        *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
      }
      uVar16 = (ulong)((uint)uVar16 & 0xfff);
      lVar8 = -uVar16;
      puVar25 = puVar29 + lVar8;
      if (uVar16 != 0) {
        *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
      }
      pvVar35 = (void *)((ulong)(puVar29 + lVar8 + 0xf) & 0xfffffffffffffff0);
      if (uVar36 != 0) {
        lVar17 = 1;
        *puVar33 = 0;
        if (1 < uVar36) {
          if ((uVar36 - 1 & 1) != 0) {
            puVar33[1] = 1;
            lVar17 = 2;
            if (uVar36 < 3) goto LAB_001054e6;
          }
          do {
            puVar33[lVar17] = (ushort)lVar17;
            lVar1 = lVar17 + 1;
            lVar17 = lVar17 + 2;
            puVar33[lVar1] = (ushort)lVar1;
          } while ((int)lVar17 < (int)uVar36);
        }
LAB_001054e6:
        local_78 = (uint *)CONCAT44(local_78._4_4_,uVar36);
        *(undefined8 *)(puVar29 + lVar8 + -8) = 0x105524;
        local_a8 = lVar20;
        local_a0 = (BVH_ABB *)this;
        local_94 = uVar31;
        local_70 = uVar30;
        memcpy(pvVar35,local_90 + 0x102,(ulong)uVar36 << 4);
        lVar20 = local_a8;
        this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                *)local_a0;
        uVar30 = local_70;
        uVar31 = local_94;
        uVar12 = (ushort)local_78;
      }
      uVar5 = puVar14[1];
      uVar6 = *puVar14;
      puVar33[uVar36] = uVar12;
      fVar10 = _LC34._4_4_;
      fVar4 = (float)_LC34;
      uVar9 = *(undefined8 *)(local_80 + 8);
      fVar39 = (float)uVar6;
      fVar37 = (float)((uint)uVar5 ^ (uint)_LC18) - fVar39;
      fVar40 = (float)((ulong)uVar6 >> 0x20);
      fVar38 = (float)((uint)((ulong)uVar5 >> 0x20) ^ _LC18._4_4_) - fVar40;
      puVar2 = (undefined8 *)((long)pvVar35 + (ulong)uVar36 * 0x10);
      *puVar2 = *(undefined8 *)local_80;
      puVar2[1] = uVar9;
      local_50 = CONCAT44(fVar10 * fVar38 + fVar40,fVar4 * fVar37 + fVar39);
      local_48[0] = (uint)(fVar37 < fVar38);
      uVar36 = 0;
      iVar22 = 0;
      fVar4 = *(float *)((long)&local_50 + (ulong)local_48[0] * 4);
      local_78 = (uint *)CONCAT44(local_78._4_4_,(uint)(fVar38 <= fVar37));
      local_48[1] = (uint)(fVar38 <= fVar37);
      do {
        while( true ) {
          uVar12 = puVar33[iVar22];
          if (*(float *)((long)pvVar35 + (ulong)local_48[0] * 4 + (ulong)uVar12 * 0x10) <= fVar4)
          break;
          lVar20 = (long)(int)uVar36;
          uVar13 = uVar13 - 1;
          uVar36 = uVar36 + 1;
          *(ushort *)(local_68 + lVar20 * 2) = uVar12;
          lVar20 = (long)(int)uVar13;
          puVar33[iVar22] = puVar33[lVar20];
          if ((int)uVar13 <= iVar22) goto LAB_001055ff;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < (int)uVar13);
LAB_001055ff:
      uVar32 = uVar36;
      if ((int)uVar13 <= (int)uVar36) {
        uVar32 = uVar13;
      }
      if ((int)uVar32 < 0x20) {
        if (0 < (int)uVar36) {
          uVar13 = uVar13 + uVar36;
          local_80 = (BVH_ABB *)CONCAT44(local_80._4_4_,uVar32);
          *(undefined8 *)(puVar29 + lVar8 + -8) = 0x105644;
          local_a0 = (BVH_ABB *)this;
          local_94 = uVar31;
          local_70 = uVar30;
          memcpy(puVar33 + lVar20,local_68,(ulong)uVar36 * 2);
          this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                  *)local_a0;
          uVar30 = local_70;
          uVar32 = (uint)local_80;
          uVar31 = local_94;
        }
        if ((int)uVar13 < 1) {
          uVar18 = 0;
          uVar36 = uVar13;
        }
        else {
          uVar18 = 0;
          puVar23 = puVar33;
          do {
            uVar12 = *puVar23;
            puVar23 = puVar23 + 1;
            uVar18 = uVar18 + (*(float *)((long)&local_50 + (long)(int)(uint)local_78 * 4) <
                              *(float *)((long)pvVar35 +
                                        (long)(int)(uint)local_78 * 4 + (ulong)uVar12 * 0x10));
          } while (puVar23 != puVar33 + (int)uVar13);
          uVar36 = uVar13 - uVar18;
        }
        if ((int)uVar18 < (int)uVar36) {
          uVar36 = uVar18;
        }
        uVar18 = uVar32;
        if ((int)uVar32 < (int)uVar36) {
          uVar18 = uVar36;
        }
        if ((0 < (int)uVar18) && (uVar32 = local_48[(int)uVar32 < (int)uVar36], 0 < (int)uVar13)) {
          fVar4 = *(float *)((long)&local_50 + (long)(int)uVar32 * 4);
          uVar36 = 0;
          iVar22 = 0;
          do {
            while( true ) {
              uVar12 = puVar33[iVar22];
              if (*(float *)((long)pvVar35 + (long)(int)uVar32 * 4 + (ulong)uVar12 * 0x10) <= fVar4)
              break;
              lVar20 = (long)(int)uVar36;
              uVar13 = uVar13 - 1;
              uVar36 = uVar36 + 1;
              *(ushort *)(local_68 + lVar20 * 2) = uVar12;
              puVar33[iVar22] = puVar33[(int)uVar13];
              if ((int)uVar13 <= iVar22) goto LAB_00105728;
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 < (int)uVar13);
          goto LAB_00105728;
        }
LAB_00105850:
        uVar13 = uVar13 - 1;
        uVar12 = *puVar33;
        uVar21 = puVar33[(int)uVar13];
        *(ushort *)local_68 = uVar12;
        *puVar33 = uVar21;
        if (uVar13 == 0) {
          uVar36 = 0;
          uVar21 = uVar12;
LAB_0010574b:
          *puVar33 = uVar12;
          uVar13 = 1;
          *(ushort *)local_68 = uVar21;
LAB_0010575c:
          puVar23 = local_90;
          lVar20 = 0;
          uVar30 = uVar30 & 0xffff;
          local_78 = (uint *)CONCAT44(local_78._4_4_,0xffffffff);
          local_80 = (BVH_ABB *)this;
          local_70 = uVar36;
          while( true ) {
            uVar12 = puVar33[lVar20];
            if ((uint)local_60 == uVar12) {
              local_78 = (uint *)CONCAT44(local_78._4_4_,uVar30);
              this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                      *)local_80;
              uVar36 = local_70;
            }
            else {
              uVar31 = *(uint *)(puVar23 + (ulong)uVar12 * 2 + 2);
              *(undefined8 *)(puVar29 + lVar8 + -8) = 0x1057a8;
              _node_add_item((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                              *)local_80,uVar30,uVar31,
                             (BVH_ABB *)(puVar23 + (ulong)uVar12 * 8 + 0x102));
              this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                      *)local_80;
              uVar36 = local_70;
            }
            local_80 = (BVH_ABB *)this;
            local_70 = uVar36;
            if ((int)uVar13 <= (int)lVar20 + 1) break;
            lVar20 = lVar20 + 1;
            uVar30 = (uint)*(ushort *)(puVar14 + 3);
          }
          uVar32 = (uint)local_78;
          if (0 < (int)uVar36) {
            uVar31 = (uint)*(ushort *)((long)puVar14 + 0x1a);
            goto LAB_001057e5;
          }
        }
        else {
          uVar32 = 0xffffffff;
          uVar36 = 1;
          if (0 < (int)uVar13) goto LAB_0010575c;
LAB_001057e5:
          puVar33 = local_90;
          uVar31 = uVar31 & 0xffff;
          pBVar3 = local_68 + (long)(int)uVar36 * 2;
          pBVar34 = local_68;
          local_68 = (BVH_ABB *)this;
          while( true ) {
            uVar12 = *(ushort *)pBVar34;
            if ((uint)local_60 != uVar12) {
              uVar13 = *(uint *)(puVar33 + (ulong)uVar12 * 2 + 2);
              *(undefined8 *)(puVar29 + lVar8 + -8) = 0x10582b;
              _node_add_item((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                              *)local_68,uVar31,uVar13,
                             (BVH_ABB *)(puVar33 + (ulong)uVar12 * 8 + 0x102));
              uVar31 = uVar32;
            }
            uVar32 = uVar31;
            pBVar34 = pBVar34 + 2;
            this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                    *)local_68;
            if (pBVar34 == pBVar3) break;
            uVar31 = (uint)*(ushort *)((long)puVar14 + 0x1a);
          }
        }
        uVar13 = *(uint *)((BVH_ABB *)this + 0xa0);
        if ((uint)local_88 < uVar13) goto LAB_001052e8;
        *(undefined8 *)(puVar29 + lVar8 + -8) = 0;
        *(undefined8 *)(puVar29 + lVar8 + -0x10) = 0;
        *(undefined **)(puVar29 + lVar8 + -0x18) = &_LC9;
        *(char **)(puVar29 + lVar8 + -0x20) = "list.size()";
        *(undefined8 *)(puVar29 + lVar8 + -0x28) = 0x10594e;
        local_60 = (BVH_ABB *)this;
        _err_print_index_error
                  ("free","./core/templates/pooled_list.h",0x7b,local_b0,(ulong)uVar13,"p_id",
                   *(char **)(puVar29 + lVar8 + -0x20),*(char **)(puVar29 + lVar8 + -0x18),
                   (bool)puVar29[lVar8 + -0x10],(bool)puVar29[lVar8 + -8]);
        this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                *)local_60;
      }
      else {
LAB_00105728:
        if (uVar36 == 0) goto LAB_00105850;
        if (uVar13 == 0) {
          uVar36 = uVar36 - 1;
          uVar12 = *(ushort *)local_68;
          uVar21 = *(ushort *)(local_68 + (long)(int)uVar36 * 2);
          goto LAB_0010574b;
        }
        if (0 < (int)uVar13) goto LAB_0010575c;
        uVar32 = 0xffffffff;
        if (0 < (int)uVar36) goto LAB_001057e5;
LAB_001052e8:
        uVar13 = *(uint *)((BVH_ABB *)this + 0xb0);
        pvVar35 = *(void **)((BVH_ABB *)this + 0xb8);
        if (uVar13 == *(uint *)((BVH_ABB *)this + 0xb4)) {
          uVar16 = (ulong)(uVar13 * 2);
          if (uVar13 * 2 == 0) {
            uVar16 = 1;
          }
          *(int *)((BVH_ABB *)this + 0xb4) = (int)uVar16;
          *(undefined8 *)(puVar29 + lVar8 + -8) = 0x1059ab;
          local_60 = (BVH_ABB *)this;
          pvVar35 = (void *)Memory::realloc_static(pvVar35,uVar16 * 4,false);
          *(void **)(local_60 + 0xb8) = pvVar35;
          if (pvVar35 == (void *)0x0) {
            *(undefined8 *)(puVar29 + lVar8 + -0x10) = 0;
            *(undefined8 *)(puVar29 + lVar8 + -0x18) = 0x105a54;
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0);
            *(undefined8 *)(puVar29 + lVar8 + -0x18) = 0x105a59;
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          uVar13 = *(uint *)(local_60 + 0xb0);
          this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                  *)local_60;
        }
        *(uint *)((BVH_ABB *)this + 0xb0) = uVar13 + 1;
        *(uint *)((long)pvVar35 + (ulong)uVar13 * 4) = (uint)local_88;
        if (*(int *)((BVH_ABB *)this + 0xc0) == 0) {
          *(undefined8 *)(puVar29 + lVar8 + -0x10) = 0;
          *(undefined8 *)(puVar29 + lVar8 + -0x18) = 0x1059fd;
          local_60 = (BVH_ABB *)this;
          _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                           "Condition \"!_used_size\" is true.",
                           "_used_size has become out of sync, have you double freed an item?");
          this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                  *)local_60;
        }
        else {
          *(int *)((BVH_ABB *)this + 0xc0) = *(int *)((BVH_ABB *)this + 0xc0) + -1;
        }
      }
      uVar13 = *(uint *)(this + 0x78);
      lVar20 = 0;
      while( true ) {
        uVar12 = *(ushort *)((long)puVar14 + lVar20 + 0x18);
        uVar19 = (ulong)uVar12;
        if (uVar13 <= uVar12) break;
        uVar16 = (ulong)*(uint *)(this + 0xa0);
        uVar30 = -*(int *)(uVar19 * 0x20 + *(long *)(this + 0x80) + 0x10);
        if (*(uint *)(this + 0xa0) <= uVar30) {
          uVar19 = (ulong)uVar30;
          puVar28 = puVar29 + lVar8;
          goto LAB_001053aa;
        }
        puVar33 = (ushort *)((ulong)uVar30 * 0xa04 + *(long *)(this + 0xa8));
        uVar21 = *puVar33;
        if (uVar21 != 0) {
          uVar30 = *(uint *)this;
          uVar16 = (ulong)uVar30;
          lVar17 = 0;
          do {
            uVar31 = *(uint *)(puVar33 + lVar17 * 2 + 2);
            uVar19 = (ulong)uVar31;
            puVar28 = puVar29 + lVar8;
            if (uVar30 <= uVar31) goto LAB_001053aa;
            puVar24 = (uint *)(*(long *)(this + 8) + uVar19 * 8);
            puVar24[1] = (uint)lVar17;
            lVar17 = lVar17 + 1;
            *puVar24 = (uint)uVar12;
          } while ((int)lVar17 < (int)(uint)uVar21);
        }
        if (lVar20 == 2) {
          *(undefined8 *)(puVar29 + lVar8 + -8) = 0x1058b3;
          refit_upward(this,local_6c);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar29 + lVar8 + -8) = 0x105a69;
            __stack_chk_fail();
          }
          return uVar32;
        }
        lVar20 = 2;
      }
      *(undefined8 *)(puVar29 + lVar8 + -8) = 1;
      uVar16 = (ulong)uVar13;
      *(undefined8 *)(puVar29 + lVar8 + -0x10) = 0;
      *(undefined **)(puVar29 + lVar8 + -0x18) = &_LC9;
      *(char **)(puVar29 + lVar8 + -0x20) = "count";
      goto LAB_001053c5;
    }
  }
  else {
    uVar19 = (ulong)local_6c;
    puVar28 = auStack_c8;
  }
LAB_001053aa:
  *(undefined8 *)(puVar28 + -8) = 1;
  *(undefined8 *)(puVar28 + -0x10) = 0;
  *(undefined **)(puVar28 + -0x18) = &_LC9;
  *(char **)(puVar28 + -0x20) = "count";
  puVar25 = puVar28;
LAB_001053c5:
  *(undefined8 *)(puVar25 + -0x28) = 0x1053dd;
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar19,uVar16,"p_index",
             *(char **)(puVar25 + -0x20),*(char **)(puVar25 + -0x18),(bool)puVar25[-0x10],
             (bool)puVar25[-8]);
  *(undefined8 *)(puVar25 + -8) = 0x1053e6;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::_logic_choose_item_add_node(unsigned int, BVH_ABB<Rect2, Vector2> const&) */

ulong __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::_logic_choose_item_add_node
          (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
           *this,uint param_1,BVH_ABB *param_2)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  float *pfVar8;
  long lVar9;
  
  uVar5 = (ulong)*(uint *)(this + 0x78);
  if (param_1 < *(uint *)(this + 0x78)) {
    do {
      lVar2 = *(long *)(this + 0x80);
      lVar9 = (ulong)param_1 * 0x20 + lVar2;
      iVar7 = *(int *)(lVar9 + 0x10);
      if (iVar7 < 0) {
        uVar5 = (ulong)*(uint *)(this + 0xa0);
        uVar6 = (ulong)-iVar7;
        if ((uint)-iVar7 < *(uint *)(this + 0xa0)) {
          if (0x7f < *(ushort *)(uVar6 * 0xa04 + *(long *)(this + 0xa8))) {
            uVar5 = split_leaf_complex(this,param_1,param_2);
            return uVar5;
          }
          return (ulong)param_1;
        }
        iVar7 = 0xae;
        goto LAB_00105b43;
      }
      if (iVar7 == 1) {
        if (_logic_choose_item_add_node(unsigned_int,BVH_ABB<Rect2,Vector2>const&)::first_print !=
            '\0') {
          _err_print_error("_logic_choose_item_add_node","./core/math/bvh_logic.inc",0xda,
                           "BVH::recursive_choose_item_add_node, node with 1 child, recovering",0,1)
          ;
          _logic_choose_item_add_node(unsigned_int,BVH_ABB<Rect2,Vector2>const&)::first_print = '\0'
          ;
          uVar5 = (ulong)*(uint *)(this + 0x78);
        }
        uVar1 = *(ushort *)(lVar9 + 0x18);
      }
      else {
        uVar1 = *(ushort *)(lVar9 + 0x18);
        if ((uint)uVar5 <= (uint)uVar1) {
          uVar6 = (ulong)uVar1;
          goto LAB_00105b23;
        }
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x1a);
        pfVar4 = (float *)((ulong)uVar1 * 0x20 + lVar2);
        if ((uint)uVar5 <= (uint)*(ushort *)(lVar9 + 0x1a)) goto LAB_00105b23;
        pfVar8 = (float *)(lVar2 + uVar6 * 0x20);
        uVar1 = *(ushort *)
                 (lVar9 + 0x18 +
                 (ulong)(ABS((*(float *)param_2 - *(float *)(param_2 + 8)) - (*pfVar8 - pfVar8[2]))
                         + 0.0 + ABS((*(float *)(param_2 + 4) - *(float *)(param_2 + 0xc)) -
                                     (pfVar8[1] - pfVar8[3])) <=
                        ABS((*(float *)(param_2 + 4) - *(float *)(param_2 + 0xc)) -
                            (pfVar4[1] - pfVar4[3])) +
                        ABS((*(float *)param_2 - *(float *)(param_2 + 8)) - (*pfVar4 - pfVar4[2])) +
                        0.0) * 2);
      }
      param_1 = (uint)uVar1;
    } while ((uint)uVar1 < (uint)uVar5);
  }
  uVar6 = (ulong)param_1;
LAB_00105b23:
  iVar7 = 0xb2;
LAB_00105b43:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar7,uVar6,uVar5,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::node_free_node_and_leaf(unsigned int) */

ulong __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::node_free_node_and_leaf
          (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
           *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  
  if (*(uint *)(this + 0x78) <= param_1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)param_1,
               (ulong)*(uint *)(this + 0x78),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar1 = *(int *)((ulong)param_1 * 0x20 + *(long *)(this + 0x80) + 0x10);
  if (iVar1 < 0) {
    uVar4 = -iVar1;
    if (uVar4 < *(uint *)(this + 0xa0)) {
      uVar2 = *(uint *)(this + 0xb0);
      pvVar5 = *(void **)(this + 0xb8);
      if (uVar2 == *(uint *)(this + 0xb4)) {
        uVar6 = (ulong)(uVar2 * 2);
        if (uVar2 * 2 == 0) {
          uVar6 = 1;
        }
        *(int *)(this + 0xb4) = (int)uVar6;
        pvVar5 = (void *)Memory::realloc_static(pvVar5,uVar6 * 4,false);
        *(void **)(this + 0xb8) = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_00105fa0;
        uVar2 = *(uint *)(this + 0xb0);
      }
      *(uint *)(this + 0xb0) = uVar2 + 1;
      *(uint *)((long)pvVar5 + (ulong)uVar2 * 4) = uVar4;
      if (*(int *)(this + 0xc0) == 0) {
        _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                         "Condition \"!_used_size\" is true.",
                         "_used_size has become out of sync, have you double freed an item?",0,0);
      }
      else {
        *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + -1;
      }
    }
    else {
      _err_print_index_error
                ("free","./core/templates/pooled_list.h",0x7b,(long)(int)uVar4,
                 (ulong)*(uint *)(this + 0xa0),"p_id","list.size()","",false,false);
    }
    if (*(uint *)(this + 0x78) <= param_1) {
      uVar6 = _err_print_index_error
                        ("free","./core/templates/pooled_list.h",0x7b,(ulong)param_1,
                         (ulong)*(uint *)(this + 0x78),"p_id","list.size()","",false,false);
      return uVar6;
    }
  }
  uVar4 = *(uint *)(this + 0x88);
  pvVar5 = *(void **)(this + 0x90);
  if (uVar4 == *(uint *)(this + 0x8c)) {
    uVar6 = (ulong)(uVar4 * 2);
    if (uVar4 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(this + 0x8c) = (int)uVar6;
    pvVar5 = (void *)Memory::realloc_static(pvVar5,uVar6 * 4,false);
    *(void **)(this + 0x90) = pvVar5;
    if (pvVar5 == (void *)0x0) {
LAB_00105fa0:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar4 = *(uint *)(this + 0x88);
  }
  *(uint *)(this + 0x88) = uVar4 + 1;
  *(uint *)((long)pvVar5 + (ulong)uVar4 * 4) = param_1;
  if (*(int *)(this + 0x98) == 0) {
    uVar6 = 0;
    _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                     "Condition \"!_used_size\" is true.",
                     "_used_size has become out of sync, have you double freed an item?",0);
  }
  else {
    uVar4 = *(int *)(this + 0x98) - 1;
    uVar6 = (ulong)uVar4;
    *(uint *)(this + 0x98) = uVar4;
  }
  return uVar6;
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::node_remove_child(unsigned int, unsigned int, unsigned int, bool) [clone .isra.0] */

ulong BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
      ::node_remove_child(uint param_1,uint param_2,uint param_3,bool param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  undefined7 in_register_00000009;
  int iVar10;
  uint uVar11;
  undefined4 in_register_0000003c;
  BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
  *this;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  
  this = (BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
          *)CONCAT44(in_register_0000003c,param_1);
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 <= param_2) {
    uVar14 = (ulong)param_2;
    goto LAB_0010615d;
  }
  uVar14 = (ulong)param_2;
  lVar4 = *(long *)(this + 0x80);
  uVar12 = CONCAT71(in_register_00000009,param_4) & 0xffffffff;
  uVar9 = lVar4 + uVar14 * 0x20;
  iVar3 = *(int *)(uVar9 + 0x10);
  iVar10 = iVar3 + -1;
  uVar1 = *(undefined2 *)(uVar9 + 0x18 + (long)iVar10 * 2);
  if (iVar3 < 1) {
    uVar11 = *(uint *)(uVar9 + 0x14);
    *(undefined2 *)(uVar9 + 0x200000016) = uVar1;
    *(int *)(uVar9 + 0x10) = iVar10;
LAB_001061d0:
    if (uVar11 == 0xffffffff) {
      return uVar9;
    }
    node_remove_child(param_1,uVar11,param_2,SUB81(uVar12,0));
    uVar6 = *(uint *)(this + 0x78);
    if (uVar6 <= param_2) goto LAB_0010615d;
    iVar10 = *(int *)(*(long *)(this + 0x80) + 0x10 + uVar14 * 0x20);
    if (iVar10 < 0) {
      uVar6 = -iVar10;
      if (uVar6 < *(uint *)(this + 0xa0)) {
        uVar11 = *(uint *)(this + 0xb0);
        pvVar8 = *(void **)(this + 0xb8);
        if (uVar11 == *(uint *)(this + 0xb4)) {
          uVar9 = (ulong)(uVar11 * 2);
          if (uVar11 * 2 == 0) {
            uVar9 = 1;
          }
          *(int *)(this + 0xb4) = (int)uVar9;
          pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar9 * 4,false);
          *(void **)(this + 0xb8) = pvVar8;
          if (pvVar8 == (void *)0x0) goto LAB_00106436;
          uVar11 = *(uint *)(this + 0xb0);
        }
        *(uint *)(this + 0xb0) = uVar11 + 1;
        *(uint *)((long)pvVar8 + (ulong)uVar11 * 4) = uVar6;
        if (*(int *)(this + 0xc0) == 0) {
          _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                           "Condition \"!_used_size\" is true.",
                           "_used_size has become out of sync, have you double freed an item?",0,0);
        }
        else {
          *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + -1;
        }
      }
      else {
        _err_print_index_error
                  ("free","./core/templates/pooled_list.h",0x7b,(long)(int)uVar6,
                   (ulong)*(uint *)(this + 0xa0),"p_id","list.size()","",false,false);
      }
      if (*(uint *)(this + 0x78) <= param_2) {
        uVar14 = _err_print_index_error
                           ("free","./core/templates/pooled_list.h",0x7b,uVar14,
                            (ulong)*(uint *)(this + 0x78),"p_id","list.size()","",false,false);
        return uVar14;
      }
    }
  }
  else {
    if (param_3 == *(ushort *)(uVar9 + 0x18)) {
      lVar7 = 0;
LAB_001062a6:
      *(undefined2 *)(uVar9 + 0x18 + lVar7 * 2) = uVar1;
      *(int *)(uVar9 + 0x10) = iVar10;
      if (1 < iVar10) {
        return uVar9;
      }
      uVar11 = *(uint *)(uVar9 + 0x14);
      if (iVar10 != 1) goto LAB_001061d0;
    }
    else {
      if (iVar3 == 1) {
        lVar7 = 0xffffffff;
        goto LAB_001062a6;
      }
      if (*(ushort *)(uVar9 + 0x1a) == param_3) {
        *(undefined2 *)(uVar9 + 0x1a) = uVar1;
        *(int *)(uVar9 + 0x10) = iVar10;
      }
      else {
        *(undefined2 *)(uVar9 + 0x200000016) = uVar1;
        *(int *)(uVar9 + 0x10) = iVar10;
      }
      if (iVar10 != 1) {
        return uVar9;
      }
      uVar11 = *(uint *)(uVar9 + 0x14);
    }
    uVar2 = *(ushort *)(uVar9 + 0x18);
    uVar9 = (ulong)uVar2;
    if (uVar11 == 0xffffffff) {
      *(uint *)(this + uVar12 * 4 + 0xf0) = (uint)uVar2;
      uVar14 = uVar9;
      if (uVar2 < uVar6) {
        *(undefined4 *)(lVar4 + 0x14 + uVar9 * 0x20) = 0xffffffff;
        uVar14 = node_free_node_and_leaf(this,param_2);
        return uVar14;
      }
      goto LAB_0010615d;
    }
    uVar14 = (ulong)uVar11;
    if (uVar6 <= uVar11) goto LAB_0010615d;
    lVar7 = (ulong)uVar11 * 0x20 + lVar4;
    if (*(int *)(lVar7 + 0x10) < 1) {
LAB_00106376:
      iVar10 = -1;
    }
    else if (param_2 == *(ushort *)(lVar7 + 0x18)) {
      iVar10 = 0;
    }
    else {
      if (*(int *)(lVar7 + 0x10) == 1) goto LAB_00106376;
      bVar13 = param_2 == *(ushort *)(lVar7 + 0x1a);
      iVar10 = (bVar13 - 1) + (uint)bVar13;
    }
    *(ushort *)(lVar7 + 0x18 + (long)iVar10 * 2) = uVar2;
    uVar14 = uVar9;
    if (uVar6 <= uVar2) {
LAB_0010615d:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar6,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(uint *)(lVar4 + 0x14 + uVar9 * 0x20) = uVar11;
  }
  uVar6 = *(uint *)(this + 0x88);
  pvVar8 = *(void **)(this + 0x90);
  if (uVar6 == *(uint *)(this + 0x8c)) {
    uVar14 = (ulong)(uVar6 * 2);
    if (uVar6 * 2 == 0) {
      uVar14 = 1;
    }
    *(int *)(this + 0x8c) = (int)uVar14;
    pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar14 * 4,false);
    *(void **)(this + 0x90) = pvVar8;
    if (pvVar8 == (void *)0x0) {
LAB_00106436:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar6 = *(uint *)(this + 0x88);
  }
  *(uint *)(this + 0x88) = uVar6 + 1;
  *(uint *)((long)pvVar8 + (ulong)uVar6 * 4) = param_2;
  if (*(int *)(this + 0x98) == 0) {
    uVar14 = 0;
    _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                     "Condition \"!_used_size\" is true.",
                     "_used_size has become out of sync, have you double freed an item?",0);
    return uVar14;
  }
  uVar6 = *(int *)(this + 0x98) - 1;
  *(uint *)(this + 0x98) = uVar6;
  return (ulong)uVar6;
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::node_remove_item(unsigned int, unsigned int, BVH_ABB<Rect2, Vector2>*) */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::node_remove_item(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                   *this,uint param_1,uint param_2,BVH_ABB *param_3)

{
  ushort uVar1;
  uint *puVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  ushort *puVar12;
  uint uVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  float fVar17;
  
  uVar4 = *(uint *)this;
  if (param_1 < uVar4) {
    lVar7 = *(long *)(this + 8);
    puVar2 = (uint *)(lVar7 + (ulong)param_1 * 8);
    uVar5 = *puVar2;
    if (uVar5 == 0xffffffff) {
      return;
    }
    if (uVar5 < *(uint *)(this + 0x78)) {
      pfVar15 = (float *)((ulong)uVar5 * 0x20 + *(long *)(this + 0x80));
      if (-1 < (int)pfVar15[4]) {
        _err_print_error("node_remove_item","./core/math/bvh_tree.h",0x143,
                         "FATAL: Condition \"!tnode.is_leaf()\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar13 = -(int)pfVar15[4];
      uVar14 = (ulong)(int)uVar13;
      uVar10 = *(uint *)(this + 0xa0);
      if (uVar13 < *(uint *)(this + 0xa0)) {
        uVar13 = puVar2[1];
        uVar16 = (ulong)uVar13;
        fVar17 = _LC48 - *(float *)(this + 0xf8);
        puVar12 = (ushort *)(uVar14 * 0xa04 + *(long *)(this + 0xa8));
        pfVar3 = (float *)(puVar12 + uVar16 * 8 + 0x102);
        if (((pfVar3[2] <= pfVar15[2] - fVar17 && pfVar15[2] - fVar17 != pfVar3[2]) ||
            (pfVar3[3] <= pfVar15[3] - fVar17 && pfVar15[3] - fVar17 != pfVar3[3])) ||
           (*pfVar3 <= *pfVar15 - fVar17 && *pfVar15 - fVar17 != *pfVar3)) {
          bVar9 = true;
        }
        else {
          bVar9 = pfVar3[1] <= pfVar15[1] - fVar17 && pfVar15[1] - fVar17 != pfVar3[1];
        }
        if (param_3 != (BVH_ABB *)0x0) {
          uVar11 = *(undefined8 *)(puVar12 + uVar16 * 8 + 0x102 + 4);
          *(undefined8 *)param_3 = *(undefined8 *)(puVar12 + uVar16 * 8 + 0x102);
          *(undefined8 *)(param_3 + 8) = uVar11;
        }
        uVar1 = *puVar12 - 1;
        *puVar12 = uVar1;
        uVar6 = *(uint *)(puVar12 + (ulong)uVar1 * 2 + 2);
        uVar14 = (ulong)uVar6;
        uVar11 = *(undefined8 *)(puVar12 + (ulong)uVar1 * 8 + 0x102 + 4);
        *(undefined8 *)(puVar12 + uVar16 * 8 + 0x102) =
             *(undefined8 *)(puVar12 + (ulong)uVar1 * 8 + 0x102);
        *(undefined8 *)(puVar12 + uVar16 * 8 + 0x102 + 4) = uVar11;
        *(uint *)(puVar12 + uVar16 * 2 + 2) = uVar6;
        if (uVar1 == 0) {
          fVar17 = pfVar15[5];
          if (fVar17 != -NAN) {
            node_remove_child((uint)this,(uint)fVar17,uVar5,SUB41(param_2,0));
            refit_upward(this,(uint)fVar17);
            node_free_node_and_leaf(this,uVar5);
            puVar2[0] = 0xffffffff;
            puVar2[1] = 0xffffffff;
            return;
          }
        }
        else {
          uVar10 = uVar4;
          if (uVar4 <= uVar6) goto LAB_001066e8;
          *(uint *)(lVar7 + 4 + uVar14 * 8) = uVar13;
          if (bVar9) {
            puVar12[1] = 1;
          }
        }
        puVar2[0] = 0xffffffff;
        puVar2[1] = 0xffffffff;
        return;
      }
    }
    else {
      uVar14 = (ulong)uVar5;
      uVar10 = *(uint *)(this + 0x78);
    }
  }
  else {
    uVar14 = (ulong)param_1;
    uVar10 = uVar4;
  }
LAB_001066e8:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar10,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::item_remove(BVHHandle) */

ulong __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::item_remove(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
              *this,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)*(uint *)(this + 0x28);
  if (*(uint *)(this + 0x28) <= param_2) {
    uVar10 = (ulong)param_2;
    iVar5 = 0xae;
    goto LAB_001067bc;
  }
  uVar10 = (ulong)param_2;
  uVar1 = *(uint *)(this + 200);
  puVar7 = (uint *)(uVar10 * 0x20 + *(long *)(this + 0x30));
  uVar6 = *puVar7;
  uVar2 = puVar7[6];
  if (uVar1 == 0) {
    uVar11 = 0;
    uVar10 = 0xffffffff;
  }
  else {
    pvVar8 = *(void **)(this + 0xd0);
    uVar3 = *(uint *)((long)pvVar8 + (ulong)(uVar1 - 1) * 4);
    uVar11 = (ulong)uVar2;
    if (uVar2 < uVar1) {
      *(uint *)((long)pvVar8 + (ulong)uVar2 * 4) = uVar3;
      iVar5 = *(int *)(this + 200) + -1;
      if (*(int *)(this + 200) == 0) {
        if (*(int *)(this + 0xcc) != -1) {
          *(undefined4 *)(this + 0xcc) = 0;
          lVar9 = Memory::realloc_static(pvVar8,0,false);
          *(long *)(this + 0xd0) = lVar9;
          if (lVar9 == 0) {
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        iVar5 = -1;
      }
      uVar1 = *(uint *)(this + 0x28);
      *(int *)(this + 200) = iVar5;
      uVar11 = (ulong)uVar3;
      if (uVar3 < uVar1) {
        uVar1 = *(uint *)this;
        uVar11 = (ulong)uVar1;
        *(uint *)((ulong)uVar3 * 0x20 + *(long *)(this + 0x30) + 0x18) = uVar2;
        if (uVar1 <= param_2) goto LAB_001067b7;
        if (*(int *)(*(long *)(this + 8) + uVar10 * 8) == -2) {
LAB_00106893:
          uVar6 = *(uint *)(this + 0x10);
          pvVar8 = *(void **)(this + 0x18);
          if (uVar6 == *(uint *)(this + 0x14)) {
            uVar11 = (ulong)(uVar6 * 2);
            if (uVar6 * 2 == 0) {
              uVar11 = 1;
            }
            *(int *)(this + 0x14) = (int)uVar11;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar11 * 4,false);
            *(void **)(this + 0x18) = pvVar8;
            if (pvVar8 == (void *)0x0) goto LAB_00106c10;
            uVar6 = *(uint *)(this + 0x10);
          }
          *(uint *)(this + 0x10) = uVar6 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar6 * 4) = param_2;
          if (*(int *)(this + 0x20) == 0) {
            _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                             "Condition \"!_used_size\" is true.",
                             "_used_size has become out of sync, have you double freed an item?",0,0
                            );
          }
          else {
            *(int *)(this + 0x20) = *(int *)(this + 0x20) + -1;
          }
        }
        else {
          node_remove_item(this,param_2,uVar6,(BVH_ABB *)0x0);
          if (param_2 < *(uint *)this) goto LAB_00106893;
          _err_print_index_error
                    ("free","./core/templates/pooled_list.h",0x7b,uVar10,(ulong)*(uint *)this,"p_id"
                     ,"list.size()","",false,false);
        }
        if (param_2 < *(uint *)(this + 0x28)) {
          uVar6 = *(uint *)(this + 0x38);
          pvVar8 = *(void **)(this + 0x40);
          if (uVar6 == *(uint *)(this + 0x3c)) {
            uVar11 = (ulong)(uVar6 * 2);
            if (uVar6 * 2 == 0) {
              uVar11 = 1;
            }
            *(int *)(this + 0x3c) = (int)uVar11;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar11 * 4,false);
            *(void **)(this + 0x40) = pvVar8;
            if (pvVar8 == (void *)0x0) goto LAB_00106c10;
            uVar6 = *(uint *)(this + 0x38);
          }
          *(uint *)(this + 0x38) = uVar6 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar6 * 4) = param_2;
          if (*(int *)(this + 0x48) == 0) {
            _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                             "Condition \"!_used_size\" is true.",
                             "_used_size has become out of sync, have you double freed an item?",0,0
                            );
          }
          else {
            *(int *)(this + 0x48) = *(int *)(this + 0x48) + -1;
          }
        }
        else {
          _err_print_index_error
                    ("free","./core/templates/pooled_list.h",0x7b,uVar10,
                     (ulong)*(uint *)(this + 0x28),"p_id","list.size()","",false,false);
        }
        if (param_2 < *(uint *)(this + 0x50)) {
          uVar6 = *(uint *)(this + 0x60);
          pvVar8 = *(void **)(this + 0x68);
          if (uVar6 == *(uint *)(this + 100)) {
            uVar11 = (ulong)(uVar6 * 2);
            if (uVar6 * 2 == 0) {
              uVar11 = 1;
            }
            *(int *)(this + 100) = (int)uVar11;
            pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar11 * 4,false);
            *(void **)(this + 0x68) = pvVar8;
            if (pvVar8 == (void *)0x0) {
LAB_00106c10:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar6 = *(uint *)(this + 0x60);
          }
          *(uint *)(this + 0x60) = uVar6 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar6 * 4) = param_2;
          if (*(int *)(this + 0x70) == 0) {
            uVar11 = 0;
            _err_print_error(&_LC37,"./core/templates/pooled_list.h",0x7d,
                             "Condition \"!_used_size\" is true.",
                             "_used_size has become out of sync, have you double freed an item?",0);
          }
          else {
            uVar6 = *(int *)(this + 0x70) - 1;
            uVar11 = (ulong)uVar6;
            *(uint *)(this + 0x70) = uVar6;
          }
        }
        else {
          uVar11 = _err_print_index_error
                             ("free","./core/templates/pooled_list.h",0x7b,uVar10,
                              (ulong)*(uint *)(this + 0x50),"p_id","list.size()","",false,false);
        }
        return uVar11;
      }
    }
    uVar10 = uVar11;
    uVar11 = (ulong)uVar1;
  }
LAB_001067b7:
  iVar5 = 0xb2;
LAB_001067bc:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar5,uVar10,uVar11,"p_index","count",""
             ,false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::item_move(BVHHandle, Rect2 const&) */

undefined8 __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::item_move(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            *this,uint param_2,float *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  long local_30;
  ulong uVar10;
  
  uVar15 = (ulong)*(uint *)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (ulong)param_2;
  if (param_2 < *(uint *)this) {
    uVar12 = (ulong)param_2;
    puVar1 = (uint *)(*(long *)(this + 8) + uVar12 * 8);
    uVar8 = *puVar1;
    if (uVar8 == 0xfffffffe) {
LAB_00106f48:
      uVar11 = 0;
      goto LAB_00106f4a;
    }
    uVar15 = (ulong)*(uint *)(this + 0x50);
    local_48 = *(undefined8 *)param_3;
    fVar18 = *param_3;
    uVar10 = uVar12;
    if (param_2 < *(uint *)(this + 0x50)) {
      fStack_3c = (float)((double)*(int *)(*(long *)(this + 0x58) + uVar12 * 0x28 + 0x10) * __LC51);
      if (fStack_3c < _LC52) {
        fStack_3c = _LC52 - fStack_3c;
      }
      else {
        fStack_3c = 0.0;
      }
      fStack_3c = *(float *)(this + 0x100) * fStack_3c;
      uVar15 = (ulong)*(uint *)(this + 0x78);
      local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
      local_48._0_4_ = (float)local_48 - fStack_3c;
      local_48._4_4_ = local_48._4_4_ - fStack_3c;
      fStack_40 = (float)((uint)(fVar18 + param_3[2]) ^ _LC16) - fStack_3c;
      fStack_3c = (float)((uint)(param_3[1] + param_3[3]) ^ _LC16) - fStack_3c;
      uVar10 = (ulong)uVar8;
      if (uVar8 < *(uint *)(this + 0x78)) {
        pfVar9 = (float *)((ulong)uVar8 * 0x20 + *(long *)(this + 0x80));
        if ((((fStack_40 < pfVar9[2]) || (fStack_3c < pfVar9[3])) || ((float)local_48 < *pfVar9)) ||
           (local_48._4_4_ < pfVar9[1])) {
          uVar15 = (ulong)*(uint *)(this + 0x28);
          if (*(uint *)(this + 0x28) <= param_2) {
            iVar13 = 0xae;
            goto LAB_00106f92;
          }
          uVar8 = *(uint *)(uVar12 * 0x20 + *(long *)(this + 0x30));
          node_remove_item(this,param_2,uVar8,(BVH_ABB *)0x0);
          uVar8 = _logic_choose_item_add_node
                            (this,*(uint *)(this + (ulong)uVar8 * 4 + 0xf0),(BVH_ABB *)&local_48);
          *puVar1 = uVar8;
          cVar7 = _node_add_item(this,uVar8,param_2,(BVH_ABB *)&local_48);
          if (cVar7 != '\0') {
            uVar10 = (ulong)*puVar1;
            uVar15 = (ulong)*(uint *)(this + 0x78);
            if (*(uint *)(this + 0x78) <= *puVar1) goto LAB_00106f72;
            uVar8 = *(uint *)(uVar10 * 0x20 + *(long *)(this + 0x80) + 0x14);
            if (uVar8 != 0xffffffff) {
              refit_upward(this,uVar8);
            }
          }
        }
        else {
          uVar15 = (ulong)*(uint *)(this + 0xa0);
          uVar8 = -(int)pfVar9[4];
          uVar10 = (ulong)uVar8;
          if (*(uint *)(this + 0xa0) <= uVar8) goto LAB_00106f72;
          uVar5 = puVar1[1];
          lVar14 = (ulong)uVar8 * 0xa04 + *(long *)(this + 0xa8);
          pfVar9 = (float *)(lVar14 + 0x204 + (ulong)uVar5 * 0x10);
          fVar3 = *pfVar9;
          fVar4 = pfVar9[1];
          fVar17 = (float)((uint)pfVar9[2] ^ _LC16) - fVar3;
          fVar16 = (float)((uint)pfVar9[3] ^ _LC16) - fVar4;
          if (((fVar17 < 0.0) || (fVar16 < 0.0)) || ((param_3[2] < 0.0 || (param_3[3] < 0.0)))) {
            _err_print_error("encloses","./core/math/rect2.h",0x87,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar18 = *param_3;
          }
          if (((fVar3 <= fVar18) && (fVar4 <= param_3[1])) &&
             ((fVar18 + param_3[2] <= fVar3 + fVar17 &&
              ((param_3[1] + param_3[3] <= fVar4 + fVar16 &&
               ((fVar16 + fVar17 + 0.0) - (param_3[2] + 0.0 + param_3[3]) < *(float *)(this + 0x104)
               )))))) goto LAB_00106f48;
          puVar2 = (undefined8 *)((ulong)uVar5 * 0x10 + 0x204 + lVar14);
          *puVar2 = local_48;
          puVar2[1] = CONCAT44(fStack_3c,fStack_40);
        }
        uVar11 = 1;
LAB_00106f4a:
        if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return uVar11;
      }
    }
  }
LAB_00106f72:
  iVar13 = 0xb2;
  uVar12 = uVar10;
LAB_00106f92:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar13,uVar12,uVar15,"p_index","count",
             "",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::item_set_tree(BVHHandle const&, unsigned int, unsigned int) */

uint BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
     ::item_set_tree(BVHHandle *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint in_ECX;
  int iVar9;
  uint *puVar10;
  undefined4 in_register_00000034;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 in_R9;
  long in_FS_OFFSET;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  ulong uVar6;
  
  uVar13 = *(uint *)CONCAT44(in_register_00000034,param_2);
  uVar11 = (ulong)*(uint *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar13 < *(uint *)(param_1 + 0x28)) {
    uVar11 = (ulong)*(uint *)param_1;
    uVar6 = (ulong)uVar13;
    puVar10 = (uint *)(uVar6 * 0x20 + *(long *)(param_1 + 0x30));
    if (uVar13 < *(uint *)param_1) {
      puVar1 = (uint *)(*(long *)(param_1 + 8) + uVar6 * 8);
      uVar5 = *puVar1;
      uVar6 = (ulong)uVar5;
      uVar12 = (uint)CONCAT71((int7)((ulong)in_R9 >> 8),puVar10[1] != in_ECX) |
               (uint)CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),*puVar10 != param_3);
      if ((uVar5 == 0xfffffffe) || ((char)uVar12 == '\0')) {
        *puVar10 = param_3;
        puVar10[1] = in_ECX;
        uVar13 = uVar12;
        goto LAB_0010714e;
      }
      uVar11 = (ulong)*(uint *)(param_1 + 0x78);
      if (uVar5 < *(uint *)(param_1 + 0x78)) {
        uVar5 = *(uint *)(param_1 + 0xa0);
        uVar4 = -*(int *)(uVar6 * 0x20 + *(long *)(param_1 + 0x80) + 0x10);
        uVar6 = (ulong)uVar4;
        if (uVar4 < uVar5) {
          puVar7 = (undefined8 *)
                   ((ulong)puVar1[1] * 0x10 + 0x204 + uVar6 * 0xa04 + *(long *)(param_1 + 0xa8));
          local_58 = *puVar7;
          uStack_50 = puVar7[1];
          node_remove_item((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                            *)param_1,uVar13,*puVar10,(BVH_ABB *)0x0);
          uVar5 = *(uint *)CONCAT44(in_register_00000034,param_2);
          uVar4 = *(uint *)(param_1 + 0x28);
          uVar11 = (ulong)uVar4;
          *puVar10 = param_3;
          puVar10[1] = in_ECX;
          if (uVar4 <= uVar5) {
            uVar6 = (ulong)uVar5;
            iVar9 = 0xae;
            goto LAB_0010719b;
          }
          uVar4 = *(uint *)((ulong)uVar5 * 0x20 + *(long *)(param_1 + 0x30));
          if (*(int *)(param_1 + (long)(int)uVar4 * 4 + 0xf0) == -1) {
            puVar7 = (undefined8 *)
                     PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
                     ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TNode,unsigned_int,true,false>
                                *)(param_1 + 0x78),&local_60);
            *(undefined4 *)((long)puVar7 + 0x1c) = 0;
            puVar7[1] = __LC32;
            puVar7[2] = 0xffffffff00000000;
            *puVar7 = 0x7f7fffff7f7fffff;
            *(uint *)(param_1 + ((long)(int)uVar4 + 0x3c) * 4) = local_60;
            puVar8 = (undefined4 *)
                     PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
                     ::request((PooledList<BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>::TLeaf,unsigned_int,true,false>
                                *)(param_1 + 0xa0),&local_5c);
            *puVar8 = 0;
            *(uint *)(puVar7 + 2) = -local_5c;
          }
          uVar5 = _logic_choose_item_add_node
                            ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                              *)param_1,*(uint *)(param_1 + (ulong)uVar4 * 4 + 0xf0),
                             (BVH_ABB *)&local_58);
          *puVar1 = uVar5;
          cVar3 = _node_add_item((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                                  *)param_1,uVar5,uVar13,(BVH_ABB *)&local_58);
          uVar13 = uVar12 & 0xff;
          if (cVar3 == '\0') {
LAB_0010714e:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return uVar13;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          uVar6 = (ulong)*puVar1;
          uVar5 = *(uint *)(param_1 + 0x78);
          if (*puVar1 < uVar5) {
            uVar5 = *(uint *)(uVar6 * 0x20 + *(long *)(param_1 + 0x80) + 0x14);
            if (uVar5 != 0xffffffff) {
              refit_upward_and_balance
                        ((BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
                          *)param_1,uVar5,uVar4);
              uVar13 = uVar12 & 0xff;
            }
            goto LAB_0010714e;
          }
        }
        uVar11 = (ulong)uVar5;
      }
    }
  }
  else {
    uVar6 = (ulong)uVar13;
  }
  iVar9 = 0xb2;
LAB_0010719b:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar9,uVar6,uVar11,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotBroadPhase2DBVH::~GodotBroadPhase2DBVH() */

void __thiscall GodotBroadPhase2DBVH::~GodotBroadPhase2DBVH(GodotBroadPhase2DBVH *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BVH_Tree<GodotCollisionObject2D, 2, 2, 128,
   GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,
   GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>, true, Rect2,
   Vector2>::~BVH_Tree() */

void __thiscall
BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
::~BVH_Tree(BVH_Tree<GodotCollisionObject2D,2,2,128,GodotBroadPhase2DBVH::UserPairTestFunction<GodotCollisionObject2D>,GodotBroadPhase2DBVH::UserCullTestFunction<GodotCollisionObject2D>,true,Rect2,Vector2>
            *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


