
/* GodotBroadPhase3DBVH::_pair_callback(void*, unsigned int, GodotCollisionObject3D*, int, unsigned
   int, GodotCollisionObject3D*, int) */

undefined8
GodotBroadPhase3DBVH::_pair_callback
          (void *param_1,uint param_2,GodotCollisionObject3D *param_3,int param_4,uint param_5,
          GodotCollisionObject3D *param_6,int param_7)

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



/* GodotBroadPhase3DBVH::_unpair_callback(void*, unsigned int, GodotCollisionObject3D*, int,
   unsigned int, GodotCollisionObject3D*, int, void*) */

void GodotBroadPhase3DBVH::_unpair_callback
               (void *param_1,uint param_2,GodotCollisionObject3D *param_3,int param_4,uint param_5,
               GodotCollisionObject3D *param_6,int param_7,void *param_8)

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



/* GodotBroadPhase3DBVH::set_pair_callback(void* (*)(GodotCollisionObject3D*, int,
   GodotCollisionObject3D*, int, void*), void*) */

void __thiscall
GodotBroadPhase3DBVH::set_pair_callback
          (GodotBroadPhase3DBVH *this,
          _func_void_ptr_GodotCollisionObject3D_ptr_int_GodotCollisionObject3D_ptr_int_void_ptr
          *param_1,void *param_2)

{
  *(_func_void_ptr_GodotCollisionObject3D_ptr_int_GodotCollisionObject3D_ptr_int_void_ptr **)
   (this + 0x188) = param_1;
  *(void **)(this + 400) = param_2;
  return;
}



/* GodotBroadPhase3DBVH::set_unpair_callback(void (*)(GodotCollisionObject3D*, int,
   GodotCollisionObject3D*, int, void*, void*), void*) */

void __thiscall
GodotBroadPhase3DBVH::set_unpair_callback
          (GodotBroadPhase3DBVH *this,
          _func_void_GodotCollisionObject3D_ptr_int_GodotCollisionObject3D_ptr_int_void_ptr_void_ptr
          *param_1,void *param_2)

{
  *(_func_void_GodotCollisionObject3D_ptr_int_GodotCollisionObject3D_ptr_int_void_ptr_void_ptr **)
   (this + 0x198) = param_1;
  *(void **)(this + 0x1a0) = param_2;
  return;
}



/* LocalVector<BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_cull_aabb_iterative(unsigned int, BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::CullParams&, bool)::CullAABBParams, unsigned int, false, false>::resize(unsigned int)
   [clone .part.0] */

void LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
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



/* GodotBroadPhase3DBVH::get_subindex(unsigned int) const */

undefined4 __thiscall GodotBroadPhase3DBVH::get_subindex(GodotBroadPhase3DBVH *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    _err_print_error("get_subindex","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x49,
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



/* GodotBroadPhase3DBVH::is_static(unsigned int) const */

undefined4 __thiscall GodotBroadPhase3DBVH::is_static(GodotBroadPhase3DBVH *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    _err_print_error("is_static","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x43,
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



/* GodotBroadPhase3DBVH::get_object(unsigned int) const */

long __thiscall GodotBroadPhase3DBVH::get_object(GodotBroadPhase3DBVH *this,uint param_1)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    _err_print_error("get_object","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x3c,
                     "Condition \"!p_id\" is true. Returning: nullptr",0,0);
    return 0;
  }
  uVar3 = param_1 - 1;
  if (uVar3 < *(uint *)(this + 0x60)) {
    lVar1 = *(long *)((ulong)uVar3 * 0x20 + *(long *)(this + 0x68) + 0x10);
    if (lVar1 == 0) {
      _err_print_error("get_object","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x3e,
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



/* BVH_Manager<GodotCollisionObject3D, 2, true, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, AABB, Vector3,
   true>::_add_changed_item(BVHHandle, AABB const&, bool) [clone .isra.0] */

void BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
     ::_add_changed_item(long param_1,uint param_2)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  
  uVar15 = (ulong)*(uint *)(param_1 + 0x80);
  uVar14 = (ulong)param_2;
  if (param_2 < *(uint *)(param_1 + 0x80)) {
    uVar15 = (ulong)*(uint *)(param_1 + 0x30);
    uVar11 = (ulong)param_2;
    uVar14 = uVar11;
    if (param_2 < *(uint *)(param_1 + 0x30)) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      puVar1 = (uint *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
      uVar8 = *puVar1;
      uVar14 = (ulong)uVar8;
      if (uVar8 < uVar3) {
        uVar3 = *(uint *)(param_1 + 0xd0);
        uVar8 = -*(int *)(*(long *)(param_1 + 0xb0) + uVar14 * 0x28 + 0x18);
        uVar14 = (ulong)uVar8;
        if (uVar8 < uVar3) {
          pfVar13 = (float *)(*(long *)(param_1 + 0x88) + uVar11 * 0x30);
          pfVar9 = (float *)(uVar14 * 0xe04 + 0x204 + (ulong)puVar1[1] * 0x18 +
                            *(long *)(param_1 + 0xd8));
          fVar2 = *pfVar9;
          fVar16 = (float)((uint)pfVar9[3] ^ _LC20);
          fVar5 = *pfVar9;
          fVar6 = pfVar9[1];
          fVar7 = pfVar9[2];
          *(ulong *)(pfVar13 + 4) =
               CONCAT44((float)((uint)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20) ^ _LC16._4_4_) -
                        (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20),
                        (float)((uint)*(undefined8 *)(pfVar9 + 4) ^ (uint)_LC16) -
                        (float)*(undefined8 *)(pfVar9 + 1));
          *pfVar13 = fVar5;
          pfVar13[1] = fVar6;
          pfVar13[2] = fVar7;
          pfVar13[3] = fVar16 - fVar2;
          uVar15 = (ulong)*(uint *)(param_1 + 0x58);
          uVar14 = uVar11;
          if (param_2 < *(uint *)(param_1 + 0x58)) {
            lVar12 = uVar11 * 0x20 + *(long *)(param_1 + 0x60);
            if (*(int *)(lVar12 + 8) != *(int *)(param_1 + 0x148)) {
              *(int *)(lVar12 + 8) = *(int *)(param_1 + 0x148);
              pvVar10 = *(void **)(param_1 + 0x140);
              uVar8 = *(uint *)(param_1 + 0x138);
              if (uVar8 == *(uint *)(param_1 + 0x13c)) {
                uVar14 = (ulong)(uVar8 * 2);
                if (uVar8 * 2 == 0) {
                  uVar14 = 1;
                }
                *(int *)(param_1 + 0x13c) = (int)uVar14;
                pvVar10 = (void *)Memory::realloc_static(pvVar10,uVar14 * 4,false);
                *(void **)(param_1 + 0x140) = pvVar10;
                if (pvVar10 == (void *)0x0) {
                  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                uVar8 = *(uint *)(param_1 + 0x138);
              }
              *(uint *)(param_1 + 0x138) = uVar8 + 1;
              *(uint *)((long)pvVar10 + (ulong)uVar8 * 4) = param_2;
            }
            return;
          }
          goto LAB_00100452;
        }
      }
      uVar15 = (ulong)uVar3;
    }
  }
LAB_00100452:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar15,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010052c) */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_cull_point_iterative(unsigned int, BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::CullParams&) [clone .isra.0] */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::_cull_point_iterative
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
           *this,uint param_1,CullParams *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  CullParams *pCVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  ushort *puVar20;
  uint *puVar21;
  float *pfVar22;
  long lVar23;
  long in_FS_OFFSET;
  byte bVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint auStack_290 [131];
  uint local_84;
  CullParams *local_80;
  uint *local_78;
  ushort *local_70;
  float *local_68;
  float *local_60;
  uint *local_58;
  uint *local_50;
  long local_40;
  
  bVar24 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = 1;
  puVar19 = (uint *)0x0;
  uVar9 = 0;
  local_60 = (float *)((ulong)local_60 & 0xffffffff00000000);
  puVar21 = auStack_290;
  iVar16 = 0x7e;
  uVar5 = _LC20;
  uVar27 = (uint)_LC16;
  uVar28 = _LC16._4_4_;
  auStack_290[0] = param_1;
  do {
    uVar10 = *(uint *)(this + 0x78);
    lVar14 = (long)(int)(iVar15 - 1U);
    uVar13 = puVar21[lVar14];
    while( true ) {
      uVar11 = (ulong)uVar13;
      if (uVar10 <= uVar13) goto LAB_00100743;
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      fVar26 = *(float *)(param_2 + 0x30);
      fVar25 = (float)((ulong)uVar1 >> 0x20);
      pfVar22 = (float *)(*(long *)(this + 0x80) + uVar11 * 0x28);
      if ((((pfVar22[3] <= (float)((uint)(float)uVar1 ^ uVar27)) &&
           (pfVar22[4] <= (float)((uint)fVar25 ^ uVar28))) &&
          (pfVar22[5] <= (float)((uint)fVar26 ^ uVar5))) &&
         (((*pfVar22 <= (float)uVar1 && (pfVar22[1] <= fVar25)) && (pfVar22[2] <= fVar26)))) break;
      lVar14 = lVar14 + -1;
      if (((long)iVar15 + -2) - (ulong)(iVar15 - 1U) == lVar14) goto LAB_001006d9;
      uVar13 = puVar21[lVar14];
    }
    iVar15 = (int)lVar14;
    fVar25 = pfVar22[6];
    if ((int)fVar25 < 0) {
      if (*(int *)(param_2 + 8) <= *(int *)(this + 0xe0)) break;
      uVar10 = *(uint *)(this + 0xa0);
      uVar13 = -(int)fVar25;
      if (uVar10 <= uVar13) {
        uVar11 = (ulong)uVar13;
LAB_00100743:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar10,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar20 = (ushort *)((long)(int)uVar13 * 0xe04 + *(long *)(this + 0xa8));
      if (*puVar20 != 0) {
        pCVar12 = param_2 + 0x28;
        local_58 = (uint *)CONCAT44(local_58._4_4_,uVar9);
        pfVar22 = (float *)(puVar20 + 0x102);
        lVar14 = 1;
        local_50 = puVar21;
        while( true ) {
          if (((pfVar22[3] <= (float)((uint)uVar1 ^ uVar27)) &&
              (pfVar22[4] <= (float)((uint)((ulong)uVar1 >> 0x20) ^ uVar28))) &&
             ((pfVar22[5] <= (float)((uint)fVar26 ^ uVar5) &&
              (((*pfVar22 < *(float *)(param_2 + 0x28) || *pfVar22 == *(float *)(param_2 + 0x28) &&
                (pfVar22[1] < *(float *)(param_2 + 0x2c) || pfVar22[1] == *(float *)(param_2 + 0x2c)
                )) && (pfVar22[2] < *(float *)(param_2 + 0x30) ||
                       pfVar22[2] == *(float *)(param_2 + 0x30))))))) {
            uVar9 = *(uint *)(puVar20 + lVar14 * 2);
            uVar10 = *(uint *)(this + 0x28);
            if (uVar10 <= uVar9) {
              uVar11 = (ulong)uVar9;
              goto LAB_00100743;
            }
            uVar13 = *(uint *)(this + 0xe0);
            pvVar7 = *(void **)(this + 0xe8);
            if (uVar13 == *(uint *)(this + 0xe4)) {
              uVar11 = (ulong)(uVar13 * 2);
              if (uVar13 * 2 == 0) {
                uVar11 = 1;
              }
              *(int *)(this + 0xe4) = (int)uVar11;
              local_68 = (float *)CONCAT44(local_68._4_4_,iVar16);
              local_84 = uVar9;
              local_80 = pCVar12;
              local_78 = puVar19;
              local_70 = puVar20;
              pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar11 * 4,false);
              *(void **)(this + 0xe8) = pvVar7;
              if (pvVar7 == (void *)0x0) {
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar13 = *(uint *)(this + 0xe0);
              pCVar12 = local_80;
              puVar20 = local_70;
              puVar19 = local_78;
              uVar5 = _LC20;
              uVar9 = local_84;
              uVar27 = (uint)_LC16;
              uVar28 = _LC16._4_4_;
              iVar16 = (int)local_68;
            }
            *(uint *)(this + 0xe0) = uVar13 + 1;
            *(uint *)((long)pvVar7 + (ulong)uVar13 * 4) = uVar9;
          }
          pfVar22 = pfVar22 + 6;
          if ((int)(uint)*puVar20 <= (int)lVar14) break;
          fVar26 = *(float *)(param_2 + 0x30);
          uVar1 = *(undefined8 *)pCVar12;
          lVar14 = lVar14 + 1;
        }
        puVar21 = local_50;
        uVar9 = (uint)local_58;
      }
    }
    else if (fVar25 != 0.0) {
      lVar14 = 0;
      lVar23 = (long)iVar15 << 2;
      do {
        uVar2 = *(ushort *)((long)pfVar22 + lVar14 * 2 + 0x20);
        uVar11 = (ulong)uVar2;
        uVar13 = (uint)uVar2;
        if (iVar16 < iVar15) {
          if (uVar9 == 0) {
            puVar8 = puVar19;
            uVar13 = (uint)uVar2;
            if ((uint)local_60 < 0x100) {
              while( true ) {
                local_50 = (uint *)CONCAT44(local_50._4_4_,(int)uVar11);
                local_60 = pfVar22;
                local_58 = puVar21;
                puVar8 = (uint *)Memory::realloc_static(puVar19,0x400,false);
                pfVar22 = local_60;
                uVar13 = (uint)puVar19;
                puVar21 = local_58;
                uVar9 = (uint)local_50;
                if (puVar8 != (uint *)0x0) break;
LAB_001009c9:
                uVar11 = (ulong)uVar9;
                LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
                ::resize(uVar13);
                puVar19 = puVar8;
              }
              local_60 = (float *)CONCAT44(local_60._4_4_,0x100);
              uVar5 = _LC20;
              uVar13 = (uint)local_50;
              uVar27 = (uint)_LC16;
              uVar28 = _LC16._4_4_;
            }
            *(undefined8 *)puVar8 = *(undefined8 *)puVar21;
            *(undefined8 *)(puVar8 + 0x7e) = *(undefined8 *)(puVar21 + 0x7e);
            lVar6 = (long)puVar8 - (long)((ulong)(puVar8 + 2) & 0xfffffffffffffff8);
            puVar17 = (undefined8 *)((long)puVar21 - lVar6);
            puVar18 = (undefined8 *)((ulong)(puVar8 + 2) & 0xfffffffffffffff8);
            for (uVar11 = (ulong)((int)lVar6 + 0x200U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar18 = *puVar17;
              puVar17 = puVar17 + (ulong)bVar24 * -2 + 1;
              puVar18 = puVar18 + (ulong)bVar24 * -2 + 1;
            }
            iVar16 = 0xfe;
            puVar21 = puVar8;
            puVar19 = puVar8;
            uVar9 = 0x100;
          }
          else {
            uVar10 = uVar9 * 2;
            uVar4 = (uint)uVar2;
            if (uVar9 <= uVar10) {
              if (uVar10 <= uVar9) {
                iVar16 = uVar9 - 2;
                puVar21 = puVar19;
                goto LAB_001006ba;
              }
              uVar4 = uVar13;
              if ((uint)local_60 < uVar10) {
                local_58 = (uint *)CONCAT44(local_58._4_4_,uVar13);
                local_50 = (uint *)CONCAT44(local_50._4_4_,uVar10);
                uVar5 = uVar10 - 1 | uVar10 - 1 >> 1;
                uVar5 = uVar5 | uVar5 >> 2;
                uVar5 = uVar5 >> 4 | uVar5;
                uVar5 = uVar5 >> 8 | uVar5;
                uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
                local_60 = (float *)CONCAT44(local_60._4_4_,uVar5);
                local_68 = pfVar22;
                puVar8 = (uint *)Memory::realloc_static(puVar19,(ulong)uVar5 << 2,false);
                uVar13 = (uint)puVar19;
                puVar19 = puVar8;
                pfVar22 = local_68;
                uVar5 = _LC20;
                uVar10 = (uint)local_50;
                uVar4 = (uint)local_58;
                uVar9 = (uint)local_58;
                uVar27 = (uint)_LC16;
                uVar28 = _LC16._4_4_;
                if (puVar8 == (uint *)0x0) goto LAB_001009c9;
              }
            }
            uVar13 = uVar4;
            puVar21 = puVar19;
            iVar16 = uVar10 - 2;
            puVar19 = puVar21;
            uVar9 = uVar10;
          }
        }
LAB_001006ba:
        *(uint *)((long)puVar21 + lVar23) = uVar13;
        iVar15 = iVar15 + 1;
        lVar14 = lVar14 + 1;
        lVar23 = lVar23 + 4;
      } while ((int)lVar14 < (int)pfVar22[6]);
    }
  } while (iVar15 != 0);
LAB_001006d9:
  if (puVar19 != (uint *)0x0) {
    Memory::free_static(puVar19,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotBroadPhase3DBVH::cull_point(Vector3 const&, GodotCollisionObject3D**, int, int*) */

uint __thiscall
GodotBroadPhase3DBVH::cull_point
          (GodotBroadPhase3DBVH *this,Vector3 *param_1,GodotCollisionObject3D **param_2,int param_3,
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
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  GodotCollisionObject3D **local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] != (GodotBroadPhase3DBVH)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) {
      std::__throw_system_error(iVar4);
      goto LAB_00100c70;
    }
  }
  local_b0 = *(undefined8 *)param_1;
  local_d8 = 0;
  local_a4 = 0;
  local_a8 = *(undefined4 *)(param_1 + 8);
  local_9c = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_b8 = 0;
  local_50 = 0xffffffff;
  if (*(int *)(this + 0x118) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  local_d4 = 0;
  local_d0 = param_3;
  local_c8 = param_2;
  local_c0 = param_4;
  if (*(uint *)(this + 0x128) != 0xffffffff) {
    BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
    ::_cull_point_iterative
              ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)(this + 0x38),*(uint *)(this + 0x128),(CullParams *)&local_d8);
  }
  if (*(uint *)(this + 300) != 0xffffffff) {
    BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
    ::_cull_point_iterative
              ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)(this + 0x38),*(uint *)(this + 300),(CullParams *)&local_d8);
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
        param_2[uVar5] = *(GodotCollisionObject3D **)(lVar6 + 0x10);
        if (param_4 != (int *)0x0) {
          param_4[uVar5] = *(int *)(lVar6 + 0xc);
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == (long)param_3) goto LAB_00100c70;
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
LAB_00100c70:
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* WARNING: Removing unreachable block (ram,0x00100cdb) */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_cull_segment_iterative(unsigned int, BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::CullParams&) [clone .isra.0] */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::_cull_segment_iterative
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
           *this,uint param_1,CullParams *param_2)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  uint *puVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  byte bVar19;
  uint auStack_2a0 [130];
  uint local_98;
  uint local_94;
  CullParams *local_90;
  CullParams *local_88;
  uint *local_80;
  uint local_78;
  int local_74;
  uint *local_70;
  Vector3 *local_68;
  Vector3 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  float local_44;
  long local_40;
  
  bVar19 = 0;
  uVar8 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = 0;
  local_78 = 0;
  local_70 = auStack_2a0;
  local_74 = 0x7e;
  local_94 = 0;
  local_80 = (uint *)0x0;
  auStack_2a0[0] = param_1;
  do {
    uVar5 = *(uint *)(this + 0x78);
    uVar11 = (ulong)uVar5;
    if (uVar5 <= (uint)uVar8) {
LAB_00100e38:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,uVar11,"p_index","count",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar17 = *(long *)(this + 0x80) + uVar8 * 0x28;
    iVar2 = *(int *)(lVar17 + 0x18);
    if (iVar2 < 0) {
      if (*(int *)(param_2 + 8) <= *(int *)(this + 0xe0)) goto LAB_00101068;
      uVar11 = (ulong)*(uint *)(this + 0xa0);
      uVar5 = -iVar2;
      if (*(uint *)(this + 0xa0) <= uVar5) {
        uVar8 = (ulong)uVar5;
        goto LAB_00100e38;
      }
      puVar6 = (ushort *)((long)(int)uVar5 * 0xe04 + *(long *)(this + 0xa8));
      if (*puVar6 != 0) {
        puVar12 = puVar6 + 0x102;
        local_68 = (Vector3 *)(param_2 + 0x7c);
        local_88 = (CullParams *)CONCAT44(local_88._4_4_,iVar16);
        lVar17 = 0;
        local_60 = (Vector3 *)&local_58;
        local_90 = param_2;
        do {
          local_58 = *(undefined8 *)puVar12;
          local_50 = *(undefined4 *)(puVar12 + 4);
          local_44 = (float)(*(uint *)(puVar12 + 10) ^ _LC20) - *(float *)(puVar12 + 4);
          local_4c = CONCAT44((float)((uint)((ulong)*(undefined8 *)(puVar12 + 6) >> 0x20) ^
                                     _LC16._4_4_) - (float)((ulong)*(undefined8 *)puVar12 >> 0x20),
                              (float)((uint)*(undefined8 *)(puVar12 + 6) ^ (uint)_LC16) -
                              (float)*(undefined8 *)puVar12);
          cVar4 = AABB::intersects_segment
                            (local_60,(Vector3 *)(param_2 + 0x70),local_68,(Vector3 *)0x0);
          if (cVar4 != '\0') {
            uVar5 = *(uint *)(puVar6 + lVar17 * 2 + 2);
            uVar8 = (ulong)uVar5;
            uVar11 = (ulong)*(uint *)(this + 0x28);
            if (*(uint *)(this + 0x28) <= uVar5) goto LAB_00100e38;
            uVar14 = *(uint *)(this + 0xe0);
            pvVar9 = *(void **)(this + 0xe8);
            if (uVar14 == *(uint *)(this + 0xe4)) {
              uVar8 = (ulong)(uVar14 * 2);
              if (uVar14 * 2 == 0) {
                uVar8 = 1;
              }
              *(int *)(this + 0xe4) = (int)uVar8;
              local_98 = uVar5;
              pvVar9 = (void *)Memory::realloc_static(pvVar9,uVar8 * 4,false);
              *(void **)(this + 0xe8) = pvVar9;
              if (pvVar9 == (void *)0x0) goto LAB_001011f0;
              uVar14 = *(uint *)(this + 0xe0);
              uVar5 = local_98;
            }
            *(uint *)(this + 0xe0) = uVar14 + 1;
            *(uint *)((long)pvVar9 + (ulong)uVar14 * 4) = uVar5;
          }
          lVar17 = lVar17 + 1;
          puVar12 = puVar12 + 0xc;
        } while ((int)lVar17 < (int)(uint)*puVar6);
        param_2 = local_90;
        iVar16 = (int)local_88;
      }
    }
    else {
      lVar18 = 0;
      if (iVar2 != 0) {
        local_68 = (Vector3 *)(param_2 + 0x70);
        local_60 = (Vector3 *)(param_2 + 0x7c);
        uVar8 = (ulong)*(ushort *)(lVar17 + 0x20);
        local_88 = param_2;
        if (*(ushort *)(lVar17 + 0x20) < uVar5) {
          do {
            puVar13 = (undefined8 *)(*(long *)(this + 0x80) + uVar8 * 0x28);
            local_58 = *puVar13;
            local_50 = *(undefined4 *)(puVar13 + 1);
            local_44 = (float)(*(uint *)((long)puVar13 + 0x14) ^ _LC20) - *(float *)(puVar13 + 1);
            local_4c = CONCAT44((float)((uint)((ulong)*(undefined8 *)((long)puVar13 + 0xc) >> 0x20)
                                       ^ _LC16._4_4_) - (float)((ulong)*puVar13 >> 0x20),
                                (float)((uint)*(undefined8 *)((long)puVar13 + 0xc) ^ (uint)_LC16) -
                                (float)*puVar13);
            cVar4 = AABB::intersects_segment((Vector3 *)&local_58,local_68,local_60,(Vector3 *)0x0);
            if (cVar4 != '\0') {
              if (local_74 < iVar16) {
                if (local_78 == 0) {
                  if (local_94 < 0x100) {
                    puVar10 = (uint *)Memory::realloc_static(local_80,0x400,false);
                    uVar14 = (uint)local_80;
                    local_80 = puVar10;
                    if (puVar10 == (uint *)0x0) {
LAB_001011e3:
                      LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
                      ::resize(uVar14);
LAB_001011f0:
                      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                       "FATAL: Condition \"!data\" is true.","Out of memory",0);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    local_94 = 0x100;
                  }
                  *(undefined8 *)local_80 = *(undefined8 *)local_70;
                  *(undefined8 *)(local_80 + 0x7e) = *(undefined8 *)(local_70 + 0x7e);
                  lVar7 = (long)local_80 - (long)((ulong)(local_80 + 2) & 0xfffffffffffffff8);
                  puVar13 = (undefined8 *)((long)local_70 - lVar7);
                  puVar15 = (undefined8 *)((ulong)(local_80 + 2) & 0xfffffffffffffff8);
                  for (uVar11 = (ulong)((int)lVar7 + 0x200U >> 3); uVar11 != 0; uVar11 = uVar11 - 1)
                  {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + (ulong)bVar19 * -2 + 1;
                    puVar15 = puVar15 + (ulong)bVar19 * -2 + 1;
                  }
                  local_70 = local_80;
                  local_74 = 0xfe;
                  local_78 = 0x100;
                }
                else {
                  uVar5 = local_78 * 2;
                  if (local_78 <= uVar5) {
                    if (uVar5 <= local_78) {
                      local_74 = local_78 - 2;
                      local_70 = local_80;
                      goto LAB_00101050;
                    }
                    if (local_94 < uVar5) {
                      local_70 = (uint *)CONCAT44(local_70._4_4_,uVar5);
                      uVar5 = uVar5 - 1 | uVar5 - 1 >> 1;
                      uVar5 = uVar5 >> 2 | uVar5;
                      uVar5 = uVar5 >> 4 | uVar5;
                      uVar5 = uVar5 | uVar5 >> 8;
                      local_94 = (uVar5 | uVar5 >> 0x10) + 1;
                      puVar10 = (uint *)Memory::realloc_static(local_80,(ulong)local_94 << 2,false);
                      uVar14 = (uint)local_80;
                      uVar5 = (uint)local_70;
                      local_80 = puVar10;
                      if (puVar10 == (uint *)0x0) goto LAB_001011e3;
                    }
                  }
                  local_74 = uVar5 - 2;
                  local_70 = local_80;
                  local_78 = uVar5;
                }
              }
LAB_00101050:
              lVar7 = (long)iVar16;
              iVar16 = iVar16 + 1;
              local_70[lVar7] = (uint)uVar8;
            }
            lVar18 = lVar18 + 1;
            param_2 = local_88;
            if (*(int *)(lVar17 + 0x18) <= (int)lVar18) goto LAB_00100e8a;
            uVar1 = *(ushort *)(lVar17 + 0x20 + lVar18 * 2);
            uVar8 = (ulong)uVar1;
            uVar11 = (ulong)*(uint *)(this + 0x78);
            if (*(uint *)(this + 0x78) <= (uint)uVar1) break;
          } while( true );
        }
        goto LAB_00100e38;
      }
    }
LAB_00100e8a:
    if (iVar16 == 0) {
LAB_00101068:
      if (local_80 != (uint *)0x0) {
        Memory::free_static(local_80,false);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar16 = iVar16 + -1;
    uVar8 = (ulong)local_70[iVar16];
  } while( true );
}



/* GodotBroadPhase3DBVH::cull_segment(Vector3 const&, Vector3 const&, GodotCollisionObject3D**, int,
   int*) */

int __thiscall
GodotBroadPhase3DBVH::cull_segment
          (GodotBroadPhase3DBVH *this,Vector3 *param_1,Vector3 *param_2,
          GodotCollisionObject3D **param_3,int param_4,int *param_5)

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
  int local_d8;
  uint local_d4;
  int local_d0;
  GodotCollisionObject3D **local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  uint local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] != (GodotBroadPhase3DBVH)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar7 = pthread_mutex_lock(__mutex);
    if (iVar7 != 0) {
      std::__throw_system_error(iVar7);
      uVar8 = extraout_EDX;
      goto LAB_001014b4;
    }
  }
  local_68 = *(undefined8 *)param_1;
  local_b0 = 0;
  local_60 = *(undefined4 *)(param_1 + 8);
  local_a8 = 0;
  local_5c = *(undefined8 *)param_2;
  local_a4 = 0;
  local_54 = *(undefined4 *)(param_2 + 8);
  local_9c = 0;
  local_98 = 0;
  local_90 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_50 = 0xffffffff;
  if (*(int *)(this + 0x118) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  local_d4 = 0;
  local_d0 = param_4;
  local_c8 = param_3;
  local_c0 = param_5;
  if (*(uint *)(this + 0x128) == 0xffffffff) {
    uVar8 = *(uint *)(this + 300);
    if (uVar8 != 0xffffffff) goto LAB_00101444;
  }
  else {
    BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
    ::_cull_segment_iterative
              ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)(this + 0x38),*(uint *)(this + 0x128),(CullParams *)&local_d8);
    uVar8 = *(uint *)(this + 300);
    if ((uVar8 != 0xffffffff) && ((local_50 & 2) != 0)) {
LAB_00101444:
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::_cull_segment_iterative
                ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                  *)(this + 0x38),uVar8,(CullParams *)&local_d8);
    }
  }
  uVar1 = *(uint *)(this + 0x118);
  uVar8 = local_d0 - local_d8;
  if ((int)uVar1 < local_d0 - local_d8) {
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
        local_c8[(long)local_d8 + uVar4] = *(GodotCollisionObject3D **)(lVar5 + 0x10);
        if (local_c0 != (int *)0x0) {
          local_c0[(long)local_d8 + uVar4] = *(int *)(lVar5 + 0xc);
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)uVar8 == uVar4) goto LAB_001014b4;
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
LAB_001014b4:
  iVar7 = local_d8 + uVar8;
  local_d8 = iVar7;
  local_d4 = uVar8;
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



/* WARNING: Removing unreachable block (ram,0x0010152c) */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_cull_aabb_iterative(unsigned int, BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::CullParams&, bool) [clone .isra.0] */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::_cull_aabb_iterative
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
           *this,uint param_1,CullParams *param_2,bool param_3)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  byte bVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  float *pfVar24;
  ulong uVar25;
  uint *puVar26;
  long in_FS_OFFSET;
  byte bVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  uint uStack_4b0;
  undefined1 uStack_4ac;
  uint local_a0;
  uint local_9c;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  CullParams *local_80;
  undefined1 local_78 [16];
  ulong local_68;
  undefined8 local_60;
  float local_58;
  uint local_54;
  ulong local_50;
  long local_40;
  uint uVar20;
  
  bVar27 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar13 = (uint *)0x0;
  iVar23 = 0;
  local_54 = 0;
  puVar26 = &uStack_4b0;
  local_50 = CONCAT44(local_50._4_4_,0x7e);
  uVar4 = 0;
  uStack_4b0 = param_1;
  uStack_4ac = param_3;
  while( true ) {
    uVar15 = (ulong)*(uint *)(this + 0x78);
    uVar21 = (long)iVar23 * 8;
    if (*(uint *)(this + 0x78) <= param_1) break;
    uVar22 = *(long *)(this + 0x80) + (ulong)param_1 * 0x28;
    uVar8 = *(uint *)(uVar22 + 0x18);
    uVar9 = (ulong)uVar8;
    if ((int)uVar8 < 0) {
      if (*(int *)(param_2 + 8) <= *(int *)(this + 0xe0)) goto LAB_001017c8;
      uVar15 = (ulong)*(uint *)(this + 0xa0);
      uVar8 = -uVar8;
      uVar21 = (ulong)uVar8;
      if (*(uint *)(this + 0xa0) <= uVar8) goto LAB_0010198d;
      puVar16 = (ushort *)((long)(int)uVar8 * 0xe04 + *(long *)(this + 0xa8));
      uVar1 = *puVar16;
      if ((char)puVar26[(long)iVar23 * 2 + 1] == '\0') {
        fVar29 = (float)((uint)*(undefined8 *)(param_2 + 0x38) ^ (uint)_LC16);
        fVar30 = (float)((uint)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20) ^ _LC16._4_4_);
        auVar28._0_4_ = (float)(*(uint *)(param_2 + 0x40) ^ _LC20);
        auVar28._4_4_ = (float)((uint)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) ^ _LC20);
        auVar28._8_4_ = (float)(*(uint *)(param_2 + 0x48) ^ _LC20);
        auVar28._12_4_ = *(uint *)(param_2 + 0x34) ^ _LC20;
        if (uVar1 != 0) {
          pfVar24 = (float *)(puVar16 + 0x102);
          puVar7 = (uint *)(puVar16 + 2);
          puVar17 = (uint *)(puVar16 + (ulong)(uVar1 - 1) * 2 + 4);
          fVar32 = auVar28._8_4_;
          fVar33 = auVar28._0_4_;
          fVar31 = auVar28._4_4_;
          do {
            if (((((*pfVar24 <= fVar33) && (pfVar24[1] <= fVar31)) && (pfVar24[2] <= fVar32)) &&
                ((pfVar24[3] <= auVar28._12_4_ && (pfVar24[4] <= fVar29)))) &&
               (pfVar24[5] <= fVar30)) {
              uVar18 = *puVar7;
              uVar8 = *(uint *)(this + 0x28);
              if (uVar8 <= uVar18) goto LAB_00101ab3;
              uVar8 = *(uint *)(this + 0xe0);
              pvVar6 = *(void **)(this + 0xe8);
              if (uVar8 == *(uint *)(this + 0xe4)) {
                uVar21 = (ulong)(uVar8 * 2);
                if (uVar8 * 2 == 0) {
                  uVar21 = 1;
                }
                *(int *)(this + 0xe4) = (int)uVar21;
                local_80 = (CullParams *)CONCAT44(local_80._4_4_,fVar31);
                local_68 = CONCAT44(local_68._4_4_,fVar33);
                local_60 = CONCAT44(fVar30,fVar29);
                local_a0 = uVar18;
                local_9c = uVar4;
                local_98 = puVar13;
                local_90 = puVar17;
                local_88 = puVar7;
                local_78 = auVar28;
                local_58 = fVar32;
                pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar21 * 4,false);
                *(void **)(this + 0xe8) = pvVar6;
                if (pvVar6 == (void *)0x0) {
LAB_00101cee:
                  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                uVar8 = *(uint *)(this + 0xe0);
                puVar7 = local_88;
                puVar17 = local_90;
                puVar13 = local_98;
                auVar28 = local_78;
                fVar32 = local_58;
                fVar33 = (float)local_68;
                uVar18 = local_a0;
                fVar29 = (float)local_60;
                fVar30 = local_60._4_4_;
                fVar31 = local_80._0_4_;
                uVar4 = local_9c;
              }
              *(uint *)(this + 0xe0) = uVar8 + 1;
              *(uint *)((long)pvVar6 + (ulong)uVar8 * 4) = uVar18;
            }
            puVar7 = puVar7 + 1;
            pfVar24 = pfVar24 + 6;
          } while (puVar7 != puVar17);
        }
      }
      else if (uVar1 != 0) {
        lVar5 = 0;
        do {
          uVar18 = *(uint *)(puVar16 + lVar5 * 2 + 2);
          uVar8 = *(uint *)(this + 0x28);
          if (uVar8 <= uVar18) goto LAB_00101ab3;
          uVar8 = *(uint *)(this + 0xe0);
          pvVar6 = *(void **)(this + 0xe8);
          if (uVar8 == *(uint *)(this + 0xe4)) {
            uVar21 = (ulong)(uVar8 * 2);
            if (uVar8 * 2 == 0) {
              uVar21 = 1;
            }
            local_68 = CONCAT44(local_68._4_4_,uVar4);
            local_78._0_8_ = puVar13;
            *(int *)(this + 0xe4) = (int)uVar21;
            local_60 = CONCAT44(local_60._4_4_,iVar23);
            local_80 = param_2;
            pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar21 * 4,false);
            *(void **)(this + 0xe8) = pvVar6;
            if (pvVar6 == (void *)0x0) goto LAB_00101cee;
            uVar8 = *(uint *)(this + 0xe0);
            puVar13 = (uint *)local_78._0_8_;
            param_2 = local_80;
            iVar23 = (int)(float)local_60;
            uVar4 = (uint)(float)local_68;
          }
          lVar5 = lVar5 + 1;
          *(uint *)(this + 0xe0) = uVar8 + 1;
          *(uint *)((long)pvVar6 + (ulong)uVar8 * 4) = uVar18;
        } while ((int)lVar5 < (int)(uint)*puVar16);
      }
    }
    else if ((char)puVar26[(long)iVar23 * 2 + 1] == '\0') {
      if (uVar8 != 0) {
        uVar25 = 0;
        uVar8 = (uint)_LC16;
        uVar18 = _LC16._4_4_;
        uVar34 = _LC20;
        do {
          uVar1 = *(ushort *)(uVar22 + 0x20 + uVar25 * 2);
          uVar21 = (ulong)uVar1;
          uVar20 = (uint)uVar1;
          uVar19 = (uint)uVar1;
          if ((uint)uVar15 <= (uint)uVar1) goto LAB_0010198d;
          uVar9 = uVar21 * 5;
          pfVar24 = (float *)(*(long *)(this + 0x80) + uVar21 * 0x28);
          fVar29 = (float)*(undefined8 *)(pfVar24 + 3);
          fVar30 = (float)((ulong)*(undefined8 *)(pfVar24 + 3) >> 0x20);
          puVar7 = puVar13;
          if (((*(float *)(param_2 + 0x34) <= (float)((uint)fVar29 ^ uVar8)) &&
              (*(float *)(param_2 + 0x38) <= (float)((uint)fVar30 ^ uVar18))) &&
             (*(float *)(param_2 + 0x3c) <= (float)((uint)pfVar24[5] ^ uVar34))) {
            if (((*pfVar24 <= (float)((uint)*(float *)(param_2 + 0x40) ^ uVar8)) &&
                (pfVar24[1] <= (float)((uint)*(float *)(param_2 + 0x44) ^ uVar18))) &&
               (pfVar24[2] <= (float)((uint)*(float *)(param_2 + 0x48) ^ uVar34))) {
              if (((fVar29 < *(float *)(param_2 + 0x40)) || (fVar30 < *(float *)(param_2 + 0x44)))
                 || ((pfVar24[5] < *(float *)(param_2 + 0x48) ||
                     ((*pfVar24 < *(float *)(param_2 + 0x34) ||
                      (pfVar24[1] < *(float *)(param_2 + 0x38))))))) {
                bVar14 = false;
              }
              else {
                bVar14 = *(float *)(param_2 + 0x3c) <= pfVar24[2];
              }
              if ((int)(uint)local_50 < iVar23) {
                if (uVar4 == 0) {
                  uVar19 = uVar20;
                  if (local_54 < 0x100) {
                    local_54 = CONCAT31(local_54._1_3_,bVar14);
                    local_50 = CONCAT44(local_50._4_4_,(uint)uVar1);
                    local_60 = uVar22;
                    puVar7 = (uint *)Memory::realloc_static(puVar13,0x800,false);
                    uVar4 = (uint)puVar13;
                    uVar21 = local_50 & 0xffffffff;
                    bVar14 = (byte)local_54;
                    uVar15 = (ulong)(byte)local_54;
                    uVar22 = local_60;
                    if (puVar7 == (uint *)0x0) goto LAB_00101a93;
                    local_54 = 0x100;
                    uVar19 = (uint)local_50;
                    uVar8 = (uint)_LC16;
                    uVar18 = _LC16._4_4_;
                    uVar34 = _LC20;
                  }
                  *(undefined8 *)puVar7 = *(undefined8 *)puVar26;
                  *(undefined8 *)(puVar7 + 0xfe) = *(undefined8 *)(puVar26 + 0xfe);
                  lVar5 = (long)puVar7 - (long)((ulong)(puVar7 + 2) & 0xfffffffffffffff8);
                  uVar4 = 0x100;
                  puVar11 = (undefined8 *)((long)puVar26 - lVar5);
                  puVar12 = (undefined8 *)((ulong)(puVar7 + 2) & 0xfffffffffffffff8);
                  for (uVar21 = (ulong)((int)lVar5 + 0x400U >> 3); uVar21 != 0; uVar21 = uVar21 - 1)
                  {
                    *puVar12 = *puVar11;
                    puVar11 = puVar11 + (ulong)bVar27 * -2 + 1;
                    puVar12 = puVar12 + (ulong)bVar27 * -2 + 1;
                  }
                  local_50 = CONCAT44(local_50._4_4_,0xfe);
                  puVar26 = puVar7;
                }
                else {
                  uVar3 = uVar4 * 2;
                  if (uVar4 <= uVar3) {
                    if (uVar3 <= uVar4) {
                      local_50 = CONCAT44(local_50._4_4_,uVar4 - 2);
                      puVar26 = puVar13;
                      goto LAB_00101940;
                    }
                    if (local_54 < uVar3) {
                      local_78[0] = bVar14;
                      local_60 = CONCAT44(local_60._4_4_,(uint)uVar1);
                      uVar4 = uVar3 - 1 >> 1 | uVar3 - 1;
                      local_50 = CONCAT44(local_50._4_4_,uVar3);
                      uVar4 = uVar4 | uVar4 >> 2;
                      uVar4 = uVar4 | uVar4 >> 4;
                      uVar4 = uVar4 | uVar4 >> 8;
                      local_54 = (uVar4 | uVar4 >> 0x10) + 1;
                      local_68 = uVar22;
                      puVar7 = (uint *)Memory::realloc_static(puVar13,(ulong)local_54 << 3,false);
                      uVar4 = (uint)puVar13;
                      uVar9 = local_50 & 0xffffffff;
                      uVar21 = local_60 & 0xffffffff;
                      uVar15 = (ulong)local_78[0];
                      uVar22 = local_68;
                      uVar3 = (uint)local_50;
                      bVar14 = local_78[0];
                      uVar20 = (uint)(float)local_60;
                      uVar8 = (uint)_LC16;
                      uVar18 = _LC16._4_4_;
                      uVar34 = _LC20;
                      if (puVar7 == (uint *)0x0) goto LAB_00101a93;
                    }
                  }
                  uVar19 = uVar20;
                  uVar4 = uVar3;
                  local_50 = CONCAT44(local_50._4_4_,uVar4 - 2);
                  puVar26 = puVar7;
                }
              }
LAB_00101940:
              lVar5 = (long)iVar23;
              iVar23 = iVar23 + 1;
              puVar26[lVar5 * 2] = uVar19;
              *(byte *)(puVar26 + lVar5 * 2 + 1) = bVar14;
            }
          }
          uVar25 = uVar25 + 1;
          puVar13 = puVar7;
          if (*(int *)(uVar22 + 0x18) <= (int)uVar25) break;
          uVar15 = (ulong)*(uint *)(this + 0x78);
        } while( true );
      }
    }
    else {
      uVar10 = local_50 & 0xffffffff;
      uVar15 = 0;
      if (uVar8 != 0) {
        do {
          uVar1 = *(ushort *)(uVar22 + 0x20 + uVar15 * 2);
          uVar25 = (ulong)uVar1;
          uVar8 = (uint)uVar1;
          uVar18 = (uint)uVar1;
          if ((int)uVar10 < iVar23) {
            puVar7 = puVar13;
            if (uVar4 == 0) {
              if (local_54 < 0x100) {
                local_78._0_8_ = uVar21;
                local_60 = uVar15;
                local_50 = uVar22;
                puVar7 = (uint *)Memory::realloc_static(puVar13,0x800,false);
                uVar4 = (uint)puVar13;
                if (puVar7 == (uint *)0x0) {
LAB_00101a93:
                  LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::_cull_aabb_iterative(unsigned_int,BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::CullParams&,bool)::CullAABBParams,unsigned_int,false,false>
                  ::resize(uVar4);
                  uVar8 = (uint)uVar25;
                  goto LAB_00101aa0;
                }
                local_54 = 0x100;
                uVar15 = local_60;
                uVar21 = local_78._0_8_;
                uVar22 = local_50;
              }
              *(undefined8 *)puVar7 = *(undefined8 *)puVar26;
              *(undefined8 *)(puVar7 + 0xfe) = *(undefined8 *)(puVar26 + 0xfe);
              lVar5 = (long)puVar7 - (long)((ulong)(puVar7 + 2) & 0xfffffffffffffff8);
              uVar4 = 0x100;
              puVar11 = (undefined8 *)((long)puVar26 - lVar5);
              puVar12 = (undefined8 *)((ulong)(puVar7 + 2) & 0xfffffffffffffff8);
              for (uVar9 = (ulong)((int)lVar5 + 0x400U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + (ulong)bVar27 * -2 + 1;
                puVar12 = puVar12 + (ulong)bVar27 * -2 + 1;
              }
              uVar10 = 0xfe;
              uVar9 = 0;
              puVar13 = puVar7;
              puVar26 = puVar7;
            }
            else {
              uVar34 = uVar4 * 2;
              uVar9 = (ulong)uVar34;
              if (uVar4 <= uVar34) {
                if (uVar34 <= uVar4) {
                  uVar10 = (ulong)(uVar4 - 2);
                  puVar26 = puVar13;
                  goto LAB_0010162d;
                }
                if (local_54 < uVar34) {
                  local_78._0_8_ = uVar15;
                  uVar4 = uVar34 - 1 | uVar34 - 1 >> 1;
                  local_50 = CONCAT44(local_50._4_4_,uVar34);
                  uVar4 = uVar4 | uVar4 >> 2;
                  uVar4 = uVar4 | uVar4 >> 4;
                  uVar4 = uVar4 | uVar4 >> 8;
                  local_54 = (uVar4 | uVar4 >> 0x10) + 1;
                  local_68 = uVar21;
                  local_60 = uVar22;
                  puVar7 = (uint *)Memory::realloc_static(puVar13,(ulong)local_54 << 3,false);
                  uVar4 = (uint)puVar13;
                  uVar9 = local_50 & 0xffffffff;
                  uVar15 = local_78._0_8_;
                  uVar21 = local_68;
                  uVar22 = local_60;
                  if (puVar7 == (uint *)0x0) goto LAB_00101a93;
                }
              }
LAB_00101aa0:
              uVar18 = uVar8;
              uVar4 = (uint)uVar9;
              uVar10 = (ulong)(uVar4 - 2);
              puVar13 = puVar7;
              puVar26 = puVar7;
            }
          }
LAB_0010162d:
          puVar7 = (uint *)((long)puVar26 + uVar21);
          iVar23 = iVar23 + 1;
          uVar15 = uVar15 + 1;
          uVar21 = uVar21 + 8;
          *puVar7 = uVar18;
          *(undefined1 *)(puVar7 + 1) = 1;
        } while ((int)uVar15 < *(int *)(uVar22 + 0x18));
        local_50 = CONCAT44(local_50._4_4_,(int)uVar10);
      }
    }
    if (iVar23 == 0) {
LAB_001017c8:
      if (puVar13 != (uint *)0x0) {
        Memory::free_static(puVar13,false);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar23 = iVar23 + -1;
    param_1 = puVar26[(long)iVar23 * 2];
  }
  uVar21 = (ulong)param_1;
LAB_0010198d:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar21,uVar15,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_00101ab3:
  uVar21 = (ulong)uVar18;
  uVar15 = (ulong)uVar8;
  goto LAB_0010198d;
}



/* GodotBroadPhase3DBVH::cull_aabb(AABB const&, GodotCollisionObject3D**, int, int*) */

uint __thiscall
GodotBroadPhase3DBVH::cull_aabb
          (GodotBroadPhase3DBVH *this,AABB *param_1,GodotCollisionObject3D **param_2,int param_3,
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
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  GodotCollisionObject3D **local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  uint local_90;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] != (GodotBroadPhase3DBVH)0x0) {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) {
      std::__throw_system_error(iVar4);
      goto LAB_00102000;
    }
  }
  local_a4 = *(undefined8 *)param_1;
  local_b0 = 0;
  local_a8 = 0;
  local_9c = *(undefined4 *)(param_1 + 8);
  local_68 = 0;
  local_90 = (uint)(*(float *)(param_1 + 8) + *(float *)(param_1 + 0x14)) ^ _LC20;
  local_98 = CONCAT44((uint)((float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) +
                            (float)((ulong)*(undefined8 *)param_1 >> 0x20)) ^ _LC16._4_4_,
                      (uint)((float)*(undefined8 *)(param_1 + 0xc) + (float)*(undefined8 *)param_1)
                      ^ (uint)_LC16);
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_d8 = 0;
  local_50 = 0xffffffff;
  local_b8 = 0;
  if (*(int *)(this + 0x118) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  local_d4 = 0;
  local_d0 = param_3;
  local_c8 = param_2;
  local_c0 = param_4;
  if (*(uint *)(this + 0x128) != 0xffffffff) {
    BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
    ::_cull_aabb_iterative
              ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)(this + 0x38),*(uint *)(this + 0x128),(CullParams *)&local_d8,false);
  }
  if (*(uint *)(this + 300) != 0xffffffff) {
    BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
    ::_cull_aabb_iterative
              ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)(this + 0x38),*(uint *)(this + 300),(CullParams *)&local_d8,false);
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
        param_2[uVar5] = *(GodotCollisionObject3D **)(lVar6 + 0x10);
        if (param_4 != (int *)0x0) {
          param_4[uVar5] = *(int *)(lVar6 + 0xc);
        }
        uVar5 = uVar5 + 1;
        if ((long)param_3 == uVar5) goto LAB_00102000;
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
LAB_00102000:
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_unlock(__mutex);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



/* GodotBroadPhase3DBVH::GodotBroadPhase3DBVH() */

void __thiscall GodotBroadPhase3DBVH::GodotBroadPhase3DBVH(GodotBroadPhase3DBVH *this)

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
  *(undefined ***)this = &PTR_create_00108460;
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
  this[0x134] = (GodotBroadPhase3DBVH)0x1;
  *(undefined8 *)(this + 0x138) = 0x3dcccccd;
  *(undefined8 *)(this + 0x128) = 0xffffffffffffffff;
  PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
  ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
             *)(this + 0xd8),&local_24);
  uVar1 = _LC29;
  *(undefined1 (*) [16])(this + 0x168) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x138) = uVar1;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 1;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x168) = 1;
  this[0x180] = (GodotBroadPhase3DBVH)0x1;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 0x158) = (undefined1  [16])0x0;
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    *(GodotBroadPhase3DBVH **)(this + 0x20) = this;
    *(undefined8 *)(this + 8) = 0x100000;
    pthread_mutex_unlock(__mutex);
    if (this[0x180] == (GodotBroadPhase3DBVH)0x0) {
      *(GodotBroadPhase3DBVH **)(this + 0x28) = this;
      *(code **)(this + 0x10) = _unpair_callback;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001022e0;
    }
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 == 0) {
      *(GodotBroadPhase3DBVH **)(this + 0x28) = this;
      *(code **)(this + 0x10) = _unpair_callback;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock(__mutex);
        return;
      }
      goto LAB_001022e0;
    }
  }
  std::__throw_system_error(iVar2);
LAB_001022e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotBroadPhase3DBVH::_create() */

GodotBroadPhase3DBVH * GodotBroadPhase3DBVH::_create(void)

{
  GodotBroadPhase3DBVH *this;
  
  this = (GodotBroadPhase3DBVH *)operator_new(0x1a8,"");
  GodotBroadPhase3DBVH(this);
  return this;
}



/* GodotBroadPhase3DBVH::create(GodotCollisionObject3D*, int, AABB const&, bool) */

int __thiscall
GodotBroadPhase3DBVH::create
          (GodotBroadPhase3DBVH *this,GodotCollisionObject3D *param_1,int param_2,AABB *param_3,
          bool param_4)

{
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
  *this_00;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  ulong uVar12;
  void *pvVar13;
  ulong uVar14;
  uint uVar15;
  ulong unaff_RBX;
  uint *puVar16;
  uint uVar17;
  long in_FS_OFFSET;
  float fVar18;
  pthread_mutex_t *local_b0;
  uint *local_a0;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  uint local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_40;
  
  uVar12 = (ulong)(uint)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (pthread_mutex_t *)0x0;
  uVar17 = (uint)!param_4;
  if (this[0x180] == (GodotBroadPhase3DBVH)0x0) {
LAB_0010237c:
    uVar15 = _LC16._4_4_;
    uVar8 = (uint)_LC16;
    local_78 = *(undefined8 *)param_3;
    uVar2 = *(undefined8 *)(param_3 + 0xc);
    uVar3 = *(undefined8 *)param_3;
    local_64 = (uint)(*(float *)(param_3 + 8) + *(float *)(param_3 + 0x14)) ^ _LC20;
    local_70 = *(undefined4 *)(param_3 + 8);
    uVar6 = *(uint *)(this + 0x38);
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    local_6c = CONCAT44((uint)((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20)) ^
                        uVar15,(uint)((float)uVar2 + (float)uVar3) ^ uVar8);
    if (*(int *)(this + 0x48) == 0) {
      if (0xfffffffe < uVar6) {
        *(undefined4 *)(this + 0x38) = 0;
LAB_00102a08:
        uVar12 = 0;
        uVar14 = 0xffffffff;
        goto LAB_001027dd;
      }
      pvVar13 = *(void **)(this + 0x40);
      if (*(uint *)(this + 0x3c) < uVar6 + 1) {
        uVar8 = uVar6 >> 1 | uVar6;
        uVar8 = uVar8 | uVar8 >> 2;
        uVar8 = uVar8 | uVar8 >> 4;
        uVar8 = uVar8 | uVar8 >> 8;
        uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
        *(uint *)(this + 0x3c) = uVar8;
        pvVar13 = (void *)Memory::realloc_static(pvVar13,(ulong)uVar8 * 8,false);
        *(void **)(this + 0x40) = pvVar13;
        if (pvVar13 == (void *)0x0) goto LAB_0010292c;
      }
      unaff_RBX = (ulong)uVar6;
      *(uint *)(this + 0x38) = uVar6 + 1;
      local_a0 = (uint *)((long)pvVar13 + unaff_RBX * 8);
LAB_00102405:
      *(int *)(this + 0x80) = *(int *)(this + 0x80) + 1;
      uVar6 = *(uint *)(this + 0x60);
      uVar12 = (ulong)uVar6;
      if (*(int *)(this + 0x70) == 0) {
        if (0xfffffffe < uVar6) {
          *(undefined4 *)(this + 0x60) = 0;
          goto LAB_00102a08;
        }
        pvVar13 = *(void **)(this + 0x68);
        if (*(uint *)(this + 100) < uVar6 + 1) {
          uVar8 = uVar6 >> 1 | uVar6;
          uVar8 = uVar8 | uVar8 >> 2;
          uVar8 = uVar8 | uVar8 >> 4;
          uVar8 = uVar8 | uVar8 >> 8;
          uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
          *(uint *)(this + 100) = uVar8;
          pvVar13 = (void *)Memory::realloc_static(pvVar13,(ulong)uVar8 << 5,false);
          *(void **)(this + 0x68) = pvVar13;
          if (pvVar13 == (void *)0x0) {
LAB_0010292c:
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        *(uint *)(this + 0x60) = uVar6 + 1;
        puVar16 = (uint *)((long)pvVar13 + (ulong)uVar6 * 0x20);
      }
      else {
        uVar8 = *(int *)(this + 0x70) - 1;
        uVar15 = *(uint *)(*(long *)(this + 0x78) + (ulong)uVar8 * 4);
        *(uint *)(this + 0x70) = uVar8;
        if (uVar6 <= uVar15) {
          uVar14 = (ulong)uVar15;
          goto LAB_001027dd;
        }
        puVar16 = (uint *)((ulong)uVar15 * 0x20 + *(long *)(this + 0x68));
      }
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
      uVar6 = *(uint *)(this + 0x88);
      if (*(int *)(this + 0x98) != 0) {
        uVar8 = *(int *)(this + 0x98) - 1;
        uVar15 = *(uint *)(*(long *)(this + 0xa0) + (ulong)uVar8 * 4);
        *(uint *)(this + 0x98) = uVar8;
        if (uVar6 <= uVar15) {
          uVar14 = (ulong)uVar15;
          uVar12 = (ulong)uVar6;
          goto LAB_001027dd;
        }
        puVar9 = (undefined8 *)((ulong)uVar15 * 0x30 + *(long *)(this + 0x90));
LAB_00102486:
        *(undefined4 *)(puVar9 + 3) = 0;
        if (*(int *)(puVar9 + 4) != 0) {
          *(undefined4 *)(puVar9 + 4) = 0;
        }
        if ((void *)puVar9[5] != (void *)0x0) {
          Memory::free_static((void *)puVar9[5],false);
          puVar9[5] = 0;
          *(undefined4 *)((long)puVar9 + 0x24) = 0;
        }
        uStack_4c = 0;
        uStack_48 = 0;
        pvVar13 = *(void **)(this + 0x108);
        local_58 = 0;
        uStack_50 = 0;
        uStack_44 = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar16[3] = param_2;
        *(GodotCollisionObject3D **)(puVar16 + 4) = param_1;
        uVar6 = *(uint *)(this + 0x100);
        puVar16[2] = 0;
        puVar16[6] = uVar6;
        if (uVar6 == *(uint *)(this + 0x104)) {
          uVar12 = (ulong)(uVar6 * 2);
          if (uVar6 * 2 == 0) {
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
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar6 = *(uint *)(this + 0x100);
        }
        *(uint *)(this + 0x100) = uVar6 + 1;
        *(int *)((long)pvVar13 + (ulong)uVar6 * 4) = (int)unaff_RBX;
        iVar7 = *(int *)(this + (long)(int)uVar17 * 4 + 0x128);
        *puVar16 = uVar17;
        uVar12 = (long)(int)uVar17 + 0x3c;
        puVar16[1] = 3 - param_4;
        if (iVar7 == -1) goto LAB_00102740;
        goto LAB_00102560;
      }
      LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::ItemPairs,unsigned_int,false,false>
      ::resize((LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::ItemPairs,unsigned_int,false,false>
                *)(this + 0x88),uVar6 + 1);
      uVar8 = *(uint *)(this + 0x88);
      uVar14 = (ulong)uVar6;
      if (uVar6 < uVar8) {
        puVar9 = (undefined8 *)(uVar14 * 0x30 + *(long *)(this + 0x90));
        goto LAB_00102486;
      }
LAB_00102890:
      uVar12 = (ulong)uVar8;
      goto LAB_001027dd;
    }
    uVar8 = *(int *)(this + 0x48) - 1;
    uVar15 = *(uint *)(*(long *)(this + 0x50) + (ulong)uVar8 * 4);
    unaff_RBX = (ulong)uVar15;
    *(uint *)(this + 0x48) = uVar8;
    if (uVar15 < uVar6) {
      local_a0 = (uint *)(*(long *)(this + 0x40) + (ulong)uVar15 * 8);
      goto LAB_00102405;
    }
  }
  else {
    local_b0 = (pthread_mutex_t *)(this + 0x158);
    iVar7 = pthread_mutex_lock(local_b0);
    if (iVar7 == 0) goto LAB_0010237c;
    std::__throw_system_error(iVar7);
LAB_00102740:
    puVar9 = (undefined8 *)
             PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
             ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
                        *)(this + 0xb0),&local_80);
    *(undefined4 *)((long)puVar9 + 0x24) = 0;
    uVar2 = _LC35;
    *(undefined8 *)((long)puVar9 + 0x14) = 0x7f7fffff;
    *(undefined8 *)((long)puVar9 + 0xc) = uVar2;
    *puVar9 = 0x7f7fffff7f7fffff;
    *(undefined4 *)((long)puVar9 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar9 + 1) = 0x7f7fffff;
    *(uint *)(this + uVar12 * 4 + 0x38) = local_80;
    puVar11 = (undefined4 *)
              PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
                         *)(this + 0xd8),&local_7c);
    *puVar11 = 0;
    *(uint *)(puVar9 + 3) = -local_7c;
LAB_00102560:
    this_00 = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
               *)(this + 0x38);
    uVar6 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::_logic_choose_item_add_node
                      (this_00,*(uint *)(this + (ulong)!param_4 * 4 + 0x128),(BVH_ABB *)&local_78);
    uVar15 = (uint)unaff_RBX;
    *local_a0 = uVar6;
    cVar5 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::_node_add_item(this_00,uVar6,uVar15,(BVH_ABB *)&local_78);
    if (cVar5 != '\0') {
      uVar8 = *(uint *)(this + 0xb0);
      uVar14 = (ulong)*local_a0;
      if (uVar8 <= *local_a0) goto LAB_00102890;
      uVar6 = *(uint *)(*(long *)(this + 0xb8) + uVar14 * 0x28 + 0x1c);
      if (uVar6 != 0xffffffff) {
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::refit_upward_and_balance(this_00,uVar6,uVar17);
      }
    }
    uVar6 = *(uint *)(this + 0x88);
    if (uVar15 < uVar6) {
      uVar2 = *(undefined8 *)(param_3 + 8);
      pfVar10 = (float *)((unaff_RBX & 0xffffffff) * 0x30 + *(long *)(this + 0x90));
      *(undefined8 *)pfVar10 = *(undefined8 *)param_3;
      *(undefined8 *)(pfVar10 + 2) = uVar2;
      *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(param_3 + 0x10);
      fVar1 = *(float *)(this + 0x138);
      fVar18 = fVar1 + fVar1;
      *pfVar10 = *pfVar10 - fVar1;
      pfVar10[1] = pfVar10[1] - fVar1;
      pfVar10[2] = pfVar10[2] - fVar1;
      pfVar10[3] = fVar18 + pfVar10[3];
      *(ulong *)(pfVar10 + 4) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20) + fVar18,
                    (float)*(undefined8 *)(pfVar10 + 4) + fVar18);
      BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
      ::_add_changed_item((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                           *)(this + 8),unaff_RBX & 0xffffffff);
      BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
      ::_check_for_collisions
                ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                  *)(this + 8),true);
      if (local_b0 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(local_b0);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar15 + 1;
    }
  }
  uVar12 = (ulong)uVar6;
  uVar14 = unaff_RBX & 0xffffffff;
LAB_001027dd:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar12,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* GodotBroadPhase3DBVH::remove(unsigned int) */

void GodotBroadPhase3DBVH::remove(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int in_ESI;
  long lVar15;
  undefined4 in_register_0000003c;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong in_R8;
  ulong uVar19;
  ulong in_R10;
  pthread_mutex_t *__mutex;
  ulong uVar20;
  undefined8 local_40;
  
  lVar16 = CONCAT44(in_register_0000003c,param_1);
  if (in_ESI == 0) {
    _err_print_error("remove","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x37,
                     "Condition \"!p_id\" is true.",0,0);
    return;
  }
  uVar1 = in_ESI - 1;
  uVar20 = (ulong)uVar1;
  __mutex = (pthread_mutex_t *)0x0;
  if (*(char *)(lVar16 + 0x180) != '\0') {
    __mutex = (pthread_mutex_t *)(lVar16 + 0x158);
    iVar8 = pthread_mutex_lock(__mutex);
    if (iVar8 != 0) {
      std::__throw_system_error(iVar8);
LAB_00102ce0:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,in_R10,in_R8,"p_index","count",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
  if (*(uint *)(lVar16 + 0x88) <= uVar1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,
               (ulong)*(uint *)(lVar16 + 0x88),"p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  lVar9 = uVar20 * 0x30 + *(long *)(lVar16 + 0x90);
  iVar8 = *(int *)(lVar9 + 0x20);
  do {
    if (iVar8 == 0) {
      uVar19 = (ulong)*(uint *)(lVar16 + 0x140);
      uVar13 = 0;
      if (0 < (int)*(uint *)(lVar16 + 0x140)) {
        do {
          uVar17 = (uint)uVar13;
          if ((uint)uVar19 <= uVar17) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar13,uVar19,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          puVar11 = (uint *)(*(long *)(lVar16 + 0x148) + uVar13 * 4);
          if (uVar1 == *puVar11) {
            uVar18 = (uint)uVar19 - 1;
            uVar19 = (ulong)uVar18;
            *(uint *)(lVar16 + 0x140) = uVar18;
            if (uVar17 < uVar18) {
              *puVar11 = *(uint *)(*(long *)(lVar16 + 0x148) + uVar19 * 4);
            }
          }
          else {
            uVar19 = (ulong)*(uint *)(lVar16 + 0x140);
            uVar13 = (ulong)(uVar17 + 1);
          }
        } while ((int)uVar13 < (int)uVar19);
      }
      if (uVar1 < *(uint *)(lVar16 + 0x60)) {
        *(undefined4 *)(uVar20 * 0x20 + *(long *)(lVar16 + 0x68) + 8) = 0;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::item_remove((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                       *)(lVar16 + 0x38),uVar1);
        BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                    *)(lVar16 + 8),true);
        if (__mutex != (pthread_mutex_t *)0x0) {
          pthread_mutex_unlock(__mutex);
          return;
        }
        return;
      }
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar20,
                 (ulong)*(uint *)(lVar16 + 0x60),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar17 = **(uint **)(lVar9 + 0x28);
    uVar18 = uVar17;
    uVar14 = uVar1;
    if (uVar1 <= uVar17) {
      uVar18 = uVar1;
      uVar14 = uVar17;
    }
    uVar17 = *(uint *)(lVar16 + 0x60);
    if (uVar17 <= uVar18) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar18,(ulong)uVar17,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar13 = (ulong)uVar18;
    lVar2 = *(long *)(lVar16 + 0x68) + uVar13 * 0x20;
    if (uVar17 <= uVar14) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar14,(ulong)uVar17,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    in_R10 = (ulong)uVar14;
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar10 = *(long *)(lVar16 + 0x68) + in_R10 * 0x20;
    lVar5 = *(long *)(lVar10 + 0x10);
    if ((lVar4 != lVar5) || (lVar4 == 0)) {
      uVar17 = *(uint *)(lVar16 + 0x88);
      in_R8 = (ulong)uVar17;
      if (uVar17 <= uVar18) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar13,in_R8,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar12 = *(long *)(lVar16 + 0x90);
      lVar15 = uVar13 * 0x30 + lVar12;
      if (uVar17 <= uVar14) goto LAB_00102ce0;
      iVar8 = *(int *)(lVar15 + 0x18);
      if (0 < iVar8) {
        uVar13 = 0;
        do {
          if (uVar13 == *(uint *)(lVar15 + 0x20)) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar13,uVar13,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          puVar11 = (uint *)(uVar13 * 0x10 + *(long *)(lVar15 + 0x28));
          if (uVar14 == *puVar11) {
            local_40 = *(undefined8 *)(puVar11 + 2);
            uVar17 = *(uint *)(lVar15 + 0x20) - 1;
            *(uint *)(lVar15 + 0x20) = uVar17;
            if ((uint)uVar13 < uVar17) {
              puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x28) + (ulong)uVar17 * 0x10);
              uVar7 = puVar3[1];
              *(undefined8 *)puVar11 = *puVar3;
              *(undefined8 *)(puVar11 + 2) = uVar7;
            }
            *(int *)(lVar15 + 0x18) = iVar8 + -1;
            goto LAB_00102d31;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != (long)iVar8);
      }
      local_40 = 0;
LAB_00102d31:
      lVar12 = lVar12 + in_R10 * 0x30;
      iVar8 = *(int *)(lVar12 + 0x18);
      if (0 < iVar8) {
        uVar13 = 0;
        do {
          if (uVar13 == *(uint *)(lVar12 + 0x20)) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar13,uVar13,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          puVar11 = (uint *)(uVar13 * 0x10 + *(long *)(lVar12 + 0x28));
          if (uVar18 == *puVar11) {
            uVar17 = *(uint *)(lVar12 + 0x20) - 1;
            *(uint *)(lVar12 + 0x20) = uVar17;
            if ((uint)uVar13 < uVar17) {
              puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x28) + (ulong)uVar17 * 0x10);
              uVar7 = puVar3[1];
              *(undefined8 *)puVar11 = *puVar3;
              *(undefined8 *)(puVar11 + 2) = uVar7;
            }
            *(int *)(lVar12 + 0x18) = iVar8 + -1;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != (long)iVar8);
      }
      if (*(code **)(lVar16 + 0x10) != (code *)0x0) {
        (**(code **)(lVar16 + 0x10))
                  (*(undefined8 *)(lVar16 + 0x20),uVar18,lVar4,*(undefined4 *)(lVar2 + 0xc),uVar14,
                   lVar5,*(undefined4 *)(lVar10 + 0xc),local_40);
      }
    }
    iVar8 = *(int *)(lVar9 + 0x20);
  } while( true );
}



/* GodotBroadPhase3DBVH::move(unsigned int, AABB const&) */

void GodotBroadPhase3DBVH::move(uint param_1,AABB *param_2)

{
  long lVar1;
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
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
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
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
    _err_print_error(&_LC58,"modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x2b,
                     "Condition \"!p_id\" is true.",0,0);
    return;
  }
  lVar1 = lVar8 + 8;
  uVar10 = iVar9 - 1;
  uVar7 = (ulong)uVar10;
  if (*(char *)(lVar8 + 0x180) == '\0') {
    cVar4 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::item_move((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                         *)(lVar8 + 0x38),uVar10);
    if (cVar4 != '\0') {
      BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
      ::_add_changed_item(lVar1,uVar10);
      return;
    }
    return;
  }
  ppVar11 = (pthread_mutex_t *)(lVar8 + 0x158);
  uVar5 = pthread_mutex_lock(ppVar11);
  if (uVar5 == 0) {
    cVar4 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::item_move((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                         *)(lVar8 + 0x38),uVar10,in_RDX);
    if (cVar4 != '\0') {
      BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
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
      _err_print_error("set_static","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x30,
                       "Condition \"!p_id\" is true.",0,0);
      return;
    }
    goto LAB_00103344;
  }
  uVar10 = iVar9 - 1;
  uStack_6c = uVar10;
  if (*(char *)(uVar12 + 0x180) == '\0') {
    cVar4 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::item_set_tree((BVHHandle *)(uVar12 + 0x38),(uint)&uStack_6c,
                            (uint)(extraout_DL == '\0'));
    if (cVar4 != '\0') {
      ppVar11 = (pthread_mutex_t *)0x0;
LAB_001031b3:
      uVar5 = *(uint *)(uVar12 + 0x38);
      if (uVar5 <= uVar10) {
        uVar7 = (ulong)uVar10;
        iVar9 = 0xae;
        goto LAB_001032fa;
      }
      uVar10 = *(uint *)(*(long *)(uVar12 + 0x40) + (ulong)uVar10 * 8);
      uVar7 = (ulong)uVar10;
      if (uVar10 != 0xfffffffe) {
        uVar5 = *(uint *)(uVar12 + 0xb0);
        if (uVar10 < uVar5) {
          uVar5 = *(uint *)(uVar12 + 0xd8);
          uVar10 = -*(int *)(*(long *)(uVar12 + 0xb8) + uVar7 * 0x28 + 0x18);
          uVar7 = (ulong)uVar10;
          if (uVar10 < uVar5) {
            BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
            ::_add_changed_item((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                                 *)(uVar12 + 8),uStack_6c);
            BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
            ::_check_for_collisions
                      ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                        *)(uVar12 + 8),true);
            goto LAB_001031ce;
          }
        }
        iVar9 = 0xb2;
LAB_001032fa:
        uStack_98 = 0x10330d;
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar9,uVar7,(ulong)uVar5,"p_index"
                   ,"count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
LAB_001031ce:
      if (ppVar11 != (pthread_mutex_t *)0x0) goto LAB_001031d3;
    }
    if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00103344:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ppVar11 = (pthread_mutex_t *)(uVar12 + 0x158);
  uVar5 = pthread_mutex_lock(ppVar11);
  if (uVar5 == 0) {
    cVar4 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::item_set_tree((BVHHandle *)(uVar12 + 0x38),(uint)&uStack_6c,
                            (uint)(extraout_DL == '\0'));
    if (cVar4 != '\0') goto LAB_001031b3;
LAB_001031d3:
    if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(ppVar11);
      return;
    }
    goto LAB_00103344;
  }
  uVar7 = (ulong)uVar5;
  std::__throw_system_error(uVar5);
  ppVar11 = (pthread_mutex_t *)0x0;
  lStack_b0 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = (ulong)uVar10;
  uStack_98 = uVar12;
  if (*(char *)(uVar7 + 0x180) == '\0') {
LAB_00103388:
    this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            *)(uVar7 + 0x38);
    if (*(uint *)(uVar7 + 0x128) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::refit_branch(this,*(uint *)(uVar7 + 0x128));
    }
    if (*(uint *)(uVar7 + 300) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::refit_branch(this,*(uint *)(uVar7 + 300));
    }
    uVar10 = *(uint *)(uVar7 + 0x110);
    if (uVar10 < *(uint *)(uVar7 + 0x100)) {
      iVar9 = uVar10 + 1;
      lVar8 = (ulong)uVar10 << 2;
    }
    else {
      *(undefined4 *)(uVar7 + 0x110) = 0;
      if (*(uint *)(uVar7 + 0x100) == 0) goto LAB_0010349f;
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
LAB_0010349f:
        BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
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
        uStack_bc = 0;
        uStack_b4 = 0;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::node_remove_item(this,uVar10,uVar5,(BVH_ABB *)&uStack_c8);
        uVar6 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                ::_logic_choose_item_add_node
                          (this,*(uint *)(uVar7 + 0x128 + (ulong)uVar5 * 4),(BVH_ABB *)&uStack_c8);
        *puVar2 = uVar6;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::_node_add_item(this,uVar6,uVar10,(BVH_ABB *)&uStack_c8);
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::refit_upward_and_balance(this,*puVar2,uVar5);
        goto LAB_0010349f;
      }
      iVar9 = 0xae;
      goto LAB_00103573;
    }
  }
  else {
    ppVar11 = (pthread_mutex_t *)(uVar7 + 0x158);
    iVar9 = pthread_mutex_lock(ppVar11);
    if (iVar9 == 0) goto LAB_00103388;
    std::__throw_system_error(iVar9);
  }
  in_R9 = in_R9 & 0xffffffff;
  iVar9 = 0xb2;
LAB_00103573:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar9,in_R9,in_R8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* GodotBroadPhase3DBVH::set_static(unsigned int, bool) */

void GodotBroadPhase3DBVH::set_static(uint param_1,bool param_2)

{
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
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
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
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
      _err_print_error("set_static","modules/godot_physics_3d/godot_broad_phase_3d_bvh.cpp",0x30,
                       "Condition \"!p_id\" is true.",0,0);
      return;
    }
    goto LAB_00103344;
  }
  uVar9 = iVar8 - 1;
  local_34 = uVar9;
  if (*(char *)(lVar7 + 0x180) == '\0') {
    cVar3 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::item_set_tree((BVHHandle *)(lVar7 + 0x38),(uint)&local_34,(uint)(in_DL == '\0'));
    if (cVar3 != '\0') {
      ppVar10 = (pthread_mutex_t *)0x0;
LAB_001031b3:
      uVar4 = *(uint *)(lVar7 + 0x38);
      if (uVar4 <= uVar9) {
        uVar6 = (ulong)uVar9;
        iVar8 = 0xae;
        goto LAB_001032fa;
      }
      uVar9 = *(uint *)(*(long *)(lVar7 + 0x40) + (ulong)uVar9 * 8);
      uVar6 = (ulong)uVar9;
      if (uVar9 != 0xfffffffe) {
        uVar4 = *(uint *)(lVar7 + 0xb0);
        if (uVar9 < uVar4) {
          uVar4 = *(uint *)(lVar7 + 0xd8);
          uVar9 = -*(int *)(*(long *)(lVar7 + 0xb8) + uVar6 * 0x28 + 0x18);
          uVar6 = (ulong)uVar9;
          if (uVar9 < uVar4) {
            BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
            ::_add_changed_item((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                                 *)(lVar7 + 8),local_34);
            BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
            ::_check_for_collisions
                      ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
                        *)(lVar7 + 8),true);
            goto LAB_001031ce;
          }
        }
        iVar8 = 0xb2;
LAB_001032fa:
        lStack_60 = 0x10330d;
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar8,uVar6,(ulong)uVar4,"p_index"
                   ,"count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
LAB_001031ce:
      if (ppVar10 != (pthread_mutex_t *)0x0) goto LAB_001031d3;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00103344:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  ppVar10 = (pthread_mutex_t *)(lVar7 + 0x158);
  uVar4 = pthread_mutex_lock(ppVar10);
  if (uVar4 == 0) {
    cVar3 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            ::item_set_tree((BVHHandle *)(lVar7 + 0x38),(uint)&local_34,(uint)(in_DL == '\0'));
    if (cVar3 != '\0') goto LAB_001031b3;
LAB_001031d3:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pthread_mutex_unlock(ppVar10);
      return;
    }
    goto LAB_00103344;
  }
  uVar6 = (ulong)uVar4;
  std::__throw_system_error(uVar4);
  ppVar10 = (pthread_mutex_t *)0x0;
  lStack_78 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_68 = (ulong)uVar9;
  lStack_60 = lVar7;
  if (*(char *)(uVar6 + 0x180) == '\0') {
LAB_00103388:
    this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            *)(uVar6 + 0x38);
    if (*(uint *)(uVar6 + 0x128) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::refit_branch(this,*(uint *)(uVar6 + 0x128));
    }
    if (*(uint *)(uVar6 + 300) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::refit_branch(this,*(uint *)(uVar6 + 300));
    }
    uVar9 = *(uint *)(uVar6 + 0x110);
    if (uVar9 < *(uint *)(uVar6 + 0x100)) {
      iVar8 = uVar9 + 1;
      lVar7 = (ulong)uVar9 << 2;
    }
    else {
      *(undefined4 *)(uVar6 + 0x110) = 0;
      if (*(uint *)(uVar6 + 0x100) == 0) goto LAB_0010349f;
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
LAB_0010349f:
        BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
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
        uStack_84 = 0;
        uStack_7c = 0;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::node_remove_item(this,uVar9,uVar4,(BVH_ABB *)&uStack_90);
        uVar5 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                ::_logic_choose_item_add_node
                          (this,*(uint *)(uVar6 + 0x128 + (ulong)uVar4 * 4),(BVH_ABB *)&uStack_90);
        *puVar1 = uVar5;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::_node_add_item(this,uVar5,uVar9,(BVH_ABB *)&uStack_90);
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::refit_upward_and_balance(this,*puVar1,uVar4);
        goto LAB_0010349f;
      }
      iVar8 = 0xae;
      goto LAB_00103573;
    }
  }
  else {
    ppVar10 = (pthread_mutex_t *)(uVar6 + 0x158);
    iVar8 = pthread_mutex_lock(ppVar10);
    if (iVar8 == 0) goto LAB_00103388;
    std::__throw_system_error(iVar8);
  }
  in_R9 = in_R9 & 0xffffffff;
  iVar8 = 0xb2;
LAB_00103573:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar8,in_R9,in_R8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GodotBroadPhase3DBVH::update() */

void __thiscall GodotBroadPhase3DBVH::update(GodotBroadPhase3DBVH *this)

{
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
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
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  __mutex = (pthread_mutex_t *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x180] == (GodotBroadPhase3DBVH)0x0) {
LAB_00103388:
    this_00 = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
               *)(this + 0x38);
    if (*(uint *)(this + 0x128) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::refit_branch(this_00,*(uint *)(this + 0x128));
    }
    if (*(uint *)(this + 300) != 0xffffffff) {
      BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::refit_branch(this_00,*(uint *)(this + 300));
    }
    uVar2 = *(uint *)(this + 0x110);
    if (uVar2 < *(uint *)(this + 0x100)) {
      iVar7 = uVar2 + 1;
      lVar6 = (ulong)uVar2 << 2;
    }
    else {
      *(undefined4 *)(this + 0x110) = 0;
      if (*(uint *)(this + 0x100) == 0) goto LAB_0010349f;
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
LAB_0010349f:
        BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
        ::_check_for_collisions
                  ((BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
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
        local_4c = 0;
        local_44 = 0;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::node_remove_item(this_00,uVar2,uVar3,(BVH_ABB *)&local_58);
        uVar5 = BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                ::_logic_choose_item_add_node
                          (this_00,*(uint *)(this + (ulong)uVar3 * 4 + 0x128),(BVH_ABB *)&local_58);
        *puVar1 = uVar5;
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::_node_add_item(this_00,uVar5,uVar2,(BVH_ABB *)&local_58);
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::refit_upward_and_balance(this_00,*puVar1,uVar3);
        goto LAB_0010349f;
      }
      iVar7 = 0xae;
      goto LAB_00103573;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 0x158);
    iVar7 = pthread_mutex_lock(__mutex);
    if (iVar7 == 0) goto LAB_00103388;
    std::__throw_system_error(iVar7);
  }
  in_R9 = in_R9 & 0xffffffff;
  iVar7 = 0xb2;
LAB_00103573:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar7,in_R9,in_R8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_node_add_item(unsigned int, unsigned int, BVH_ABB<AABB, Vector3> const&) */

undefined8 __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::_node_add_item(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                 *this,uint param_1,uint param_2,BVH_ABB *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  ushort *puVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float local_48 [3];
  float fStack_3c;
  undefined8 local_38;
  long local_30;
  
  uVar7 = (ulong)*(uint *)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)this <= param_2) {
    uVar10 = (ulong)param_2;
LAB_001039aa:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,uVar7,"p_index","count",""
               ,false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar3 = *(uint *)(this + 0x78);
  uVar7 = (ulong)uVar3;
  puVar1 = (uint *)(*(long *)(this + 8) + (ulong)param_2 * 8);
  *puVar1 = param_1;
  if (uVar3 <= param_1) {
    uVar10 = (ulong)param_1;
    goto LAB_001039aa;
  }
  uVar7 = (ulong)*(uint *)(this + 0xa0);
  pfVar11 = (float *)(*(long *)(this + 0x80) + (ulong)param_1 * 0x28);
  uVar10 = (ulong)(uint)-(int)pfVar11[6];
  if (*(uint *)(this + 0xa0) <= (uint)-(int)pfVar11[6]) goto LAB_001039aa;
  fStack_3c = *(float *)(this + 0xf8);
  puVar12 = (ushort *)(uVar10 * 0xe04 + *(long *)(this + 0xa8));
  fVar14 = (float)*(undefined8 *)(param_3 + 0x10) - fStack_3c;
  fVar15 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) - fStack_3c;
  local_38 = CONCAT44(fVar15,fVar14);
  uVar2 = *puVar12;
  local_48[0] = *(float *)param_3 - fStack_3c;
  local_48[1] = *(float *)(param_3 + 4) - fStack_3c;
  local_48[2] = *(float *)(param_3 + 8) - fStack_3c;
  fStack_3c = *(float *)(param_3 + 0xc) - fStack_3c;
  if (uVar2 == 0) {
    uVar13 = 1;
    *(undefined8 *)(pfVar11 + 4) = local_38;
    *(ulong *)pfVar11 = CONCAT44(local_48[1],local_48[0]);
    *(ulong *)(pfVar11 + 2) = CONCAT44(fStack_3c,local_48[2]);
  }
  else {
    if ((((fStack_3c < pfVar11[3]) || (fVar14 < pfVar11[4])) || (fVar15 < pfVar11[5])) ||
       (((local_48[0] < *pfVar11 || (local_48[1] < pfVar11[1])) ||
        (uVar13 = 0, local_48[2] < pfVar11[2])))) {
      pfVar8 = local_48;
      pfVar11 = pfVar11 + 3;
      do {
        fVar14 = *pfVar11;
        if (pfVar8[3] <= *pfVar11) {
          fVar14 = pfVar8[3];
        }
        pfVar9 = pfVar8 + 1;
        *pfVar11 = fVar14;
        fVar14 = pfVar11[-3];
        if (*pfVar8 <= pfVar11[-3]) {
          fVar14 = *pfVar8;
        }
        pfVar11[-3] = fVar14;
        pfVar8 = pfVar9;
        pfVar11 = pfVar11 + 1;
      } while (&fStack_3c != pfVar9);
      uVar13 = 1;
    }
    if (0x7f < uVar2) {
      _err_print_error("request_item","./core/math/bvh_structs.inc",0x69,
                       "Method/function failed. Returning: 0","BVH request_item error.",0,0);
      uVar7 = 0;
      goto LAB_00103958;
    }
  }
  uVar7 = (ulong)uVar2;
  *puVar12 = uVar2 + 1;
LAB_00103958:
  uVar5 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)(param_3 + 8);
  puVar1[1] = (uint)uVar7;
  *(undefined8 *)(puVar12 + uVar7 * 0xc + 0x102) = uVar5;
  *(undefined8 *)(puVar12 + uVar7 * 0xc + 0x106) = uVar6;
  *(undefined8 *)(puVar12 + uVar7 * 0xc + 0x10a) = *(undefined8 *)(param_3 + 0x10);
  *(uint *)(puVar12 + uVar7 * 2 + 2) = param_2;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BVH_Manager<GodotCollisionObject3D, 2, true, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, AABB, Vector3,
   true>::_collide(BVHHandle, BVHHandle) */

void __thiscall
BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
::_collide(BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
           *this,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar11 = *(uint *)(this + 0x58);
  uVar8 = (ulong)uVar11;
  uVar14 = (ulong)param_2;
  if (param_3 < param_2) {
    uVar14 = (ulong)param_3;
    param_3 = param_2;
  }
  uVar13 = (uint)uVar14;
  uVar9 = uVar14;
  if (uVar13 < uVar11) {
    lVar16 = uVar14 * 0x20 + *(long *)(this + 0x60);
    if (param_3 < uVar11) {
      uVar9 = (ulong)param_3;
      lVar2 = *(long *)(lVar16 + 0x10);
      lVar15 = *(long *)(this + 0x60) + uVar9 * 0x20;
      lVar3 = *(long *)(lVar15 + 0x10);
      if ((((*(uint *)(lVar3 + 0x24) & *(uint *)(lVar2 + 0x20)) == 0) &&
          ((*(uint *)(lVar2 + 0x24) & *(uint *)(lVar3 + 0x20)) == 0)) || (lVar3 == lVar2)) {
        return;
      }
      uVar11 = *(uint *)(this + 0x80);
      uVar8 = (ulong)uVar11;
      if (uVar13 < uVar11) {
        lVar17 = uVar14 * 0x30 + *(long *)(this + 0x88);
        if (uVar11 <= param_3) {
          iVar10 = 0xb2;
          uVar14 = uVar9;
          goto LAB_00103b65;
        }
        iVar10 = *(int *)(lVar17 + 0x18);
        lVar18 = *(long *)(this + 0x88) + uVar9 * 0x30;
        iVar1 = *(int *)(lVar18 + 0x18);
        if (iVar1 < iVar10) {
          if (0 < iVar1) {
            uVar8 = (ulong)*(uint *)(lVar18 + 0x20);
            uVar12 = 0;
            do {
              uVar9 = uVar8;
              if (uVar8 == uVar12) goto LAB_00103b60;
              if (uVar13 == *(uint *)(uVar12 * 0x10 + *(long *)(lVar18 + 0x28))) {
                return;
              }
              uVar12 = uVar12 + 1;
            } while ((long)iVar1 != uVar12);
          }
        }
        else if (0 < iVar10) {
          uVar8 = 0;
          do {
            uVar9 = uVar8;
            if (uVar8 == *(uint *)(lVar17 + 0x20)) goto LAB_00103b60;
            if (param_3 == *(uint *)(uVar8 * 0x10 + *(long *)(lVar17 + 0x28))) {
              return;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != (long)iVar10);
        }
        uVar5 = 0;
        if (*(code **)this != (code *)0x0) {
          uVar5 = (**(code **)this)(*(undefined8 *)(this + 0x18),uVar14,lVar2,
                                    *(undefined4 *)(lVar16 + 0xc),param_3,lVar3,
                                    *(undefined4 *)(lVar15 + 0xc));
        }
        uVar11 = *(uint *)(lVar17 + 0x20);
        pvVar7 = *(void **)(lVar17 + 0x28);
        if (uVar11 == *(uint *)(lVar17 + 0x24)) {
          uVar11 = uVar11 * 2;
          if (uVar11 == 0) {
            uVar11 = 1;
          }
          *(uint *)(lVar17 + 0x24) = uVar11;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar11 << 4,false);
          *(void **)(lVar17 + 0x28) = pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_00103d43;
          uVar11 = *(uint *)(lVar17 + 0x20);
        }
        puVar6 = (uint *)((ulong)uVar11 * 0x10 + (long)pvVar7);
        *(uint *)(lVar17 + 0x20) = uVar11 + 1;
        pvVar7 = *(void **)(lVar18 + 0x28);
        *puVar6 = param_3;
        uVar11 = *(uint *)(lVar18 + 0x20);
        *(undefined8 *)(puVar6 + 2) = uVar5;
        *(int *)(lVar17 + 0x18) = *(int *)(lVar17 + 0x18) + 1;
        if (uVar11 == *(uint *)(lVar18 + 0x24)) {
          uVar11 = uVar11 * 2;
          if (uVar11 == 0) {
            uVar11 = 1;
          }
          *(uint *)(lVar18 + 0x24) = uVar11;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar11 << 4,false);
          *(void **)(lVar18 + 0x28) = pvVar7;
          if (pvVar7 == (void *)0x0) {
LAB_00103d43:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar11 = *(uint *)(lVar18 + 0x20);
        }
        puVar6 = (uint *)((long)pvVar7 + (ulong)uVar11 * 0x10);
        *(uint *)(lVar18 + 0x20) = uVar11 + 1;
        *puVar6 = uVar13;
        *(undefined8 *)(puVar6 + 2) = uVar5;
        *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
        return;
      }
      iVar10 = 0xb2;
      goto LAB_00103b65;
    }
    uVar9 = (ulong)param_3;
  }
LAB_00103b60:
  iVar10 = 0xae;
  uVar14 = uVar9;
LAB_00103b65:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar10,uVar14,uVar8,"p_index","count",""
             ,false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* BVH_Manager<GodotCollisionObject3D, 2, true, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, AABB, Vector3,
   true>::_check_for_collisions(bool) */

void __thiscall
BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
::_check_for_collisions
          (BVH_Manager<GodotCollisionObject3D,2,true,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,AABB,Vector3,true>
           *this,bool param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint *puVar20;
  ulong uVar21;
  long lVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint *puVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined8 local_148;
  float local_118;
  float fStack_114;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  float local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x138) != 0) {
    puVar28 = *(uint **)(this + 0x140);
    local_b0 = 0;
    local_a8 = 0;
    puVar1 = puVar28 + *(uint *)(this + 0x138);
    local_a4 = 0;
    local_9c = 0.0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0;
    local_54 = 0;
    local_d8 = 0;
    local_d0 = 0x7fffffff;
    local_c8 = (undefined1  [16])0x0;
    do {
      uVar25 = *puVar28;
      uVar17 = (ulong)*(uint *)(this + 0x80);
      if (*(uint *)(this + 0x80) <= uVar25) {
        uVar15 = (ulong)uVar25;
LAB_001041b3:
        iVar18 = 0xb2;
LAB_001041d3:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",iVar18,uVar15,uVar17,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar27 = (ulong)uVar25;
      uVar17 = (ulong)*(uint *)(this + 0x58);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = _LC16;
      puVar19 = (undefined8 *)(uVar27 * 0x30 + *(long *)(this + 0x88));
      uVar6 = *puVar19;
      fVar29 = (float)*puVar19 + (float)*(undefined8 *)((long)puVar19 + 0xc);
      fVar30 = (float)((ulong)*puVar19 >> 0x20) +
               (float)((ulong)*(undefined8 *)((long)puVar19 + 0xc) >> 0x20);
      fVar32 = *(float *)(puVar19 + 1) + *(float *)((long)puVar19 + 0x14);
      fVar4 = *(float *)(puVar19 + 1);
      uVar35 = (uint)fVar29 ^ (uint)_LC16;
      uVar36 = (uint)fVar30 ^ (uint)(_LC16 >> 0x20);
      uVar31 = (uint)fVar32 ^ _LC20;
      uVar15 = uVar27;
      if (*(uint *)(this + 0x58) <= uVar25) {
LAB_00104391:
        iVar18 = 0xae;
        goto LAB_001041d3;
      }
      lVar11 = uVar27 * 0x20 + *(long *)(this + 0x60);
      uVar5 = *(uint *)(lVar11 + 4);
      local_b8 = *(undefined8 *)(lVar11 + 0x10);
      local_50 = uVar5;
      if (*(int *)(puVar19 + 4) != 0) {
        uVar21 = 0;
        uVar34 = _LC20;
        do {
          uVar17 = (ulong)*(uint *)(this + 0x30);
          uVar24 = *(uint *)(uVar21 * 0x10 + puVar19[5]);
          if (*(uint *)(this + 0x30) <= uVar24) {
            uVar15 = (ulong)uVar24;
            goto LAB_001041b3;
          }
          uVar12 = (ulong)uVar24;
          uVar17 = (ulong)*(uint *)(this + 0xa8);
          puVar13 = (uint *)(*(long *)(this + 0x38) + uVar12 * 8);
          uVar16 = *puVar13;
          uVar15 = (ulong)uVar16;
          if (*(uint *)(this + 0xa8) <= uVar16) goto LAB_001041b3;
          uVar17 = (ulong)*(uint *)(this + 0xd0);
          uVar16 = -*(int *)(*(long *)(this + 0xb0) + uVar15 * 0x28 + 0x18);
          uVar15 = (ulong)uVar16;
          if (*(uint *)(this + 0xd0) <= uVar16) goto LAB_001041b3;
          lVar11 = uVar15 * 0xe04 + *(long *)(this + 0xd8) + 0x200 + (ulong)puVar13[1] * 0x18;
          fStack_f0 = (float)*(undefined8 *)(lVar11 + 0xc);
          uStack_ec = (uint)((ulong)*(undefined8 *)(lVar11 + 0xc) >> 0x20);
          local_f8 = (float)*(undefined8 *)(lVar11 + 4);
          uStack_e8 = (uint)*(undefined8 *)(lVar11 + 0x14);
          uStack_e4 = (uint)((ulong)*(undefined8 *)(lVar11 + 0x14) >> 0x20);
          uVar16 = uVar25;
          if (((fVar29 < local_f8) ||
              (fStack_f4 = (float)((ulong)*(undefined8 *)(lVar11 + 4) >> 0x20), fVar30 < fStack_f4))
             || (fVar32 < fStack_f0)) {
LAB_001041f8:
            uVar26 = uVar24;
            if (uVar25 <= uVar24) {
              uVar12 = (ulong)uVar25;
              uVar26 = uVar25;
              uVar16 = uVar24;
            }
            uVar17 = (ulong)*(uint *)(this + 0x58);
            if (*(uint *)(this + 0x58) <= uVar26) {
LAB_00104448:
              iVar18 = 0xb2;
              uVar15 = uVar12;
              goto LAB_001041d3;
            }
            lVar11 = *(long *)(this + 0x60);
LAB_00104217:
            uVar24 = uVar26;
            puVar23 = (undefined4 *)(uVar12 * 0x20 + lVar11);
            if ((uint)uVar17 <= uVar16) {
              uVar15 = (ulong)uVar16;
              goto LAB_001041b3;
            }
LAB_0010422a:
            uVar15 = (ulong)uVar16;
            lVar11 = uVar15 * 0x20 + lVar11;
            lVar7 = *(long *)(puVar23 + 4);
            lVar8 = *(long *)(lVar11 + 0x10);
            if ((lVar7 != lVar8) || (lVar7 == 0)) {
              uVar26 = *(uint *)(this + 0x80);
              uVar17 = (ulong)uVar26;
              if (uVar26 <= uVar24) goto LAB_00104448;
              lVar14 = *(long *)(this + 0x88);
              lVar22 = uVar12 * 0x30 + lVar14;
              if (uVar26 <= uVar16) goto LAB_001041b3;
              iVar18 = *(int *)(lVar22 + 0x18);
              if (0 < iVar18) {
                uVar17 = 0;
                do {
                  if (uVar17 == *(uint *)(lVar22 + 0x20)) {
                    iVar18 = 0xb2;
                    uVar15 = uVar17;
                    goto LAB_001041d3;
                  }
                  puVar13 = (uint *)(uVar17 * 0x10 + *(long *)(lVar22 + 0x28));
                  if (uVar16 == *puVar13) {
                    local_148 = *(undefined8 *)(puVar13 + 2);
                    uVar26 = *(uint *)(lVar22 + 0x20) - 1;
                    *(uint *)(lVar22 + 0x20) = uVar26;
                    if ((uint)uVar17 < uVar26) {
                      puVar3 = (undefined8 *)(*(long *)(lVar22 + 0x28) + (ulong)uVar26 * 0x10);
                      uVar10 = puVar3[1];
                      *(undefined8 *)puVar13 = *puVar3;
                      *(undefined8 *)(puVar13 + 2) = uVar10;
                    }
                    *(int *)(lVar22 + 0x18) = iVar18 + -1;
                    goto LAB_00104479;
                  }
                  uVar17 = uVar17 + 1;
                } while ((long)iVar18 != uVar17);
              }
              local_148 = 0;
LAB_00104479:
              lVar14 = lVar14 + uVar15 * 0x30;
              iVar18 = *(int *)(lVar14 + 0x18);
              if (0 < iVar18) {
                uVar17 = (ulong)*(uint *)(lVar14 + 0x20);
                uVar15 = 0;
                do {
                  if (uVar17 == uVar15) {
                    iVar18 = 0xb2;
                    uVar15 = uVar17;
                    goto LAB_001041d3;
                  }
                  puVar13 = (uint *)(uVar15 * 0x10 + *(long *)(lVar14 + 0x28));
                  if (uVar24 == *puVar13) {
                    uVar26 = *(uint *)(lVar14 + 0x20) - 1;
                    *(uint *)(lVar14 + 0x20) = uVar26;
                    if ((uint)uVar15 < uVar26) {
                      puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x28) + (ulong)uVar26 * 0x10);
                      uVar10 = puVar3[1];
                      *(undefined8 *)puVar13 = *puVar3;
                      *(undefined8 *)(puVar13 + 2) = uVar10;
                    }
                    *(int *)(lVar14 + 0x18) = iVar18 + -1;
                    break;
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 != (long)iVar18);
              }
              if (*(code **)(this + 8) != (code *)0x0) {
                (**(code **)(this + 8))
                          (*(undefined8 *)(this + 0x18),uVar24,lVar7,puVar23[3],uVar16,lVar8,
                           *(undefined4 *)(lVar11 + 0xc),local_148);
                auVar33._8_8_ = 0;
                auVar33._0_8_ = _LC16;
                uVar34 = _LC20;
              }
            }
          }
          else {
            local_118 = (float)uVar6;
            if ((((float)(uStack_ec ^ auVar33._0_4_) < local_118) ||
                (fStack_114 = (float)((ulong)uVar6 >> 0x20),
                (float)(uStack_e8 ^ auVar33._4_4_) < fStack_114)) ||
               ((float)(uStack_e4 ^ uVar34) < fVar4)) goto LAB_001041f8;
            if (param_1) {
              uVar26 = *(uint *)(this + 0x58);
              uVar17 = (ulong)uVar26;
              uVar15 = uVar27;
              if (uVar25 < uVar26) {
                lVar11 = *(long *)(this + 0x60);
                puVar2 = (undefined4 *)(lVar11 + uVar27 * 0x20);
                uVar15 = uVar12;
                if (uVar24 < uVar26) {
                  puVar23 = (undefined4 *)(uVar12 * 0x20 + lVar11);
                  if ((1 << ((byte)*puVar2 & 0x1f) & puVar23[1]) != 0 ||
                      (1 << ((byte)*puVar23 & 0x1f) & puVar2[1]) != 0) {
                    if (((*(uint *)(*(long *)(puVar2 + 4) + 0x20) &
                         *(uint *)(*(long *)(puVar23 + 4) + 0x24)) != 0) ||
                       ((*(uint *)(*(long *)(puVar23 + 4) + 0x20) &
                        *(uint *)(*(long *)(puVar2 + 4) + 0x24)) != 0)) goto LAB_00104088;
                  }
                  if (uVar25 <= uVar24) {
                    uVar12 = (ulong)uVar25;
                    uVar26 = uVar25;
                    uVar16 = uVar24;
                    goto LAB_00104217;
                  }
                  goto LAB_0010422a;
                }
              }
              goto LAB_00104391;
            }
LAB_00104088:
            uVar21 = (ulong)((int)uVar21 + 1);
          }
        } while ((uint)uVar21 < *(uint *)(puVar19 + 4));
        uVar25 = *puVar28;
      }
      if (*(int *)(this + 0x110) != 0) {
        *(undefined4 *)(this + 0x110) = 0;
      }
      local_d4 = 0;
      local_a4 = uVar6;
      local_9c = fVar4;
      uStack_98 = uVar35;
      uStack_94 = uVar36;
      uStack_90 = uVar31;
      if ((*(uint *)(this + 0x120) != 0xffffffff) && ((uVar5 & 1) != 0)) {
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::_cull_aabb_iterative
                  ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                    *)(this + 0x30),*(uint *)(this + 0x120),(CullParams *)&local_d8,false);
      }
      if ((*(uint *)(this + 0x124) != 0xffffffff) && ((uVar5 & 2) != 0)) {
        BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
        ::_cull_aabb_iterative
                  ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                    *)(this + 0x30),*(uint *)(this + 0x124),(CullParams *)&local_d8,false);
      }
      puVar20 = *(uint **)(this + 0x118);
      puVar13 = puVar20 + *(uint *)(this + 0x110);
      for (; puVar13 != puVar20; puVar20 = puVar20 + 1) {
        if (*puVar20 != uVar25) {
          _collide(this,*puVar28);
        }
      }
      puVar28 = puVar28 + 1;
    } while (puVar1 != puVar28);
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



/* PooledList<BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB, Vector3>::TLeaf,
   unsigned int, true, false>::request(unsigned int&) */

long __thiscall
PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
::request(PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
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
        lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar5 * 0xe04,false);
        *(long *)(this + 8) = lVar6;
        if (lVar6 == 0) {
LAB_001046fa:
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
        return (ulong)uVar5 * 0xe04 + *(long *)(this + 8);
      }
      uVar8 = (ulong)uVar4;
      uVar7 = (ulong)uVar5;
    }
    else {
      uVar8 = 0;
      *(undefined4 *)this = 0;
      uVar7 = (ulong)*param_1;
    }
    goto LAB_00104740;
  }
  pvVar2 = *(void **)(this + 0x18);
  uVar5 = iVar1 - 1;
  uVar4 = *(uint *)((long)pvVar2 + (ulong)uVar5 * 4);
  *param_1 = uVar4;
  if (uVar5 < *(uint *)(this + 0x10)) {
LAB_00104640:
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
      if (lVar6 == 0) goto LAB_001046fa;
    }
    goto LAB_00104640;
  }
  uVar7 = (ulong)uVar4;
  uVar8 = (ulong)*(uint *)this;
  if (uVar4 < *(uint *)this) {
    return uVar7 * 0xe04 + *(long *)(this + 8);
  }
LAB_00104740:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* LocalVector<BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::ItemPairs, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::ItemPairs,unsigned_int,false,false>
::resize(LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::ItemPairs,unsigned_int,false,false>
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
    lVar6 = (ulong)param_1 * 0x30;
    uVar7 = param_1;
    do {
      lVar2 = *(long *)(this + 8) + lVar6;
      if (*(void **)(lVar2 + 0x28) != (void *)0x0) {
        if (*(int *)(lVar2 + 0x20) != 0) {
          *(undefined4 *)(lVar2 + 0x20) = 0;
        }
        Memory::free_static(*(void **)(lVar2 + 0x28),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x30;
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
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 * 0x30,false);
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
      if (param_1 <= uVar7) goto LAB_00104843;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x30 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 6;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined8 *)((long)puVar3 + 0xc) = 0;
      *(undefined4 *)((long)puVar3 + 0x14) = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x30 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x30)
            );
  }
LAB_00104843:
  *(uint *)this = param_1;
  return;
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::~BVH_Tree() */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::~BVH_Tree(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
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
    LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::ItemPairs,unsigned_int,false,false>
    ::resize((LocalVector<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::ItemPairs,unsigned_int,false,false>
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



/* GodotBroadPhase3DBVH::~GodotBroadPhase3DBVH() */

void __thiscall GodotBroadPhase3DBVH::~GodotBroadPhase3DBVH(GodotBroadPhase3DBVH *this)

{
  *(undefined ***)this = &PTR_create_00108460;
  if (*(void **)(this + 0x148) != (void *)0x0) {
    if (*(int *)(this + 0x140) != 0) {
      *(undefined4 *)(this + 0x140) = 0;
    }
    Memory::free_static(*(void **)(this + 0x148),false);
  }
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
  ::~BVH_Tree((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
               *)(this + 0x38));
  GodotBroadPhase3D::~GodotBroadPhase3D((GodotBroadPhase3D *)this);
  return;
}



/* GodotBroadPhase3DBVH::~GodotBroadPhase3DBVH() */

void __thiscall GodotBroadPhase3DBVH::~GodotBroadPhase3DBVH(GodotBroadPhase3DBVH *this)

{
  *(undefined ***)this = &PTR_create_00108460;
  if (*(void **)(this + 0x148) != (void *)0x0) {
    if (*(int *)(this + 0x140) != 0) {
      *(undefined4 *)(this + 0x140) = 0;
    }
    Memory::free_static(*(void **)(this + 0x148),false);
  }
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
  ::~BVH_Tree((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
               *)(this + 0x38));
  GodotBroadPhase3D::~GodotBroadPhase3D((GodotBroadPhase3D *)this);
  operator_delete(this,0x1a8);
  return;
}



/* PooledList<BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB, Vector3>::TNode,
   unsigned int, true, false>::request(unsigned int&) */

long __thiscall
PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
::request(PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
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
    if (uVar5 != 0xffffffff) {
      if (*(uint *)(this + 4) < uVar4) {
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        *(uint *)(this + 4) = uVar5;
        lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar5 * 0x28,false);
        *(long *)(this + 8) = lVar6;
        if (lVar6 == 0) {
LAB_00104d82:
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      *(uint *)this = uVar4;
      uVar7 = (ulong)*param_1;
      if (uVar4 <= *param_1) {
        uVar8 = (ulong)uVar4;
        goto LAB_00104ca3;
      }
      goto LAB_00104d12;
    }
    uVar8 = 0;
    *(undefined4 *)this = 0;
    uVar7 = (ulong)*param_1;
    goto LAB_00104ca3;
  }
  pvVar2 = *(void **)(this + 0x18);
  uVar5 = iVar1 - 1;
  uVar4 = *(uint *)((long)pvVar2 + (ulong)uVar5 * 4);
  *param_1 = uVar4;
  if (uVar5 < *(uint *)(this + 0x10)) {
LAB_00104c94:
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
      if (lVar6 == 0) goto LAB_00104d82;
    }
    goto LAB_00104c94;
  }
  uVar7 = (ulong)uVar4;
  uVar8 = (ulong)*(uint *)this;
  if (uVar4 < *(uint *)this) {
LAB_00104d12:
    return *(long *)(this + 8) + uVar7 * 0x28;
  }
LAB_00104ca3:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_logic_balance(int, unsigned int) */

uint __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::_logic_balance(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                 *this,int param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  uVar12 = (ulong)(uint)param_1;
  uVar6 = *(uint *)(this + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_1 < uVar6) {
    lVar7 = *(long *)(this + 0x80);
    puVar1 = (undefined8 *)(lVar7 + (ulong)(uint)param_1 * 0x28);
    uVar16 = param_1;
    if ((*(int *)(puVar1 + 3) < 0) || (*(int *)((long)puVar1 + 0x24) == 1)) {
LAB_00104f48:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar16;
    }
    if (*(int *)(puVar1 + 3) != 2) {
      _err_print_error("_logic_balance","./core/math/bvh_logic.inc",0x54,
                       "FATAL: Condition \"A->num_children != 2\" is true.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar4 = *(ushort *)(puVar1 + 4);
    uVar5 = *(ushort *)((long)puVar1 + 0x22);
    uVar16 = (uint)uVar5;
    if (uVar4 < uVar6) {
      puVar2 = (undefined8 *)(lVar7 + (ulong)uVar4 * 0x28);
      uVar14 = (uint)uVar5;
      if (uVar14 < uVar6) {
        fVar20 = *(float *)((long)puVar2 + 0x24);
        puVar3 = (undefined8 *)(lVar7 + (ulong)uVar5 * 0x28);
        fVar19 = *(float *)((long)puVar3 + 0x24);
        if ((int)fVar19 - (int)fVar20 < 2) {
          uVar16 = param_1;
          if (-2 < (int)fVar19 - (int)fVar20) goto LAB_00104f48;
          uVar5 = *(ushort *)(puVar2 + 4);
          uVar18 = *(ushort *)((long)puVar2 + 0x22);
          if (uVar6 <= uVar5) {
            uVar12 = (ulong)uVar5;
            goto LAB_00104f74;
          }
          pfVar11 = (float *)(lVar7 + (ulong)uVar5 * 0x28);
          if (uVar18 < uVar6) {
            pfVar10 = (float *)(lVar7 + (ulong)uVar18 * 0x28);
            uVar16 = *(uint *)((long)puVar1 + 0x1c);
            if (uVar16 == 0xffffffff) {
              *(uint *)(this + (ulong)param_2 * 4 + 0xf0) = (uint)uVar4;
              *(undefined4 *)((long)puVar2 + 0x1c) = 0xffffffff;
              uVar16 = *(uint *)((long)puVar1 + 0x1c);
            }
            else {
              uVar12 = (ulong)uVar16;
              if (uVar6 <= uVar16) goto LAB_00104f74;
              lVar7 = lVar7 + uVar12 * 0x28;
              if (param_1 == (uint)*(ushort *)(lVar7 + 0x20)) {
                *(ushort *)(lVar7 + 0x20) = uVar4;
              }
              else {
                *(ushort *)(lVar7 + 0x22) = uVar4;
              }
            }
            fVar20 = pfVar11[9];
            *(short *)((long)puVar2 + 0x22) = (short)param_1;
            *(uint *)((long)puVar2 + 0x1c) = uVar16;
            fVar9 = pfVar10[9];
            uVar16 = (uint)uVar4;
            *(uint *)((long)puVar1 + 0x1c) = uVar16;
            if ((int)fVar9 < (int)fVar20) {
              *(ushort *)(puVar2 + 4) = uVar5;
              local_58 = *puVar3;
              uStack_50 = puVar3[1];
              *(ushort *)(puVar1 + 4) = uVar18;
              pfVar10[7] = (float)param_1;
              local_48 = puVar3[2];
              pfVar13 = (float *)&local_58;
              do {
                fVar20 = pfVar13[3];
                if (pfVar10[3] <= pfVar13[3]) {
                  fVar20 = pfVar10[3];
                }
                pfVar15 = pfVar13 + 1;
                pfVar13[3] = fVar20;
                fVar20 = *pfVar13;
                if (*pfVar10 <= *pfVar13) {
                  fVar20 = *pfVar10;
                }
                *pfVar13 = fVar20;
                pfVar13 = pfVar15;
                pfVar10 = pfVar10 + 1;
              } while (pfVar15 != (float *)((long)&uStack_50 + 4));
              puVar1[2] = local_48;
              *puVar1 = local_58;
              puVar1[1] = uStack_50;
              pfVar10 = (float *)&local_58;
              pfVar13 = pfVar11;
              do {
                fVar20 = pfVar10[3];
                if (pfVar13[3] <= pfVar10[3]) {
                  fVar20 = pfVar13[3];
                }
                pfVar15 = pfVar10 + 1;
                pfVar10[3] = fVar20;
                fVar20 = *pfVar10;
                if (*pfVar13 <= *pfVar10) {
                  fVar20 = *pfVar13;
                }
                *pfVar10 = fVar20;
                pfVar10 = pfVar15;
                pfVar13 = pfVar13 + 1;
              } while ((float *)((long)&uStack_50 + 4) != pfVar15);
              puVar2[2] = local_48;
              if ((int)fVar9 <= (int)fVar19) {
                fVar9 = fVar19;
              }
              *puVar2 = local_58;
              puVar2[1] = uStack_50;
              fVar9 = (float)((int)fVar9 + 1);
              *(float *)((long)puVar1 + 0x24) = fVar9;
              if ((int)fVar9 < (int)pfVar11[9]) {
                fVar9 = pfVar11[9];
              }
            }
            else {
              *(ushort *)(puVar2 + 4) = uVar18;
              local_58 = *puVar3;
              uStack_50 = puVar3[1];
              *(ushort *)(puVar1 + 4) = uVar5;
              pfVar11[7] = (float)param_1;
              local_48 = puVar3[2];
              pfVar13 = (float *)&local_58;
              do {
                fVar9 = pfVar13[3];
                if (pfVar11[3] <= pfVar13[3]) {
                  fVar9 = pfVar11[3];
                }
                pfVar15 = pfVar13 + 1;
                pfVar13[3] = fVar9;
                fVar9 = *pfVar13;
                if (*pfVar11 <= *pfVar13) {
                  fVar9 = *pfVar11;
                }
                *pfVar13 = fVar9;
                pfVar13 = pfVar15;
                pfVar11 = pfVar11 + 1;
              } while ((float *)((long)&uStack_50 + 4) != pfVar15);
              puVar1[2] = local_48;
              *puVar1 = local_58;
              puVar1[1] = uStack_50;
              pfVar11 = (float *)&local_58;
              pfVar13 = pfVar10;
              do {
                fVar9 = pfVar11[3];
                if (pfVar13[3] <= pfVar11[3]) {
                  fVar9 = pfVar13[3];
                }
                pfVar15 = pfVar11 + 1;
                pfVar11[3] = fVar9;
                fVar9 = *pfVar11;
                if (*pfVar13 <= *pfVar11) {
                  fVar9 = *pfVar13;
                }
                *pfVar11 = fVar9;
                pfVar11 = pfVar15;
                pfVar13 = pfVar13 + 1;
              } while ((float *)((long)&uStack_50 + 4) != pfVar15);
              puVar2[2] = local_48;
              if ((int)fVar20 <= (int)fVar19) {
                fVar20 = fVar19;
              }
              *puVar2 = local_58;
              puVar2[1] = uStack_50;
              fVar9 = (float)((int)fVar20 + 1);
              *(float *)((long)puVar1 + 0x24) = fVar9;
              if ((int)fVar9 < (int)pfVar10[9]) {
                fVar9 = pfVar10[9];
              }
            }
            *(int *)((long)puVar2 + 0x24) = (int)fVar9 + 1;
            goto LAB_00104f48;
          }
        }
        else {
          uVar4 = *(ushort *)(puVar3 + 4);
          uVar18 = *(ushort *)((long)puVar3 + 0x22);
          if (uVar6 <= uVar4) {
            uVar12 = (ulong)uVar4;
            goto LAB_00104f74;
          }
          pfVar11 = (float *)(lVar7 + (ulong)uVar4 * 0x28);
          if (uVar18 < uVar6) {
            pfVar10 = (float *)(lVar7 + (ulong)uVar18 * 0x28);
            uVar17 = *(uint *)((long)puVar1 + 0x1c);
            if (uVar17 == 0xffffffff) {
              *(uint *)(this + (ulong)param_2 * 4 + 0xf0) = uVar14;
              *(undefined4 *)((long)puVar3 + 0x1c) = 0xffffffff;
              uVar17 = *(uint *)((long)puVar1 + 0x1c);
            }
            else {
              uVar12 = (ulong)uVar17;
              if (uVar6 <= uVar17) goto LAB_00104f74;
              lVar7 = lVar7 + uVar12 * 0x28;
              if (param_1 == (uint)*(ushort *)(lVar7 + 0x20)) {
                *(ushort *)(lVar7 + 0x20) = uVar5;
              }
              else {
                *(ushort *)(lVar7 + 0x22) = uVar5;
              }
            }
            fVar19 = pfVar11[9];
            *(short *)(puVar3 + 4) = (short)param_1;
            *(uint *)((long)puVar3 + 0x1c) = uVar17;
            fVar9 = pfVar10[9];
            *(uint *)((long)puVar1 + 0x1c) = uVar14;
            if ((int)fVar9 < (int)fVar19) {
              *(ushort *)((long)puVar3 + 0x22) = uVar4;
              local_58 = *puVar2;
              uStack_50 = puVar2[1];
              *(ushort *)((long)puVar1 + 0x22) = uVar18;
              pfVar10[7] = (float)param_1;
              local_48 = puVar2[2];
              pfVar13 = (float *)&local_58;
              do {
                fVar19 = pfVar13[3];
                if (pfVar10[3] <= pfVar13[3]) {
                  fVar19 = pfVar10[3];
                }
                pfVar15 = pfVar13 + 1;
                pfVar13[3] = fVar19;
                fVar19 = *pfVar13;
                if (*pfVar10 <= *pfVar13) {
                  fVar19 = *pfVar10;
                }
                *pfVar13 = fVar19;
                pfVar13 = pfVar15;
                pfVar10 = pfVar10 + 1;
              } while (pfVar15 != (float *)((long)&uStack_50 + 4));
              puVar1[2] = local_48;
              *puVar1 = local_58;
              puVar1[1] = uStack_50;
              pfVar10 = (float *)&local_58;
              pfVar13 = pfVar11;
              do {
                fVar19 = pfVar10[3];
                if (pfVar13[3] <= pfVar10[3]) {
                  fVar19 = pfVar13[3];
                }
                pfVar15 = pfVar10 + 1;
                pfVar10[3] = fVar19;
                fVar19 = *pfVar10;
                if (*pfVar13 <= *pfVar10) {
                  fVar19 = *pfVar13;
                }
                *pfVar10 = fVar19;
                pfVar10 = pfVar15;
                pfVar13 = pfVar13 + 1;
              } while (pfVar15 != (float *)((long)&uStack_50 + 4));
              if ((int)fVar9 <= (int)fVar20) {
                fVar9 = fVar20;
              }
              puVar3[2] = local_48;
              fVar9 = (float)((int)fVar9 + 1);
              *puVar3 = local_58;
              puVar3[1] = uStack_50;
              *(float *)((long)puVar1 + 0x24) = fVar9;
              if ((int)fVar9 < (int)pfVar11[9]) {
                fVar9 = pfVar11[9];
              }
            }
            else {
              *(ushort *)((long)puVar3 + 0x22) = uVar18;
              local_58 = *puVar2;
              uStack_50 = puVar2[1];
              *(ushort *)((long)puVar1 + 0x22) = uVar4;
              pfVar11[7] = (float)param_1;
              local_48 = puVar2[2];
              pfVar13 = (float *)&local_58;
              do {
                fVar9 = pfVar13[3];
                if (pfVar11[3] <= pfVar13[3]) {
                  fVar9 = pfVar11[3];
                }
                pfVar15 = pfVar13 + 1;
                pfVar13[3] = fVar9;
                fVar9 = *pfVar13;
                if (*pfVar11 <= *pfVar13) {
                  fVar9 = *pfVar11;
                }
                *pfVar13 = fVar9;
                pfVar13 = pfVar15;
                pfVar11 = pfVar11 + 1;
              } while ((float *)((long)&uStack_50 + 4) != pfVar15);
              puVar1[2] = local_48;
              *puVar1 = local_58;
              puVar1[1] = uStack_50;
              pfVar11 = (float *)&local_58;
              pfVar13 = pfVar10;
              do {
                fVar9 = pfVar11[3];
                if (pfVar13[3] <= pfVar11[3]) {
                  fVar9 = pfVar13[3];
                }
                pfVar15 = pfVar11 + 1;
                pfVar11[3] = fVar9;
                fVar9 = *pfVar11;
                if (*pfVar13 <= *pfVar11) {
                  fVar9 = *pfVar13;
                }
                *pfVar11 = fVar9;
                pfVar11 = pfVar15;
                pfVar13 = pfVar13 + 1;
              } while (pfVar15 != (float *)((long)&uStack_50 + 4));
              if ((int)fVar20 < (int)fVar19) {
                fVar20 = fVar19;
              }
              puVar3[2] = local_48;
              fVar9 = (float)((int)fVar20 + 1);
              *puVar3 = local_58;
              puVar3[1] = uStack_50;
              *(float *)((long)puVar1 + 0x24) = fVar9;
              if ((int)fVar9 < (int)pfVar10[9]) {
                fVar9 = pfVar10[9];
              }
            }
            *(int *)((long)puVar3 + 0x24) = (int)fVar9 + 1;
            goto LAB_00104f48;
          }
        }
        uVar12 = (ulong)uVar18;
      }
      else {
        uVar12 = (ulong)uVar5;
      }
    }
    else {
      uVar12 = (ulong)uVar4;
    }
  }
LAB_00104f74:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar12,(ulong)uVar6,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::refit_upward_and_balance(unsigned int, unsigned int) */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::refit_upward_and_balance
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
           *this,uint param_1,uint param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  float fVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  
  uVar9 = CONCAT44(_LC35._4_4_,(float)_LC35);
  if (param_1 != 0xffffffff) {
    do {
      uVar10 = _logic_balance(this,param_1,param_2);
      fVar11 = (float)_LC35;
      uVar5 = *(uint *)(this + 0x78);
      if (uVar5 <= uVar10) {
LAB_001056e0:
        uVar12 = (ulong)uVar10;
LAB_001056fd:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar12,(ulong)uVar5,"p_index"
                   ,"count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar15 = *(long *)(this + 0x80);
      pfVar1 = (float *)(lVar15 + (ulong)uVar10 * 0x28);
      pfVar1[0] = 3.4028235e+38;
      pfVar1[1] = 3.4028235e+38;
      fVar6 = pfVar1[6];
      *(undefined8 *)(pfVar1 + 3) = uVar9;
      pfVar1[2] = 3.4028235e+38;
      pfVar1[9] = 0.0;
      pfVar1[5] = fVar11;
      if ((int)fVar6 < 0) {
        uVar5 = *(uint *)(this + 0xa0);
        uVar10 = -(int)fVar6;
        if (uVar5 <= uVar10) goto LAB_001056e0;
        puVar14 = (ushort *)((long)(int)uVar10 * 0xe04 + *(long *)(this + 0xa8));
        uVar4 = *puVar14;
        fVar11 = (float)_LC35;
        uVar8 = uVar9;
        if (uVar4 != 0) {
          puVar16 = puVar14 + 0x102;
          do {
            lVar15 = 0;
            do {
              fVar11 = *(float *)((long)pfVar1 + lVar15 + 0xc);
              fVar6 = *(float *)(lVar15 + 0xc + (long)puVar16);
              if (fVar6 <= fVar11) {
                fVar11 = fVar6;
              }
              *(float *)((long)pfVar1 + lVar15 + 0xc) = fVar11;
              fVar11 = *(float *)((long)pfVar1 + lVar15);
              if (*(float *)((long)puVar16 + lVar15) <= *(float *)((long)pfVar1 + lVar15)) {
                fVar11 = *(float *)((long)puVar16 + lVar15);
              }
              *(float *)((long)pfVar1 + lVar15) = fVar11;
              lVar15 = lVar15 + 4;
            } while (lVar15 != 0xc);
            puVar16 = puVar16 + 0xc;
          } while (puVar14 + (ulong)(uVar4 - 1) * 0xc + 0x10e != puVar16);
          fVar11 = pfVar1[3];
          uVar8 = *(undefined8 *)(pfVar1 + 4);
        }
        fVar6 = *(float *)(this + 0xf8);
        *(ulong *)(pfVar1 + 4) =
             CONCAT44((float)((ulong)uVar8 >> 0x20) - fVar6,(float)uVar8 - fVar6);
        *pfVar1 = *pfVar1 - fVar6;
        pfVar1[1] = pfVar1[1] - fVar6;
        pfVar1[2] = pfVar1[2] - fVar6;
        pfVar1[3] = fVar11 - fVar6;
      }
      else {
        if (fVar6 == 0.0) {
          fVar11 = 1.4013e-45;
        }
        else {
          lVar17 = 0;
          do {
            uVar4 = *(ushort *)((long)pfVar1 + lVar17 * 2 + 0x20);
            uVar12 = (ulong)uVar4;
            if (uVar5 <= uVar4) goto LAB_001056fd;
            lVar2 = lVar15 + uVar12 * 0x28;
            lVar13 = 0;
            do {
              fVar11 = *(float *)((long)pfVar1 + lVar13 + 0xc);
              fVar3 = *(float *)(lVar2 + 0xc + lVar13);
              if (fVar3 <= fVar11) {
                fVar11 = fVar3;
              }
              *(float *)((long)pfVar1 + lVar13 + 0xc) = fVar11;
              fVar11 = *(float *)((long)pfVar1 + lVar13);
              if (*(float *)(lVar2 + lVar13) <= *(float *)((long)pfVar1 + lVar13)) {
                fVar11 = *(float *)(lVar2 + lVar13);
              }
              *(float *)((long)pfVar1 + lVar13) = fVar11;
              lVar13 = lVar13 + 4;
            } while (lVar13 != 0xc);
            if ((int)pfVar1[9] < (int)*(float *)(lVar2 + 0x24)) {
              pfVar1[9] = *(float *)(lVar2 + 0x24);
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 != (int)fVar6);
          fVar11 = (float)((int)pfVar1[9] + 1);
        }
        pfVar1[9] = fVar11;
      }
      param_1 = (uint)pfVar1[7];
    } while ((float)param_1 != -NAN);
  }
  return;
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::refit_upward(unsigned int) */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::refit_upward(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
               *this,uint param_1)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  float fVar17;
  
  fVar9 = (float)_LC35;
  if (param_1 == 0xffffffff) {
    return;
  }
  fVar5 = *(float *)(this + 0x78);
  uVar8 = CONCAT44(_LC35._4_4_,(float)_LC35);
  do {
    if ((uint)fVar5 <= param_1) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)param_1,
                 (ulong)(uint)fVar5,"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar14 = *(long *)(this + 0x80);
    pfVar1 = (float *)(lVar14 + (ulong)param_1 * 0x28);
    pfVar1[0] = 3.4028235e+38;
    pfVar1[1] = 3.4028235e+38;
    fVar10 = pfVar1[6];
    *(undefined8 *)(pfVar1 + 3) = uVar8;
    pfVar1[2] = 3.4028235e+38;
    pfVar1[9] = 0.0;
    pfVar1[5] = fVar9;
    if ((int)fVar10 < 0) {
      uVar11 = -(int)fVar10;
      if (*(uint *)(this + 0xa0) <= uVar11) {
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar11,
                   (ulong)*(uint *)(this + 0xa0),"p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      puVar13 = (ushort *)((long)(int)uVar11 * 0xe04 + *(long *)(this + 0xa8));
      uVar4 = *puVar13;
      fVar10 = fVar9;
      uVar7 = uVar8;
      if (uVar4 != 0) {
        puVar15 = puVar13 + 0x102;
        do {
          lVar14 = 0;
          do {
            fVar10 = *(float *)((long)pfVar1 + lVar14 + 0xc);
            fVar17 = *(float *)(lVar14 + 0xc + (long)puVar15);
            if (fVar17 <= fVar10) {
              fVar10 = fVar17;
            }
            *(float *)((long)pfVar1 + lVar14 + 0xc) = fVar10;
            fVar10 = *(float *)((long)pfVar1 + lVar14);
            if (*(float *)((long)puVar15 + lVar14) <= *(float *)((long)pfVar1 + lVar14)) {
              fVar10 = *(float *)((long)puVar15 + lVar14);
            }
            *(float *)((long)pfVar1 + lVar14) = fVar10;
            lVar14 = lVar14 + 4;
          } while (lVar14 != 0xc);
          puVar15 = puVar15 + 0xc;
        } while (puVar13 + (ulong)(uVar4 - 1) * 0xc + 0x10e != puVar15);
        fVar10 = pfVar1[3];
        uVar7 = *(undefined8 *)(pfVar1 + 4);
      }
      fVar17 = *(float *)(this + 0xf8);
      *(ulong *)(pfVar1 + 4) =
           CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar17,(float)uVar7 - fVar17);
      *pfVar1 = *pfVar1 - fVar17;
      pfVar1[1] = pfVar1[1] - fVar17;
      pfVar1[2] = pfVar1[2] - fVar17;
      pfVar1[3] = fVar10 - fVar17;
    }
    else {
      if (fVar10 == 0.0) {
        fVar10 = 1.4013e-45;
      }
      else {
        lVar16 = 0;
        do {
          uVar4 = *(ushort *)((long)pfVar1 + lVar16 * 2 + 0x20);
          if ((uint)fVar5 <= (uint)uVar4) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar4,
                       (ulong)(uint)fVar5,"p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar2 = lVar14 + (ulong)uVar4 * 0x28;
          lVar12 = 0;
          do {
            fVar17 = *(float *)((long)pfVar1 + lVar12 + 0xc);
            fVar3 = *(float *)(lVar2 + 0xc + lVar12);
            if (fVar3 <= fVar17) {
              fVar17 = fVar3;
            }
            *(float *)((long)pfVar1 + lVar12 + 0xc) = fVar17;
            fVar17 = *(float *)((long)pfVar1 + lVar12);
            if (*(float *)(lVar2 + lVar12) <= *(float *)((long)pfVar1 + lVar12)) {
              fVar17 = *(float *)(lVar2 + lVar12);
            }
            *(float *)((long)pfVar1 + lVar12) = fVar17;
            lVar12 = lVar12 + 4;
          } while (lVar12 != 0xc);
          if ((int)pfVar1[9] < (int)*(float *)(lVar2 + 0x24)) {
            pfVar1[9] = *(float *)(lVar2 + 0x24);
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 != (int)fVar10);
        fVar10 = (float)((int)pfVar1[9] + 1);
      }
      pfVar1[9] = fVar10;
    }
    param_1 = (uint)pfVar1[7];
  } while ((float)param_1 != -NAN);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105a3d) */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::refit_branch(unsigned int) */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::refit_branch(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
               *this,uint param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  byte bVar19;
  uint auStack_270 [132];
  uint *local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (uint *)0x0;
  uVar14 = 0;
  uVar7 = 0;
  iVar15 = 0x7e;
  iVar8 = 0;
  uVar12 = (ulong)*(uint *)(this + 0x78);
  uVar6 = (ulong)param_1;
  puVar16 = auStack_270;
  uVar9 = (ulong)param_1;
  auStack_270[0] = param_1;
  if (param_1 < *(uint *)(this + 0x78)) {
    do {
      puVar13 = (uint *)(*(long *)(this + 0x80) + uVar9 * 0x28);
      uVar3 = puVar13[6];
      if ((int)uVar3 < 0) {
        uVar12 = (ulong)*(uint *)(this + 0xa0);
        uVar3 = -uVar3;
        uVar6 = (ulong)uVar3;
        if (*(uint *)(this + 0xa0) <= uVar3) break;
        lVar17 = (long)(int)uVar3 * 0xe04 + *(long *)(this + 0xa8);
        if (*(short *)(lVar17 + 2) != 0) {
          *(undefined2 *)(lVar17 + 2) = 0;
          local_58 = (uint *)CONCAT44(local_58._4_4_,iVar15);
          local_60 = puVar2;
          local_50 = uVar7;
          local_4c = uVar14;
          refit_upward(this,(uint)uVar9);
          iVar15 = (uint)local_58;
          puVar2 = local_60;
          uVar7 = local_50;
          uVar14 = local_4c;
        }
      }
      else if (uVar3 != 0) {
        lVar17 = 0;
        lVar18 = (long)iVar8 << 2;
        do {
          uVar3 = (uint)*(ushort *)((long)puVar13 + lVar17 * 2 + 0x20);
          if (iVar15 < iVar8) {
            if (uVar7 == 0) {
              if (uVar14 < 0x100) {
                local_58 = puVar13;
                local_4c = uVar3;
                puVar2 = (uint *)Memory::realloc_static(puVar2,0x400,false);
                if (puVar2 == (uint *)0x0) {
LAB_00105cc5:
                  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                                   "FATAL: Condition \"!data\" is true.","Out of memory",0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                uVar14 = 0x100;
                puVar13 = local_58;
                uVar3 = local_4c;
              }
              iVar15 = 0xfe;
              lVar5 = (long)puVar2 - (long)((ulong)(puVar2 + 2) & 0xfffffffffffffff8);
              *(undefined8 *)puVar2 = *(undefined8 *)puVar16;
              *(undefined8 *)(puVar2 + 0x7e) = *(undefined8 *)(puVar16 + 0x7e);
              puVar10 = (undefined8 *)((long)puVar16 - lVar5);
              puVar11 = (undefined8 *)((ulong)(puVar2 + 2) & 0xfffffffffffffff8);
              for (uVar6 = (ulong)((int)lVar5 + 0x200U >> 3); puVar16 = puVar2, uVar7 = 0x100,
                  uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + (ulong)bVar19 * -2 + 1;
                puVar11 = puVar11 + (ulong)bVar19 * -2 + 1;
              }
            }
            else {
              uVar4 = uVar7 * 2;
              if (uVar7 <= uVar4) {
                if (uVar4 <= uVar7) {
                  iVar15 = uVar7 - 2;
                  puVar16 = puVar2;
                  goto LAB_00105b1d;
                }
                if (uVar14 < uVar4) {
                  local_58 = (uint *)CONCAT44(local_58._4_4_,uVar4);
                  uVar7 = uVar4 - 1 | uVar4 - 1 >> 1;
                  uVar7 = uVar7 >> 2 | uVar7;
                  uVar7 = uVar7 | uVar7 >> 4;
                  uVar7 = uVar7 | uVar7 >> 8;
                  local_4c = (uVar7 | uVar7 >> 0x10) + 1;
                  local_60 = puVar13;
                  local_50 = uVar3;
                  puVar2 = (uint *)Memory::realloc_static(puVar2,(ulong)local_4c << 2,false);
                  puVar13 = local_60;
                  uVar14 = local_4c;
                  uVar4 = (uint)local_58;
                  uVar3 = local_50;
                  if (puVar2 == (uint *)0x0) goto LAB_00105cc5;
                }
              }
              iVar15 = uVar4 - 2;
              puVar16 = puVar2;
              uVar7 = uVar4;
            }
          }
LAB_00105b1d:
          *(uint *)((long)puVar16 + lVar18) = uVar3;
          iVar8 = iVar8 + 1;
          lVar17 = lVar17 + 1;
          lVar18 = lVar18 + 4;
        } while ((int)lVar17 < (int)puVar13[6]);
      }
      if (iVar8 == 0) {
        if (puVar2 != (uint *)0x0) {
          Memory::free_static(puVar2,false);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      iVar8 = iVar8 + -1;
      uVar12 = (ulong)*(uint *)(this + 0x78);
      uVar6 = (ulong)puVar16[iVar8];
      uVar9 = uVar6;
    } while (puVar16[iVar8] < *(uint *)(this + 0x78));
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,uVar12,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00105e19) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::split_leaf_complex(unsigned int, BVH_ABB<AABB, Vector3> const&) */

uint __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::split_leaf_complex
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
           *this,uint param_1,BVH_ABB *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  uint *puVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  BVH_ABB *pBVar20;
  ulong uVar21;
  ushort uVar22;
  long lVar23;
  uint uVar24;
  undefined1 *puVar25;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  BVH_ABB *pBVar32;
  uint uVar33;
  ushort *puVar34;
  void *pvVar35;
  uint *puVar36;
  long in_FS_OFFSET;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_e8 [8];
  uint local_e0 [2];
  uint auStack_d8 [2];
  ulong local_d0;
  uint local_c4;
  BVH_ABB *local_c0;
  BVH_ABB *local_b8;
  ushort *local_b0;
  uint *local_a8;
  BVH_ABB *local_a0;
  uint *local_98;
  uint local_90;
  uint local_8c;
  BVH_ABB *local_88;
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
  *local_80;
  int local_6c;
  undefined8 local_68;
  float local_60;
  int local_58 [6];
  long local_40;
  undefined1 *puVar26;
  
  uVar3 = _LC35;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar26 = auStack_e8;
  puVar25 = auStack_e8;
  puVar30 = auStack_e8;
  puVar29 = auStack_e8;
  local_88 = (BVH_ABB *)&local_6c;
  puVar36 = local_e0;
  local_98 = auStack_d8;
  local_80 = this + 0xa0;
  local_a8 = puVar36;
  local_a0 = param_2;
  local_8c = param_1;
  do {
    puVar15 = (undefined8 *)
              PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
                         *)(this + 0x78),puVar36);
    uVar24 = *puVar36;
    *puVar15 = 0x7f7fffff7f7fffff;
    *(undefined4 *)((long)puVar15 + 0x24) = 0;
    *(uint *)((long)puVar15 + 0x1c) = local_8c;
    *(undefined8 *)((long)puVar15 + 0xc) = uVar3;
    *(undefined8 *)((long)puVar15 + 0x14) = 0x7f7fffff;
    *(undefined4 *)(puVar15 + 1) = 0x7f7fffff;
    puVar16 = (undefined4 *)
              PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
              ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
                         *)local_80,(uint *)local_88);
    puVar9 = local_a8;
    uVar11 = *(uint *)(this + 0x78);
    uVar19 = (ulong)uVar11;
    *puVar16 = 0;
    if (uVar11 <= uVar24) {
      uVar21 = (ulong)uVar24;
      goto LAB_0010608b;
    }
    lVar2 = *(long *)(this + 0x80);
    puVar36 = puVar36 + 1;
    *(int *)(lVar2 + 0x18 + (ulong)uVar24 * 0x28) = -local_6c;
  } while (local_98 != puVar36);
  if (local_8c < uVar11) {
    uVar24 = *(uint *)(this + 0xa0);
    local_80 = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)(lVar2 + (ulong)local_8c * 0x28);
    local_88 = (BVH_ABB *)CONCAT44(local_88._4_4_,*(int *)(local_80 + 0x18));
    uVar11 = -*(int *)(local_80 + 0x18);
    local_a8 = (uint *)CONCAT44(local_a8._4_4_,uVar11);
    if (uVar11 < uVar24) {
      local_d0 = (ulong)uVar11;
      lVar2 = *(long *)(this + 0xa8);
      uVar11 = *puVar9;
      *(undefined4 *)(local_80 + 0x18) = 2;
      *(short *)(local_80 + 0x20) = (short)uVar11;
      uVar31 = puVar9[1];
      local_b0 = (ushort *)(lVar2 + local_d0 * 0xe04);
      uVar1 = *local_b0;
      *(short *)(local_80 + 0x22) = (short)uVar31;
      uVar24 = uVar1 + 1;
      local_98 = (uint *)CONCAT62(local_98._2_6_,uVar1);
      pBVar20 = (BVH_ABB *)(long)(int)uVar24;
      uVar33 = uVar24 * 2 + 0x17;
      puVar29 = auStack_e8;
      while (puVar26 != auStack_e8 + -(ulong)(uVar33 & 0x7f000)) {
        puVar25 = puVar29 + -0x1000;
        *(undefined8 *)(puVar29 + -8) = *(undefined8 *)(puVar29 + -8);
        puVar26 = puVar29 + -0x1000;
        puVar29 = puVar29 + -0x1000;
      }
      lVar2 = -(ulong)(uVar33 & 0xff0);
      puVar27 = puVar25 + lVar2;
      if ((ulong)(uVar33 & 0xff0) != 0) {
        *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
      }
      puVar34 = (ushort *)((ulong)(puVar25 + lVar2 + 0xf) & 0xfffffffffffffff0);
      for (; puVar27 != puVar25 + (lVar2 - (ulong)(uVar33 & 0x7f000)); puVar27 = puVar27 + -0x1000)
      {
        *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
      }
      lVar2 = -(ulong)(uVar33 & 0xff0);
      puVar28 = puVar27 + lVar2;
      if ((ulong)(uVar33 & 0xff0) != 0) {
        *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + -8);
      }
      local_88 = (BVH_ABB *)((ulong)(puVar27 + lVar2 + 0xf) & 0xfffffffffffffff0);
      uVar19 = (long)pBVar20 * 0x18 + 0x17;
      for (; puVar28 != puVar27 + (lVar2 - (uVar19 & 0xfffffffffffff000));
          puVar28 = puVar28 + -0x1000) {
        *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
      }
      uVar19 = (ulong)((uint)uVar19 & 0xff0);
      lVar2 = -uVar19;
      puVar30 = puVar28 + lVar2;
      puVar25 = puVar28 + lVar2;
      if (uVar19 != 0) {
        *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
      }
      lVar17 = 0;
      pvVar35 = (void *)((ulong)(puVar28 + lVar2 + 0xf) & 0xfffffffffffffff0);
      if (uVar1 == 0) {
        uVar19 = 0;
        pBVar32 = local_a0;
      }
      else {
        do {
          puVar34[lVar17] = (ushort)lVar17;
          lVar17 = lVar17 + 1;
        } while ((int)lVar17 < (int)(uint)uVar1);
        uVar19 = (ulong)uVar1;
        local_b8 = local_a0;
        *(undefined8 *)(puVar28 + lVar2 + -8) = 0x106170;
        local_c4 = uVar11;
        local_c0 = (BVH_ABB *)this;
        local_a0 = pBVar20;
        local_90 = uVar31;
        memcpy(pvVar35,local_b0 + 0x102,uVar19 * 0x18);
        pBVar20 = local_a0;
        pBVar32 = local_b8;
        this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)local_c0;
        uVar11 = local_c4;
        uVar31 = local_90;
      }
      fVar8 = _UNK_001084fc;
      fVar40 = _LC26;
      uVar6 = *(undefined8 *)pBVar32;
      uVar7 = *(undefined8 *)(pBVar32 + 8);
      uVar3 = *(undefined8 *)(pBVar32 + 0x10);
      puVar34[uVar19] = (ushort)local_98;
      puVar15 = (undefined8 *)((long)pvVar35 + uVar19 * 0x18);
      *puVar15 = uVar6;
      puVar15[1] = uVar7;
      uVar13 = _LC16._4_4_;
      uVar33 = (uint)_LC16;
      puVar15[2] = uVar3;
      fVar39 = (float)*(undefined8 *)local_80;
      fVar37 = (float)((uint)*(undefined8 *)(local_80 + 0xc) ^ uVar33) - fVar39;
      fVar42 = (float)((ulong)*(undefined8 *)local_80 >> 0x20);
      fVar38 = (float)((uint)((ulong)*(undefined8 *)(local_80 + 0xc) >> 0x20) ^ uVar13) - fVar42;
      fVar41 = (float)(*(uint *)(local_80 + 0x14) ^ _LC20) - *(float *)(local_80 + 8);
      fVar42 = fVar8 * fVar38 + fVar42;
      local_68 = CONCAT44(fVar42,fVar40 * fVar37 + fVar39);
      local_60 = _LC26 * fVar41 + *(float *)(local_80 + 8);
      if (fVar38 <= fVar37) {
        uVar33 = (uint)(fVar37 < fVar41);
        local_58[0] = uVar33 * 2;
        if (fVar41 <= fVar38) {
          local_58[2] = 2;
          lVar17 = (long)local_58[0];
          local_58[1] = uVar33 * -2 + 1;
          fVar40 = *(float *)((long)&local_68 + lVar17 * 4);
        }
        else {
          local_58[2] = 1;
          lVar17 = (long)local_58[0];
          local_58[1] = uVar33 * -2 + 2;
          fVar40 = *(float *)((long)&local_68 + lVar17 * 4);
        }
      }
      else {
        lVar17 = 2;
        fVar40 = local_60;
        if (fVar41 <= fVar38) {
          lVar17 = 1;
          fVar40 = fVar42;
        }
        local_58[0] = (int)lVar17;
        local_58[2] = (uint)(fVar41 <= fVar37) * 2;
        local_58[1] = 3 - (local_58[2] + (int)lVar17);
      }
      uVar33 = 0;
      iVar12 = 0;
      do {
        while( true ) {
          uVar10 = puVar34[iVar12];
          if (*(float *)((long)pvVar35 + lVar17 * 4 + (ulong)uVar10 * 0x18) <= fVar40) break;
          lVar23 = (long)(int)uVar33;
          uVar24 = uVar24 - 1;
          uVar33 = uVar33 + 1;
          *(ushort *)(local_88 + lVar23 * 2) = uVar10;
          pBVar20 = (BVH_ABB *)(long)(int)uVar24;
          puVar34[iVar12] = puVar34[(long)pBVar20];
          if ((int)uVar24 <= iVar12) goto LAB_001062a8;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar24);
LAB_001062a8:
      uVar13 = uVar33;
      if ((int)uVar24 <= (int)uVar33) {
        uVar13 = uVar24;
      }
      local_a0 = (BVH_ABB *)CONCAT44(local_a0._4_4_,uVar13);
      if ((int)uVar13 < 0x20) {
        if (0 < (int)uVar33) {
          uVar24 = uVar24 + uVar33;
          local_b8 = (BVH_ABB *)CONCAT44(local_b8._4_4_,uVar31);
          local_98 = (uint *)CONCAT44(local_98._4_4_,uVar11);
          *(undefined8 *)(puVar28 + lVar2 + -8) = 0x1062f0;
          local_c0 = (BVH_ABB *)this;
          memcpy(puVar34 + (long)pBVar20,local_88,(ulong)uVar33 * 2);
          pBVar20 = (BVH_ABB *)(long)(int)uVar24;
          this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                  *)local_c0;
          uVar11 = (uint)local_98;
          uVar31 = (uint)local_b8;
        }
        local_98 = (uint *)(local_58 + 3);
        lVar17 = 4;
        while( true ) {
          if ((int)uVar24 < 1) {
            uVar33 = 0;
            uVar13 = uVar24;
          }
          else {
            uVar33 = 0;
            puVar18 = puVar34;
            do {
              uVar10 = *puVar18;
              puVar18 = puVar18 + 1;
              uVar33 = uVar33 + (*(float *)((long)&local_68 +
                                           (long)*(int *)((long)local_58 + lVar17) * 4) <
                                *(float *)((long)pvVar35 +
                                          (long)*(int *)((long)local_58 + lVar17) * 4 +
                                          (ulong)uVar10 * 0x18));
            } while (puVar18 != puVar34 + (long)pBVar20);
            uVar13 = uVar24 - uVar33;
          }
          if ((int)uVar13 < (int)uVar33) {
            uVar33 = uVar13;
          }
          *(uint *)((long)local_98 + lVar17) = uVar33;
          if (lVar17 == 8) break;
          lVar17 = 8;
        }
        bVar4 = (int)local_a0 < local_58[4];
        if (!bVar4) {
          local_58[4] = (int)local_a0;
        }
        uVar19 = (ulong)bVar4;
        if (local_58[4] < local_58[5]) {
          uVar19 = 2;
          local_58[4] = local_58[5];
        }
        if ((0 < local_58[4]) && (iVar12 = local_58[uVar19], 0 < (int)uVar24)) {
          fVar40 = *(float *)((long)&local_68 + (long)iVar12 * 4);
          uVar33 = 0;
          iVar14 = 0;
          do {
            uVar10 = puVar34[iVar14];
            if (*(float *)((long)pvVar35 + (long)iVar12 * 4 + (ulong)uVar10 * 0x18) <= fVar40) {
              iVar14 = iVar14 + 1;
            }
            else {
              lVar17 = (long)(int)uVar33;
              uVar24 = uVar24 - 1;
              uVar33 = uVar33 + 1;
              *(ushort *)(local_88 + lVar17 * 2) = uVar10;
              puVar34[iVar14] = puVar34[(int)uVar24];
            }
          } while (iVar14 < (int)uVar24);
          goto LAB_00106390;
        }
LAB_001066a0:
        uVar24 = uVar24 - 1;
        uVar10 = *puVar34;
        uVar22 = puVar34[(int)uVar24];
        *(ushort *)local_88 = uVar10;
        *puVar34 = uVar22;
        if (uVar24 == 0) {
          uVar33 = 0;
          uVar22 = uVar10;
LAB_001063b3:
          *puVar34 = uVar10;
          uVar24 = 1;
          *(ushort *)local_88 = uVar22;
LAB_001063c4:
          puVar18 = local_b0;
          lVar17 = 0;
          uVar11 = uVar11 & 0xffff;
          local_b8 = (BVH_ABB *)CONCAT44(local_b8._4_4_,uVar33);
          local_98 = (uint *)CONCAT44(local_98._4_4_,0xffffffff);
          local_a0 = (BVH_ABB *)this;
          while( true ) {
            uVar10 = puVar34[lVar17];
            if ((uint)uVar1 == (uint)uVar10) {
              local_98 = (uint *)CONCAT44(local_98._4_4_,uVar11);
              this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                      *)local_a0;
            }
            else {
              uVar31 = *(uint *)(puVar18 + (ulong)uVar10 * 2 + 2);
              *(undefined8 *)(puVar28 + lVar2 + -8) = 0x10641b;
              _node_add_item((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                              *)local_a0,uVar11,uVar31,
                             (BVH_ABB *)(puVar18 + (ulong)uVar10 * 0xc + 0x102));
              this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                      *)local_a0;
            }
            local_a0 = (BVH_ABB *)this;
            if ((int)uVar24 <= (int)lVar17 + 1) break;
            lVar17 = lVar17 + 1;
            uVar11 = (uint)*(ushort *)(local_80 + 0x20);
          }
          uVar13 = (uint)local_98;
          if (0 < (int)(uint)local_b8) {
            uVar31 = (uint)*(ushort *)(local_80 + 0x22);
            uVar33 = (uint)local_b8;
            goto LAB_00106464;
          }
        }
        else {
          uVar13 = 0xffffffff;
          uVar33 = 1;
          if (0 < (int)uVar24) goto LAB_001063c4;
LAB_00106464:
          puVar34 = local_b0;
          uVar31 = uVar31 & 0xffff;
          pBVar20 = local_88 + (long)(int)uVar33 * 2;
          pBVar32 = local_88;
          local_88 = (BVH_ABB *)this;
          while( true ) {
            uVar10 = *(ushort *)pBVar32;
            this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                    *)local_88;
            if (uVar1 != uVar10) {
              uVar24 = *(uint *)(puVar34 + (ulong)uVar10 * 2 + 2);
              *(undefined8 *)(puVar28 + lVar2 + -8) = 0x1064b0;
              _node_add_item((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                              *)local_88,uVar31,uVar24,
                             (BVH_ABB *)(puVar34 + (ulong)uVar10 * 0xc + 0x102));
              uVar31 = uVar13;
              this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                      *)local_88;
            }
            uVar13 = uVar31;
            local_88 = (BVH_ABB *)this;
            if (pBVar32 + 2 == pBVar20) break;
            pBVar32 = pBVar32 + 2;
            uVar31 = (uint)*(ushort *)(local_80 + 0x22);
          }
        }
        uVar24 = *(uint *)((BVH_ABB *)this + 0xa0);
        if ((uint)local_a8 < uVar24) goto LAB_001064eb;
        *(undefined8 *)(puVar28 + lVar2 + -8) = 0;
        *(undefined8 *)(puVar28 + lVar2 + -0x10) = 0;
        *(undefined **)(puVar28 + lVar2 + -0x18) = &_LC9;
        *(char **)(puVar28 + lVar2 + -0x20) = "list.size()";
        *(undefined8 *)(puVar28 + lVar2 + -0x28) = 0x1067c6;
        local_88 = (BVH_ABB *)this;
        _err_print_index_error
                  ("free","./core/templates/pooled_list.h",0x7b,local_d0,(ulong)uVar24,"p_id",
                   *(char **)(puVar28 + lVar2 + -0x20),*(char **)(puVar28 + lVar2 + -0x18),
                   (bool)puVar28[lVar2 + -0x10],(bool)puVar28[lVar2 + -8]);
        this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                *)local_88;
      }
      else {
LAB_00106390:
        if (uVar33 == 0) goto LAB_001066a0;
        if (uVar24 == 0) {
          uVar33 = uVar33 - 1;
          uVar10 = *(ushort *)local_88;
          uVar22 = *(ushort *)(local_88 + (long)(int)uVar33 * 2);
          goto LAB_001063b3;
        }
        if (0 < (int)uVar24) goto LAB_001063c4;
        uVar13 = 0xffffffff;
        if (0 < (int)uVar33) goto LAB_00106464;
LAB_001064eb:
        uVar24 = *(uint *)((BVH_ABB *)this + 0xb0);
        pvVar35 = *(void **)((BVH_ABB *)this + 0xb8);
        if (uVar24 == *(uint *)((BVH_ABB *)this + 0xb4)) {
          uVar19 = (ulong)(uVar24 * 2);
          if (uVar24 * 2 == 0) {
            uVar19 = 1;
          }
          *(int *)((BVH_ABB *)this + 0xb4) = (int)uVar19;
          *(undefined8 *)(puVar28 + lVar2 + -8) = 0x10681e;
          local_88 = (BVH_ABB *)this;
          pvVar35 = (void *)Memory::realloc_static(pvVar35,uVar19 * 4,false);
          *(void **)(local_88 + 0xb8) = pvVar35;
          if (pvVar35 == (void *)0x0) {
            *(undefined8 *)(puVar28 + lVar2 + -0x10) = 0;
            *(undefined8 *)(puVar28 + lVar2 + -0x18) = 0x1068aa;
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0);
            *(undefined8 *)(puVar28 + lVar2 + -0x18) = 0x1068af;
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar24 = *(uint *)(local_88 + 0xb0);
          this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                  *)local_88;
        }
        *(uint *)((BVH_ABB *)this + 0xb0) = uVar24 + 1;
        *(uint *)((long)pvVar35 + (ulong)uVar24 * 4) = (uint)local_a8;
        if (*(int *)((BVH_ABB *)this + 0xc0) == 0) {
          *(undefined8 *)(puVar28 + lVar2 + -0x10) = 0;
          *(undefined8 *)(puVar28 + lVar2 + -0x18) = 0x106870;
          local_88 = (BVH_ABB *)this;
          _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
                           "Condition \"!_used_size\" is true.",
                           "_used_size has become out of sync, have you double freed an item?");
          this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                  *)local_88;
        }
        else {
          *(int *)((BVH_ABB *)this + 0xc0) = *(int *)((BVH_ABB *)this + 0xc0) + -1;
        }
      }
      uVar31 = *(uint *)(this + 0x78);
      lVar17 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_80 + lVar17 + 0x20);
        uVar21 = (ulong)uVar1;
        if (uVar31 <= uVar1) break;
        uVar24 = *(uint *)(this + 0xa0);
        uVar11 = -*(int *)(*(long *)(this + 0x80) + uVar21 * 0x28 + 0x18);
        if (uVar24 <= uVar11) goto LAB_001060d0;
        puVar34 = (ushort *)((ulong)uVar11 * 0xe04 + *(long *)(this + 0xa8));
        uVar10 = *puVar34;
        if (uVar10 != 0) {
          uVar24 = *(uint *)this;
          uVar19 = (ulong)uVar24;
          lVar23 = 0;
          do {
            uVar11 = *(uint *)(puVar34 + lVar23 * 2 + 2);
            uVar21 = (ulong)uVar11;
            puVar29 = puVar28 + lVar2;
            if (uVar24 <= uVar11) goto LAB_0010608b;
            puVar36 = (uint *)(*(long *)(this + 8) + uVar21 * 8);
            puVar36[1] = (uint)lVar23;
            lVar23 = lVar23 + 1;
            *puVar36 = (uint)uVar1;
          } while ((int)lVar23 < (int)(uint)uVar10);
        }
        if (lVar17 == 2) {
          *(undefined8 *)(puVar28 + lVar2 + -8) = 0x1066ee;
          refit_upward(this,local_8c);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar28 + lVar2 + -8) = 0x1068c3;
            __stack_chk_fail();
          }
          return uVar13;
        }
        lVar17 = 2;
      }
      *(undefined8 *)(puVar28 + lVar2 + -8) = 1;
      uVar19 = (ulong)uVar31;
      *(undefined8 *)(puVar28 + lVar2 + -0x10) = 0;
      *(undefined **)(puVar28 + lVar2 + -0x18) = &_LC9;
      *(char **)(puVar28 + lVar2 + -0x20) = "count";
      goto LAB_001060a6;
    }
LAB_001060d0:
    uVar19 = (ulong)uVar24;
    uVar21 = (ulong)uVar11;
    puVar29 = puVar30;
  }
  else {
    uVar21 = (ulong)local_8c;
    puVar29 = auStack_e8;
  }
LAB_0010608b:
  *(undefined8 *)(puVar29 + -8) = 1;
  *(undefined8 *)(puVar29 + -0x10) = 0;
  *(undefined **)(puVar29 + -0x18) = &_LC9;
  *(char **)(puVar29 + -0x20) = "count";
  puVar25 = puVar29;
LAB_001060a6:
  *(undefined8 *)(puVar25 + -0x28) = 0x1060be;
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar21,uVar19,"p_index",
             *(char **)(puVar25 + -0x20),*(char **)(puVar25 + -0x18),(bool)puVar25[-0x10],
             (bool)puVar25[-8]);
  *(undefined8 *)(puVar25 + -8) = 0x1060c7;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::_logic_choose_item_add_node(unsigned int, BVH_ABB<AABB, Vector3> const&) */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::_logic_choose_item_add_node
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
           *this,uint param_1,BVH_ABB *param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar7 = (ulong)param_1;
  uVar10 = (ulong)*(uint *)(this + 0x78);
  if (param_1 < *(uint *)(this + 0x78)) {
    do {
      lVar5 = *(long *)(this + 0x80);
      lVar1 = lVar5 + uVar7 * 0x28;
      iVar8 = *(int *)(lVar1 + 0x18);
      if (iVar8 < 0) {
        uVar10 = (ulong)*(uint *)(this + 0xa0);
        uVar9 = -iVar8;
        if (uVar9 < *(uint *)(this + 0xa0)) {
          if (0x7f < *(ushort *)((long)(int)uVar9 * 0xe04 + *(long *)(this + 0xa8))) {
            split_leaf_complex(this,(uint)uVar7,param_2);
            return;
          }
          return;
        }
        uVar7 = (ulong)(int)uVar9;
        iVar8 = 0xae;
        goto LAB_001069aa;
      }
      if (iVar8 == 1) {
        if (_logic_choose_item_add_node(unsigned_int,BVH_ABB<AABB,Vector3>const&)::first_print !=
            '\0') {
          _err_print_error("_logic_choose_item_add_node","./core/math/bvh_logic.inc",0xda,
                           "BVH::recursive_choose_item_add_node, node with 1 child, recovering",0,1)
          ;
          _logic_choose_item_add_node(unsigned_int,BVH_ABB<AABB,Vector3>const&)::first_print = '\0';
          uVar10 = (ulong)*(uint *)(this + 0x78);
        }
        uVar4 = *(ushort *)(lVar1 + 0x20);
      }
      else {
        uVar4 = *(ushort *)(lVar1 + 0x20);
        uVar7 = (ulong)uVar4;
        if ((uint)uVar10 <= (uint)uVar4) goto LAB_0010698a;
        uVar7 = (ulong)*(ushort *)(lVar1 + 0x22);
        pfVar2 = (float *)(lVar5 + (ulong)uVar4 * 0x28);
        if ((uint)uVar10 <= (uint)*(ushort *)(lVar1 + 0x22)) goto LAB_0010698a;
        pfVar3 = (float *)(lVar5 + uVar7 * 0x28);
        uVar4 = *(ushort *)
                 (lVar1 + 0x20 +
                 (ulong)(ABS((*(float *)param_2 - *(float *)(param_2 + 0xc)) - (*pfVar3 - pfVar3[3])
                            ) + 0.0 +
                         ABS((*(float *)(param_2 + 4) - *(float *)(param_2 + 0x10)) -
                             (pfVar3[1] - pfVar3[4])) +
                         ABS((*(float *)(param_2 + 8) - *(float *)(param_2 + 0x14)) -
                             (pfVar3[2] - pfVar3[5])) <=
                        ABS((*(float *)param_2 - *(float *)(param_2 + 0xc)) - (*pfVar2 - pfVar2[3]))
                        + 0.0 + ABS((*(float *)(param_2 + 4) - *(float *)(param_2 + 0x10)) -
                                    (pfVar2[1] - pfVar2[4])) +
                        ABS((*(float *)(param_2 + 8) - *(float *)(param_2 + 0x14)) -
                            (pfVar2[2] - pfVar2[5]))) * 2);
      }
      uVar7 = (ulong)uVar4;
      param_1 = (uint)uVar4;
    } while (param_1 < (uint)uVar10);
  }
  uVar7 = (ulong)param_1;
LAB_0010698a:
  iVar8 = 0xb2;
LAB_001069aa:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar8,uVar7,uVar10,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::node_free_node_and_leaf(unsigned int) */

ulong __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::node_free_node_and_leaf
          (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
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
  iVar1 = *(int *)(*(long *)(this + 0x80) + (ulong)param_1 * 0x28 + 0x18);
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
        if (pvVar5 == (void *)0x0) goto LAB_00106e50;
        uVar2 = *(uint *)(this + 0xb0);
      }
      *(uint *)(this + 0xb0) = uVar2 + 1;
      *(uint *)((long)pvVar5 + (ulong)uVar2 * 4) = uVar4;
      if (*(int *)(this + 0xc0) == 0) {
        _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
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
LAB_00106e50:
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
    _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
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



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::node_remove_child(unsigned int, unsigned int, unsigned int, bool) [clone .isra.0] */

ulong BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
      ::node_remove_child(uint param_1,uint param_2,uint param_3,bool param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  void *pvVar7;
  ulong uVar8;
  int iVar9;
  undefined7 in_register_00000009;
  uint uVar10;
  long lVar11;
  undefined4 in_register_0000003c;
  BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
  *this;
  ulong uVar12;
  bool bVar13;
  ulong uVar14;
  
  this = (BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
          *)CONCAT44(in_register_0000003c,param_1);
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 <= param_2) {
    uVar14 = (ulong)param_2;
    goto LAB_0010700d;
  }
  uVar14 = (ulong)param_2;
  lVar4 = *(long *)(this + 0x80);
  uVar12 = CONCAT71(in_register_00000009,param_4) & 0xffffffff;
  uVar8 = lVar4 + uVar14 * 0x28;
  iVar3 = *(int *)(uVar8 + 0x18);
  iVar9 = iVar3 + -1;
  uVar1 = *(undefined2 *)(uVar8 + 0x20 + (long)iVar9 * 2);
  if (iVar3 < 1) {
    uVar10 = *(uint *)(uVar8 + 0x1c);
    *(undefined2 *)(uVar8 + 0x20000001e) = uVar1;
    *(int *)(uVar8 + 0x18) = iVar9;
LAB_00107080:
    if (uVar10 == 0xffffffff) {
      return uVar8;
    }
    node_remove_child(param_1,uVar10,param_2,SUB81(uVar12,0));
    uVar6 = *(uint *)(this + 0x78);
    if (uVar6 <= param_2) goto LAB_0010700d;
    iVar9 = *(int *)(*(long *)(this + 0x80) + 0x18 + uVar14 * 0x28);
    if (iVar9 < 0) {
      uVar6 = -iVar9;
      if (uVar6 < *(uint *)(this + 0xa0)) {
        uVar10 = *(uint *)(this + 0xb0);
        pvVar7 = *(void **)(this + 0xb8);
        if (uVar10 == *(uint *)(this + 0xb4)) {
          uVar8 = (ulong)(uVar10 * 2);
          if (uVar10 * 2 == 0) {
            uVar8 = 1;
          }
          *(int *)(this + 0xb4) = (int)uVar8;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar8 * 4,false);
          *(void **)(this + 0xb8) = pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_001072e6;
          uVar10 = *(uint *)(this + 0xb0);
        }
        *(uint *)(this + 0xb0) = uVar10 + 1;
        *(uint *)((long)pvVar7 + (ulong)uVar10 * 4) = uVar6;
        if (*(int *)(this + 0xc0) == 0) {
          _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
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
    if (param_3 == *(ushort *)(uVar8 + 0x20)) {
      lVar11 = 0;
LAB_00107156:
      *(undefined2 *)(uVar8 + 0x20 + lVar11 * 2) = uVar1;
      *(int *)(uVar8 + 0x18) = iVar9;
      if (1 < iVar9) {
        return uVar8;
      }
      uVar10 = *(uint *)(uVar8 + 0x1c);
      if (iVar9 != 1) goto LAB_00107080;
    }
    else {
      if (iVar3 == 1) {
        lVar11 = 0xffffffff;
        goto LAB_00107156;
      }
      if (*(ushort *)(uVar8 + 0x22) == param_3) {
        *(undefined2 *)(uVar8 + 0x22) = uVar1;
        *(int *)(uVar8 + 0x18) = iVar9;
      }
      else {
        *(undefined2 *)(uVar8 + 0x20000001e) = uVar1;
        *(int *)(uVar8 + 0x18) = iVar9;
      }
      if (iVar9 != 1) {
        return uVar8;
      }
      uVar10 = *(uint *)(uVar8 + 0x1c);
    }
    uVar2 = *(ushort *)(uVar8 + 0x20);
    uVar8 = (ulong)uVar2;
    if (uVar10 == 0xffffffff) {
      *(uint *)(this + uVar12 * 4 + 0xf0) = (uint)uVar2;
      uVar14 = uVar8;
      if (uVar2 < uVar6) {
        *(undefined4 *)(lVar4 + 0x1c + uVar8 * 0x28) = 0xffffffff;
        uVar14 = node_free_node_and_leaf(this,param_2);
        return uVar14;
      }
      goto LAB_0010700d;
    }
    uVar14 = (ulong)uVar10;
    if (uVar6 <= uVar10) goto LAB_0010700d;
    lVar11 = lVar4 + (ulong)uVar10 * 0x28;
    if (*(int *)(lVar11 + 0x18) < 1) {
LAB_00107226:
      iVar9 = -1;
    }
    else if (param_2 == *(ushort *)(lVar11 + 0x20)) {
      iVar9 = 0;
    }
    else {
      if (*(int *)(lVar11 + 0x18) == 1) goto LAB_00107226;
      bVar13 = param_2 == *(ushort *)(lVar11 + 0x22);
      iVar9 = (bVar13 - 1) + (uint)bVar13;
    }
    *(ushort *)(lVar11 + 0x20 + (long)iVar9 * 2) = uVar2;
    uVar14 = uVar8;
    if (uVar6 <= uVar2) {
LAB_0010700d:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar6,"p_index",
                 "count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(uint *)(lVar4 + 0x1c + uVar8 * 0x28) = uVar10;
  }
  uVar6 = *(uint *)(this + 0x88);
  pvVar7 = *(void **)(this + 0x90);
  if (uVar6 == *(uint *)(this + 0x8c)) {
    uVar14 = (ulong)(uVar6 * 2);
    if (uVar6 * 2 == 0) {
      uVar14 = 1;
    }
    *(int *)(this + 0x8c) = (int)uVar14;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar14 * 4,false);
    *(void **)(this + 0x90) = pvVar7;
    if (pvVar7 == (void *)0x0) {
LAB_001072e6:
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
  *(uint *)((long)pvVar7 + (ulong)uVar6 * 4) = param_2;
  if (*(int *)(this + 0x98) == 0) {
    uVar14 = 0;
    _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
                     "Condition \"!_used_size\" is true.",
                     "_used_size has become out of sync, have you double freed an item?",0);
    return uVar14;
  }
  uVar6 = *(int *)(this + 0x98) - 1;
  *(uint *)(this + 0x98) = uVar6;
  return (ulong)uVar6;
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::node_remove_item(unsigned int, unsigned int, BVH_ABB<AABB, Vector3>*) */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::node_remove_item(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                   *this,uint param_1,uint param_2,BVH_ABB *param_3)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar4 = *(uint *)this;
  lVar7 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < uVar4) {
    lVar8 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar8 + (ulong)param_1 * 8);
    uVar5 = *puVar1;
    if (uVar5 == 0xffffffff) {
LAB_00107533:
      if (lVar7 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (uVar5 < *(uint *)(this + 0x78)) {
      pfVar2 = (float *)(*(long *)(this + 0x80) + (ulong)uVar5 * 0x28);
      if (-1 < (int)pfVar2[6]) {
        _err_print_error("node_remove_item","./core/math/bvh_tree.h",0x143,
                         "FATAL: Condition \"!tnode.is_leaf()\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar14 = -(int)pfVar2[6];
      uVar15 = (ulong)(int)uVar14;
      uVar11 = *(uint *)(this + 0xa0);
      if (uVar14 < *(uint *)(this + 0xa0)) {
        fVar21 = _LC50 - *(float *)(this + 0xf8);
        uVar14 = puVar1[1];
        uVar16 = (ulong)uVar14;
        puVar13 = (ushort *)(uVar15 * 0xe04 + *(long *)(this + 0xa8));
        fVar19 = (float)*(undefined8 *)(pfVar2 + 4) - fVar21;
        fVar20 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20) - fVar21;
        pfVar3 = (float *)(puVar13 + uVar16 * 0xc + 0x102);
        if ((((pfVar3[3] <= pfVar2[3] - fVar21 && pfVar2[3] - fVar21 != pfVar3[3]) ||
             (pfVar3[4] <= fVar19 && fVar19 != pfVar3[4])) ||
            (pfVar3[5] <= fVar20 && fVar20 != pfVar3[5])) ||
           ((*pfVar3 <= *pfVar2 - fVar21 && *pfVar2 - fVar21 != *pfVar3 ||
            (pfVar3[1] <= pfVar2[1] - fVar21 && pfVar2[1] - fVar21 != pfVar3[1])))) {
          bVar10 = true;
        }
        else {
          bVar10 = pfVar3[2] <= pfVar2[2] - fVar21 && pfVar2[2] - fVar21 != pfVar3[2];
        }
        if (param_3 != (BVH_ABB *)0x0) {
          uVar12 = *(undefined8 *)(puVar13 + uVar16 * 0xc + 0x106);
          *(undefined8 *)param_3 = *(undefined8 *)(puVar13 + uVar16 * 0xc + 0x102);
          *(undefined8 *)(param_3 + 8) = uVar12;
          *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(puVar13 + uVar16 * 0xc + 0x10a);
        }
        uVar17 = *puVar13 - 1;
        uVar18 = (ulong)uVar17;
        *puVar13 = uVar17;
        uVar6 = *(uint *)(puVar13 + uVar18 * 2 + 2);
        uVar15 = (ulong)uVar6;
        uVar12 = *(undefined8 *)(puVar13 + uVar18 * 0xc + 0x106);
        *(undefined8 *)(puVar13 + uVar16 * 0xc + 0x102) =
             *(undefined8 *)(puVar13 + uVar18 * 0xc + 0x102);
        *(undefined8 *)(puVar13 + uVar16 * 0xc + 0x106) = uVar12;
        *(undefined8 *)(puVar13 + uVar16 * 0xc + 0x10a) =
             *(undefined8 *)(puVar13 + uVar18 * 0xc + 0x10a);
        *(uint *)(puVar13 + uVar16 * 2 + 2) = uVar6;
        if (uVar17 == 0) {
          fVar19 = pfVar2[7];
          if (fVar19 != -NAN) {
            node_remove_child((uint)this,(uint)fVar19,uVar5,SUB41(param_2,0));
            refit_upward(this,(uint)fVar19);
            node_free_node_and_leaf(this,uVar5);
            puVar1[0] = 0xffffffff;
            puVar1[1] = 0xffffffff;
            goto LAB_00107533;
          }
        }
        else {
          uVar11 = uVar4;
          if (uVar4 <= uVar6) goto LAB_00107608;
          *(uint *)(lVar8 + 4 + uVar15 * 8) = uVar14;
          if (bVar10) {
            puVar13[1] = 1;
          }
        }
        puVar1[0] = 0xffffffff;
        puVar1[1] = 0xffffffff;
        goto LAB_00107533;
      }
    }
    else {
      uVar15 = (ulong)uVar5;
      uVar11 = *(uint *)(this + 0x78);
    }
  }
  else {
    uVar15 = (ulong)param_1;
    uVar11 = uVar4;
  }
LAB_00107608:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar15,(ulong)uVar11,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::item_remove(BVHHandle) */

ulong __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::item_remove(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
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
    goto LAB_001076dc;
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
        if (uVar1 <= param_2) goto LAB_001076d7;
        if (*(int *)(*(long *)(this + 8) + uVar10 * 8) == -2) {
LAB_001077b3:
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
            if (pvVar8 == (void *)0x0) goto LAB_00107b30;
            uVar6 = *(uint *)(this + 0x10);
          }
          *(uint *)(this + 0x10) = uVar6 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar6 * 4) = param_2;
          if (*(int *)(this + 0x20) == 0) {
            _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
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
          if (param_2 < *(uint *)this) goto LAB_001077b3;
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
            if (pvVar8 == (void *)0x0) goto LAB_00107b30;
            uVar6 = *(uint *)(this + 0x38);
          }
          *(uint *)(this + 0x38) = uVar6 + 1;
          *(uint *)((long)pvVar8 + (ulong)uVar6 * 4) = param_2;
          if (*(int *)(this + 0x48) == 0) {
            _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
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
LAB_00107b30:
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
            _err_print_error(&_LC39,"./core/templates/pooled_list.h",0x7d,
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
LAB_001076d7:
  iVar5 = 0xb2;
LAB_001076dc:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar5,uVar10,uVar11,"p_index","count",""
             ,false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::item_move(BVHHandle, AABB const&) */

undefined8 __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::item_move(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            *this,uint param_2,float *param_3)

{
  uint *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  long local_30;
  
  uVar12 = (ulong)*(uint *)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (ulong)param_2;
  if (param_2 < *(uint *)this) {
    uVar10 = (ulong)param_2;
    puVar1 = (uint *)(*(long *)(this + 8) + uVar10 * 8);
    uVar6 = *puVar1;
    if (uVar6 == 0xfffffffe) {
      uVar9 = 0;
      goto LAB_00107f32;
    }
    uVar9 = *(undefined8 *)param_3;
    fVar17 = (float)*(undefined8 *)(param_3 + 1);
    fVar23 = *param_3;
    fVar18 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
    fStack_40 = param_3[2];
    uVar12 = (ulong)*(uint *)(this + 0x50);
    fVar19 = (float)*(undefined8 *)(param_3 + 4);
    fVar21 = fVar17 + fVar19;
    fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
    fVar22 = fVar18 + fVar20;
    fVar26 = fVar23 + param_3[3];
    uVar7 = uVar10;
    local_48 = uVar9;
    if (param_2 < *(uint *)(this + 0x50)) {
      fStack_3c = (float)((double)*(int *)(uVar10 * 0x30 + *(long *)(this + 0x58) + 0x18) * __LC53);
      if (fStack_3c < _LC54) {
        fStack_3c = _LC54 - fStack_3c;
      }
      else {
        fStack_3c = 0.0;
      }
      fStack_3c = *(float *)(this + 0x100) * fStack_3c;
      uVar12 = (ulong)*(uint *)(this + 0x78);
      local_48._4_4_ = (float)((ulong)uVar9 >> 0x20);
      fVar13 = (float)((uint)fVar21 ^ (uint)_LC16) - fStack_3c;
      fVar14 = (float)((uint)fVar22 ^ _LC16._4_4_) - fStack_3c;
      local_38 = CONCAT44(fVar14,fVar13);
      local_48._0_4_ = (float)uVar9;
      local_48._0_4_ = (float)local_48 - fStack_3c;
      local_48._4_4_ = local_48._4_4_ - fStack_3c;
      fStack_40 = fStack_40 - fStack_3c;
      fStack_3c = (float)((uint)fVar26 ^ _LC20) - fStack_3c;
      uVar7 = (ulong)uVar6;
      if (uVar6 < *(uint *)(this + 0x78)) {
        pfVar2 = (float *)(*(long *)(this + 0x80) + (ulong)uVar6 * 0x28);
        if (((((fStack_3c < pfVar2[3]) || (fVar13 < pfVar2[4])) || (fVar14 < pfVar2[5])) ||
            (((float)local_48 < *pfVar2 || (local_48._4_4_ < pfVar2[1])))) ||
           (fStack_40 < pfVar2[2])) {
          uVar12 = (ulong)*(uint *)(this + 0x28);
          if (*(uint *)(this + 0x28) <= param_2) {
            iVar11 = 0xae;
            goto LAB_00107f7a;
          }
          uVar6 = *(uint *)(uVar10 * 0x20 + *(long *)(this + 0x30));
          node_remove_item(this,param_2,uVar6,(BVH_ABB *)0x0);
          uVar6 = _logic_choose_item_add_node
                            (this,*(uint *)(this + (ulong)uVar6 * 4 + 0xf0),(BVH_ABB *)&local_48);
          *puVar1 = uVar6;
          cVar5 = _node_add_item(this,uVar6,param_2,(BVH_ABB *)&local_48);
          if (cVar5 != '\0') {
            uVar7 = (ulong)*puVar1;
            uVar12 = (ulong)*(uint *)(this + 0x78);
            if (*(uint *)(this + 0x78) <= *puVar1) goto LAB_00107f5a;
            uVar6 = *(uint *)(*(long *)(this + 0x80) + uVar7 * 0x28 + 0x1c);
            if (uVar6 != 0xffffffff) {
              refit_upward(this,uVar6);
            }
          }
          uVar9 = 1;
LAB_00107f32:
          if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar9;
        }
        uVar12 = (ulong)*(uint *)(this + 0xa0);
        uVar7 = (ulong)(uint)-(int)pfVar2[6];
        if ((uint)-(int)pfVar2[6] < *(uint *)(this + 0xa0)) {
          uVar6 = puVar1[1];
          lVar8 = uVar7 * 0xe04 + *(long *)(this + 0xa8);
          puVar3 = (undefined8 *)(lVar8 + 0x204 + (ulong)uVar6 * 0x18);
          fVar13 = *(float *)(puVar3 + 1);
          fVar16 = (float)(*(uint *)((long)puVar3 + 0x14) ^ _LC20) - fVar13;
          fVar24 = (float)*puVar3;
          fVar14 = (float)((uint)*(undefined8 *)((long)puVar3 + 0xc) ^ (uint)_LC16) - fVar24;
          fVar25 = (float)((ulong)*puVar3 >> 0x20);
          fVar15 = (float)((uint)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20) ^ _LC16._4_4_)
                   - fVar25;
          if (((fVar14 < 0.0) || (fVar15 < 0.0)) ||
             ((fVar16 < 0.0 || (((param_3[3] < 0.0 || (fVar19 < 0.0)) || (fVar20 < 0.0)))))) {
            _err_print_error("encloses","./core/math/aabb.h",0xc6,
                             "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size."
                             ,0,0);
            fVar23 = *param_3;
            fVar17 = param_3[1];
            fVar18 = param_3[2];
            fVar22 = param_3[5] + fVar18;
            fVar21 = param_3[4] + fVar17;
            fVar26 = param_3[3] + fVar23;
          }
          if ((((fVar23 < fVar24) || (fVar24 + fVar14 < fVar26)) ||
              ((fVar17 < fVar25 || ((fVar25 + fVar15 < fVar21 || (fVar18 < fVar13)))))) ||
             ((fVar13 + fVar16 < fVar22 ||
              (uVar9 = 0,
              *(float *)(this + 0x104) <=
              (fVar15 + fVar14 + 0.0 + fVar16) - (param_3[3] + 0.0 + param_3[4] + param_3[5]))))) {
            lVar8 = lVar8 + 0x200 + (ulong)uVar6 * 0x18;
            *(undefined8 *)(lVar8 + 0x14) = local_38;
            *(undefined8 *)(lVar8 + 4) = local_48;
            *(ulong *)(lVar8 + 0xc) = CONCAT44(fStack_3c,fStack_40);
            uVar9 = 1;
          }
          goto LAB_00107f32;
        }
      }
    }
  }
LAB_00107f5a:
  iVar11 = 0xb2;
  uVar10 = uVar7;
LAB_00107f7a:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar11,uVar10,uVar12,"p_index","count",
             "",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::item_set_tree(BVHHandle const&, unsigned int, unsigned int) */

uint BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
     ::item_set_tree(BVHHandle *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint in_ECX;
  int iVar11;
  uint *puVar12;
  undefined4 in_register_00000034;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_R9;
  long in_FS_OFFSET;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  ulong uVar8;
  
  uVar15 = *(uint *)CONCAT44(in_register_00000034,param_2);
  uVar13 = (ulong)*(uint *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar15 < *(uint *)(param_1 + 0x28)) {
    uVar13 = (ulong)*(uint *)param_1;
    uVar8 = (ulong)uVar15;
    puVar12 = (uint *)(uVar8 * 0x20 + *(long *)(param_1 + 0x30));
    if (uVar15 < *(uint *)param_1) {
      puVar1 = (uint *)(*(long *)(param_1 + 8) + uVar8 * 8);
      uVar7 = *puVar1;
      uVar8 = (ulong)uVar7;
      uVar14 = (uint)CONCAT71((int7)((ulong)in_R9 >> 8),puVar12[1] != in_ECX) |
               (uint)CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),*puVar12 != param_3);
      if ((uVar7 == 0xfffffffe) || ((char)uVar14 == '\0')) {
        *puVar12 = param_3;
        puVar12[1] = in_ECX;
        uVar15 = uVar14;
        goto LAB_0010818e;
      }
      uVar13 = (ulong)*(uint *)(param_1 + 0x78);
      if (uVar7 < *(uint *)(param_1 + 0x78)) {
        uVar7 = *(uint *)(param_1 + 0xa0);
        uVar6 = -*(int *)(*(long *)(param_1 + 0x80) + uVar8 * 0x28 + 0x18);
        uVar8 = (ulong)uVar6;
        if (uVar6 < uVar7) {
          lVar2 = uVar8 * 0xe04 + *(long *)(param_1 + 0xa8) + 0x200 + (ulong)puVar1[1] * 0x18;
          local_58 = *(undefined8 *)(lVar2 + 4);
          uStack_50 = *(undefined8 *)(lVar2 + 0xc);
          local_48 = *(undefined8 *)(lVar2 + 0x14);
          node_remove_item((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                            *)param_1,uVar15,*puVar12,(BVH_ABB *)0x0);
          uVar7 = *(uint *)CONCAT44(in_register_00000034,param_2);
          uVar6 = *(uint *)(param_1 + 0x28);
          uVar13 = (ulong)uVar6;
          *puVar12 = param_3;
          puVar12[1] = in_ECX;
          if (uVar6 <= uVar7) {
            uVar8 = (ulong)uVar7;
            iVar11 = 0xae;
            goto LAB_001081db;
          }
          uVar6 = *(uint *)((ulong)uVar7 * 0x20 + *(long *)(param_1 + 0x30));
          if (*(int *)(param_1 + (long)(int)uVar6 * 4 + 0xf0) == -1) {
            puVar9 = (undefined8 *)
                     PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
                     ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TNode,unsigned_int,true,false>
                                *)(param_1 + 0x78),&local_60);
            *(undefined4 *)((long)puVar9 + 0x24) = 0;
            uVar4 = _LC35;
            *(undefined8 *)((long)puVar9 + 0x14) = 0x7f7fffff;
            *(undefined8 *)((long)puVar9 + 0xc) = uVar4;
            *puVar9 = 0x7f7fffff7f7fffff;
            *(undefined4 *)((long)puVar9 + 0x1c) = 0xffffffff;
            *(undefined4 *)(puVar9 + 1) = 0x7f7fffff;
            *(uint *)(param_1 + ((long)(int)uVar6 + 0x3c) * 4) = local_60;
            puVar10 = (undefined4 *)
                      PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
                      ::request((PooledList<BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>::TLeaf,unsigned_int,true,false>
                                 *)(param_1 + 0xa0),&local_5c);
            *puVar10 = 0;
            *(uint *)(puVar9 + 3) = -local_5c;
          }
          uVar7 = _logic_choose_item_add_node
                            ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                              *)param_1,*(uint *)(param_1 + (ulong)uVar6 * 4 + 0xf0),
                             (BVH_ABB *)&local_58);
          *puVar1 = uVar7;
          cVar5 = _node_add_item((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                                  *)param_1,uVar7,uVar15,(BVH_ABB *)&local_58);
          uVar15 = uVar14 & 0xff;
          if (cVar5 == '\0') {
LAB_0010818e:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return uVar15;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          uVar8 = (ulong)*puVar1;
          uVar7 = *(uint *)(param_1 + 0x78);
          if (*puVar1 < uVar7) {
            uVar7 = *(uint *)(*(long *)(param_1 + 0x80) + uVar8 * 0x28 + 0x1c);
            if (uVar7 != 0xffffffff) {
              refit_upward_and_balance
                        ((BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
                          *)param_1,uVar7,uVar6);
              uVar15 = uVar14 & 0xff;
            }
            goto LAB_0010818e;
          }
        }
        uVar13 = (ulong)uVar7;
      }
    }
  }
  else {
    uVar8 = (ulong)uVar15;
  }
  iVar11 = 0xb2;
LAB_001081db:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",iVar11,uVar8,uVar13,"p_index","count",""
             ,false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotBroadPhase3DBVH::~GodotBroadPhase3DBVH() */

void __thiscall GodotBroadPhase3DBVH::~GodotBroadPhase3DBVH(GodotBroadPhase3DBVH *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BVH_Tree<GodotCollisionObject3D, 2, 2, 128,
   GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,
   GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>, true, AABB,
   Vector3>::~BVH_Tree() */

void __thiscall
BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
::~BVH_Tree(BVH_Tree<GodotCollisionObject3D,2,2,128,GodotBroadPhase3DBVH::UserPairTestFunction<GodotCollisionObject3D>,GodotBroadPhase3DBVH::UserCullTestFunction<GodotCollisionObject3D>,true,AABB,Vector3>
            *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


