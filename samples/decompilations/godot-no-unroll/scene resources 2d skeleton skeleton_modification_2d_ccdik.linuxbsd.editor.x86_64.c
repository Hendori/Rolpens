
/* SkeletonModification2DCCDIK::get_ccdik_data_chain_length() */

undefined4 __thiscall
SkeletonModification2DCCDIK::get_ccdik_data_chain_length(SkeletonModification2DCCDIK *this)

{
  if (*(long *)(this + 0x2a8) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x2a8) + -8);
  }
  return 0;
}



/* SkeletonModification2DCCDIK::get_target_node() const */

void SkeletonModification2DCCDIK::get_target_node(void)

{
  long in_RSI;
  NodePath *in_RDI;
  
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0x2b0));
  return;
}



/* SkeletonModification2DCCDIK::get_tip_node() const */

void SkeletonModification2DCCDIK::get_tip_node(void)

{
  long in_RSI;
  NodePath *in_RDI;
  
  NodePath::NodePath(in_RDI,(NodePath *)(in_RSI + 0x2c0));
  return;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_bone2d_node(int) const */

NodePath * SkeletonModification2DCCDIK::get_ccdik_joint_bone2d_node(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  NodePath *this;
  long lVar3;
  
  this = (NodePath *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x2a8);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001000a9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      NodePath::NodePath(this,(NodePath *)(lVar1 + 8 + lVar2 * 0x28));
      return this;
    }
    goto LAB_001000a9;
  }
  lVar3 = 0;
LAB_001000a9:
  _err_print_index_error
            ("get_ccdik_joint_bone2d_node",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x178,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* SkeletonModification2DCCDIK::_draw_editor_gizmo() */

void __thiscall SkeletonModification2DCCDIK::_draw_editor_gizmo(SkeletonModification2DCCDIK *this)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (this[0x24c] == (SkeletonModification2DCCDIK)0x0) {
    return;
  }
  if ((this[0x24d] != (SkeletonModification2DCCDIK)0x0) &&
     (lVar4 = *(long *)(this + 0x2a8), lVar4 != 0)) {
    lVar3 = 0;
    do {
      if (*(long *)(lVar4 + -8) <= lVar3) {
        return;
      }
      if (*(char *)(lVar4 + lVar3 * 0x28 + 0x26) != '\0') {
        bVar2 = (bool)Skeleton2D::get_bone((int)*(undefined8 *)(*(long *)(this + 0x240) + 0x240));
        lVar4 = *(long *)(this + 0x2a8);
        if (lVar4 == 0) {
          lVar5 = 0;
LAB_001001cb:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar5 = *(long *)(lVar4 + -8);
        if (lVar5 <= lVar3) goto LAB_001001cb;
        lVar4 = lVar4 + lVar3 * 0x28;
        SkeletonModification2D::editor_draw_angle_constraints
                  ((Bone2D *)this,*(float *)(lVar4 + 0x1c),*(float *)(lVar4 + 0x20),bVar2,
                   *(bool *)(lVar4 + 0x19),*(bool *)(lVar4 + 0x25));
        lVar4 = *(long *)(this + 0x2a8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_bone_index(int) const */

undefined4 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_bone_index
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100249;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x28);
    }
    goto LAB_00100249;
  }
  lVar3 = 0;
LAB_00100249:
  _err_print_index_error
            ("get_ccdik_joint_bone_index",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x192,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0xffffffff;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_rotate_from_joint(int) const */

undefined1 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_rotate_from_joint
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001002d9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x18 + lVar2 * 0x28);
    }
    goto LAB_001002d9;
  }
  lVar3 = 0;
LAB_001002d9:
  _err_print_index_error
            ("get_ccdik_joint_rotate_from_joint",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x19c,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_enable_constraint(int) const */

undefined1 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_enable_constraint
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100369;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x19 + lVar2 * 0x28);
    }
    goto LAB_00100369;
  }
  lVar3 = 0;
LAB_00100369:
  _err_print_index_error
            ("get_ccdik_joint_enable_constraint",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1ad,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_min(int) const */

undefined4 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_min
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001003f9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + 0x1c + lVar2 * 0x28);
    }
    goto LAB_001003f9;
  }
  lVar3 = 0;
LAB_001003f9:
  _err_print_index_error
            ("get_ccdik_joint_constraint_angle_min",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1bd,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_max(int) const */

undefined4 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_max
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100489;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + 0x20 + lVar2 * 0x28);
    }
    goto LAB_00100489;
  }
  lVar3 = 0;
LAB_00100489:
  _err_print_index_error
            ("get_ccdik_joint_constraint_angle_max",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1cd,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_invert(int) const */

undefined1 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_invert
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100519;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x24 + lVar2 * 0x28);
    }
    goto LAB_00100519;
  }
  lVar3 = 0;
LAB_00100519:
  _err_print_index_error
            ("get_ccdik_joint_constraint_angle_invert",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1dd,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
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



/* SkeletonModification2DCCDIK::_execute_ccdik_joint(int, Node2D*, Node2D*) */

void SkeletonModification2DCCDIK::_execute_ccdik_joint(int param_1,Node2D *param_2,Node2D *param_3)

{
  int *piVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  Transform2D *pTVar6;
  long lVar7;
  undefined4 in_register_0000003c;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_a8;
  NodePath local_a0 [8];
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58 [3];
  long local_40;
  
  lVar8 = CONCAT44(in_register_0000003c,param_1);
  lVar7 = (long)(int)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(lVar8 + 0x2a8);
  if (lVar7 < 0) {
    if (lVar2 != 0) {
      lVar9 = *(long *)(lVar2 + -8);
      goto LAB_00100a21;
    }
  }
  else if (lVar2 != 0) {
    lVar9 = *(long *)(lVar2 + -8);
    if (lVar9 <= lVar7) goto LAB_00100a21;
    piVar1 = (int *)(lVar2 + lVar7 * 0x28);
    local_a8 = *piVar1;
    NodePath::NodePath(local_a0,(NodePath *)(piVar1 + 2));
    iVar4 = local_a8;
    local_98 = *(undefined8 *)(piVar1 + 4);
    local_90 = (undefined2)piVar1[6];
    local_8c = *(undefined8 *)(piVar1 + 7);
    local_84 = (undefined2)piVar1[9];
    local_82 = *(undefined1 *)((long)piVar1 + 0x26);
    if (-1 < local_a8) {
      iVar5 = Skeleton2D::get_bone_count();
      if (iVar4 <= iVar5) {
        pTVar6 = (Transform2D *)
                 Skeleton2D::get_bone((int)*(undefined8 *)(*(long *)(lVar8 + 0x240) + 0x240));
        (**(code **)(*(long *)pTVar6 + 0x298))((Vector2 *)&local_78,pTVar6);
        if ((char)local_90 == '\0') {
          local_58[0] = Node2D::get_global_position();
          fVar10 = (float)Vector2::angle_to_point((Vector2 *)local_58);
          local_58[0] = Node2D::get_global_position();
          fVar11 = (float)Vector2::angle_to_point((Vector2 *)local_58);
          fVar12 = (float)Transform2D::get_rotation();
          Transform2D::set_rotation((fVar11 - fVar10) + fVar12);
        }
        else {
          local_80 = Node2D::get_global_position();
          Transform2D::looking_at((Vector2 *)local_58);
          fVar10 = (float)Transform2D::get_rotation();
          fVar11 = (float)Bone2D::get_bone_angle();
          Transform2D::set_rotation(fVar10 - fVar11);
        }
        local_58[0] = Node2D::get_global_scale();
        Transform2D::set_scale((Vector2 *)&local_78);
        if ((local_90._1_1_ != '\0') && (local_84._1_1_ == '\0')) {
          fVar11 = local_8c._4_4_;
          fVar10 = (float)local_8c;
          fVar12 = (float)Transform2D::get_rotation();
          fVar10 = (float)SkeletonModification2D::clamp_angle(fVar12,fVar10,fVar11,SUB41(param_1,0))
          ;
          Transform2D::set_rotation(fVar10);
        }
        Node2D::set_global_transform(pTVar6);
        (**(code **)(*(long *)pTVar6 + 0x290))(&local_c8,pTVar6);
        local_68 = local_b8;
        local_78 = local_c8;
        uStack_70 = uStack_c0;
        if ((local_90._1_1_ != '\0') && (local_84._1_1_ != '\0')) {
          fVar11 = local_8c._4_4_;
          fVar10 = (float)local_8c;
          fVar12 = (float)Transform2D::get_rotation();
          fVar10 = (float)SkeletonModification2D::clamp_angle(fVar12,fVar10,fVar11,SUB41(param_1,0))
          ;
          Transform2D::set_rotation(fVar10);
        }
        Skeleton2D::set_bone_local_pose_override
                  (*(undefined8 *)(*(long *)(lVar8 + 0x240) + 0x240),local_a8,1);
        Node2D::set_transform(pTVar6);
        Object::notification((int)pTVar6,true);
        goto LAB_0010094f;
      }
    }
    if (_execute_ccdik_joint(int,Node2D*,Node2D*)::first_print != '\0') {
      _err_print_error("_execute_ccdik_joint",
                       "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0xc2,
                       "2D CCDIK joint: bone index not found!",0,0);
      _execute_ccdik_joint(int,Node2D*,Node2D*)::first_print = '\0';
    }
LAB_0010094f:
    NodePath::~NodePath(local_a0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar9 = 0;
LAB_00100a21:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* SkeletonModification2DCCDIK::update_target_cache() */

long __thiscall SkeletonModification2DCCDIK::update_target_cache(SkeletonModification2DCCDIK *this)

{
  NodePath *pNVar1;
  long in_RAX;
  long lVar2;
  
  if (this[0x24d] != (SkeletonModification2DCCDIK)0x0) {
    lVar2 = *(long *)(this + 0x240);
    if (lVar2 == 0) {
      if (update_target_cache()::first_print != '\0') {
        lVar2 = _err_print_error("update_target_cache",
                                 "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",
                                 0x10a,
                                 "Cannot update target cache: modification is not properly setup!",0
                                 ,0);
        update_target_cache()::first_print = '\0';
      }
    }
    else {
      *(undefined8 *)(this + 0x2b8) = 0;
      pNVar1 = *(NodePath **)(lVar2 + 0x240);
      if ((pNVar1 != (NodePath *)0x0) && (((byte)pNVar1[0x2fa] & 0x40) != 0)) {
        lVar2 = Node::has_node(pNVar1);
        if ((char)lVar2 != '\0') {
          lVar2 = Node::get_node(*(NodePath **)(*(long *)(this + 0x240) + 0x240));
          if ((lVar2 == 0) || (*(long *)(*(long *)(this + 0x240) + 0x240) == lVar2)) {
            lVar2 = _err_print_error("update_target_cache",
                                     "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp"
                                     ,0x114,
                                     "Condition \"!node || stack->skeleton == node\" is true.",
                                     "Cannot update target cache: node is this modification\'s skeleton or cannot be found!"
                                     ,0,0);
          }
          else if ((*(byte *)(lVar2 + 0x2fa) & 0x40) == 0) {
            lVar2 = 0;
            _err_print_error("update_target_cache",
                             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x116,
                             "Condition \"!node->is_inside_tree()\" is true.",
                             "Cannot update target cache: node is not in the scene tree!",0);
          }
          else {
            lVar2 = *(long *)(lVar2 + 0x60);
            *(long *)(this + 0x2b8) = lVar2;
          }
        }
      }
    }
    return lVar2;
  }
  return in_RAX;
}



/* SkeletonModification2DCCDIK::set_target_node(NodePath const&) */

void __thiscall
SkeletonModification2DCCDIK::set_target_node(SkeletonModification2DCCDIK *this,NodePath *param_1)

{
  NodePath::operator=((NodePath *)(this + 0x2b0),param_1);
  update_target_cache(this);
  return;
}



/* SkeletonModification2DCCDIK::update_tip_cache() */

long __thiscall SkeletonModification2DCCDIK::update_tip_cache(SkeletonModification2DCCDIK *this)

{
  NodePath *pNVar1;
  long in_RAX;
  long lVar2;
  
  if (this[0x24d] != (SkeletonModification2DCCDIK)0x0) {
    lVar2 = *(long *)(this + 0x240);
    if (lVar2 == 0) {
      if (update_tip_cache()::first_print != '\0') {
        lVar2 = _err_print_error("update_tip_cache",
                                 "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",
                                 0x121,
                                 "Cannot update tip cache: modification is not properly setup!",0,0)
        ;
        update_tip_cache()::first_print = '\0';
      }
    }
    else {
      *(undefined8 *)(this + 0x2c8) = 0;
      pNVar1 = *(NodePath **)(lVar2 + 0x240);
      if ((pNVar1 != (NodePath *)0x0) && (((byte)pNVar1[0x2fa] & 0x40) != 0)) {
        lVar2 = Node::has_node(pNVar1);
        if ((char)lVar2 != '\0') {
          lVar2 = Node::get_node(*(NodePath **)(*(long *)(this + 0x240) + 0x240));
          if ((lVar2 == 0) || (*(long *)(*(long *)(this + 0x240) + 0x240) == lVar2)) {
            lVar2 = _err_print_error("update_tip_cache",
                                     "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp"
                                     ,299,"Condition \"!node || stack->skeleton == node\" is true.",
                                     "Cannot update tip cache: node is this modification\'s skeleton or cannot be found!"
                                     ,0,0);
          }
          else if ((*(byte *)(lVar2 + 0x2fa) & 0x40) == 0) {
            lVar2 = 0;
            _err_print_error("update_tip_cache",
                             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x12d,
                             "Condition \"!node->is_inside_tree()\" is true.",
                             "Cannot update tip cache: node is not in the scene tree!",0);
          }
          else {
            lVar2 = *(long *)(lVar2 + 0x60);
            *(long *)(this + 0x2c8) = lVar2;
          }
        }
      }
    }
    return lVar2;
  }
  return in_RAX;
}



/* SkeletonModification2DCCDIK::_setup_modification(SkeletonModificationStack2D*) */

void __thiscall
SkeletonModification2DCCDIK::_setup_modification
          (SkeletonModification2DCCDIK *this,SkeletonModificationStack2D *param_1)

{
  *(SkeletonModificationStack2D **)(this + 0x240) = param_1;
  if (param_1 != (SkeletonModificationStack2D *)0x0) {
    this[0x24d] = (SkeletonModification2DCCDIK)0x1;
    update_target_cache(this);
    update_tip_cache(this);
    return;
  }
  return;
}



/* SkeletonModification2DCCDIK::set_tip_node(NodePath const&) */

void __thiscall
SkeletonModification2DCCDIK::set_tip_node(SkeletonModification2DCCDIK *this,NodePath *param_1)

{
  NodePath::operator=((NodePath *)(this + 0x2c0),param_1);
  update_tip_cache(this);
  return;
}



/* SkeletonModification2DCCDIK::_execute(float) */

void SkeletonModification2DCCDIK::_execute(float param_1)

{
  long lVar1;
  Node2D *pNVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  Node2D *pNVar7;
  SkeletonModification2DCCDIK *in_RDI;
  long in_FS_OFFSET;
  bool bVar8;
  float extraout_XMM0_Da;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(in_RDI + 0x240) == 0) || (in_RDI[0x24d] == (SkeletonModification2DCCDIK)0x0)) ||
     (*(long *)(*(long *)(in_RDI + 0x240) + 0x240) == 0)) {
    _err_print_error("_execute","scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",
                     0x9d,"Condition \"!stack || !is_setup || stack->skeleton == nullptr\" is true."
                     ,"Modification is not setup and therefore cannot execute!",0,0);
  }
  else if (in_RDI[0x24c] != (SkeletonModification2DCCDIK)0x0) {
    uVar4 = *(ulong *)(in_RDI + 0x2b8);
    if (uVar4 == 0) {
      if (_execute(float)::first_print != '\0') {
        _err_print_error("_execute","scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp"
                         ,0xa4,"Target cache is out of date. Attempting to update...",0,1);
        _execute(float)::first_print = '\0';
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        update_target_cache(in_RDI);
        return;
      }
      goto LAB_001012a0;
    }
    if (*(long *)(in_RDI + 0x2c8) == 0) {
      if (_execute(float)::first_print != '\0') {
        _err_print_error("_execute","scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp"
                         ,0xa9,"Tip cache is out of date. Attempting to update...",0,1);
        _execute(float)::first_print = '\0';
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        update_tip_cache(in_RDI);
        return;
      }
      goto LAB_001012a0;
    }
    uVar5 = (uint)uVar4 & 0xffffff;
    if (uVar5 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar8 = (char)ObjectDB::spin_lock == '\0';
        if (bVar8) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar8) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
      if ((uVar4 >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
        uVar4 = puVar6[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (((uVar4 != 0) &&
            (pNVar2 = (Node2D *)__dynamic_cast(uVar4,&Object::typeinfo,&Node2D::typeinfo,0),
            param_1 = extraout_XMM0_Da, pNVar2 != (Node2D *)0x0)) &&
           (((byte)pNVar2[0x2fa] & 0x40) != 0)) {
          uVar5 = (uint)*(ulong *)(in_RDI + 0x2c8) & 0xffffff;
          if (uVar5 < (uint)ObjectDB::slot_max) {
            while( true ) {
              LOCK();
              bVar8 = (char)ObjectDB::spin_lock == '\0';
              if (bVar8) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar8) break;
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
            if ((*(ulong *)(in_RDI + 0x2c8) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
              uVar4 = puVar6[1];
              ObjectDB::spin_lock._0_1_ = '\0';
              if (((uVar4 != 0) &&
                  (lVar3 = __dynamic_cast(uVar4,&Object::typeinfo,&Node2D::typeinfo,0), lVar3 != 0))
                 && ((*(byte *)(lVar3 + 0x2fa) & 0x40) != 0)) {
                lVar3 = *(long *)(in_RDI + 0x2a8);
                if (lVar3 != 0) {
                  uVar4 = 0;
                  do {
                    pNVar7 = (Node2D *)(uVar4 & 0xffffffff);
                    if (*(long *)(lVar3 + -8) <= (long)uVar4) break;
                    uVar4 = uVar4 + 1;
                    _execute_ccdik_joint((int)in_RDI,pNVar7,pNVar2);
                    lVar3 = *(long *)(in_RDI + 0x2a8);
                  } while (lVar3 != 0);
                }
                goto LAB_00101050;
              }
            }
            else {
              ObjectDB::spin_lock._0_1_ = '\0';
            }
          }
          else {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
          }
          if (_execute(float)::first_print != '\0') {
            _err_print_error("_execute",
                             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0xb6,
                             "Tip node is not in the scene tree. Cannot execute modification!",0,0);
            _execute(float)::first_print = '\0';
          }
          goto LAB_00101050;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      param_1 = (float)_err_print_error("get_instance","./core/object/object.h",0x418,
                                        "Condition \"slot >= slot_max\" is true. Returning: nullptr"
                                        ,0,0);
    }
    if (_execute(float)::first_print != '\0') {
      _err_print_error(param_1,"_execute",
                       "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0xb0,
                       "Target node is not in the scene tree. Cannot execute modification!",0,0);
      _execute(float)::first_print = '\0';
    }
  }
LAB_00101050:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001012a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_constraint_in_localspace(int) const */

undefined1 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_constraint_in_localspace
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001012e9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x25 + lVar2 * 0x28);
    }
    goto LAB_001012e9;
  }
  lVar3 = 0;
LAB_001012e9:
  _err_print_index_error
            ("get_ccdik_joint_constraint_in_localspace",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1ed,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
}



/* SkeletonModification2DCCDIK::get_ccdik_joint_editor_draw_gizmo(int) const */

undefined1 __thiscall
SkeletonModification2DCCDIK::get_ccdik_joint_editor_draw_gizmo
          (SkeletonModification2DCCDIK *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x2a8);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00101379;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined1 *)(lVar1 + 0x26 + lVar2 * 0x28);
    }
    goto LAB_00101379;
  }
  lVar3 = 0;
LAB_00101379:
  _err_print_index_error
            ("get_ccdik_joint_editor_draw_gizmo",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1fd,lVar2,lVar3,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return 0;
}



/* SkeletonModification2DCCDIK::SkeletonModification2DCCDIK() */

void __thiscall
SkeletonModification2DCCDIK::SkeletonModification2DCCDIK(SkeletonModification2DCCDIK *this)

{
  SkeletonModification2D::SkeletonModification2D((SkeletonModification2D *)this);
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00112270;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined2 *)(this + 0x24c) = 1;
  this[0x298] = (SkeletonModification2DCCDIK)0x1;
  *(undefined1 (*) [16])(this + 0x2a8) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkeletonModification2DCCDIK::_get(StringName const&, Variant&) const */

undefined8 __thiscall
SkeletonModification2DCCDIK::_get
          (SkeletonModification2DCCDIK *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  wchar32 wVar7;
  long lVar8;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  size_t local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar8 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar8 == 0) {
    local_78 = 0;
  }
  else {
    __s = *(char **)(lVar8 + 8);
    local_78 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar8 + 0x10));
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_78);
    }
  }
  cVar1 = String::begins_with((char *)&local_78);
  if (cVar1 == '\0') {
    cVar1 = String::begins_with((char *)&local_78);
    if (cVar1 == '\0') {
      uVar5 = 0;
      goto LAB_001015a8;
    }
    bVar2 = (bool)SkeletonModification2D::get_editor_draw_gizmo();
    Variant::Variant((Variant *)local_58,bVar2);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_2 = local_58[0];
    *(undefined8 *)(param_2 + 8) = local_50;
    *(undefined8 *)(param_2 + 0x10) = uStack_48;
LAB_001015a3:
    uVar5 = 1;
    goto LAB_001015a8;
  }
  iVar6 = (int)(CowData<char32_t> *)&local_78;
  wVar7 = (wchar32)(CowData<char32_t> *)&local_68;
  String::get_slicec(wVar7,iVar6);
  iVar4 = String::to_int();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  String::get_slicec((wchar32)local_70,iVar6);
  if (iVar4 < 0) {
    if (*(long *)(this + 0x2a8) == 0) goto LAB_00101840;
    lVar8 = *(long *)(*(long *)(this + 0x2a8) + -8);
LAB_00101738:
    _err_print_index_error
              ("_get","scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x56,
               (long)iVar4,lVar8,"which","ccdik_data_chain.size()","",false,false);
  }
  else {
    if (*(long *)(this + 0x2a8) == 0) {
LAB_00101840:
      lVar8 = 0;
      goto LAB_00101738;
    }
    lVar8 = *(long *)(*(long *)(this + 0x2a8) + -8);
    if (lVar8 <= iVar4) goto LAB_00101738;
    cVar1 = String::operator==(local_70,"bone2d_node");
    if (cVar1 != '\0') {
      get_ccdik_joint_bone2d_node(wVar7);
      Variant::Variant((Variant *)local_58,(NodePath *)&local_68);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_58[0];
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
      NodePath::~NodePath((NodePath *)&local_68);
LAB_0010159b:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      goto LAB_001015a3;
    }
    cVar1 = String::operator==(local_70,"bone_index");
    if (cVar1 != '\0') {
      iVar4 = get_ccdik_joint_bone_index(this,iVar4);
      Variant::Variant((Variant *)local_58,iVar4);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_58[0];
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
      goto LAB_0010159b;
    }
    cVar1 = String::operator==(local_70,"rotate_from_joint");
    if (cVar1 != '\0') {
      bVar2 = (bool)get_ccdik_joint_rotate_from_joint(this,iVar4);
      Variant::Variant((Variant *)local_58,bVar2);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_58[0];
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
      goto LAB_0010159b;
    }
    cVar1 = String::operator==(local_70,"enable_constraint");
    if (cVar1 != '\0') {
      uVar3 = get_ccdik_joint_enable_constraint(this,iVar4);
      goto LAB_0010180c;
    }
    cVar1 = String::operator==(local_70,"constraint_angle_min");
    if (cVar1 != '\0') {
      fVar9 = (float)get_ccdik_joint_constraint_angle_min(this,iVar4);
      Variant::Variant((Variant *)local_58,fVar9 * __LC53);
LAB_001017cb:
      Variant::operator=(param_2,(Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010159b;
    }
    cVar1 = String::operator==(local_70,"constraint_angle_max");
    if (cVar1 != '\0') {
      fVar9 = (float)get_ccdik_joint_constraint_angle_max(this,iVar4);
      Variant::Variant((Variant *)local_58,fVar9 * __LC53);
      goto LAB_001017cb;
    }
    cVar1 = String::operator==(local_70,"constraint_angle_invert");
    if (cVar1 != '\0') {
      uVar3 = get_ccdik_joint_constraint_angle_invert(this,iVar4);
LAB_0010180c:
      Variant::Variant((Variant *)local_58,(bool)uVar3);
      goto LAB_001017cb;
    }
    cVar1 = String::operator==(local_70,"constraint_in_localspace");
    if (cVar1 != '\0') {
      uVar3 = get_ccdik_joint_constraint_in_localspace(this,iVar4);
      goto LAB_0010180c;
    }
    cVar1 = String::begins_with((char *)local_70);
    if (cVar1 != '\0') {
      uVar3 = get_ccdik_joint_editor_draw_gizmo(this,iVar4);
      goto LAB_0010180c;
    }
  }
  uVar5 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
LAB_001015a8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall
SkeletonModification2DCCDIK::_get_property_list(SkeletonModification2DCCDIK *this,List *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  long in_FS_OFFSET;
  StringName *local_e8;
  CowData *local_e0;
  long local_c0;
  String local_a8 [8];
  undefined8 local_a0;
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
  lVar3 = *(long *)(this + 0x2a8);
  if (lVar3 != 0) {
    local_c0 = 0;
    do {
      if (*(long *)(lVar3 + -8) <= local_c0) break;
      local_80 = 0;
      local_70 = 1;
      local_78 = "/";
      String::parse_latin1((StrRange *)&local_80);
      itos((long)&local_88);
      operator+((char *)&local_78,(String *)"joint_data/");
      String::operator+(local_a8,(String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_78 = "";
      local_88 = 0;
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "bone_index";
      local_a0 = 0;
      local_70 = 10;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,2);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_001024a8:
        local_50 = 6;
        StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
        lVar3 = *(long *)param_1;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_001024a8;
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
        lVar3 = *(long *)param_1;
      }
      if (lVar3 == 0) {
        pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar5;
        *(undefined4 *)pauVar5[1] = 0;
        *pauVar5 = (undefined1  [16])0x0;
      }
      local_e0 = (CowData *)&local_58;
      local_e8 = (StringName *)&local_68;
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
      StringName::operator=((StringName *)(puVar4 + 4),local_e8);
      puVar4[6] = local_60;
      if (*(long *)(puVar4 + 8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),local_e0);
      }
      puVar4[10] = local_50;
      plVar1 = *(long **)param_1;
      lVar3 = plVar1[1];
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(long **)(puVar4 + 0x10) = plVar1;
      *(long *)(puVar4 + 0xe) = lVar3;
      if (lVar3 != 0) {
        *(undefined4 **)(lVar3 + 0x30) = puVar4;
      }
      plVar1[1] = (long)puVar4;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar4;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "Bone2D";
      local_90 = 0;
      local_70 = 6;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "bone2d_node";
      local_a0 = 0;
      local_70 = 0xb;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,0x16);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0x1a;
      local_58 = 0;
      if (local_90 == 0) {
LAB_0010244e:
        local_50 = 6;
        StringName::operator=(local_e8,(StringName *)&local_88);
        lVar3 = *(long *)param_1;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_0010244e;
        StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
        if (local_68 == local_80) {
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_68 = local_80;
        }
        lVar3 = *(long *)param_1;
      }
      if (lVar3 == 0) {
        pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar5;
        *(undefined4 *)pauVar5[1] = 0;
        *pauVar5 = (undefined1  [16])0x0;
      }
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
      StringName::operator=((StringName *)(puVar4 + 4),local_e8);
      puVar4[6] = local_60;
      if (*(long *)(puVar4 + 8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),local_e0);
      }
      puVar4[10] = local_50;
      plVar1 = *(long **)param_1;
      lVar3 = plVar1[1];
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(long **)(puVar4 + 0x10) = plVar1;
      *(long *)(puVar4 + 0xe) = lVar3;
      if (lVar3 != 0) {
        *(undefined4 **)(lVar3 + 0x30) = puVar4;
      }
      plVar1[1] = (long)puVar4;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar4;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "rotate_from_joint";
      local_a0 = 0;
      local_70 = 0x11;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,1);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00102503:
        local_50 = 6;
        StringName::operator=(local_e8,(StringName *)&local_88);
        lVar3 = *(long *)param_1;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00102503;
        StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
        if (local_68 == local_80) {
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_68 = local_80;
        }
        lVar3 = *(long *)param_1;
      }
      if (lVar3 == 0) {
        pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar5;
        *(undefined4 *)pauVar5[1] = 0;
        *pauVar5 = (undefined1  [16])0x0;
      }
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
      StringName::operator=((StringName *)(puVar4 + 4),local_e8);
      puVar4[6] = local_60;
      if (*(long *)(puVar4 + 8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),local_e0);
      }
      puVar4[10] = local_50;
      plVar1 = *(long **)param_1;
      lVar3 = plVar1[1];
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(long **)(puVar4 + 0x10) = plVar1;
      *(long *)(puVar4 + 0xe) = lVar3;
      if (lVar3 != 0) {
        *(undefined4 **)(lVar3 + 0x30) = puVar4;
      }
      plVar1[1] = (long)puVar4;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar4;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      local_88 = 0;
      local_78 = "";
      local_90 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_78 = "enable_constraint";
      local_a0 = 0;
      local_70 = 0x11;
      String::parse_latin1((StrRange *)&local_a0);
      String::operator+((String *)&local_98,local_a8);
      local_78 = (char *)CONCAT44(local_78._4_4_,1);
      local_70 = 0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
      }
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
LAB_00102553:
        local_50 = 6;
        StringName::operator=(local_e8,(StringName *)&local_88);
        lVar3 = *(long *)param_1;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
        local_50 = 6;
        if (local_60 != 0x11) goto LAB_00102553;
        StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
        if (local_68 == local_80) {
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_68 = local_80;
        }
        lVar3 = *(long *)param_1;
      }
      if (lVar3 == 0) {
        pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar5;
        *(undefined4 *)pauVar5[1] = 0;
        *pauVar5 = (undefined1  [16])0x0;
      }
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
      StringName::operator=((StringName *)(puVar4 + 4),local_e8);
      puVar4[6] = local_60;
      if (*(long *)(puVar4 + 8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),local_e0);
      }
      puVar4[10] = local_50;
      plVar1 = *(long **)param_1;
      lVar3 = plVar1[1];
      *(undefined8 *)(puVar4 + 0xc) = 0;
      *(long **)(puVar4 + 0x10) = plVar1;
      *(long *)(puVar4 + 0xe) = lVar3;
      if (lVar3 != 0) {
        *(undefined4 **)(lVar3 + 0x30) = puVar4;
      }
      plVar1[1] = (long)puVar4;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar4;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      lVar3 = *(long *)(this + 0x2a8);
      if (lVar3 == 0) {
        lVar6 = 0;
LAB_00102fc8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,local_c0,lVar6,"p_index","size()","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar6 = *(long *)(lVar3 + -8);
      if (lVar6 <= local_c0) goto LAB_00102fc8;
      if (*(char *)(lVar3 + 0x19 + local_c0 * 0x28) != '\0') {
        local_88 = 0;
        local_90 = 0;
        local_78 = "-360, 360, 0.01";
        local_70 = 0xf;
        String::parse_latin1((StrRange *)&local_90);
        local_78 = "constraint_angle_min";
        local_a0 = 0;
        local_70 = 0x14;
        String::parse_latin1((StrRange *)&local_a0);
        String::operator+((String *)&local_98,local_a8);
        local_78 = (char *)CONCAT44(local_78._4_4_,3);
        local_70 = 0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
        }
        local_68 = 0;
        local_60 = 1;
        local_58 = 0;
        if (local_90 == 0) {
LAB_0010291b:
          local_50 = 6;
          StringName::operator=(local_e8,(StringName *)&local_88);
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
          local_50 = 6;
          if (local_60 != 0x11) goto LAB_0010291b;
          StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
          if (local_68 == local_80) {
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_68 = local_80;
          }
        }
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
        PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        local_88 = 0;
        local_90 = 0;
        local_78 = "-360, 360, 0.01";
        local_70 = 0xf;
        String::parse_latin1((StrRange *)&local_90);
        local_78 = "constraint_angle_max";
        local_a0 = 0;
        local_70 = 0x14;
        String::parse_latin1((StrRange *)&local_a0);
        String::operator+((String *)&local_98,local_a8);
        local_78 = (char *)CONCAT44(local_78._4_4_,3);
        local_70 = 0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
        }
        local_68 = 0;
        local_60 = 1;
        local_58 = 0;
        if (local_90 == 0) {
LAB_00102a93:
          local_50 = 6;
          StringName::operator=(local_e8,(StringName *)&local_88);
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
          local_50 = 6;
          if (local_60 != 0x11) goto LAB_00102a93;
          StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
          if (local_68 == local_80) {
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_68 = local_80;
          }
        }
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
        lVar3 = local_58;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        local_88 = 0;
        local_78 = "";
        local_90 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_90);
        local_78 = "constraint_angle_invert";
        local_a0 = 0;
        local_70 = 0x17;
        String::parse_latin1((StrRange *)&local_a0);
        String::operator+((String *)&local_98,local_a8);
        local_78 = (char *)CONCAT44(local_78._4_4_,1);
        local_70 = 0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
        }
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        if (local_90 == 0) {
LAB_00102c8b:
          local_50 = 6;
          StringName::operator=(local_e8,(StringName *)&local_88);
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
          local_50 = 6;
          if (local_60 != 0x11) goto LAB_00102c8b;
          StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
          if (local_68 == local_80) {
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_68 = local_80;
          }
        }
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
        PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
        local_88 = 0;
        local_78 = "";
        local_90 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_90);
        local_78 = "constraint_in_localspace";
        local_a0 = 0;
        local_70 = 0x18;
        String::parse_latin1((StrRange *)&local_a0);
        String::operator+((String *)&local_98,local_a8);
        local_78 = (char *)CONCAT44(local_78._4_4_,1);
        local_70 = 0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
        }
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        if (local_90 == 0) {
LAB_00102e0b:
          local_50 = 6;
          StringName::operator=(local_e8,(StringName *)&local_88);
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
          local_50 = 6;
          if (local_60 != 0x11) goto LAB_00102e0b;
          StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
          if (local_68 == local_80) {
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_68 = local_80;
          }
        }
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
        lVar3 = local_58;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
      }
      lVar3 = Engine::get_singleton();
      if (*(char *)(lVar3 + 0xc0) != '\0') {
        local_88 = 0;
        local_78 = "";
        local_90 = 0;
        local_70 = 0;
        String::parse_latin1((StrRange *)&local_90);
        local_78 = "editor_draw_gizmo";
        local_a0 = 0;
        local_70 = 0x11;
        String::parse_latin1((StrRange *)&local_a0);
        String::operator+((String *)&local_98,local_a8);
        local_78 = (char *)CONCAT44(local_78._4_4_,1);
        local_70 = 0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
        }
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        if (local_90 == 0) {
LAB_00102833:
          local_50 = 6;
          StringName::operator=(local_e8,(StringName *)&local_88);
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)&local_90);
          local_50 = 6;
          if (local_60 != 0x11) goto LAB_00102833;
          StringName::StringName((StringName *)&local_80,(String *)local_e0,false);
          if (local_68 == local_80) {
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_68 = local_80;
          }
        }
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
        lVar3 = local_58;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if ((StringName::configured != '\0') && (local_88 != 0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      local_c0 = local_c0 + 1;
      lVar3 = *(long *)(this + 0x2a8);
    } while (lVar3 != 0);
  }
  lVar3 = Engine::get_singleton();
  if (*(char *)(lVar3 + 0xc0) == '\0') goto LAB_00102f96;
  local_88 = 0;
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"editor/draw_gizmo");
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001031f0:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001031f0;
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
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
LAB_00102f96:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::_bind_methods() */

void SkeletonModification2DCCDIK::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  long *local_168;
  int local_160;
  undefined8 local_158;
  undefined4 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  char *pcStack_130;
  undefined8 local_128;
  char *local_118;
  char *pcStack_110;
  undefined8 local_108;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  char *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar3 = PTR__LC66_00112950;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 0;
  local_148 = "target_nodepath";
  uVar6 = (uint)&local_58;
  local_58 = &local_148;
  D_METHODP((char *)&local_178,(char ***)"set_target_node",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,NodePath_const&>(set_target_node);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_178,(char ***)"get_target_node",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,NodePath>(get_target_node);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_140 = 0;
  local_148 = "tip_nodepath";
  local_58 = &local_148;
  D_METHODP((char *)&local_178,(char ***)"set_tip_node",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,NodePath_const&>(set_tip_node);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_178,(char ***)"get_tip_node",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,NodePath>(get_tip_node);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_140 = 0;
  local_148 = "length";
  local_58 = &local_148;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_data_chain_length",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int>(set_ccdik_data_chain_length);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_data_chain_length",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int>(get_ccdik_data_chain_length);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_68 = 0;
  local_78 = puVar3;
  pcStack_70 = "bone2d_nodepath";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_bone2d_node",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,NodePath_const&>
                     (set_ccdik_joint_bone2d_node);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint_idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_bone2d_node",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,NodePath,int>(get_ccdik_joint_bone2d_node)
  ;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = puVar3;
  pcStack_90 = "bone_idx";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_bone_index",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,int>(set_ccdik_joint_bone_index);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint_idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_bone_index",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,int>(get_ccdik_joint_bone_index);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  local_b8 = puVar3;
  pcStack_b0 = "rotate_from_joint";
  auStack_50._0_8_ = &pcStack_b0;
  local_58 = &local_b8;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_rotate_from_joint",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,bool>
                     (set_ccdik_joint_rotate_from_joint);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  pcStack_70 = (char *)0x0;
  local_78 = "joint_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_rotate_from_joint",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,bool,int>
                     (get_ccdik_joint_rotate_from_joint);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_c8 = 0;
  local_d8 = puVar3;
  pcStack_d0 = "enable_constraint";
  auStack_50._0_8_ = &pcStack_d0;
  local_58 = &local_d8;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_enable_constraint",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,bool>
                     (set_ccdik_joint_enable_constraint);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint_idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_enable_constraint",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,bool,int>
                     (get_ccdik_joint_enable_constraint);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_e8 = 0;
  local_f8 = puVar3;
  pcStack_f0 = "angle_min";
  auStack_50._0_8_ = &pcStack_f0;
  local_58 = &local_f8;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_constraint_angle_min",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,float>
                     (set_ccdik_joint_constraint_angle_min);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint_idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_constraint_angle_min",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,float,int>
                     (get_ccdik_joint_constraint_angle_min);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_108 = 0;
  local_118 = puVar3;
  pcStack_110 = "angle_max";
  auStack_50._0_8_ = &pcStack_110;
  local_58 = &local_118;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_constraint_angle_max",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,float>
                     (set_ccdik_joint_constraint_angle_max);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint_idx";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_constraint_angle_max",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,float,int>
                     (get_ccdik_joint_constraint_angle_max);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  local_128 = 0;
  local_138 = puVar3;
  pcStack_130 = "invert";
  auStack_50._0_8_ = &pcStack_130;
  local_58 = &local_138;
  D_METHODP((char *)&local_178,(char ***)"set_ccdik_joint_constraint_angle_invert",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,int,bool>
                     (set_ccdik_joint_constraint_angle_invert);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_178);
  pcStack_70 = (char *)0x0;
  local_78 = "joint_idx";
  local_58 = &local_78;
  D_METHODP((char *)&local_178,(char ***)"get_ccdik_joint_constraint_angle_invert",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<SkeletonModification2DCCDIK,bool,int>
                     (get_ccdik_joint_constraint_angle_invert);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_178,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_168;
  if (local_168 != (long *)0x0) {
    LOCK();
    plVar7 = local_168 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_168 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_168[-1];
      lVar8 = 0;
      local_168 = (long *)0x0;
      plVar7 = plVar4;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_190,true);
  _scs_create((char *)&local_198,true);
  local_1a0 = 0;
  local_178 = "Node2D";
  local_1a8 = 0;
  local_170 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1b0 = 0;
  local_178 = "target_nodepath";
  local_170 = 0xf;
  String::parse_latin1((StrRange *)&local_1b0);
  local_178 = (char *)CONCAT44(local_178._4_4_,0x16);
  local_170 = 0;
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
  }
  local_168 = (long *)0x0;
  local_160 = 0x1a;
  local_158 = 0;
  if (local_1a8 == 0) {
LAB_00104903:
    local_150 = 6;
    StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
    local_150 = 6;
    if (local_160 != 0x11) goto LAB_00104903;
    StringName::StringName((StringName *)&local_188,(String *)&local_158,false);
    if (local_168 == (long *)local_188) {
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_168 = (long *)local_188;
    }
  }
  local_1b8 = 0;
  local_188 = "SkeletonModification2DCCDIK";
  local_180 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_188,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
             (StringName *)&local_190,-1);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((((StringName::configured != '\0') &&
       ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_190 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_190,true);
  _scs_create((char *)&local_198,true);
  local_178 = "Node2D";
  local_1a0 = 0;
  local_1a8 = 0;
  local_170 = 6;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1b0 = 0;
  local_178 = "tip_nodepath";
  local_170 = 0xc;
  String::parse_latin1((StrRange *)&local_1b0);
  local_178 = (char *)CONCAT44(local_178._4_4_,0x16);
  local_170 = 0;
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
  }
  local_168 = (long *)0x0;
  local_160 = 0x1a;
  local_158 = 0;
  if (local_1a8 == 0) {
LAB_00104b8b:
    local_150 = 6;
    StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
    local_150 = 6;
    if (local_160 != 0x11) goto LAB_00104b8b;
    StringName::StringName((StringName *)&local_188,(String *)&local_158,false);
    if (local_168 == (long *)local_188) {
      if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_168 = (long *)local_188;
    }
  }
  local_1b8 = 0;
  local_188 = "SkeletonModification2DCCDIK";
  local_180 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_188,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
             (StringName *)&local_190,-1);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((((StringName::configured != '\0') &&
       ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_190 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_190,true);
  _scs_create((char *)&local_198,true);
  local_178 = "0, 100, 1";
  local_1a0 = 0;
  local_1a8 = 0;
  local_170 = 9;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1b0 = 0;
  local_178 = "ccdik_data_chain_length";
  local_170 = 0x17;
  String::parse_latin1((StrRange *)&local_1b0);
  local_178 = (char *)CONCAT44(local_178._4_4_,2);
  local_170 = 0;
  if (local_1b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_1b0);
  }
  local_168 = (long *)0x0;
  local_160 = 1;
  local_158 = 0;
  if (local_1a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)&local_1a8);
    local_150 = 6;
    if (local_160 == 0x11) {
      StringName::StringName((StringName *)&local_188,(String *)&local_158,false);
      if (local_168 == (long *)local_188) {
        if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_168 = (long *)local_188;
      }
      goto LAB_00104e18;
    }
  }
  local_150 = 6;
  StringName::operator=((StringName *)&local_168,(StringName *)&local_1a0);
LAB_00104e18:
  local_1b8 = 0;
  local_188 = "SkeletonModification2DCCDIK";
  local_180 = 0x1b;
  String::parse_latin1((StrRange *)&local_1b8);
  StringName::StringName((StringName *)&local_188,(String *)&local_1b8,false);
  ClassDB::add_property
            ((StringName *)&local_188,(PropertyInfo *)&local_178,(StringName *)&local_198,
             (StringName *)&local_190,-1);
  if ((StringName::configured != '\0') && (local_188 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((((StringName::configured != '\0') &&
       ((local_1a0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_198 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_190 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SkeletonModification2DCCDIK::~SkeletonModification2DCCDIK() */

void __thiscall
SkeletonModification2DCCDIK::~SkeletonModification2DCCDIK(SkeletonModification2DCCDIK *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00112270;
  NodePath::~NodePath((NodePath *)(this + 0x2c0));
  NodePath::~NodePath((NodePath *)(this + 0x2b0));
  CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_unref
            ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
  bVar1 = StringName::configured != '\0';
  *(code **)this = SkeletonModificationStack2D::set_editor_gizmos_dirty;
  if (bVar1) {
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105191;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105191;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_00105191:
  Resource::~Resource((Resource *)this);
  return;
}



/* CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
          (CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
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
  if (lVar1 * 0x28 != 0) {
    uVar6 = lVar1 * 0x28 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    puVar4 = puVar3 + 2;
    if (lVar1 != 0) {
      do {
        puVar5 = (undefined4 *)((long)puVar4 + *(long *)this + (-0x10 - (long)puVar3));
        lVar7 = lVar7 + 1;
        *(undefined4 *)puVar4 = *puVar5;
        NodePath::NodePath((NodePath *)(puVar4 + 1),(NodePath *)(puVar5 + 2));
        puVar4[2] = *(undefined8 *)(puVar5 + 4);
        *(undefined2 *)(puVar4 + 3) = *(undefined2 *)(puVar5 + 6);
        *(undefined8 *)((long)puVar4 + 0x1c) = *(undefined8 *)(puVar5 + 7);
        *(undefined2 *)((long)puVar4 + 0x24) = *(undefined2 *)(puVar5 + 9);
        *(undefined1 *)((long)puVar4 + 0x26) = *(undefined1 *)((long)puVar5 + 0x26);
        puVar4 = puVar4 + 5;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_editor_draw_gizmo(int, bool) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_editor_draw_gizmo
          (SkeletonModification2DCCDIK *this,int param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00105399;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      lVar1 = *(long *)(this + 0x240);
      *(bool *)(*(long *)(this + 0x2a8) + lVar2 * 0x28 + 0x26) = param_2;
      if ((lVar1 != 0) && (this[0x24d] != (SkeletonModification2DCCDIK)0x0)) {
        SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(lVar1,0));
        return;
      }
      return;
    }
    goto LAB_00105399;
  }
  lVar1 = 0;
LAB_00105399:
  _err_print_index_error
            ("set_ccdik_joint_editor_draw_gizmo",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1f2,lVar2,lVar1,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_constraint_in_localspace(int, bool) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_constraint_in_localspace
          (SkeletonModification2DCCDIK *this,int param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00105479;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      lVar1 = *(long *)(this + 0x240);
      *(bool *)(*(long *)(this + 0x2a8) + lVar2 * 0x28 + 0x25) = param_2;
      if ((lVar1 != 0) && (this[0x24d] != (SkeletonModification2DCCDIK)0x0)) {
        SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(lVar1,0));
        return;
      }
      return;
    }
    goto LAB_00105479;
  }
  lVar1 = 0;
LAB_00105479:
  _err_print_index_error
            ("set_ccdik_joint_constraint_in_localspace",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1e2,lVar2,lVar1,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_invert(int, bool) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_invert
          (SkeletonModification2DCCDIK *this,int param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00105559;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      lVar1 = *(long *)(this + 0x240);
      *(bool *)(*(long *)(this + 0x2a8) + lVar2 * 0x28 + 0x24) = param_2;
      if ((lVar1 != 0) && (this[0x24d] != (SkeletonModification2DCCDIK)0x0)) {
        SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(lVar1,0));
        return;
      }
      return;
    }
    goto LAB_00105559;
  }
  lVar1 = 0;
LAB_00105559:
  _err_print_index_error
            ("set_ccdik_joint_constraint_angle_invert",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1d2,lVar2,lVar1,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_max(int, float) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_max
          (SkeletonModification2DCCDIK *this,int param_1,float param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1;
  lVar2 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00105649;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar2) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      lVar2 = *(long *)(this + 0x240);
      *(float *)(*(long *)(this + 0x2a8) + lVar1 * 0x28 + 0x20) = param_2;
      if ((lVar2 != 0) && (this[0x24d] != (SkeletonModification2DCCDIK)0x0)) {
        SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(lVar2,0));
        return;
      }
      return;
    }
    goto LAB_00105649;
  }
  lVar2 = 0;
LAB_00105649:
  _err_print_index_error
            ("set_ccdik_joint_constraint_angle_max",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1c2,lVar1,lVar2,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_min(int, float) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_min
          (SkeletonModification2DCCDIK *this,int param_1,float param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1;
  lVar2 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00105739;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar2) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      lVar2 = *(long *)(this + 0x240);
      *(float *)(*(long *)(this + 0x2a8) + lVar1 * 0x28 + 0x1c) = param_2;
      if ((lVar2 != 0) && (this[0x24d] != (SkeletonModification2DCCDIK)0x0)) {
        SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(lVar2,0));
        return;
      }
      return;
    }
    goto LAB_00105739;
  }
  lVar2 = 0;
LAB_00105739:
  _err_print_index_error
            ("set_ccdik_joint_constraint_angle_min",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1b2,lVar1,lVar2,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_enable_constraint(int, bool) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_enable_constraint
          (SkeletonModification2DCCDIK *this,int param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00105819;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      *(bool *)(*(long *)(this + 0x2a8) + lVar2 * 0x28 + 0x19) = param_2;
      Object::notify_property_list_changed();
      if ((*(long *)(this + 0x240) != 0) && (this[0x24d] != (SkeletonModification2DCCDIK)0x0)) {
        SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(*(long *)(this + 0x240),0));
        return;
      }
      return;
    }
    goto LAB_00105819;
  }
  lVar1 = 0;
LAB_00105819:
  _err_print_index_error
            ("set_ccdik_joint_enable_constraint",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x1a1,lVar2,lVar1,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_rotate_from_joint(int, bool) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_rotate_from_joint
          (SkeletonModification2DCCDIK *this,int param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_001058d1;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      *(bool *)(*(long *)(this + 0x2a8) + lVar2 * 0x28 + 0x18) = param_2;
      return;
    }
    goto LAB_001058d1;
  }
  lVar1 = 0;
LAB_001058d1:
  _err_print_index_error
            ("set_ccdik_joint_rotate_from_joint",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x197,lVar2,lVar1,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_bone_index(int, int) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_bone_index
          (SkeletonModification2DCCDIK *this,int param_1,int param_2)

{
  CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *this_00;
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar6 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar4 == 0) goto LAB_00105cc0;
    lVar4 = *(long *)(lVar4 + -8);
LAB_00105bd5:
    _err_print_index_error
              ("set_ccdik_joint_bone_index",
               "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x17d,lVar6,lVar4,
               "p_joint_idx","ccdik_data_chain.size()","CCCDIK joint out of range!",false,false);
  }
  else {
    if (lVar4 == 0) {
LAB_00105cc0:
      lVar4 = 0;
      goto LAB_00105bd5;
    }
    lVar4 = *(long *)(lVar4 + -8);
    if (lVar4 <= lVar6) goto LAB_00105bd5;
    if (-1 < param_2) {
      if (this[0x24d] == (SkeletonModification2DCCDIK)0x0) {
LAB_00105ba2:
        CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                  ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
        *(int *)(*(long *)(this + 0x2a8) + lVar6 * 0x28) = param_2;
      }
      else {
        if (*(long *)(*(long *)(this + 0x240) + 0x240) == 0) {
          local_60 = 0;
          local_58 = " bone index for this modification...";
          local_50 = 0x24;
          String::parse_latin1((StrRange *)&local_60);
          itos((long)local_70);
          operator+((char *)local_68,(String *)"Cannot verify the CCDIK joint ");
          String::operator+((String *)&local_58,local_68);
          _err_print_error("set_ccdik_joint_bone_index",
                           "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x187,
                           (String *)&local_58,0,1);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
          CowData<char32_t>::_unref(local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (*(long *)(this + 0x2a8) == 0) goto LAB_00105c38;
          lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
          if (lVar4 <= lVar6) goto LAB_00105c3b;
          goto LAB_00105ba2;
        }
        iVar3 = Skeleton2D::get_bone_count();
        if (iVar3 <= param_2) {
          iVar3 = Skeleton2D::get_bone_count();
          _err_print_index_error
                    ("set_ccdik_joint_bone_index",
                     "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x182,
                     (long)param_2,(long)iVar3,"p_bone_idx","stack->skeleton->get_bone_count()",
                     "Passed-in Bone index is out of range!",false,false);
          goto LAB_00105c0f;
        }
        if (*(long *)(this + 0x2a8) == 0) {
LAB_00105c38:
          lVar4 = 0;
LAB_00105c3b:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar4,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
        if (lVar4 <= lVar6) goto LAB_00105c3b;
        this_00 = (CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8);
        lVar5 = lVar6 * 0x28;
        CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
        *(int *)(*(long *)(this + 0x2a8) + lVar5) = param_2;
        lVar4 = Skeleton2D::get_bone((int)*(undefined8 *)(*(long *)(this + 0x240) + 0x240));
        uVar1 = *(undefined8 *)(lVar4 + 0x60);
        if (*(long *)(this + 0x2a8) == 0) goto LAB_00105c38;
        lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
        if (lVar4 <= lVar6) goto LAB_00105c3b;
        CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
        *(undefined8 *)(*(long *)(this + 0x2a8) + 0x10 + lVar5) = uVar1;
        uVar1 = *(undefined8 *)(*(long *)(this + 0x240) + 0x240);
        Skeleton2D::get_bone((int)uVar1);
        Node::get_path_to((Node *)&local_58,SUB81(uVar1,0));
        if (*(long *)(this + 0x2a8) == 0) goto LAB_00105c38;
        lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
        if (lVar4 <= lVar6) goto LAB_00105c3b;
        CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
        NodePath::operator=((NodePath *)(lVar5 + *(long *)(this + 0x2a8) + 8),(NodePath *)&local_58)
        ;
        NodePath::~NodePath((NodePath *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Object::notify_property_list_changed();
        return;
      }
      goto LAB_00105d25;
    }
    _err_print_error("set_ccdik_joint_bone_index",
                     "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x17e,
                     "Condition \"p_bone_idx < 0\" is true.",
                     "Bone index is out of range: The index is too low!",0,0);
  }
LAB_00105c0f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105d25:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::ccdik_joint_update_bone2d_cache(int) */

void __thiscall
SkeletonModification2DCCDIK::ccdik_joint_update_bone2d_cache
          (SkeletonModification2DCCDIK *this,int param_1)

{
  CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *this_00;
  NodePath *pNVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  CowData<char32_t> local_60 [8];
  String local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  lVar8 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar5 == 0) goto LAB_00105fc0;
    lVar5 = *(long *)(lVar5 + -8);
  }
  else if (lVar5 == 0) {
LAB_00105fc0:
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + -8);
    if (lVar8 < lVar5) {
      if (this[0x24d] == (SkeletonModification2DCCDIK)0x0) goto LAB_00105f08;
      if (*(long *)(this + 0x240) == 0) {
        if (ccdik_joint_update_bone2d_cache(int)::first_print != '\0') {
          _err_print_error("ccdik_joint_update_bone2d_cache",
                           "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x139,
                           "Cannot update CCDIK Bone2D cache: modification is not properly setup!",0
                           ,0);
          ccdik_joint_update_bone2d_cache(int)::first_print = '\0';
        }
        goto LAB_00105f08;
      }
      this_00 = (CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8);
      lVar10 = lVar8 * 0x28;
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
      lVar5 = *(long *)(this + 0x2a8);
      pNVar1 = *(NodePath **)(*(long *)(this + 0x240) + 0x240);
      *(undefined8 *)(lVar5 + lVar10 + 0x10) = 0;
      if ((pNVar1 == (NodePath *)0x0) || (((byte)pNVar1[0x2fa] & 0x40) == 0)) goto LAB_00105f08;
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + -8);
        if (lVar5 <= lVar8) goto LAB_00105fcb;
        cVar3 = Node::has_node(pNVar1);
        if (cVar3 == '\0') goto LAB_00105f08;
        if (*(long *)(this + 0x2a8) != 0) {
          lVar5 = *(long *)(*(long *)(this + 0x2a8) + -8);
          if (lVar5 <= lVar8) goto LAB_00105fcb;
          lVar5 = Node::get_node(*(NodePath **)(*(long *)(this + 0x240) + 0x240));
          if ((lVar5 == 0) || (*(long *)(*(long *)(this + 0x240) + 0x240) == lVar5)) {
            local_50 = 0;
            String::parse_latin1
                      ((String *)&local_50,
                       " Bone2D cache: node is this modification\'s skeleton or cannot be found!");
            itos((long)local_60);
            operator+((char *)local_58,(String *)"Cannot update CCDIK joint ");
            String::operator+(local_48,local_58);
            pcVar6 = "Condition \"!node || stack->skeleton == node\" is true.";
            uVar7 = 0x143;
          }
          else {
            if ((*(byte *)(lVar5 + 0x2fa) & 0x40) != 0) {
              uVar7 = *(undefined8 *)(lVar5 + 0x60);
              if (*(long *)(this + 0x2a8) != 0) {
                lVar9 = *(long *)(*(long *)(this + 0x2a8) + -8);
                if (lVar9 <= lVar8) goto LAB_001060b8;
                CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
                *(undefined8 *)(*(long *)(this + 0x2a8) + 0x10 + lVar10) = uVar7;
                lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&Bone2D::typeinfo,0);
                if (lVar5 == 0) {
                  local_50 = 0;
                  String::parse_latin1
                            ((String *)&local_50,
                             " Bone2D cache: Nodepath to Bone2D is not a Bone2D node!");
                  itos((long)local_60);
                  operator+((char *)local_58,(String *)"CCDIK joint ");
                  String::operator+(local_48,local_58);
                  pcVar6 = "Method/function failed.";
                  uVar7 = 0x14d;
                  goto LAB_0010607b;
                }
                uVar4 = Bone2D::get_index_in_skeleton();
                if (*(long *)(this + 0x2a8) != 0) {
                  lVar9 = *(long *)(*(long *)(this + 0x2a8) + -8);
                  if (lVar8 < lVar9) {
                    CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                              (this_00);
                    *(undefined4 *)(*(long *)(this + 0x2a8) + lVar10) = uVar4;
                    goto LAB_00105f08;
                  }
                  goto LAB_001060b8;
                }
              }
              lVar9 = 0;
LAB_001060b8:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar9,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            local_50 = 0;
            String::parse_latin1
                      ((String *)&local_50," Bone2D cache: node is not in the scene tree!");
            itos((long)local_60);
            operator+((char *)local_58,(String *)"Cannot update CCDIK joint ");
            String::operator+(local_48,local_58);
            pcVar6 = "Condition \"!node->is_inside_tree()\" is true.";
            uVar7 = 0x145;
          }
LAB_0010607b:
          _err_print_error("ccdik_joint_update_bone2d_cache",
                           "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",uVar7,
                           pcVar6,(CowData<char32_t> *)local_48,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
          CowData<char32_t>::_unref(local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          goto LAB_00105f08;
        }
      }
      lVar5 = 0;
LAB_00105fcb:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  _err_print_index_error
            ("ccdik_joint_update_bone2d_cache",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x136,lVar8,lVar5,
             "p_joint_idx","ccdik_data_chain.size()",
             "Cannot update bone2d cache: joint index out of range!",false,false);
LAB_00105f08:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::set_ccdik_joint_bone2d_node(int, NodePath const&) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_joint_bone2d_node
          (SkeletonModification2DCCDIK *this,int param_1,NodePath *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)param_1;
  lVar1 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + -8);
      goto LAB_00106279;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar1) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
      NodePath::operator=((NodePath *)(*(long *)(this + 0x2a8) + 8 + lVar2 * 0x28),param_2);
      ccdik_joint_update_bone2d_cache(this,param_1);
      Object::notify_property_list_changed();
      return;
    }
    goto LAB_00106279;
  }
  lVar1 = 0;
LAB_00106279:
  _err_print_index_error
            ("set_ccdik_joint_bone2d_node",
             "scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x170,lVar2,lVar1,
             "p_joint_idx","ccdik_data_chain.size()","CCDIK joint out of range!",false,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkeletonModification2DCCDIK::_set(StringName const&, Variant const&) */

undefined8 __thiscall
SkeletonModification2DCCDIK::_set
          (SkeletonModification2DCCDIK *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 local_68;
  String local_60 [8];
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar6 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == 0) {
    local_68 = 0;
  }
  else {
    __s = *(char **)(lVar6 + 8);
    local_68 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 0x10));
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  cVar1 = String::begins_with((char *)&local_68);
  if (cVar1 == '\0') {
    cVar1 = String::begins_with((char *)&local_68);
    if (cVar1 == '\0') {
      uVar5 = 0;
      goto LAB_0010640f;
    }
    Variant::operator_cast_to_bool(param_2);
    SkeletonModification2D::set_editor_draw_gizmo(SUB81(this,0));
LAB_0010640a:
    uVar5 = 1;
    goto LAB_0010640f;
  }
  iVar4 = (int)(CowData<char32_t> *)&local_68;
  String::get_slicec((wchar32)(CowData<char32_t> *)&local_58,iVar4);
  iVar3 = String::to_int();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  String::get_slicec((wchar32)local_60,iVar4);
  if (iVar3 < 0) {
    if (*(long *)(this + 0x2a8) == 0) goto LAB_001065f0;
    lVar6 = *(long *)(*(long *)(this + 0x2a8) + -8);
LAB_00106537:
    _err_print_index_error
              ("_set","scene/resources/2d/skeleton/skeleton_modification_2d_ccdik.cpp",0x28,
               (long)iVar3,lVar6,"which","ccdik_data_chain.size()","",false,false);
  }
  else {
    if (*(long *)(this + 0x2a8) == 0) {
LAB_001065f0:
      lVar6 = 0;
      goto LAB_00106537;
    }
    lVar6 = *(long *)(*(long *)(this + 0x2a8) + -8);
    if (lVar6 <= iVar3) goto LAB_00106537;
    cVar1 = String::operator==(local_60,"bone2d_node");
    if (cVar1 != '\0') {
      Variant::operator_cast_to_NodePath((Variant *)&local_58);
      set_ccdik_joint_bone2d_node(this,iVar3,(NodePath *)&local_58);
      NodePath::~NodePath((NodePath *)&local_58);
LAB_00106402:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
      goto LAB_0010640a;
    }
    cVar1 = String::operator==(local_60,"bone_index");
    if (cVar1 != '\0') {
      iVar4 = Variant::operator_cast_to_int(param_2);
      set_ccdik_joint_bone_index(this,iVar3,iVar4);
      goto LAB_00106402;
    }
    cVar1 = String::operator==(local_60,"rotate_from_joint");
    if (cVar1 != '\0') {
      bVar2 = Variant::operator_cast_to_bool(param_2);
      set_ccdik_joint_rotate_from_joint(this,iVar3,bVar2);
      goto LAB_00106402;
    }
    cVar1 = String::operator==(local_60,"enable_constraint");
    if (cVar1 != '\0') {
      bVar2 = Variant::operator_cast_to_bool(param_2);
      set_ccdik_joint_enable_constraint(this,iVar3,bVar2);
      goto LAB_00106402;
    }
    cVar1 = String::operator==(local_60,"constraint_angle_min");
    if (cVar1 != '\0') {
      fVar7 = Variant::operator_cast_to_float(param_2);
      set_ccdik_joint_constraint_angle_min(this,iVar3,fVar7 * __LC119);
      goto LAB_00106402;
    }
    cVar1 = String::operator==(local_60,"constraint_angle_max");
    if (cVar1 != '\0') {
      fVar7 = Variant::operator_cast_to_float(param_2);
      set_ccdik_joint_constraint_angle_max(this,iVar3,fVar7 * __LC119);
      goto LAB_00106402;
    }
    cVar1 = String::operator==(local_60,"constraint_angle_invert");
    if (cVar1 != '\0') {
      bVar2 = Variant::operator_cast_to_bool(param_2);
      set_ccdik_joint_constraint_angle_invert(this,iVar3,bVar2);
      goto LAB_00106402;
    }
    cVar1 = String::operator==(local_60,"constraint_in_localspace");
    if (cVar1 != '\0') {
      bVar2 = Variant::operator_cast_to_bool(param_2);
      set_ccdik_joint_constraint_in_localspace(this,iVar3,bVar2);
      goto LAB_00106402;
    }
    cVar1 = String::begins_with((char *)local_60);
    if (cVar1 != '\0') {
      bVar2 = Variant::operator_cast_to_bool(param_2);
      set_ccdik_joint_editor_draw_gizmo(this,iVar3,bVar2);
      goto LAB_00106402;
    }
  }
  uVar5 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010640f:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::~SkeletonModification2DCCDIK() */

void __thiscall
SkeletonModification2DCCDIK::~SkeletonModification2DCCDIK(SkeletonModification2DCCDIK *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00112270;
  NodePath::~NodePath((NodePath *)(this + 0x2c0));
  NodePath::~NodePath((NodePath *)(this + 0x2b0));
  CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_unref
            ((CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8));
  bVar1 = StringName::configured != '\0';
  *(code **)this = SkeletonModificationStack2D::set_editor_gizmos_dirty;
  if (bVar1) {
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106771;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106771;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_00106771:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2d0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkeletonModification2DCCDIK::set_ccdik_data_chain_length(int) */

void __thiscall
SkeletonModification2DCCDIK::set_ccdik_data_chain_length
          (SkeletonModification2DCCDIK *this,int param_1)

{
  CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  uVar12 = (ulong)param_1;
  if ((long)uVar12 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    goto LAB_00106908;
  }
  this_00 = (CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *)(this + 0x2a8);
  uVar15 = uVar12;
  if (*(long *)(this + 0x2a8) == 0) {
    if (uVar12 == 0) goto LAB_00106908;
    uVar13 = 0;
    CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
LAB_001069b4:
    uVar9 = uVar12 * 0x28 - 1;
    uVar9 = uVar9 >> 1 | uVar9;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = uVar9 | uVar9 >> 0x10;
    lVar10 = (uVar9 | uVar9 >> 0x20) + 1;
    if ((long)uVar13 < (long)uVar12) {
LAB_00106a10:
      if (uVar13 == 0) {
        puVar8 = (undefined8 *)Memory::alloc_static(lVar10 + 0x10,false);
        if (puVar8 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          goto LAB_00106908;
        }
        puVar11 = puVar8 + 2;
        *puVar8 = 1;
        puVar8[1] = 0;
        *(undefined8 **)(this + 0x2a8) = puVar11;
        lVar10 = 0;
      }
      else {
        iVar4 = CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_realloc(this_00,lVar10);
        if (iVar4 != 0) goto LAB_00106908;
LAB_00106891:
        puVar11 = *(undefined8 **)(this + 0x2a8);
        if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar10 = puVar11[-1];
      }
      uVar3 = _LC124;
      uVar2 = _LC123;
      if (lVar10 < (long)uVar12) {
        puVar8 = puVar11 + lVar10 * 5;
        do {
          *(undefined8 *)((long)puVar8 + 0x1c) = uVar2;
          puVar6 = puVar8 + 5;
          *(undefined4 *)puVar8 = 0xffffffff;
          puVar8[1] = 0;
          puVar8[2] = 0;
          *(undefined2 *)(puVar8 + 3) = 0;
          *(undefined2 *)((long)puVar8 + 0x24) = uVar3;
          *(undefined1 *)((long)puVar8 + 0x26) = 1;
          puVar8 = puVar6;
        } while (puVar11 + uVar12 * 5 != puVar6);
      }
      puVar11[-1] = uVar12;
      goto LAB_00106908;
    }
    lVar14 = 0;
  }
  else {
    uVar13 = *(ulong *)(*(long *)(this + 0x2a8) + -8);
    if (uVar12 == uVar13) goto LAB_00106908;
    if (uVar12 == 0) {
      CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_unref(this_00);
      goto LAB_00106908;
    }
    CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(this_00);
    uVar9 = uVar12 * 0x28 - 1;
    uVar9 = uVar9 >> 1 | uVar9;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = uVar9 >> 0x10 | uVar9;
    uVar9 = uVar9 >> 0x20 | uVar9;
    lVar10 = uVar9 + 1;
    if (uVar13 * 0x28 == 0) goto LAB_001069b4;
    uVar5 = uVar13 * 0x28 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = uVar5 | uVar5 >> 0x20;
    if ((long)uVar13 < (long)uVar12) {
      if (uVar5 != uVar9) goto LAB_00106a10;
      goto LAB_00106891;
    }
    lVar14 = uVar5 + 1;
  }
  while( true ) {
    lVar7 = *(long *)(this + 0x2a8);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(ulong *)(lVar7 + -8) <= uVar15) break;
    NodePath::~NodePath((NodePath *)(lVar7 + 8 + uVar15 * 0x28));
    uVar15 = uVar15 + 1;
  }
  if (lVar10 != lVar14) {
    iVar4 = CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_realloc(this_00,lVar10);
    if (iVar4 != 0) goto LAB_00106908;
    lVar7 = *(long *)(this + 0x2a8);
    if (lVar7 == 0) {
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(ulong *)(lVar7 + -8) = uVar12;
LAB_00106908:
  Object::notify_property_list_changed();
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



/* SkeletonModification2DCCDIK::is_class_ptr(void*) const */

uint __thiscall
SkeletonModification2DCCDIK::is_class_ptr(SkeletonModification2DCCDIK *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &SkeletonModification2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1129,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SkeletonModification2DCCDIK::_validate_propertyv(PropertyInfo&) const */

void SkeletonModification2DCCDIK::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SkeletonModification2DCCDIK::_property_can_revertv(StringName const&) const */

undefined8 SkeletonModification2DCCDIK::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SkeletonModification2DCCDIK::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SkeletonModification2DCCDIK::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SkeletonModification2DCCDIK::_notificationv(int, bool) */

void SkeletonModification2DCCDIK::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<float, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,int>::_gen_argument_type(MethodBindTRC<float,int> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<float,int>::get_argument_meta(MethodBindTRC<float,int> *this,int param_1)

{
  if (-1 < param_1) {
    return -(param_1 == 0) & 3;
  }
  return 9;
}



/* MethodBindT<int, float>::_gen_argument_type(int) const */

int __thiscall MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<int, float>::get_argument_meta(int) const */

char __thiscall MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (param_1 != 0) {
    cVar1 = (param_1 == 1) * '\t';
  }
  return cVar1;
}



/* MethodBindTRC<bool, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this,int param_1)

{
  return (param_1 == 0) + '\x01';
}



/* MethodBindTRC<bool, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, bool>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<int, bool>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int, int>::get_argument_meta(int) const */

char __thiscall MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this,int param_1)

{
  return (param_1 < 1) * '\x03';
}



/* MethodBindT<int, int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int,int>::_gen_argument_type(MethodBindT<int,int> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<int, int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int,int>::get_argument_meta(MethodBindT<int,int> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* MethodBindTRC<NodePath, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<NodePath,int>::_gen_argument_type(MethodBindTRC<NodePath,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x16;
}



/* MethodBindTRC<NodePath, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<NodePath,int>::get_argument_meta(MethodBindTRC<NodePath,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, NodePath const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,NodePath_const&>::_gen_argument_type
          (MethodBindT<int,NodePath_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffec) + 0x16;
  }
  return iVar1;
}



/* MethodBindT<int, NodePath const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,NodePath_const&>::get_argument_meta
          (MethodBindT<int,NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
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



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<NodePath>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<NodePath>::_gen_argument_type(int param_1)

{
  return 0x16;
}



/* MethodBindTRC<NodePath>::get_argument_meta(int) const */

undefined8 MethodBindTRC<NodePath>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x16;
}



/* MethodBindT<NodePath const&>::get_argument_meta(int) const */

undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112460;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112460;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001124c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001124c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112520;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112520;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112580;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112580;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, NodePath const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001125e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, NodePath const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001125e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112640;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112640;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001126a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001126a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112700;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112700;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112820;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112820;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112880;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112880;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112760;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112760;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001127c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001127c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
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



/* SkeletonModification2DCCDIK::_get_class_namev() const */

undefined8 * SkeletonModification2DCCDIK::_get_class_namev(void)

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
LAB_00107f73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SkeletonModification2DCCDIK"
                );
      goto LAB_00107fde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SkeletonModification2DCCDIK");
LAB_00107fde:
  return &_get_class_namev()::_class_name_static;
}



/* SkeletonModification2DCCDIK::get_class() const */

void SkeletonModification2DCCDIK::get_class(void)

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
  local_48 = &_LC8;
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
      goto joined_r0x0010822c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010822c:
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



/* MethodBindTRC<NodePath>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x16;
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
      goto joined_r0x001083ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001083ac:
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
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



/* SkeletonModification2DCCDIK::_getv(StringName const&, Variant&) const */

void __thiscall
SkeletonModification2DCCDIK::_getv
          (SkeletonModification2DCCDIK *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001086ef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_001086ef:
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
    if (cVar6 != '\0') goto LAB_001087a3;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_0010887b;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_0010887b:
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
      if (cVar6 != '\0') goto LAB_001087a3;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
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
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_001087a3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_001089ae;
    }
  }
LAB_001087a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001089ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DCCDIK::is_class(String const&) const */

undefined8 __thiscall
SkeletonModification2DCCDIK::is_class(SkeletonModification2DCCDIK *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00108a3f;
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
LAB_00108a3f:
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
    if (cVar6 != '\0') goto LAB_00108af3;
  }
  cVar6 = String::operator==(param_1,"SkeletonModification2DCCDIK");
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
              if (lVar5 == 0) goto LAB_00108bb3;
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
LAB_00108bb3:
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
      if (cVar6 != '\0') goto LAB_00108af3;
    }
    cVar6 = String::operator==(param_1,"SkeletonModification2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00108c5c;
    }
  }
LAB_00108af3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108c5c:
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
LAB_00108de8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108de8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00108e05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00108e05:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_001091ad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001091ad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001091cf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001091cf:
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



/* SkeletonModification2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SkeletonModification2D::_get_property_listv(SkeletonModification2D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  local_78 = "SkeletonModification2D";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SkeletonModification2D";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_0010959d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010959d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001095bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001095bf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SkeletonModification2D",false);
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



/* SkeletonModification2DCCDIK::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
SkeletonModification2DCCDIK::_get_property_listv
          (SkeletonModification2DCCDIK *this,List *param_1,bool param_2)

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
    SkeletonModification2D::_get_property_listv((SkeletonModification2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SkeletonModification2DCCDIK";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SkeletonModification2DCCDIK";
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
  if (local_90 == 0) {
LAB_0010998d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010998d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001099af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001099af:
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
  StringName::StringName((StringName *)&local_78,"SkeletonModification2DCCDIK",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SkeletonModification2D::_get_property_listv((SkeletonModification2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, NodePath const&>(void
   (SkeletonModification2DCCDIK::*)(NodePath const&)) */

MethodBind *
create_method_bind<SkeletonModification2DCCDIK,NodePath_const&>(_func_void_NodePath_ptr *param_1)

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
  *(_func_void_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112460;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, NodePath>(NodePath
   (SkeletonModification2DCCDIK::*)() const) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,NodePath>(_func_NodePath *param_1)

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
  *(_func_NodePath **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001124c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int>(void
   (SkeletonModification2DCCDIK::*)(int)) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112520;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int>(int
   (SkeletonModification2DCCDIK::*)()) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00112580;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int, NodePath const&>(void
   (SkeletonModification2DCCDIK::*)(int, NodePath const&)) */

MethodBind *
create_method_bind<SkeletonModification2DCCDIK,int,NodePath_const&>
          (_func_void_int_NodePath_ptr *param_1)

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
  *(_func_void_int_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001125e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, NodePath, int>(NodePath
   (SkeletonModification2DCCDIK::*)(int) const) */

MethodBind *
create_method_bind<SkeletonModification2DCCDIK,NodePath,int>(_func_NodePath_int *param_1)

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
  *(_func_NodePath_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112640;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int, int>(void
   (SkeletonModification2DCCDIK::*)(int, int)) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,int,int>(_func_void_int_int *param_1)

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
  *(_func_void_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001126a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int, int>(int
   (SkeletonModification2DCCDIK::*)(int) const) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,int,int>(_func_int_int *param_1)

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
  *(_func_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112700;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int, bool>(void
   (SkeletonModification2DCCDIK::*)(int, bool)) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,int,bool>(_func_void_int_bool *param_1)

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
  *(_func_void_int_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112760;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, bool, int>(bool
   (SkeletonModification2DCCDIK::*)(int) const) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,bool,int>(_func_bool_int *param_1)

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
  *(_func_bool_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001127c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, int, float>(void
   (SkeletonModification2DCCDIK::*)(int, float)) */

MethodBind *
create_method_bind<SkeletonModification2DCCDIK,int,float>(_func_void_int_float *param_1)

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
  *(_func_void_int_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112820;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* MethodBind* create_method_bind<SkeletonModification2DCCDIK, float, int>(float
   (SkeletonModification2DCCDIK::*)(int) const) */

MethodBind * create_method_bind<SkeletonModification2DCCDIK,float,int>(_func_float_int *param_1)

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
  *(_func_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112880;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DCCDIK";
  local_30 = 0x1b;
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



/* SkeletonModification2DCCDIK::_bind_methods() [clone .cold] */

void SkeletonModification2DCCDIK::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SkeletonModification2DCCDIK::set_ccdik_data_chain_length(int) [clone .cold] */

void SkeletonModification2DCCDIK::set_ccdik_data_chain_length(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SkeletonModification2DCCDIK::_initialize_classv() */

void SkeletonModification2DCCDIK::_initialize_classv(void)

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
    if (SkeletonModification2D::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00117008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
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
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "SkeletonModification2D";
      local_70 = 0;
      local_50 = 0x16;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        SkeletonModification2D::_bind_methods();
      }
      SkeletonModification2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "SkeletonModification2D";
    local_68 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SkeletonModification2DCCDIK";
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



/* CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_unref() */

void __thiscall
CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_unref
          (CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  NodePath *this_00;
  
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
        lVar5 = 0;
        this_00 = (NodePath *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          NodePath::~NodePath(this_00);
          this_00 = this_00 + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* SkeletonModification2DCCDIK::_setv(StringName const&, Variant const&) */

void __thiscall
SkeletonModification2DCCDIK::_setv
          (SkeletonModification2DCCDIK *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_realloc(long) */

undefined8 __thiscall
CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D>::_realloc
          (CowData<SkeletonModification2DCCDIK::CCDIK_Joint_Data2D> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0010b168) */
/* WARNING: Removing unreachable block (ram,0x0010b2fd) */
/* WARNING: Removing unreachable block (ram,0x0010b309) */
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



/* MethodBindTRC<float, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float,int>::validated_call
          (MethodBindTRC<float,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010b48e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0010b48e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,int>::ptrcall
          (MethodBindTRC<float,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010b66c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar3;
LAB_0010b66c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_0010b9e1;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0010b869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010b9e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_0010bbd1;
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
                    /* WARNING: Load size is inaccurate */
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010ba57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010bbd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool,int>::validated_call
          (MethodBindTRC<bool,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010bc28;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  param_3[8] = VVar1;
LAB_0010bc28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool,int>::ptrcall
          (MethodBindTRC<bool,int> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010be07;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined1 *)param_3 = uVar1;
LAB_0010be07:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010c181;
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
                    /* WARNING: Could not recover jumptable at 0x0010c006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010c181:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010c371;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010c1fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_0010c371:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int>::validated_call
          (MethodBindTRC<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010c3ca;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010c3ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int>::ptrcall
          (MethodBindTRC<int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010c5a8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar1;
LAB_0010c5a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010c919;
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
                    /* WARNING: Could not recover jumptable at 0x0010c7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010c919:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010caf9;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010c981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_0010caf9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath,int>::validated_call
          (MethodBindTRC<NodePath,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cb5f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  NodePath::operator=((NodePath *)(param_3 + 8),(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010cb5f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath,int>::ptrcall
          (MethodBindTRC<NodePath,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
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
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cd4d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010cd4d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,NodePath_const&>::validated_call
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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010d09f;
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
                    /* WARNING: Could not recover jumptable at 0x0010cf49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0010d09f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010d289;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010d112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010d289:
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d3e0;
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
LAB_0010d3e0:
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
      goto LAB_0010d5f4;
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
LAB_0010d5f4:
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
      goto LAB_0010d7a3;
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
LAB_0010d7a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010dae1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010dae1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010dcc1;
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
                    /* WARNING: Could not recover jumptable at 0x0010db4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010dcc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<NodePath>::call
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dda0;
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
      (*(code *)pVVar2)((NodePath *)&local_58);
      Variant::Variant((Variant *)local_48,(NodePath *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      NodePath::~NodePath((NodePath *)&local_58);
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
LAB_0010dda0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath>::validated_call
          (MethodBindTRC<NodePath> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10b358;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dfc9;
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
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)(param_3 + 8),(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010dfc9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath>::ptrcall
          (MethodBindTRC<NodePath> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10b358;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e19a;
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
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010e19a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<NodePath_const&>::validated_call
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
      goto LAB_0010e4e1;
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
                    /* WARNING: Could not recover jumptable at 0x0010e36d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010e4e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010e6c1;
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
                    /* WARNING: Could not recover jumptable at 0x0010e549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010e6c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<NodePath,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e810;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010e860;
LAB_0010e850:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e860:
        uVar7 = 4;
        goto LAB_0010e805;
      }
      if (in_R8D == 1) goto LAB_0010e850;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((NodePath *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(NodePath *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    NodePath::~NodePath((NodePath *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010e805:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010e810:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eba0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ebe0;
LAB_0010ebd0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ebe0:
        uVar7 = 4;
        goto LAB_0010eb95;
      }
      if (in_R8D == 1) goto LAB_0010ebd0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010eb95:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010eba0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  float fVar13;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ef18;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ef60;
LAB_0010ef50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ef60:
        uVar7 = 4;
        goto LAB_0010ef0d;
      }
      if (in_R8D == 1) goto LAB_0010ef50;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    fVar13 = (float)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,fVar13);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0010ef0d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010ef18:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
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
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f2a0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010f2e0;
LAB_0010f2d0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f2e0:
        uVar8 = 4;
        goto LAB_0010f295;
      }
      if (in_R8D == 1) goto LAB_0010f2d0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    bVar6 = (bool)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,bVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar8 = 3;
LAB_0010f295:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010f2a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<NodePath_const&>::call
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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f690;
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
      if (in_R8D != 1) goto LAB_0010f6e0;
LAB_0010f6d0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010f6e0:
        uVar6 = 4;
        goto LAB_0010f685;
      }
      if (in_R8D == 1) goto LAB_0010f6d0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x16);
    uVar4 = _LC142;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_NodePath((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    NodePath::~NodePath((NodePath *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010f685:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010f690:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,float>
               (__UnexistingClass *param_1,_func_void_int_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0010f9d5;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0010fa0d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0010f935;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0010fa28;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010fa0d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010fa28:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0010f935:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC143;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC139;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010f9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_0010f9d5:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010fac6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,float>
            (p_Var2,(_func_void_int_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010fac6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,bool>
               (__UnexistingClass *param_1,_func_void_int_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0010fdbd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0010fded:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0010fd25;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0010fe08;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010fded;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010fe08:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_0010fd25:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,1);
      uVar4 = _LC144;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_bool(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC139;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0010fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),SUB41(iVar6,0));
      return;
    }
  }
  uVar7 = 4;
LAB_0010fdbd:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010fea6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,bool>
            (p_Var2,(_func_void_int_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010fea6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,int,int>
               (__UnexistingClass *param_1,_func_void_int_int *param_2,Variant **param_3,int param_4
               ,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_0011019d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_001101cd:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00110105;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001101e8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001101cd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001101e8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00110105:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_int_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC145;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC139;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011018b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((int)(param_1 + (long)param_3),iVar6);
      return;
    }
  }
  uVar7 = 4;
LAB_0011019d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00110286;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,int>
            (p_Var2,(_func_void_int_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110286:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int, NodePath const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, NodePath const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,NodePath_const&>
               (__UnexistingClass *param_1,_func_void_int_NodePath_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00110590;
      this = (Variant *)*plVar8;
LAB_001105dd:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_00110590:
        uVar7 = 4;
        goto LAB_00110595;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_001105f8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_001105dd;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_001105f8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_NodePath_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
      ;
    }
    cVar5 = Variant::can_convert_strict(*puVar12,0x16);
    uVar4 = _LC146;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_NodePath(aVStack_48);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC139;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(NodePath *)iVar6);
    NodePath::~NodePath((NodePath *)aVStack_48);
  }
  else {
    uVar7 = 3;
LAB_00110595:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,NodePath_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00110696;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,NodePath_const&>
            (p_Var2,(_func_void_int_NodePath_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110696:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011095d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001109c0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001109c0:
      uVar6 = 4;
LAB_0011095d:
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
      goto LAB_001108db;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001108db:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC139;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00110936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC138,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00110a26;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110a26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00110c27;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110d25:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110d25;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00110c27:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<int>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00110f78;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x16;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011105f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011105f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00110f78:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111178;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011125f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011125f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111178:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111378;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 3;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011145f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011145f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111378:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111578;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011165f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011165f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111578:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, float>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_001117c6;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001118c8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001118c8;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001117c6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindT<int, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00111a36;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC8;
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
LAB_00111b38:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111b38;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00111a36:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* void call_get_argument_type_info_helper<NodePath const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<NodePath_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00111c67;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111d65:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111d65;
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
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00111c67:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,NodePath_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<int>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<NodePath_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, bool>::~MethodBindT() */

void __thiscall MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, float>::~MethodBindT() */

void __thiscall MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, int>::~MethodBindT() */

void __thiscall MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, NodePath const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<NodePath>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath>::~MethodBindTRC(MethodBindTRC<NodePath> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<NodePath const&>::~MethodBindT() */

void __thiscall MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this)

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


