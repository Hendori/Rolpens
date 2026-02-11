
/* Bone2D::get_rest() const */

void Bone2D::get_rest(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x590);
  uVar2 = *(undefined8 *)(in_RSI + 0x598);
  in_RDI[2] = *(undefined8 *)(in_RSI + 0x5a0);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  return;
}



/* Bone2D::get_autocalculate_length_and_angle() const */

Bone2D __thiscall Bone2D::get_autocalculate_length_and_angle(Bone2D *this)

{
  return this[0x5a8];
}



/* Bone2D::get_length() const */

undefined4 __thiscall Bone2D::get_length(Bone2D *this)

{
  return *(undefined4 *)(this + 0x5ac);
}



/* Bone2D::get_bone_angle() const */

undefined4 __thiscall Bone2D::get_bone_angle(Bone2D *this)

{
  return *(undefined4 *)(this + 0x5b0);
}



/* Skeleton2D::get_skeleton() const */

undefined8 __thiscall Skeleton2D::get_skeleton(Skeleton2D *this)

{
  return *(undefined8 *)(this + 0x598);
}



/* Bone2D::set_length(float) */

void __thiscall Bone2D::set_length(Bone2D *this,float param_1)

{
  *(float *)(this + 0x5ac) = param_1;
  CanvasItem::queue_redraw();
  return;
}



/* Bone2D::set_bone_angle(float) */

void __thiscall Bone2D::set_bone_angle(Bone2D *this,float param_1)

{
  *(float *)(this + 0x5b0) = param_1;
  CanvasItem::queue_redraw();
  return;
}



/* Bone2D::apply_rest() */

void __thiscall Bone2D::apply_rest(Bone2D *this)

{
  Node2D::set_transform(this);
  return;
}



/* Skeleton2D::set_bone_local_pose_override(int, Transform2D, float, bool) */

void Skeleton2D::set_bone_local_pose_override
               (undefined4 param_1,long param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = *(uint *)(param_2 + 0x580);
  if ((-1 < (int)param_3) && ((int)param_3 < (int)uVar1)) {
    if (param_3 < uVar1) {
      lVar3 = (long)(int)param_3 * 0x60 + *(long *)(param_2 + 0x588);
      *(undefined8 *)(lVar3 + 0x4c) = in_stack_00000018;
      *(undefined1 *)(lVar3 + 0x58) = param_4;
      *(undefined8 *)(lVar3 + 0x3c) = in_stack_00000008;
      *(undefined8 *)(lVar3 + 0x44) = in_stack_00000010;
      *(undefined4 *)(lVar3 + 0x54) = param_1;
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)param_3,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("set_bone_local_pose_override","scene/2d/skeleton_2d.cpp",0x2e1,(long)(int)param_3,
             (long)(int)uVar1,"p_bone_idx","(int)bones.size()","Bone index is out of range!",false,
             false);
  return;
}



/* Skeleton2D::get_bone_local_pose_override(int) */

void Skeleton2D::get_bone_local_pose_override(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint in_EDX;
  long lVar5;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  uVar1 = *(uint *)(in_RSI + 0x580);
  if ((-1 < (int)in_EDX) && ((int)in_EDX < (int)uVar1)) {
    if (in_EDX < uVar1) {
      lVar5 = (long)(int)in_EDX * 0x60 + *(long *)(in_RSI + 0x588);
      uVar4 = *(undefined8 *)(lVar5 + 0x44);
      uVar2 = *(undefined8 *)(lVar5 + 0x4c);
      *puVar6 = *(undefined8 *)(lVar5 + 0x3c);
      puVar6[1] = uVar4;
      puVar6[2] = uVar2;
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(long)(int)in_EDX,(ulong)uVar1,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  _err_print_index_error
            ("get_bone_local_pose_override","scene/2d/skeleton_2d.cpp",0x2e8,(long)(int)in_EDX,
             (long)(int)uVar1,"p_bone_idx","(int)bones.size()","Bone index is out of range!",false,
             false);
  *puVar6 = 0x3f800000;
  puVar6[1] = 0x3f80000000000000;
  puVar6[2] = 0;
  return;
}



/* Skeleton2D::get_bone(int) */

undefined8 __thiscall Skeleton2D::get_bone(Skeleton2D *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  if (((byte)this[0x2fa] & 0x40) == 0) {
    _err_print_error("get_bone","scene/2d/skeleton_2d.cpp",0x270,
                     "Condition \"!is_inside_tree()\" is true. Returning: nullptr",0,0);
  }
  else {
    uVar1 = *(uint *)(this + 0x580);
    if ((-1 < param_1) && (param_1 < (int)uVar1)) {
      if ((uint)param_1 < uVar1) {
        return *(undefined8 *)((long)param_1 * 0x60 + *(long *)(this + 0x588));
      }
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,(long)param_1,(ulong)uVar1,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    _err_print_index_error
              ("get_bone","scene/2d/skeleton_2d.cpp",0x271,(long)param_1,(long)(int)uVar1,"p_idx",
               "(int)bones.size()","",false,false);
  }
  return 0;
}



/* Skeleton2D::execute_modifications(float, int) */

void __thiscall Skeleton2D::execute_modifications(Skeleton2D *this,float param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  StringName *pSVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  Skeleton2D *pSVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  pSVar9 = *(Skeleton2D **)(this + 0x5a0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar9 == (Skeleton2D *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010078e;
  }
  if (*(uint *)(this + 0x580) != 0) {
    plVar4 = *(long **)(this + 0x588);
    plVar5 = plVar4 + (ulong)*(uint *)(this + 0x580) * 0xc;
    do {
      lVar6 = *plVar4;
      plVar4 = plVar4 + 0xc;
      *(undefined1 *)(lVar6 + 0x5dc) = 0;
    } while (plVar4 != plVar5);
  }
  if (*(Skeleton2D **)(pSVar9 + 0x240) != this) {
    SkeletonModificationStack2D::set_skeleton(pSVar9);
    pSVar9 = *(Skeleton2D **)(this + 0x5a0);
  }
  SkeletonModificationStack2D::execute(param_1,(int)pSVar9);
  if (param_2 == 0) {
    if (*(int *)(this + 0x580) != 0) {
      uVar8 = 0;
      do {
        uVar7 = (uint)uVar8;
        lVar6 = uVar8 * 0x60;
        plVar4 = *(long **)(*(long *)(this + 0x588) + lVar6);
        if (*(float *)(*(long *)(this + 0x588) + lVar6 + 0x54) <= 0.0) {
          pcVar1 = *(code **)(*plVar4 + 0xb0);
          StringName::StringName((StringName *)&local_60,"_local_pose_override_enabled_",false);
          (*pcVar1)(plVar4,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          uVar10 = (ulong)*(uint *)(this + 0x580);
          if (*(uint *)(this + 0x580) <= uVar7) goto LAB_00100718;
          Node2D::set_transform(*(Transform2D **)(*(long *)(this + 0x588) + lVar6));
          uVar10 = (ulong)*(uint *)(this + 0x580);
        }
        else {
          pcVar1 = *(code **)(*plVar4 + 0xa8);
          Variant::Variant((Variant *)&local_58,true);
          StringName::StringName((StringName *)&local_60,"_local_pose_override_enabled_",false);
          (*pcVar1)(plVar4,(StringName *)&local_60,(Variant *)&local_58);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          uVar10 = (ulong)*(uint *)(this + 0x580);
          if (*(uint *)(this + 0x580) <= uVar7) {
LAB_00100718:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar8 & 0xffffffff,uVar10
                       ,"p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar2 = *(long *)(*(long *)(this + 0x588) + lVar6);
          local_58 = *(undefined8 *)(lVar2 + 0x5c4);
          uStack_50 = *(undefined8 *)(lVar2 + 0x5cc);
          local_48 = *(undefined8 *)(lVar2 + 0x5d4);
          Transform2D::interpolate_with
                    ((Transform2D *)&local_88,*(float *)(*(long *)(this + 0x588) + lVar6 + 0x54));
          uVar10 = (ulong)*(uint *)(this + 0x580);
          local_48 = local_78;
          local_58 = local_88;
          uStack_50 = uStack_80;
          if (*(uint *)(this + 0x580) <= uVar7) goto LAB_00100718;
          Node2D::set_transform(*(Transform2D **)(*(long *)(this + 0x588) + lVar6));
          uVar10 = (ulong)*(uint *)(this + 0x580);
          if (*(uint *)(this + 0x580) <= uVar7) goto LAB_00100718;
          pSVar3 = *(StringName **)(*(long *)(this + 0x588) + lVar6);
          Array::Array((Array *)&local_60);
          StringName::StringName((StringName *)&local_68,"force_update_transform",false);
          Node::propagate_call(pSVar3,(Array *)&local_68,SUB81((StringName *)&local_60,0));
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          Array::~Array((Array *)&local_60);
          uVar10 = (ulong)*(uint *)(this + 0x580);
          if (*(uint *)(this + 0x580) <= uVar7) goto LAB_00100718;
          if (*(char *)(lVar6 + *(long *)(this + 0x588) + 0x58) != '\0') {
            *(undefined4 *)(lVar6 + *(long *)(this + 0x588) + 0x54) = 0;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((uint)uVar8 < (uint)uVar10);
      goto LAB_00100637;
    }
  }
  else {
    uVar10 = (ulong)*(uint *)(this + 0x580);
LAB_00100637:
    if ((int)uVar10 != 0) {
      plVar4 = *(long **)(this + 0x588);
      plVar5 = plVar4 + uVar10 * 0xc;
      do {
        lVar6 = *plVar4;
        plVar4 = plVar4 + 0xc;
        *(undefined1 *)(lVar6 + 0x5dc) = 1;
      } while (plVar4 != plVar5);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(*(undefined8 *)(this + 0x5a0),0));
    return;
  }
LAB_0010078e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::~Bone2D() */

void __thiscall Bone2D::~Bone2D(Bone2D *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00116f90;
  if (*(long *)(this + 0x5b8) != 0) {
    lVar1 = RenderingServer::get_singleton();
    if (lVar1 == 0) {
      _err_print_error("~Bone2D","scene/2d/skeleton_2d.cpp",0x1fa,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
    }
    else {
      plVar2 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar2 + 0x11b0))(plVar2,*(undefined8 *)(this + 0x5b8));
    }
  }
  *(code **)this = Transform2D::operator*;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* Bone2D::~Bone2D() */

void __thiscall Bone2D::~Bone2D(Bone2D *this)

{
  ~Bone2D(this);
  operator_delete(this,0x5e0);
  return;
}



/* Skeleton2D::_update_transform() [clone .part.0] */

void __thiscall Skeleton2D::_update_transform(Skeleton2D *this)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  Transform2D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x591] = (Skeleton2D)0x0;
  if (*(int *)(this + 0x580) != 0) {
    uVar10 = 0;
    do {
      lVar11 = uVar10 * 0x60;
      iVar3 = *(int *)((undefined8 *)(*(long *)(this + 0x588) + lVar11) + 1);
      uVar9 = (uint)uVar10;
      if (iVar3 < (int)uVar9) {
        pcVar4 = *(code **)(**(long **)(*(long *)(this + 0x588) + lVar11) + 0x290);
        if (iVar3 < 0) {
          (*pcVar4)(&local_98);
          uVar12 = *(uint *)(this + 0x580);
          uVar8 = (ulong)uVar12;
          if (uVar9 < uVar12) {
            lVar5 = *(long *)(this + 0x588);
            puVar1 = (undefined8 *)(lVar5 + 0xc + lVar11);
            *puVar1 = local_98;
            puVar1[1] = uStack_90;
            *(undefined8 *)(lVar5 + 0x1c + lVar11) = local_88;
            goto LAB_001008f8;
          }
        }
        else {
          (*pcVar4)(local_58);
          uVar12 = *(uint *)(this + 0x580);
          uVar8 = (ulong)uVar12;
          if (uVar9 < uVar12) {
            uVar2 = *(uint *)(*(long *)(this + 0x588) + 8 + lVar11);
            uVar7 = (ulong)uVar2;
            if (uVar12 <= uVar2) goto LAB_00100972;
            Transform2D::operator*
                      ((Transform2D *)&local_78,
                       (Transform2D *)(*(long *)(this + 0x588) + 0xc + uVar7 * 0x60));
            uVar12 = *(uint *)(this + 0x580);
            uVar8 = (ulong)uVar12;
            if (uVar9 < uVar12) {
              lVar5 = *(long *)(this + 0x588);
              *(undefined8 *)(lVar5 + 0x1c + lVar11) = local_68;
              puVar1 = (undefined8 *)(lVar5 + 0xc + lVar11);
              *puVar1 = local_78;
              puVar1[1] = uStack_70;
              goto LAB_001008f8;
            }
          }
        }
        uVar7 = uVar10 & 0xffffffff;
LAB_00100972:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count"
                   ,"",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      _err_print_error("_update_transform","scene/2d/skeleton_2d.cpp",0x256,
                       "Condition \"bones[i].parent_index >= (int)i\" is true. Continuing.",0,0);
      uVar12 = *(uint *)(this + 0x580);
LAB_001008f8:
      uVar10 = uVar10 + 1;
    } while ((uint)uVar10 < uVar12);
    if (uVar12 != 0) {
      uVar10 = 0;
      do {
        Transform2D::operator*
                  (local_58,(Transform2D *)(uVar10 * 0x60 + *(long *)(this + 0x588) + 0xc));
        plVar6 = (long *)RenderingServer::get_singleton();
        uVar8 = uVar10 & 0xffffffff;
        uVar10 = uVar10 + 1;
        (**(code **)(*plVar6 + 0x4a8))(plVar6,*(undefined8 *)(this + 0x598),uVar8,local_58);
      } while ((uint)uVar10 < *(uint *)(this + 0x580));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<Skeleton2D::Bone, _DefaultComparator<Skeleton2D::Bone>, true>::adjust_heap(long, long,
   long, Skeleton2D::Bone, Skeleton2D::Bone*) const [clone .isra.0] */

void SortArray<Skeleton2D::Bone,_DefaultComparator<Skeleton2D::Bone>,true>::adjust_heap
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,Node *param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
               undefined1 param_18)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_c0;
  undefined7 uStack_5f;
  undefined1 local_58;
  undefined7 uStack_57;
  
  lVar8 = param_2 * 2 + 2;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_5f = (undefined7)((ulong)param_16 >> 8);
  local_58 = (undefined1)param_17;
  uStack_57 = (undefined7)((ulong)param_17 >> 8);
  local_c0 = param_2;
  if (lVar8 < param_3) {
    do {
      puVar5 = (undefined8 *)((lVar8 + -1 + param_1) * 0x60 + param_4);
      cVar3 = Node::is_greater_than((Node *)*puVar5);
      lVar6 = lVar8;
      lVar7 = lVar8 + -1;
      if (cVar3 == '\0') {
        lVar6 = lVar8 + 1;
        puVar5 = (undefined8 *)(param_4 + (param_1 + lVar8) * 0x60);
        lVar7 = lVar8;
      }
      uVar2 = puVar5[1];
      lVar8 = lVar6 * 2;
      puVar4 = (undefined8 *)((local_c0 + param_1) * 0x60 + param_4);
      *puVar4 = *puVar5;
      puVar4[1] = uVar2;
      uVar2 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar2;
      uVar2 = puVar5[5];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar2;
      uVar2 = puVar5[7];
      puVar4[6] = puVar5[6];
      puVar4[7] = uVar2;
      uVar2 = puVar5[9];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar2;
      uVar2 = *(undefined8 *)((long)puVar5 + 0x51);
      *(undefined8 *)((long)puVar4 + 0x49) = *(undefined8 *)((long)puVar5 + 0x49);
      *(undefined8 *)((long)puVar4 + 0x51) = uVar2;
      local_c0 = lVar7;
    } while (lVar8 < param_3);
    if (lVar8 == param_3) goto LAB_00100cf0;
  }
  else {
    puVar5 = (undefined8 *)((param_2 + param_1) * 0x60 + param_4);
    if (lVar8 != param_3) goto LAB_00100c73;
LAB_00100cf0:
    lVar7 = lVar8 + -1;
    puVar4 = (undefined8 *)((param_1 + lVar7) * 0x60 + param_4);
    uVar2 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar2;
    uVar2 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar2;
    uVar2 = puVar4[5];
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar2;
    uVar2 = puVar4[7];
    puVar5[6] = puVar4[6];
    puVar5[7] = uVar2;
    uVar2 = puVar4[9];
    puVar5[8] = puVar4[8];
    puVar5[9] = uVar2;
    uVar2 = *(undefined8 *)((long)puVar4 + 0x51);
    *(undefined8 *)((long)puVar5 + 0x49) = *(undefined8 *)((long)puVar4 + 0x49);
    *(undefined8 *)((long)puVar5 + 0x51) = uVar2;
    puVar5 = puVar4;
  }
  while (param_2 < lVar7) {
    lVar8 = (lVar7 + -1) / 2;
    puVar4 = (undefined8 *)((param_1 + lVar8) * 0x60 + param_4);
    puVar5 = (undefined8 *)((lVar7 + param_1) * 0x60 + param_4);
    cVar3 = Node::is_greater_than(param_7);
    if (cVar3 == '\0') break;
    uVar2 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar2;
    uVar2 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar2;
    uVar2 = puVar4[5];
    puVar5[4] = puVar4[4];
    puVar5[5] = uVar2;
    uVar2 = puVar4[7];
    puVar5[6] = puVar4[6];
    puVar5[7] = uVar2;
    uVar2 = puVar4[9];
    puVar5[8] = puVar4[8];
    puVar5[9] = uVar2;
    uVar2 = *(undefined8 *)((long)puVar4 + 0x51);
    *(undefined8 *)((long)puVar5 + 0x49) = *(undefined8 *)((long)puVar4 + 0x49);
    *(undefined8 *)((long)puVar5 + 0x51) = uVar2;
    puVar5 = puVar4;
    lVar7 = lVar8;
  }
LAB_00100c73:
  puVar5[2] = param_9;
  puVar5[3] = param_10;
  *puVar5 = param_7;
  puVar5[1] = param_8;
  puVar5[4] = param_11;
  puVar5[5] = param_12;
  puVar5[8] = param_15;
  puVar5[9] = param_16;
  puVar5[6] = param_13;
  puVar5[7] = param_14;
  *(ulong *)((long)puVar5 + 0x49) = CONCAT17(local_58,uStack_5f);
  *(ulong *)((long)puVar5 + 0x51) = CONCAT17(param_18,uStack_57);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<Skeleton2D::Bone, _DefaultComparator<Skeleton2D::Bone>, true>::introsort(long, long,
   Skeleton2D::Bone*, long) const [clone .isra.0] */

void SortArray<Skeleton2D::Bone,_DefaultComparator<Skeleton2D::Bone>,true>::introsort
               (long param_1,long param_2,Bone_conflict *param_3,long param_4)

{
  long lVar1;
  Node *pNVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  Bone_conflict *pBVar16;
  Bone_conflict *pBVar17;
  Bone_conflict *pBVar18;
  long lVar19;
  Bone_conflict *pBVar20;
  long lVar21;
  long in_FS_OFFSET;
  long local_e0;
  long local_c8;
  long local_c0;
  undefined7 uStack_5f;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  
  lVar19 = param_2 - param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar19) {
    local_e0 = param_2;
    if (param_4 != 0) {
      pBVar16 = param_3 + param_1 * 0x60;
      local_c8 = param_2;
      local_c0 = param_4;
LAB_00100e41:
      local_c0 = local_c0 + -1;
      pBVar17 = param_3 + ((lVar19 >> 1) + param_1) * 0x60;
      pBVar20 = param_3 + local_c8 * 0x60 + -0x60;
      cVar15 = Node::is_greater_than(*(Node **)pBVar17);
      if (cVar15 == '\0') {
        cVar15 = Node::is_greater_than(*(Node **)pBVar20);
        pBVar18 = pBVar16;
        if (cVar15 != '\0') goto LAB_00100eb0;
        cVar15 = Node::is_greater_than(*(Node **)pBVar20);
      }
      else {
        cVar15 = Node::is_greater_than(*(Node **)pBVar20);
        pBVar18 = pBVar17;
        if (cVar15 != '\0') goto LAB_00100eb0;
        cVar15 = Node::is_greater_than(*(Node **)pBVar20);
        pBVar17 = pBVar16;
      }
      pBVar18 = pBVar17;
      if (cVar15 != '\0') {
        pBVar18 = pBVar20;
      }
LAB_00100eb0:
      pNVar2 = *(Node **)pBVar18;
      local_e0 = param_1;
      lVar19 = local_c8;
      pBVar20 = pBVar16;
      do {
        cVar15 = Node::is_greater_than(pNVar2);
        if (cVar15 == '\0') {
LAB_00100ef7:
          lVar19 = lVar19 + -1;
          pBVar17 = param_3 + lVar19 * 0x60;
          while (cVar15 = Node::is_greater_than(*(Node **)pBVar17), cVar15 != '\0') {
            if (param_1 == lVar19) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar19 = lVar19 + -1;
            pBVar17 = pBVar17 + -0x60;
          }
          if (lVar19 <= local_e0) goto LAB_00101020;
          uVar4 = *(undefined8 *)(pBVar17 + 8);
          uVar5 = *(undefined8 *)pBVar20;
          uVar6 = *(undefined8 *)(pBVar20 + 8);
          uVar7 = *(undefined8 *)(pBVar20 + 0x10);
          uVar8 = *(undefined8 *)(pBVar20 + 0x18);
          *(undefined8 *)pBVar20 = *(undefined8 *)pBVar17;
          *(undefined8 *)(pBVar20 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pBVar17 + 0x18);
          uVar9 = *(undefined8 *)(pBVar20 + 0x20);
          uVar10 = *(undefined8 *)(pBVar20 + 0x28);
          local_58 = (undefined1)*(undefined8 *)(pBVar20 + 0x50);
          uStack_57 = (undefined7)((ulong)*(undefined8 *)(pBVar20 + 0x50) >> 8);
          uStack_50 = (undefined1)*(undefined8 *)(pBVar20 + 0x58);
          uVar11 = *(undefined8 *)(pBVar20 + 0x30);
          uVar12 = *(undefined8 *)(pBVar20 + 0x38);
          uVar13 = *(undefined8 *)(pBVar20 + 0x40);
          uVar14 = *(undefined8 *)(pBVar20 + 0x48);
          *(undefined8 *)(pBVar20 + 0x10) = *(undefined8 *)(pBVar17 + 0x10);
          *(undefined8 *)(pBVar20 + 0x18) = uVar4;
          uVar4 = *(undefined8 *)(pBVar17 + 0x28);
          uStack_5f = (undefined7)((ulong)uVar14 >> 8);
          *(undefined8 *)(pBVar20 + 0x20) = *(undefined8 *)(pBVar17 + 0x20);
          *(undefined8 *)(pBVar20 + 0x28) = uVar4;
          uVar4 = *(undefined8 *)(pBVar17 + 0x38);
          *(undefined8 *)(pBVar20 + 0x30) = *(undefined8 *)(pBVar17 + 0x30);
          *(undefined8 *)(pBVar20 + 0x38) = uVar4;
          uVar4 = *(undefined8 *)(pBVar17 + 0x48);
          *(undefined8 *)(pBVar20 + 0x40) = *(undefined8 *)(pBVar17 + 0x40);
          *(undefined8 *)(pBVar20 + 0x48) = uVar4;
          uVar4 = *(undefined8 *)(pBVar17 + 0x51);
          *(undefined8 *)(pBVar20 + 0x49) = *(undefined8 *)(pBVar17 + 0x49);
          *(undefined8 *)(pBVar20 + 0x51) = uVar4;
          *(undefined8 *)(pBVar17 + 0x40) = uVar13;
          *(undefined8 *)(pBVar17 + 0x48) = uVar14;
          *(undefined8 *)pBVar17 = uVar5;
          *(undefined8 *)(pBVar17 + 8) = uVar6;
          *(undefined8 *)(pBVar17 + 0x10) = uVar7;
          *(undefined8 *)(pBVar17 + 0x18) = uVar8;
          *(undefined8 *)(pBVar17 + 0x20) = uVar9;
          *(undefined8 *)(pBVar17 + 0x28) = uVar10;
          *(undefined8 *)(pBVar17 + 0x30) = uVar11;
          *(undefined8 *)(pBVar17 + 0x38) = uVar12;
          *(ulong *)(pBVar17 + 0x49) = CONCAT17(local_58,uStack_5f);
          *(ulong *)(pBVar17 + 0x51) = CONCAT17(uStack_50,uStack_57);
        }
        else if (local_c8 + -1 == local_e0) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00100ef7;
        }
        pBVar20 = pBVar20 + 0x60;
        local_e0 = local_e0 + 1;
      } while( true );
    }
LAB_001010c3:
    for (lVar21 = lVar19 + -2 >> 1; adjust_heap(param_1,lVar21,lVar19,param_3), lVar21 != 0;
        lVar21 = lVar21 + -1) {
    }
    pBVar20 = param_3 + param_1 * 0x60;
    lVar19 = (local_e0 + -1) - param_1;
    pBVar16 = param_3 + local_e0 * 0x60 + -0x60;
    do {
      uVar4 = *(undefined8 *)(pBVar20 + 8);
      *(undefined8 *)pBVar16 = *(undefined8 *)pBVar20;
      *(undefined8 *)(pBVar16 + 8) = uVar4;
      uVar4 = *(undefined8 *)(pBVar20 + 0x18);
      *(undefined8 *)(pBVar16 + 0x10) = *(undefined8 *)(pBVar20 + 0x10);
      *(undefined8 *)(pBVar16 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)(pBVar20 + 0x28);
      *(undefined8 *)(pBVar16 + 0x20) = *(undefined8 *)(pBVar20 + 0x20);
      *(undefined8 *)(pBVar16 + 0x28) = uVar4;
      uVar4 = *(undefined8 *)(pBVar20 + 0x38);
      *(undefined8 *)(pBVar16 + 0x30) = *(undefined8 *)(pBVar20 + 0x30);
      *(undefined8 *)(pBVar16 + 0x38) = uVar4;
      uVar4 = *(undefined8 *)(pBVar20 + 0x48);
      *(undefined8 *)(pBVar16 + 0x40) = *(undefined8 *)(pBVar20 + 0x40);
      *(undefined8 *)(pBVar16 + 0x48) = uVar4;
      uVar4 = *(undefined8 *)(pBVar20 + 0x51);
      *(undefined8 *)(pBVar16 + 0x49) = *(undefined8 *)(pBVar20 + 0x49);
      *(undefined8 *)(pBVar16 + 0x51) = uVar4;
      adjust_heap(param_1,0,lVar19,param_3);
      bVar3 = 1 < lVar19;
      lVar19 = lVar19 + -1;
      pBVar16 = pBVar16 + -0x60;
    } while (bVar3);
  }
LAB_00101262:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101020:
  lVar19 = local_e0 - param_1;
  introsort(local_e0,local_c8,param_3,local_c0);
  if (lVar19 < 0x11) goto LAB_00101262;
  local_c8 = local_e0;
  if (local_c0 == 0) goto LAB_001010c3;
  goto LAB_00100e41;
}



/* Skeleton2D::get_modification_stack() const */

void Skeleton2D::get_modification_stack(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x5a0) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x5a0);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* Bone2D::get_skeleton_rest() const */

void Bone2D::get_skeleton_rest(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  Transform2D *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(in_RSI + 0x580);
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(in_RSI + 0x598);
    uVar3 = *(undefined8 *)(in_RSI + 0x5a0);
    *(undefined8 *)in_RDI = *(undefined8 *)(in_RSI + 0x590);
    *(undefined8 *)(in_RDI + 8) = uVar4;
    *(undefined8 *)(in_RDI + 0x10) = uVar3;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x580);
    if (lVar2 == 0) {
      local_78 = *(undefined8 *)(lVar1 + 0x590);
      uStack_70 = *(undefined8 *)(lVar1 + 0x598);
      local_68 = *(undefined8 *)(lVar1 + 0x5a0);
    }
    else {
      lVar1 = *(long *)(lVar2 + 0x580);
      if (lVar1 == 0) {
        local_58 = *(undefined8 *)(lVar2 + 0x590);
        uStack_50 = *(undefined8 *)(lVar2 + 0x598);
        local_48 = *(undefined8 *)(lVar2 + 0x5a0);
      }
      else {
        if (*(long *)(lVar1 + 0x580) == 0) {
          local_78 = *(undefined8 *)(lVar1 + 0x590);
          uStack_70 = *(undefined8 *)(lVar1 + 0x598);
          local_68 = *(undefined8 *)(lVar1 + 0x5a0);
        }
        else {
          get_skeleton_rest();
          Transform2D::operator*((Transform2D *)&local_78,(Transform2D *)&local_58);
        }
        Transform2D::operator*((Transform2D *)&local_58,(Transform2D *)&local_78);
      }
      Transform2D::operator*((Transform2D *)&local_78,(Transform2D *)&local_58);
    }
    Transform2D::operator*(in_RDI,(Transform2D *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_update_bone_setup() [clone .part.0] */

void __thiscall Skeleton2D::_update_bone_setup(Skeleton2D *this)

{
  Bone_conflict *pBVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  Bone_conflict *pBVar7;
  Bone_conflict *pBVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  Bone_conflict *pBVar16;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x590] = (Skeleton2D)0x0;
  plVar6 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar6 + 0x488))
            (plVar6,*(undefined8 *)(this + 0x598),*(undefined4 *)(this + 0x580),1);
  uVar11 = *(uint *)(this + 0x580);
  if (uVar11 != 0) {
    uVar12 = (ulong)uVar11;
    pBVar1 = *(Bone_conflict **)(this + 0x588);
    if (uVar11 == 1) {
      SortArray<Skeleton2D::Bone,_DefaultComparator<Skeleton2D::Bone>,true>::introsort(0,1,pBVar1,0)
      ;
    }
    else {
      lVar10 = 0;
      uVar14 = uVar12;
      do {
        uVar14 = (long)uVar14 >> 1;
        lVar10 = lVar10 + 1;
      } while (uVar14 != 1);
      pBVar16 = pBVar1 + 0x60;
      SortArray<Skeleton2D::Bone,_DefaultComparator<Skeleton2D::Bone>,true>::introsort
                (0,uVar12,pBVar1,lVar10 * 2);
      uVar14 = 1;
      lVar10 = 1;
      if (uVar12 < 0x11) {
        do {
          local_108 = *(undefined8 *)pBVar16;
          uStack_100 = *(undefined8 *)(pBVar16 + 8);
          local_f8 = *(undefined8 *)(pBVar16 + 0x10);
          uStack_f0 = *(undefined8 *)(pBVar16 + 0x18);
          local_e8 = *(undefined8 *)(pBVar16 + 0x20);
          uStack_e0 = *(undefined8 *)(pBVar16 + 0x28);
          local_d8 = *(undefined8 *)(pBVar16 + 0x30);
          uStack_d0 = *(undefined8 *)(pBVar16 + 0x38);
          local_c8 = *(undefined8 *)(pBVar16 + 0x40);
          uStack_c0 = (undefined1)*(undefined8 *)(pBVar16 + 0x48);
          uStack_bf = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x48) >> 8);
          local_b8 = (undefined1)*(undefined8 *)(pBVar16 + 0x50);
          uStack_b7 = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x50) >> 8);
          uStack_b0 = (undefined1)*(undefined8 *)(pBVar16 + 0x58);
          uStack_af = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x58) >> 8);
          cVar4 = Node::is_greater_than(*(Node **)pBVar1);
          pBVar8 = pBVar16;
          if (cVar4 == '\0') {
            local_a8 = local_108;
            auStack_a0._8_8_ = local_f8;
            auStack_a0._0_8_ = uStack_100;
            uStack_90 = uStack_f0;
            local_88 = local_e8;
            uStack_80 = uStack_e0;
            local_78 = local_d8;
            uStack_70 = uStack_d0;
            local_68 = local_c8;
            uStack_60 = uStack_c0;
            uStack_5f = uStack_bf;
            local_58 = local_b8;
            uStack_57 = uStack_b7;
            uStack_50 = uStack_b0;
            uStack_4f = uStack_af;
            while (cVar4 = Node::is_greater_than(*(Node **)(pBVar8 + -0x60)), cVar4 != '\0') {
              if (pBVar8 + -0x60 == pBVar1) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              *(undefined8 *)pBVar8 = *(undefined8 *)(pBVar8 + -0x60);
              *(undefined8 *)(pBVar8 + 8) = *(undefined8 *)(pBVar8 + -0x58);
              *(undefined8 *)(pBVar8 + 0x10) = *(undefined8 *)(pBVar8 + -0x50);
              *(undefined8 *)(pBVar8 + 0x18) = *(undefined8 *)(pBVar8 + -0x48);
              *(undefined8 *)(pBVar8 + 0x40) = *(undefined8 *)(pBVar8 + -0x20);
              *(undefined8 *)(pBVar8 + 0x48) = *(undefined8 *)(pBVar8 + -0x18);
              *(undefined8 *)(pBVar8 + 0x20) = *(undefined8 *)(pBVar8 + -0x40);
              *(undefined8 *)(pBVar8 + 0x28) = *(undefined8 *)(pBVar8 + -0x38);
              *(undefined8 *)(pBVar8 + 0x30) = *(undefined8 *)(pBVar8 + -0x30);
              *(undefined8 *)(pBVar8 + 0x38) = *(undefined8 *)(pBVar8 + -0x28);
              *(undefined8 *)(pBVar8 + 0x49) = *(undefined8 *)(pBVar8 + -0x17);
              *(undefined8 *)(pBVar8 + 0x51) = *(undefined8 *)(pBVar8 + -0xf);
              pBVar8 = pBVar8 + -0x60;
            }
            *(undefined8 *)pBVar8 = local_a8;
            *(undefined8 *)(pBVar8 + 8) = auStack_a0._0_8_;
            *(undefined8 *)(pBVar8 + 0x10) = auStack_a0._8_8_;
            *(undefined8 *)(pBVar8 + 0x18) = uStack_90;
            *(undefined8 *)(pBVar8 + 0x20) = local_88;
            *(undefined8 *)(pBVar8 + 0x28) = uStack_80;
            *(undefined8 *)(pBVar8 + 0x30) = local_78;
            *(undefined8 *)(pBVar8 + 0x38) = uStack_70;
            *(undefined8 *)(pBVar8 + 0x40) = local_68;
            *(ulong *)(pBVar8 + 0x48) = CONCAT71(uStack_5f,uStack_60);
            *(ulong *)(pBVar8 + 0x49) = CONCAT17(local_58,uStack_5f);
            *(ulong *)(pBVar8 + 0x51) = CONCAT17(uStack_50,uStack_57);
          }
          else {
            do {
              pBVar7 = pBVar8 + -0x60;
              *(undefined8 *)pBVar8 = *(undefined8 *)(pBVar8 + -0x60);
              *(undefined8 *)(pBVar8 + 8) = *(undefined8 *)(pBVar8 + -0x58);
              *(undefined8 *)(pBVar8 + 0x10) = *(undefined8 *)(pBVar8 + -0x50);
              *(undefined8 *)(pBVar8 + 0x18) = *(undefined8 *)(pBVar8 + -0x48);
              *(undefined8 *)(pBVar8 + 0x40) = *(undefined8 *)(pBVar8 + -0x20);
              *(undefined8 *)(pBVar8 + 0x48) = *(undefined8 *)(pBVar8 + -0x18);
              *(undefined8 *)(pBVar8 + 0x20) = *(undefined8 *)(pBVar8 + -0x40);
              *(undefined8 *)(pBVar8 + 0x28) = *(undefined8 *)(pBVar8 + -0x38);
              *(undefined8 *)(pBVar8 + 0x30) = *(undefined8 *)(pBVar8 + -0x30);
              *(undefined8 *)(pBVar8 + 0x38) = *(undefined8 *)(pBVar8 + -0x28);
              *(undefined8 *)(pBVar8 + 0x49) = *(undefined8 *)(pBVar8 + -0x17);
              *(undefined8 *)(pBVar8 + 0x51) = *(undefined8 *)(pBVar8 + -0xf);
              pBVar8 = pBVar7;
            } while (pBVar7 != pBVar1);
            *(undefined8 *)pBVar1 = local_108;
            *(undefined8 *)(pBVar1 + 8) = uStack_100;
            *(undefined8 *)(pBVar1 + 0x10) = local_f8;
            *(undefined8 *)(pBVar1 + 0x18) = uStack_f0;
            *(undefined8 *)(pBVar1 + 0x20) = local_e8;
            *(undefined8 *)(pBVar1 + 0x28) = uStack_e0;
            *(undefined8 *)(pBVar1 + 0x30) = local_d8;
            *(undefined8 *)(pBVar1 + 0x38) = uStack_d0;
            *(undefined8 *)(pBVar1 + 0x40) = local_c8;
            *(ulong *)(pBVar1 + 0x48) = CONCAT71(uStack_bf,uStack_c0);
            *(ulong *)(pBVar1 + 0x49) = CONCAT17(local_b8,uStack_bf);
            *(ulong *)(pBVar1 + 0x51) = CONCAT17(uStack_b0,uStack_b7);
          }
          uVar14 = uVar14 + 1;
          pBVar16 = pBVar16 + 0x60;
        } while (uVar12 != uVar14);
      }
      else {
        do {
          local_108 = *(undefined8 *)pBVar16;
          uStack_100 = *(undefined8 *)(pBVar16 + 8);
          local_f8 = *(undefined8 *)(pBVar16 + 0x10);
          uStack_f0 = *(undefined8 *)(pBVar16 + 0x18);
          local_e8 = *(undefined8 *)(pBVar16 + 0x20);
          uStack_e0 = *(undefined8 *)(pBVar16 + 0x28);
          local_d8 = *(undefined8 *)(pBVar16 + 0x30);
          uStack_d0 = *(undefined8 *)(pBVar16 + 0x38);
          local_c8 = *(undefined8 *)(pBVar16 + 0x40);
          uStack_c0 = (undefined1)*(undefined8 *)(pBVar16 + 0x48);
          uStack_bf = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x48) >> 8);
          local_b8 = (undefined1)*(undefined8 *)(pBVar16 + 0x50);
          uStack_b7 = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x50) >> 8);
          uStack_b0 = (undefined1)*(undefined8 *)(pBVar16 + 0x58);
          uStack_af = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x58) >> 8);
          cVar4 = Node::is_greater_than(*(Node **)pBVar1);
          pBVar8 = pBVar16;
          if (cVar4 == '\0') {
            local_a8 = local_108;
            auStack_a0._8_8_ = local_f8;
            auStack_a0._0_8_ = uStack_100;
            uStack_90 = uStack_f0;
            local_88 = local_e8;
            uStack_80 = uStack_e0;
            local_78 = local_d8;
            uStack_70 = uStack_d0;
            local_68 = local_c8;
            uStack_60 = uStack_c0;
            uStack_5f = uStack_bf;
            local_58 = local_b8;
            uStack_57 = uStack_b7;
            uStack_50 = uStack_b0;
            uStack_4f = uStack_af;
            while (cVar4 = Node::is_greater_than(*(Node **)(pBVar8 + -0x60)), cVar4 != '\0') {
              if (pBVar1 == pBVar8 + -0x60) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              *(undefined8 *)pBVar8 = *(undefined8 *)(pBVar8 + -0x60);
              *(undefined8 *)(pBVar8 + 8) = *(undefined8 *)(pBVar8 + -0x58);
              *(undefined8 *)(pBVar8 + 0x10) = *(undefined8 *)(pBVar8 + -0x50);
              *(undefined8 *)(pBVar8 + 0x18) = *(undefined8 *)(pBVar8 + -0x48);
              *(undefined8 *)(pBVar8 + 0x40) = *(undefined8 *)(pBVar8 + -0x20);
              *(undefined8 *)(pBVar8 + 0x48) = *(undefined8 *)(pBVar8 + -0x18);
              *(undefined8 *)(pBVar8 + 0x20) = *(undefined8 *)(pBVar8 + -0x40);
              *(undefined8 *)(pBVar8 + 0x28) = *(undefined8 *)(pBVar8 + -0x38);
              *(undefined8 *)(pBVar8 + 0x30) = *(undefined8 *)(pBVar8 + -0x30);
              *(undefined8 *)(pBVar8 + 0x38) = *(undefined8 *)(pBVar8 + -0x28);
              *(undefined8 *)(pBVar8 + 0x49) = *(undefined8 *)(pBVar8 + -0x17);
              *(undefined8 *)(pBVar8 + 0x51) = *(undefined8 *)(pBVar8 + -0xf);
              pBVar8 = pBVar8 + -0x60;
            }
            *(undefined8 *)pBVar8 = local_a8;
            *(undefined8 *)(pBVar8 + 8) = auStack_a0._0_8_;
            *(undefined8 *)(pBVar8 + 0x10) = auStack_a0._8_8_;
            *(undefined8 *)(pBVar8 + 0x18) = uStack_90;
            *(undefined8 *)(pBVar8 + 0x20) = local_88;
            *(undefined8 *)(pBVar8 + 0x28) = uStack_80;
            *(undefined8 *)(pBVar8 + 0x30) = local_78;
            *(undefined8 *)(pBVar8 + 0x38) = uStack_70;
            *(undefined8 *)(pBVar8 + 0x40) = local_68;
            *(ulong *)(pBVar8 + 0x48) = CONCAT71(uStack_5f,uStack_60);
            *(ulong *)(pBVar8 + 0x49) = CONCAT17(local_58,uStack_5f);
            *(ulong *)(pBVar8 + 0x51) = CONCAT17(uStack_50,uStack_57);
          }
          else {
            do {
              pBVar7 = pBVar8 + -0x60;
              *(undefined8 *)pBVar8 = *(undefined8 *)(pBVar8 + -0x60);
              *(undefined8 *)(pBVar8 + 8) = *(undefined8 *)(pBVar8 + -0x58);
              *(undefined8 *)(pBVar8 + 0x10) = *(undefined8 *)(pBVar8 + -0x50);
              *(undefined8 *)(pBVar8 + 0x18) = *(undefined8 *)(pBVar8 + -0x48);
              *(undefined8 *)(pBVar8 + 0x40) = *(undefined8 *)(pBVar8 + -0x20);
              *(undefined8 *)(pBVar8 + 0x48) = *(undefined8 *)(pBVar8 + -0x18);
              *(undefined8 *)(pBVar8 + 0x20) = *(undefined8 *)(pBVar8 + -0x40);
              *(undefined8 *)(pBVar8 + 0x28) = *(undefined8 *)(pBVar8 + -0x38);
              *(undefined8 *)(pBVar8 + 0x30) = *(undefined8 *)(pBVar8 + -0x30);
              *(undefined8 *)(pBVar8 + 0x38) = *(undefined8 *)(pBVar8 + -0x28);
              *(undefined8 *)(pBVar8 + 0x49) = *(undefined8 *)(pBVar8 + -0x17);
              *(undefined8 *)(pBVar8 + 0x51) = *(undefined8 *)(pBVar8 + -0xf);
              pBVar8 = pBVar7;
            } while (pBVar1 != pBVar7);
            *(undefined8 *)pBVar1 = local_108;
            *(undefined8 *)(pBVar1 + 8) = uStack_100;
            *(undefined8 *)(pBVar1 + 0x10) = local_f8;
            *(undefined8 *)(pBVar1 + 0x18) = uStack_f0;
            *(undefined8 *)(pBVar1 + 0x20) = local_e8;
            *(undefined8 *)(pBVar1 + 0x28) = uStack_e0;
            *(undefined8 *)(pBVar1 + 0x30) = local_d8;
            *(undefined8 *)(pBVar1 + 0x38) = uStack_d0;
            *(undefined8 *)(pBVar1 + 0x40) = local_c8;
            *(ulong *)(pBVar1 + 0x48) = CONCAT71(uStack_bf,uStack_c0);
            *(ulong *)(pBVar1 + 0x49) = CONCAT17(local_b8,uStack_bf);
            *(ulong *)(pBVar1 + 0x51) = CONCAT17(uStack_b0,uStack_b7);
          }
          lVar10 = lVar10 + 1;
          pBVar16 = pBVar16 + 0x60;
        } while (lVar10 != 0x10);
        pBVar16 = pBVar1 + 0x600;
        uVar14 = 0x10;
        do {
          local_a8 = *(undefined8 *)pBVar16;
          auStack_a0 = *(undefined1 (*) [16])(pBVar16 + 8);
          uStack_90 = *(undefined8 *)(pBVar16 + 0x18);
          local_88 = *(undefined8 *)(pBVar16 + 0x20);
          uStack_80 = *(undefined8 *)(pBVar16 + 0x28);
          local_78 = *(undefined8 *)(pBVar16 + 0x30);
          uStack_70 = *(undefined8 *)(pBVar16 + 0x38);
          local_68 = *(undefined8 *)(pBVar16 + 0x40);
          uStack_60 = (undefined1)*(undefined8 *)(pBVar16 + 0x48);
          uStack_5f = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x48) >> 8);
          local_58 = (undefined1)*(undefined8 *)(pBVar16 + 0x50);
          uStack_57 = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x50) >> 8);
          uStack_50 = (undefined1)*(undefined8 *)(pBVar16 + 0x58);
          uStack_4f = (undefined7)((ulong)*(undefined8 *)(pBVar16 + 0x58) >> 8);
          pBVar8 = pBVar16;
          while (cVar4 = Node::is_greater_than(*(Node **)(pBVar8 + -0x60)), cVar4 != '\0') {
            if (pBVar8 + -0x60 == pBVar1) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            *(undefined8 *)pBVar8 = *(undefined8 *)(pBVar8 + -0x60);
            *(undefined8 *)(pBVar8 + 8) = *(undefined8 *)(pBVar8 + -0x58);
            *(undefined8 *)(pBVar8 + 0x10) = *(undefined8 *)(pBVar8 + -0x50);
            *(undefined8 *)(pBVar8 + 0x18) = *(undefined8 *)(pBVar8 + -0x48);
            *(undefined8 *)(pBVar8 + 0x40) = *(undefined8 *)(pBVar8 + -0x20);
            *(undefined8 *)(pBVar8 + 0x48) = *(undefined8 *)(pBVar8 + -0x18);
            *(undefined8 *)(pBVar8 + 0x20) = *(undefined8 *)(pBVar8 + -0x40);
            *(undefined8 *)(pBVar8 + 0x28) = *(undefined8 *)(pBVar8 + -0x38);
            *(undefined8 *)(pBVar8 + 0x30) = *(undefined8 *)(pBVar8 + -0x30);
            *(undefined8 *)(pBVar8 + 0x38) = *(undefined8 *)(pBVar8 + -0x28);
            *(undefined8 *)(pBVar8 + 0x49) = *(undefined8 *)(pBVar8 + -0x17);
            *(undefined8 *)(pBVar8 + 0x51) = *(undefined8 *)(pBVar8 + -0xf);
            pBVar8 = pBVar8 + -0x60;
          }
          uVar14 = uVar14 + 1;
          pBVar16 = pBVar16 + 0x60;
          *(undefined8 *)pBVar8 = local_a8;
          *(undefined8 *)(pBVar8 + 8) = auStack_a0._0_8_;
          *(undefined8 *)(pBVar8 + 0x10) = auStack_a0._8_8_;
          *(undefined8 *)(pBVar8 + 0x18) = uStack_90;
          *(undefined8 *)(pBVar8 + 0x20) = local_88;
          *(undefined8 *)(pBVar8 + 0x28) = uStack_80;
          *(undefined8 *)(pBVar8 + 0x30) = local_78;
          *(undefined8 *)(pBVar8 + 0x38) = uStack_70;
          *(undefined8 *)(pBVar8 + 0x40) = local_68;
          *(ulong *)(pBVar8 + 0x48) = CONCAT71(uStack_5f,uStack_60);
          *(ulong *)(pBVar8 + 0x49) = CONCAT17(local_58,uStack_5f);
          *(ulong *)(pBVar8 + 0x51) = CONCAT17(uStack_50,uStack_57);
        } while (uVar12 != uVar14);
      }
    }
    if (*(int *)(this + 0x580) != 0) {
      lVar10 = *(long *)(this + 0x588);
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar12;
        lVar15 = uVar12 * 0x60;
        lVar10 = *(long *)(lVar10 + lVar15);
        lVar9 = *(long *)(lVar10 + 0x580);
        if (lVar9 == 0) {
          local_a8 = *(undefined8 *)(lVar10 + 0x590);
          auStack_a0 = *(undefined1 (*) [16])(lVar10 + 0x598);
        }
        else {
          lVar10 = *(long *)(lVar9 + 0x580);
          if (lVar10 == 0) {
            local_108 = *(undefined8 *)(lVar9 + 0x590);
            uStack_100 = *(undefined8 *)(lVar9 + 0x598);
            local_f8 = *(undefined8 *)(lVar9 + 0x5a0);
          }
          else {
            lVar9 = *(long *)(lVar10 + 0x580);
            if (lVar9 == 0) {
              local_a8 = *(undefined8 *)(lVar10 + 0x590);
              auStack_a0 = *(undefined1 (*) [16])(lVar10 + 0x598);
            }
            else {
              if (*(long *)(lVar9 + 0x580) == 0) {
                local_108 = *(undefined8 *)(lVar9 + 0x590);
                uStack_100 = *(undefined8 *)(lVar9 + 0x598);
                local_f8 = *(undefined8 *)(lVar9 + 0x5a0);
              }
              else {
                Bone2D::get_skeleton_rest();
                Transform2D::operator*((Transform2D *)&local_108,(Transform2D *)&local_a8);
              }
              Transform2D::operator*((Transform2D *)&local_a8,(Transform2D *)&local_108);
            }
            Transform2D::operator*((Transform2D *)&local_108,(Transform2D *)&local_a8);
          }
          Transform2D::operator*((Transform2D *)&local_a8,(Transform2D *)&local_108);
        }
        Transform2D::affine_inverse();
        uVar14 = (ulong)*(uint *)(this + 0x580);
        if (*(uint *)(this + 0x580) <= uVar11) goto LAB_00101bd0;
        plVar6 = (long *)(*(long *)(this + 0x588) + lVar15);
        *(undefined8 *)((long)plVar6 + 0x34) = local_118;
        *(undefined8 *)((long)plVar6 + 0x24) = local_128;
        *(undefined8 *)((long)plVar6 + 0x2c) = uStack_120;
        *(uint *)(*plVar6 + 0x5b4) = uVar11;
        uVar14 = (ulong)*(uint *)(this + 0x580);
        if (*(uint *)(this + 0x580) <= uVar11) goto LAB_00101bd0;
        lVar10 = Node::get_parent();
        if (lVar10 == 0) {
          uVar14 = (ulong)*(uint *)(this + 0x580);
LAB_00101c77:
          if ((uint)uVar14 <= uVar11) goto LAB_00101bd0;
          lVar10 = *(long *)(this + 0x588);
          plVar6 = (long *)(lVar10 + lVar15);
          *(undefined4 *)(plVar6 + 1) = 0xffffffff;
        }
        else {
          lVar9 = __dynamic_cast(lVar10,&Object::typeinfo,&Bone2D::typeinfo,0);
          uVar14 = (ulong)*(uint *)(this + 0x580);
          if (lVar9 == 0) goto LAB_00101c77;
          if (*(uint *)(this + 0x580) <= uVar11) goto LAB_00101bd0;
          lVar10 = *(long *)(this + 0x588);
          plVar6 = (long *)(lVar10 + lVar15);
          *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(lVar9 + 0x5b4);
        }
        uVar13 = (uint)uVar14;
        lVar9 = *plVar6;
        lVar2 = *(long *)(lVar9 + 0x580);
        if (lVar2 == 0) {
          local_148 = *(undefined8 *)(lVar9 + 0x590);
          uStack_140 = *(undefined8 *)(lVar9 + 0x598);
          local_138 = *(undefined8 *)(lVar9 + 0x5a0);
        }
        else {
          lVar10 = *(long *)(lVar2 + 0x580);
          if (lVar10 == 0) {
            local_a8 = *(undefined8 *)(lVar2 + 0x590);
            auStack_a0 = *(undefined1 (*) [16])(lVar2 + 0x598);
          }
          else {
            if (*(long *)(lVar10 + 0x580) == 0) {
              local_108 = *(undefined8 *)(lVar10 + 0x590);
              uStack_100 = *(undefined8 *)(lVar10 + 0x598);
              local_f8 = *(undefined8 *)(lVar10 + 0x5a0);
            }
            else {
              Bone2D::get_skeleton_rest();
              Transform2D::operator*((Transform2D *)&local_108,(Transform2D *)&local_a8);
            }
            Transform2D::operator*((Transform2D *)&local_a8,(Transform2D *)&local_108);
          }
          Transform2D::operator*((Transform2D *)&local_148,(Transform2D *)&local_a8);
          uVar13 = *(uint *)(this + 0x580);
          uVar14 = (ulong)uVar13;
          if (uVar13 <= uVar11) {
LAB_00101bd0:
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar12 & 0xffffffff,
                       uVar14,"p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar10 = *(long *)(this + 0x588);
          plVar6 = (long *)(lVar10 + lVar15);
        }
        uVar12 = uVar12 + 1;
        *(undefined8 *)((long)plVar6 + 0x4c) = local_138;
        *(undefined8 *)((long)plVar6 + 0x3c) = local_148;
        *(undefined8 *)((long)plVar6 + 0x44) = uStack_140;
      } while ((uint)uVar12 < uVar13);
    }
  }
  this[0x591] = (Skeleton2D)0x1;
  if (this[0x590] == (Skeleton2D)0x0) {
    _update_transform(this);
  }
  else {
    _update_bone_setup(this);
  }
  if ((_update_bone_setup()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_bone_setup()::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_update_bone_setup()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_bone_setup()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_bone_setup()::{lambda()#1}::operator()()::sname);
  }
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = 0;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_update_bone_setup()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Skeleton2D::_update_bone_setup() */

void __thiscall Skeleton2D::_update_bone_setup(Skeleton2D *this)

{
  if (this[0x590] == (Skeleton2D)0x0) {
    return;
  }
  _update_bone_setup(this);
  return;
}



/* Bone2D::get_index_in_skeleton() const */

undefined4 __thiscall Bone2D::get_index_in_skeleton(Bone2D *this)

{
  undefined4 uVar1;
  Skeleton2D *this_00;
  
  this_00 = *(Skeleton2D **)(this + 0x588);
  if (this_00 != (Skeleton2D *)0x0) {
    if (this_00[0x590] == (Skeleton2D)0x0) {
      uVar1 = *(undefined4 *)(this + 0x5b4);
    }
    else {
      Skeleton2D::_update_bone_setup(this_00);
      uVar1 = *(undefined4 *)(this + 0x5b4);
    }
    return uVar1;
  }
  _err_print_error("get_index_in_skeleton","scene/2d/skeleton_2d.cpp",0x199,
                   "Parameter \"skeleton\" is null.",0,0);
  return 0xffffffff;
}



/* Skeleton2D::_update_transform() */

void __thiscall Skeleton2D::_update_transform(Skeleton2D *this)

{
  if (this[0x590] != (Skeleton2D)0x0) {
    _update_bone_setup(this);
    return;
  }
  if (this[0x591] != (Skeleton2D)0x0) {
    _update_transform(this);
    return;
  }
  return;
}



/* Skeleton2D::get_bone_count() const */

undefined4 __thiscall Skeleton2D::get_bone_count(Skeleton2D *this)

{
  if (((byte)this[0x2fa] & 0x40) != 0) {
    if (this[0x590] != (Skeleton2D)0x0) {
      _update_bone_setup(this);
    }
    return *(undefined4 *)(this + 0x580);
  }
  _err_print_error("get_bone_count","scene/2d/skeleton_2d.cpp",0x265,
                   "Condition \"!is_inside_tree()\" is true. Returning: 0",0,0);
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



/* CowData<Color>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Color>::_copy_on_write(CowData<Color> *this)

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
  __n = lVar2 * 0x10;
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



/* Skeleton2D::~Skeleton2D() */

void __thiscall Skeleton2D::~Skeleton2D(Skeleton2D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00117280;
  lVar3 = RenderingServer::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("~Skeleton2D","scene/2d/skeleton_2d.cpp",0x348,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
    lVar3 = *(long *)(this + 0x5a0);
  }
  else {
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
    lVar3 = *(long *)(this + 0x5a0);
  }
  if ((lVar3 != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    pOVar1 = *(Object **)(this + 0x5a0);
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  if (*(void **)(this + 0x588) != (void *)0x0) {
    if (*(int *)(this + 0x580) != 0) {
      *(undefined4 *)(this + 0x580) = 0;
    }
    Memory::free_static(*(void **)(this + 0x588),false);
  }
  *(code **)this = Transform2D::operator*;
  CanvasItem::~CanvasItem((CanvasItem *)this);
  return;
}



/* Skeleton2D::~Skeleton2D() */

void __thiscall Skeleton2D::~Skeleton2D(Skeleton2D *this)

{
  ~Skeleton2D(this);
  operator_delete(this,0x5e0);
  return;
}



/* Bone2D::_get(StringName const&, Variant&) const */

undefined8 __thiscall Bone2D::_get(Bone2D *this,StringName *param_1,Variant *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (const::{lambda()#1}::operator()()::sname == '\0') {
    iVar1 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
    if (iVar1 == 0) goto LAB_001025c8;
    _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    if (const::{lambda()#1}::operator()()::sname == *(long *)param_1) goto LAB_001027b0;
LAB_001025d8:
    if (const::{lambda()#2}::operator()()::sname == '\0') {
      iVar1 = __cxa_guard_acquire(&const::{lambda()#2}::operator()()::sname);
      if (iVar1 != 0) {
        _scs_create((char *)&const::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&const::{lambda()#2}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&const::{lambda()#2}::operator()()::sname);
      }
    }
    if (*(long *)param_1 == const::{lambda()#2}::operator()()::sname) {
      Variant::Variant((Variant *)local_48,*(float *)(this + 0x5ac));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_48[0];
      *(undefined8 *)(param_2 + 8) = local_40;
      *(undefined8 *)(param_2 + 0x10) = uStack_38;
    }
    else {
      if (const::{lambda()#3}::operator()()::sname == '\0') {
        iVar1 = __cxa_guard_acquire(&const::{lambda()#3}::operator()()::sname);
        if (iVar1 != 0) {
          _scs_create((char *)&const::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&const::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&const::{lambda()#3}::operator()()::sname);
        }
      }
      if (*(long *)param_1 == const::{lambda()#3}::operator()()::sname) {
        Variant::Variant((Variant *)local_48,_LC44 * *(float *)(this + 0x5b0));
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
      }
      else {
        if (const::{lambda()#4}::operator()()::sname == '\0') {
          iVar1 = __cxa_guard_acquire(&const::{lambda()#4}::operator()()::sname);
          if (iVar1 != 0) {
            _scs_create((char *)&const::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&const::{lambda()#4}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&const::{lambda()#4}::operator()()::sname);
          }
        }
        if (*(long *)param_1 == const::{lambda()#4}::operator()()::sname) {
          Variant::Variant((Variant *)local_48,*(float *)(this + 0x5ac));
          if (Variant::needs_deinit[*(int *)param_2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_2 = local_48[0];
          *(undefined8 *)(param_2 + 8) = local_40;
          *(undefined8 *)(param_2 + 0x10) = uStack_38;
        }
        else {
          if (const::{lambda()#5}::operator()()::sname == '\0') {
            iVar1 = __cxa_guard_acquire(&const::{lambda()#5}::operator()()::sname);
            if (iVar1 != 0) {
              _scs_create((char *)&const::{lambda()#5}::operator()()::sname,false);
              __cxa_atexit(StringName::~StringName,&const::{lambda()#5}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&const::{lambda()#5}::operator()()::sname);
            }
          }
          uVar2 = 0;
          if (*(long *)param_1 != const::{lambda()#5}::operator()()::sname) goto LAB_0010272c;
          Variant::Variant((Variant *)local_48,(bool)this[0x5c0]);
          if (Variant::needs_deinit[*(int *)param_2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_2 = local_48[0];
          *(undefined8 *)(param_2 + 8) = local_40;
          *(undefined8 *)(param_2 + 0x10) = uStack_38;
        }
      }
    }
  }
  else {
LAB_001025c8:
    if (const::{lambda()#1}::operator()()::sname != *(long *)param_1) goto LAB_001025d8;
LAB_001027b0:
    Variant::Variant((Variant *)local_48,(bool)this[0x5a8]);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
  }
  uVar2 = 1;
LAB_0010272c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::_editor_set_show_bone_gizmo(bool) */

void __thiscall Bone2D::_editor_set_show_bone_gizmo(Bone2D *this,bool param_1)

{
  this[0x5c0] = (Bone2D)param_1;
  CanvasItem::queue_redraw();
  return;
}



/* Bone2D::_editor_get_show_bone_gizmo() const */

Bone2D __thiscall Bone2D::_editor_get_show_bone_gizmo(Bone2D *this)

{
  return this[0x5c0];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bone2D::Bone2D() */

void __thiscall Bone2D::Bone2D(Bone2D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  CanvasItem::CanvasItem((CanvasItem *)this);
  *(code **)this = Transform2D::operator*;
  this[0x548] = (Bone2D)0x0;
  *(undefined8 *)(this + 0x56c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x54c) = 0;
  uVar2 = _UNK_00117c28;
  uVar1 = __LC47;
  *(undefined ***)this = &PTR__initialize_classv_00116f90;
  *(undefined8 *)(this + 0x564) = 0x3f800000;
  *(undefined8 *)(this + 0x574) = 0;
  *(undefined8 *)(this + 0x590) = 0x3f800000;
  *(undefined8 *)(this + 0x598) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x5a0) = 0;
  this[0x5a8] = (Bone2D)0x1;
  *(undefined8 *)(this + 0x5ac) = 0x41800000;
  *(undefined4 *)(this + 0x5b4) = 0xffffffff;
  *(undefined8 *)(this + 0x5b8) = 0;
  this[0x5c0] = (Bone2D)0x1;
  *(undefined8 *)(this + 0x5c4) = 0x3f800000;
  *(undefined8 *)(this + 0x5cc) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x5d4) = 0;
  this[0x5dc] = (Bone2D)0x1;
  *(undefined8 *)(this + 0x554) = uVar1;
  *(undefined8 *)(this + 0x55c) = uVar2;
  *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
  CanvasItem::set_notify_local_transform(SUB81(this,0));
  this[0x492] = (Bone2D)0x1;
  *(undefined8 *)(this + 0x5a0) = 0;
  this[0x5dc] = (Bone2D)0x1;
  *(undefined1 (*) [16])(this + 0x590) = (undefined1  [16])0x0;
  return;
}



/* Skeleton2D::_get(StringName const&, Variant&) const */

undefined8 __thiscall Skeleton2D::_get(Skeleton2D *this,StringName *param_1,Variant *param_2)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (const::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
  }
  uVar4 = 0;
  if (*(long *)param_1 == const::{lambda()#1}::operator()()::sname) {
    pOVar1 = *(Object **)(this + 0x5a0);
    if (pOVar1 == (Object *)0x0) {
      Variant::Variant((Variant *)local_48,(Object *)0x0);
      if (Variant::needs_deinit[*(int *)param_2] == '\0') {
        *(undefined4 *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
      }
      else {
        Variant::_clear_internal();
        *(undefined4 *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
      }
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        Variant::Variant((Variant *)local_48,(Object *)0x0);
        if (Variant::needs_deinit[*(int *)param_2] == '\0') {
          *(undefined4 *)param_2 = local_48[0];
          *(undefined8 *)(param_2 + 8) = local_40;
          *(undefined8 *)(param_2 + 0x10) = uStack_38;
        }
        else {
          Variant::_clear_internal();
          *(undefined4 *)param_2 = local_48[0];
          *(undefined8 *)(param_2 + 8) = local_40;
          *(undefined8 *)(param_2 + 0x10) = uStack_38;
        }
      }
      else {
        Variant::Variant((Variant *)local_48,pOVar1);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_48[0];
        *(undefined8 *)(param_2 + 8) = local_40;
        *(undefined8 *)(param_2 + 0x10) = uStack_38;
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    uVar4 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_update_process_mode() */

void __thiscall Skeleton2D::_update_process_mode(Skeleton2D *this)

{
  char cVar1;
  
  if ((*(long *)(this + 0x5a0) == 0) && (((byte)this[0x2fa] >> 6 & 1) != 0)) {
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    cVar1 = SceneTree::is_physics_interpolation_enabled();
    if ((cVar1 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) {
      CanvasItem::is_visible_in_tree();
    }
  }
  Node::set_process_internal(SUB81(this,0));
  Node::set_physics_process_internal(SUB81(this,0));
  return;
}



/* Skeleton2D::_physics_interpolated_changed() */

void __thiscall Skeleton2D::_physics_interpolated_changed(Skeleton2D *this)

{
  _update_process_mode(this);
  return;
}



/* Skeleton2D::set_modification_stack(Ref<SkeletonModificationStack2D>) */

void __thiscall Skeleton2D::set_modification_stack(Skeleton2D *this,long *param_2)

{
  Skeleton2D *pSVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  
  pSVar1 = *(Skeleton2D **)(this + 0x5a0);
  if (pSVar1 == (Skeleton2D *)0x0) {
    if (*param_2 == 0) goto LAB_00102e79;
    *(long *)(this + 0x5a0) = *param_2;
    cVar3 = RefCounted::reference();
    pOVar4 = (Object *)0x0;
    if (cVar3 == '\0') {
LAB_00102e48:
      *(undefined8 *)(this + 0x5a0) = 0;
      goto LAB_00102e53;
    }
LAB_00102e64:
    pOVar4 = *(Object **)(this + 0x5a0);
  }
  else {
    pSVar1[0x248] = (Skeleton2D)0x0;
    SkeletonModificationStack2D::set_skeleton(pSVar1);
    pOVar2 = (Object *)*param_2;
    pOVar4 = *(Object **)(this + 0x5a0);
    if (pOVar2 != pOVar4) {
      *(Object **)(this + 0x5a0) = pOVar2;
      if (pOVar2 == (Object *)0x0) {
LAB_00102e53:
        if (pOVar4 == (Object *)0x0) goto LAB_00102e79;
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') goto LAB_00102e48;
        if (pOVar4 == (Object *)0x0) goto LAB_00102e64;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      goto LAB_00102e64;
    }
  }
  if ((pOVar4 != (Object *)0x0) && (((byte)this[0x2fa] & 0x40) != 0)) {
    SkeletonModificationStack2D::set_skeleton((Skeleton2D *)pOVar4);
    SkeletonModificationStack2D::setup();
    SkeletonModificationStack2D::set_editor_gizmos_dirty(SUB81(*(undefined8 *)(this + 0x5a0),0));
    _update_process_mode(this);
    return;
  }
LAB_00102e79:
  _update_process_mode(this);
  return;
}



/* Skeleton2D::_set(StringName const&, Variant const&) */

undefined8 Skeleton2D::_set(StringName *param_1,Variant *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                                 ::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname
                  ,true);
      __cxa_atexit(StringName::~StringName,
                   &_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname
                         );
    }
  }
  uVar5 = 0;
  if (*(long *)param_2 != _set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname)
  goto LAB_00102f32;
  local_38 = (Object *)0x0;
  lVar3 = Variant::get_validated_object();
  if (lVar3 == 0) {
LAB_00102ffd:
    set_modification_stack((Skeleton2D *)param_1,&local_38);
  }
  else {
    pOVar4 = (Object *)
             __dynamic_cast(lVar3,&Object::typeinfo,&SkeletonModificationStack2D::typeinfo,0);
    if (pOVar4 == (Object *)0x0) goto LAB_00102ffd;
    local_38 = pOVar4;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_38 = (Object *)0x0;
      goto LAB_00102ffd;
    }
    set_modification_stack((Skeleton2D *)param_1);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  uVar5 = 1;
LAB_00102f32:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_ensure_update_interpolation_data() */

void __thiscall Skeleton2D::_ensure_update_interpolation_data(Skeleton2D *this)

{
  long lVar1;
  
  lVar1 = Engine::get_singleton();
  if ((ulong)*(uint *)(this + 0x5d8) != *(ulong *)(lVar1 + 0x50)) {
    *(int *)(this + 0x5d8) = (int)*(ulong *)(lVar1 + 0x50);
    *(undefined8 *)(this + 0x5d0) = *(undefined8 *)(this + 0x5b8);
    *(undefined8 *)(this + 0x5c0) = *(undefined8 *)(this + 0x5a8);
    *(undefined8 *)(this + 0x5c8) = *(undefined8 *)(this + 0x5b0);
  }
  return;
}



/* Skeleton2D::_notification(int) */

void __thiscall Skeleton2D::_notification(Skeleton2D *this,int param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long in_FS_OFFSET;
  double dVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  Object *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x20) {
    if (9 < param_1) {
      switch(param_1) {
      case 10:
        _update_process_mode(this);
        if (((byte)this[0x2fa] & 0x40) != 0) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
          }
          cVar3 = SceneTree::is_physics_interpolation_enabled();
          if ((cVar3 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) goto LAB_00103108;
        }
        break;
      case 0xd:
        if (this[0x590] == (Skeleton2D)0x0) {
          if (this[0x591] != (Skeleton2D)0x0) {
LAB_001035b0:
            _update_transform(this);
          }
        }
        else {
          _update_bone_setup(this);
          if (this[0x591] != (Skeleton2D)0x0) {
            if (this[0x590] == (Skeleton2D)0x0) goto LAB_001035b0;
            _update_bone_setup(this);
          }
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Node::request_ready();
          return;
        }
        goto LAB_00103694;
      case 0x19:
        if (((byte)this[0x2fa] & 0x40) != 0) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
          }
          cVar3 = SceneTree::is_physics_interpolation_enabled();
          if ((cVar3 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) {
            local_48 = 0x3f800000;
            local_40 = 0x3f80000000000000;
            local_38 = 0;
            lVar4 = Engine::get_singleton();
            TransformInterpolator::interpolate_transform_2d
                      ((Transform2D *)(this + 0x5c0),(Transform2D *)(this + 0x5a8),
                       (Transform2D *)&local_48,(float)*(double *)(lVar4 + 0x60));
            plVar5 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar5 + 0x4b8))
                      (plVar5,*(undefined8 *)(this + 0x598),(Transform2D *)&local_48);
          }
        }
        if (*(long *)(this + 0x5a0) != 0) {
          dVar7 = (double)Node::get_process_delta_time();
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            iVar6 = 0;
LAB_001034e1:
            execute_modifications(this,(float)dVar7,iVar6);
            return;
          }
          goto LAB_00103694;
        }
        break;
      case 0x1a:
        if (((byte)this[0x2fa] & 0x40) != 0) {
          if (*(long *)(this + 0x240) == 0) {
            _err_print_error("get_tree","./scene/main/node.h",0x1e5,
                             "Parameter \"data.tree\" is null.",0,0);
          }
          cVar3 = SceneTree::is_physics_interpolation_enabled();
          if ((cVar3 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) {
            lVar4 = Engine::get_singleton();
            if (*(ulong *)(lVar4 + 0x50) != (ulong)*(uint *)(this + 0x5d8)) {
              *(int *)(this + 0x5d8) = (int)*(ulong *)(lVar4 + 0x50);
              *(undefined8 *)(this + 0x5d0) = *(undefined8 *)(this + 0x5b8);
              *(undefined8 *)(this + 0x5c0) = *(undefined8 *)(this + 0x5a8);
              *(undefined8 *)(this + 0x5c8) = *(undefined8 *)(this + 0x5b0);
            }
            (**(code **)(*(long *)this + 0x298))(&local_78,this);
            *(undefined8 *)(this + 0x5a8) = local_78;
            *(undefined8 *)(this + 0x5b0) = uStack_70;
            *(undefined8 *)(this + 0x5b8) = local_68;
          }
        }
        if (*(long *)(this + 0x5a0) != 0) {
          dVar7 = (double)Node::get_physics_process_delta_time();
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            iVar6 = 1;
            goto LAB_001034e1;
          }
          goto LAB_00103694;
        }
        break;
      case 0x1b:
        pOVar1 = *(Object **)(this + 0x5a0);
        if ((pOVar1 == (Object *)0x0) ||
           (local_50 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_50 = (Object *)0x0;
          set_modification_stack(this,&local_50);
        }
        else {
          set_modification_stack(this);
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar1,false);
              return;
            }
            goto LAB_00103694;
          }
        }
        break;
      case 0x1e:
        lVar4 = Engine::get_singleton();
        if ((*(char *)(lVar4 + 0xc0) != '\0') && (*(long *)(this + 0x5a0) != 0)) {
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            SkeletonModificationStack2D::draw_editor_gizmos();
            return;
          }
          goto LAB_00103694;
        }
        break;
      case 0x1f:
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_process_mode(this);
          return;
        }
        goto LAB_00103694;
      }
    }
  }
  else if (param_1 == 2000) {
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      cVar3 = SceneTree::is_physics_interpolation_enabled();
      if ((cVar3 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) {
        lVar4 = Engine::get_singleton();
        if (*(ulong *)(lVar4 + 0x50) != (ulong)*(uint *)(this + 0x5d8)) {
          *(int *)(this + 0x5d8) = (int)*(ulong *)(lVar4 + 0x50);
          *(undefined8 *)(this + 0x5d0) = *(undefined8 *)(this + 0x5b8);
          *(undefined8 *)(this + 0x5c0) = *(undefined8 *)(this + 0x5a8);
          *(undefined8 *)(this + 0x5c8) = *(undefined8 *)(this + 0x5b0);
        }
        lVar4 = Engine::get_singleton();
        if (*(char *)(lVar4 + 0x80) != '\0') {
          (**(code **)(*(long *)this + 0x298))(&local_78,this);
          *(undefined8 *)(this + 0x5a8) = local_78;
          *(undefined8 *)(this + 0x5b0) = uStack_70;
          *(undefined8 *)(this + 0x5b8) = local_68;
        }
        goto switchD_001030f1_caseD_b;
      }
    }
    plVar5 = (long *)RenderingServer::get_singleton();
    pcVar2 = *(code **)(*plVar5 + 0x4b8);
    (**(code **)(*(long *)this + 0x298))(&local_48,this);
    (*pcVar2)(plVar5,*(undefined8 *)(this + 0x598),&local_48);
  }
  else if (param_1 == 0x7d1) {
LAB_00103108:
    (**(code **)(*(long *)this + 0x298))(&local_78,this);
    *(undefined8 *)(this + 0x5a8) = local_78;
    *(undefined8 *)(this + 0x5b0) = uStack_70;
    *(undefined8 *)(this + 0x5c0) = local_78;
    *(undefined8 *)(this + 0x5c8) = uStack_70;
    *(undefined8 *)(this + 0x5b8) = local_68;
    *(undefined8 *)(this + 0x5d0) = local_68;
  }
switchD_001030f1_caseD_b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Skeleton2D::Skeleton2D() */

void __thiscall Skeleton2D::Skeleton2D(Skeleton2D *this)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  CanvasItem::CanvasItem((CanvasItem *)this);
  *(code **)this = Transform2D::operator*;
  this[0x548] = (Skeleton2D)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00117280;
  *(undefined2 *)(this + 0x590) = 0x101;
  uVar1 = _UNK_00117c28;
  uVar3 = __LC47;
  *(undefined8 *)(this + 0x56c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x54c) = 0;
  *(undefined8 *)(this + 0x564) = 0x3f800000;
  *(undefined8 *)(this + 0x574) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined8 *)(this + 0x5a0) = 0;
  *(undefined8 *)(this + 0x5a8) = 0x3f800000;
  *(undefined8 *)(this + 0x5b0) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x5b8) = 0;
  *(undefined8 *)(this + 0x5c0) = 0x3f800000;
  *(undefined8 *)(this + 0x5c8) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x5d0) = 0;
  *(undefined4 *)(this + 0x5d8) = 0xffffffff;
  *(undefined8 *)(this + 0x554) = uVar3;
  *(undefined8 *)(this + 0x55c) = uVar1;
  plVar2 = (long *)RenderingServer::get_singleton();
  uVar3 = (**(code **)(*plVar2 + 0x480))(plVar2);
  *(undefined8 *)(this + 0x598) = uVar3;
  CanvasItem::set_notify_transform(SUB81(this,0));
  this[0x492] = (Skeleton2D)0x1;
  return;
}



/* Skeleton2D::_make_transform_dirty() */

void __thiscall Skeleton2D::_make_transform_dirty(Skeleton2D *this)

{
  long in_FS_OFFSET;
  Skeleton2D aSStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x591] == (Skeleton2D)0x0) &&
     (this[0x591] = (Skeleton2D)0x1, ((byte)this[0x2fa] & 0x40) != 0)) {
    create_custom_callable_function_pointer<Skeleton2D>
              (aSStack_48,(char *)this,(_func_void *)"&Skeleton2D::_update_transform");
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aSStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aSStack_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_make_bone_setup_dirty() [clone .part.0] [clone .constprop.0] */

void __thiscall Skeleton2D::_make_bone_setup_dirty(Skeleton2D *this)

{
  long in_FS_OFFSET;
  Skeleton2D aSStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  create_custom_callable_function_pointer<Skeleton2D>
            (aSStack_48,(char *)this,(_func_void *)"&Skeleton2D::_update_bone_setup");
  Variant::Variant((Variant *)local_38,0);
  Callable::call_deferredp((Variant **)aSStack_48,0);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aSStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_make_bone_setup_dirty() */

void __thiscall Skeleton2D::_make_bone_setup_dirty(Skeleton2D *this)

{
  if ((this[0x590] == (Skeleton2D)0x0) &&
     (this[0x590] = (Skeleton2D)0x1, ((byte)this[0x2fa] & 0x40) != 0)) {
    _make_bone_setup_dirty(this);
    return;
  }
  return;
}



/* Bone2D::set_rest(Transform2D const&) */

void __thiscall Bone2D::set_rest(Bone2D *this,Transform2D *param_1)

{
  Skeleton2D *this_00;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x590) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x598) = uVar1;
  *(undefined8 *)(this + 0x5a0) = *(undefined8 *)(param_1 + 0x10);
  this_00 = *(Skeleton2D **)(this + 0x588);
  if (((this_00 != (Skeleton2D *)0x0) && (this_00[0x590] == (Skeleton2D)0x0)) &&
     (this_00[0x590] = (Skeleton2D)0x1, ((byte)this_00[0x2fa] & 0x40) != 0)) {
    Skeleton2D::_make_bone_setup_dirty(this_00);
    Node::update_configuration_warnings();
    return;
  }
  Node::update_configuration_warnings();
  return;
}



/* Bone2D::calculate_length_and_rotation() */

void __thiscall Bone2D::calculate_length_and_rotation(Bone2D *this)

{
  char *__s;
  int iVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined4 uVar4;
  undefined8 uVar5;
  long local_a8;
  undefined8 local_a0;
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  char *local_88;
  size_t local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58 [3];
  long local_40;
  float fVar6;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = Node::get_child_count(SUB81(this,0));
  (**(code **)(*(long *)this + 0x298))(local_58,this);
  Transform2D::affine_inverse();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = Node::get_child((int)this,SUB41(iVar3,0));
      if (lVar2 != 0) {
        lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&typeinfo,0);
        if (lVar2 != 0) {
          uVar5 = Node2D::get_global_position();
          fVar6 = (float)((ulong)uVar5 >> 0x20);
          local_58[0] = CONCAT44(fVar6 * (float)((ulong)local_70 >> 0x20) +
                                 (float)uVar5 * (float)((ulong)local_78 >> 0x20) +
                                 (float)((ulong)local_68 >> 0x20),
                                 fVar6 * (float)local_70 + (float)uVar5 * (float)local_78 +
                                 (float)local_68);
          uVar4 = Vector2::length();
          *(undefined4 *)(this + 0x5ac) = uVar4;
          uVar4 = Vector2::angle();
          *(undefined4 *)(this + 0x5b0) = uVar4;
          goto LAB_00103ab5;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  local_90 = 0;
  local_80 = 0x5a;
  local_88 = 
  ". Cannot calculate bone length or angle reliably.\nUsing transform rotation for bone angle.";
  String::parse_latin1((StrRange *)&local_90);
  Node::get_name();
  if (local_a8 == 0) {
    local_a0 = 0;
  }
  else {
    __s = *(char **)(local_a8 + 8);
    local_a0 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(local_a8 + 0x10));
    }
    else {
      local_80 = strlen(__s);
      local_88 = __s;
      String::parse_latin1((StrRange *)&local_a0);
    }
  }
  operator+((char *)local_98,(String *)"No Bone2D children of node ");
  String::operator+((String *)&local_88,(String *)local_98);
  _err_print_error("calculate_length_and_rotation","scene/2d/skeleton_2d.cpp",0x1bf,
                   (String *)&local_88,0,1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  (**(code **)(*(long *)this + 0x290))(local_58,this);
  uVar4 = Transform2D::get_rotation();
  *(undefined4 *)(this + 0x5b0) = uVar4;
LAB_00103ab5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::set_autocalculate_length_and_angle(bool) */

void __thiscall Bone2D::set_autocalculate_length_and_angle(Bone2D *this,bool param_1)

{
  this[0x5a8] = (Bone2D)param_1;
  if (!param_1) {
    Object::notify_property_list_changed();
    return;
  }
  calculate_length_and_rotation(this);
  Object::notify_property_list_changed();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bone2D::_set(StringName const&, Variant const&) */

undefined8 __thiscall Bone2D::_set(Bone2D *this,StringName *param_1,Variant *param_2)

{
  long lVar1;
  Bone2D BVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  float fVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()
                                 ::sname);
    if (iVar3 == 0) goto LAB_00103cc8;
    _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname);
    if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname ==
        *(long *)param_1) goto LAB_00103e70;
LAB_00103cd8:
    if (_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#2}::
                                   operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::
                             sname);
      }
    }
    if (_set(StringName_const&,Variant_const&)::{lambda()#2}::operator()()::sname ==
        *(long *)param_1) {
LAB_00103dc8:
      fVar5 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0x5ac) = fVar5;
      CanvasItem::queue_redraw();
    }
    else {
      if (_set(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#3}::
                                     operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_set(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::
                               sname);
        }
      }
      if (*(long *)param_1 ==
          _set(StringName_const&,Variant_const&)::{lambda()#3}::operator()()::sname) {
        fVar5 = Variant::operator_cast_to_float(param_2);
        *(float *)(this + 0x5b0) = fVar5 * __LC61;
        CanvasItem::queue_redraw();
      }
      else {
        if (_set(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#4}::
                                       operator()()::sname);
          if (iVar3 != 0) {
            _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#4}::operator()()
                                 ::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_set(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#4}::operator()()
                                 ::sname);
          }
        }
        if (*(long *)param_1 ==
            _set(StringName_const&,Variant_const&)::{lambda()#4}::operator()()::sname)
        goto LAB_00103dc8;
        if (_set(StringName_const&,Variant_const&)::{lambda()#5}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_set(StringName_const&,Variant_const&)::{lambda()#5}::
                                       operator()()::sname);
          if (iVar3 != 0) {
            _scs_create((char *)&_set(StringName_const&,Variant_const&)::{lambda()#5}::operator()()
                                 ::sname,false);
            __cxa_atexit(StringName::~StringName,
                         &_set(StringName_const&,Variant_const&)::{lambda()#5}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_set(StringName_const&,Variant_const&)::{lambda()#5}::operator()()
                                 ::sname);
          }
        }
        uVar4 = 0;
        if (*(long *)param_1 !=
            _set(StringName_const&,Variant_const&)::{lambda()#5}::operator()()::sname)
        goto LAB_00103de5;
        BVar2 = (Bone2D)Variant::operator_cast_to_bool(param_2);
        this[0x5c0] = BVar2;
        CanvasItem::queue_redraw();
      }
    }
  }
  else {
LAB_00103cc8:
    if (_set(StringName_const&,Variant_const&)::{lambda()#1}::operator()()::sname !=
        *(long *)param_1) goto LAB_00103cd8;
LAB_00103e70:
    BVar2 = (Bone2D)Variant::operator_cast_to_bool(param_2);
    this[0x5a8] = BVar2;
    if ((bool)BVar2) {
      calculate_length_and_rotation(this);
    }
    Object::notify_property_list_changed();
  }
  uVar4 = 1;
LAB_00103de5:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall Skeleton2D::_get_property_list(Skeleton2D *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
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
  local_88 = 0;
  local_78 = "SkeletonModificationStack2D";
  local_90 = 0;
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "modification_stack";
  local_98 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0x11;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104255:
    local_50 = 0x80006;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104295;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80006;
    if (local_60 == 0x11) goto LAB_00104255;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  lVar2 = *(long *)param_1;
joined_r0x00104295:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_68);
  puVar3[6] = local_60;
  if (*(long *)(puVar3 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
  }
  puVar3[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar3;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall Bone2D::_get_property_list(Bone2D *this,List *param_1)

{
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "auto_calculate_length_and_angle";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010444d:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0010444d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
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
  if (this[0x5a8] == (Bone2D)0x0) {
    local_80 = 0;
    local_78 = "1, 1024, 1";
    local_88 = 0;
    local_70 = 10;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    local_78 = "length";
    local_70 = 6;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,3,(StrRange *)&local_90,1,(StrRange *)&local_88,6,&local_80
              );
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    local_80 = 0;
    local_78 = "-360, 360, 0.01";
    local_88 = 0;
    local_70 = 0xf;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    local_78 = "bone_angle";
    local_70 = 10;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,3,(StrRange *)&local_90,1,(StrRange *)&local_88,6,&local_80
              );
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "editor_settings/show_bone_gizmo";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001045d7;
    }
  }
  local_50 = 6;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001045d7:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Bone2D::_bind_methods() */

void Bone2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "rest";
  uVar6 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_rest",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,Transform2D_const&>(set_rest);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_rest",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,Transform2D>(get_rest);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"apply_rest",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D>(apply_rest);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_skeleton_rest",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,Transform2D>(get_skeleton_rest);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_index_in_skeleton",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,int>(get_index_in_skeleton);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "auto_calculate";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_autocalculate_length_and_angle",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,bool>(set_autocalculate_length_and_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_autocalculate_length_and_angle",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,bool>(get_autocalculate_length_and_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_length",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,float>(set_length);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_length",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,float>(get_length);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "angle";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_bone_angle",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,float>(set_bone_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_bone_angle",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Bone2D,float>(get_bone_angle);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar7 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "suffix:px";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "rest";
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,0xb,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0
            );
  local_d8 = 0;
  local_a0 = 6;
  local_a8 = "Bone2D";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(StrRange *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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
  __n = lVar1 * 8;
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



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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
/* Bone2D::_editor_get_bone_shape(Vector<Vector2>*, Vector<Vector2>*, Bone2D*) */

byte __thiscall
Bone2D::_editor_get_bone_shape(Bone2D *this,Vector *param_1,Vector *param_2,Bone2D *param_3)

{
  byte bVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float local_90;
  float local_8c [3];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Vector<Vector2> *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = "editors/2d/bone_width";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  _EDITOR_GET((String *)local_58);
  fVar2 = Variant::operator_cast_to_float((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = "editors/2d/bone_outline_size";
  local_80 = 0;
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_80);
  _EDITOR_GET((String *)local_58);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  bVar1 = (byte)this[0x2fa] >> 6 & 1;
  if (((byte)this[0x2fa] >> 6 & 1) != 0) {
    if (param_3 == (Bone2D *)0x0) {
      if (*(float *)(this + 0x5ac) <= 0.0) {
        bVar1 = 0;
        goto LAB_00105b32;
      }
      local_68 = (Vector<Vector2> *)0x0;
      uVar6 = Node2D::get_global_scale();
      uVar5 = *(undefined8 *)(this + 0x5ac);
      sincosf(*(float *)(this + 0x5b0),local_8c,&local_90);
      local_68 = (Vector<Vector2> *)
                 CONCAT44((float)uVar5 * local_8c[0] * (float)((ulong)uVar6 >> 0x20),
                          (float)uVar5 * local_90 * (float)uVar6);
    }
    else {
      local_68 = (Vector<Vector2> *)0x0;
      uVar5 = Node2D::get_global_position();
      uVar6 = Node2D::get_global_position();
      local_68 = (Vector<Vector2> *)
                 CONCAT44((float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar5 >> 0x20),
                          (float)uVar6 - (float)uVar5);
      uVar4 = Node2D::get_global_rotation();
      local_68 = (Vector<Vector2> *)Vector2::rotated((float)(uVar4 ^ __LC105));
    }
    local_58[0] = Vector2::rotated(_LC106);
    uVar5 = Vector2::normalized();
    local_60 = CONCAT44(fVar2 * (float)((ulong)uVar5 >> 0x20),fVar2 * (float)uVar5);
    uVar5 = Vector2::normalized();
    uVar6 = Vector2::normalized();
    if (param_1 != (Vector *)0x0) {
      if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + -8) != 0)) {
        CowData<Vector2>::_unref((CowData<Vector2> *)(param_1 + 8));
      }
      Vector<Vector2>::push_back((Vector<Vector2> *)0x0,param_1);
      Vector<Vector2>::push_back((Vector<Vector2> *)param_1);
      Vector<Vector2>::push_back(local_68,param_1);
      Vector<Vector2>::push_back((Vector<Vector2> *)param_1);
    }
    if (param_2 != (Vector *)0x0) {
      if ((*(long *)(param_2 + 8) != 0) && (*(long *)(*(long *)(param_2 + 8) + -8) != 0)) {
        CowData<Vector2>::_unref((CowData<Vector2> *)(param_2 + 8));
      }
      Vector<Vector2>::push_back((Vector<Vector2> *)param_2);
      Vector<Vector2>::push_back
                ((Vector<Vector2> *)
                 CONCAT44(((float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar5 >> 0x20)) * fVar3,
                          ((float)uVar6 - (float)uVar5) * fVar3),param_2);
      Vector<Vector2>::push_back((Vector<Vector2> *)param_2);
      Vector<Vector2>::push_back((Vector<Vector2> *)param_2);
      Vector<Vector2>::push_back((Vector<Vector2> *)param_2);
      Vector<Vector2>::push_back((Vector<Vector2> *)param_2);
    }
  }
LAB_00105b32:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_bind_methods() */

void Skeleton2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined8 uVar12;
  MethodBind *pMVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined8 local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  char **local_68;
  undefined1 auStack_60 [16];
  char **ppcStack_50;
  long local_40;
  
  puVar11 = PTR__LC109_00117cb0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_138,(char ***)"get_bone_count",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,int>(get_bone_count);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_128._8_8_;
      local_128 = auVar3 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_c0 = 0;
  local_c8 = "idx";
  uVar14 = (uint)&local_68;
  local_68 = &local_c8;
  D_METHODP((char *)&local_138,(char ***)"get_bone",uVar14);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,Bone2D*,int>(get_bone);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_128._8_8_;
      local_128 = auVar4 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_138,(char ***)"get_skeleton",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,RID>(get_skeleton);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_128._8_8_;
      local_128 = auVar5 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_c8 = "modification_stack";
  local_c0 = 0;
  local_68 = &local_c8;
  D_METHODP((char *)&local_138,(char ***)"set_modification_stack",uVar14);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,Ref<SkeletonModificationStack2D>>(set_modification_stack);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_128._8_8_;
      local_128 = auVar6 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_138,(char ***)"get_modification_stack",0);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,Ref<SkeletonModificationStack2D>>(get_modification_stack);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_128._8_8_;
      local_128 = auVar7 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = 0;
  auStack_60._0_8_ = &pcStack_b0;
  local_b8 = "delta";
  pcStack_b0 = "execution_mode";
  local_68 = &local_b8;
  D_METHODP((char *)&local_138,(char ***)"execute_modifications",uVar14);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,float,int>(execute_modifications);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_128._8_8_;
      local_128 = auVar8 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = puVar11;
  pcStack_90 = "override_pose";
  auStack_60._8_8_ = &local_88;
  auStack_60._0_8_ = &pcStack_90;
  local_88 = "strength";
  pcStack_80 = "persistent";
  local_78 = 0;
  local_68 = &local_98;
  ppcStack_50 = &pcStack_80;
  D_METHODP((char *)&local_138,(char ***)"set_bone_local_pose_override",uVar14);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,int,Transform2D,float,bool>(set_bone_local_pose_override);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_128._8_8_;
      local_128 = auVar9 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = "bone_idx";
  pcStack_90 = (char *)0x0;
  local_68 = &local_98;
  D_METHODP((char *)&local_138,(char ***)"get_bone_local_pose_override",uVar14);
  auStack_60 = (undefined1  [16])0x0;
  local_68 = (char **)0x0;
  pMVar13 = create_method_bind<Skeleton2D,Transform2D,int>(get_bone_local_pose_override);
  ClassDB::bind_methodfi(1,pMVar13,false,(MethodDefinition *)&local_138,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  uVar12 = local_128._0_8_;
  if ((long *)local_128._0_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_128._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_128._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_128._0_8_ + -8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_128._8_8_;
      local_128 = auVar10 << 0x40;
      if (lVar1 != 0) {
        lVar16 = 0;
        plVar15 = (long *)uVar12;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar12 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_150 = 0;
  local_138 = "bone_setup_changed";
  local_130 = 0x12;
  String::parse_latin1((StrRange *)&local_150);
  local_128 = (undefined1  [16])0x0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_150);
  local_148 = "Skeleton2D";
  local_158 = 0;
  local_140 = 10;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_148,(StrRange *)&local_158,false);
  ClassDB::add_signal((StringName *)&local_148,(MethodInfo *)&local_138);
  if ((StringName::configured != '\0') && (local_148 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  lVar1 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar15 = (long *)(local_d0 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_e8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
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



/* Bone2D::get_configuration_warnings() const */

void Bone2D::get_configuration_warnings(void)

{
  char cVar1;
  long in_RSI;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  if (*(long *)(in_RSI + 0x588) == 0) {
    local_60 = 0;
    local_58 = "";
    local_50 = 0;
    if (*(long *)(in_RSI + 0x580) == 0) {
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "A Bone2D only works with a Skeleton2D or another Bone2D as parent node.";
      local_50 = 0x47;
    }
    else {
      String::parse_latin1((StrRange *)&local_60);
      local_58 = "This Bone2D chain should end at a Skeleton2D node.";
      local_50 = 0x32;
    }
    local_68 = 0;
    String::parse_latin1((StrRange *)&local_68);
    RTR((String *)&local_58,(String *)&local_68);
    Vector<String>::push_back();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  cVar1 = Transform2D::operator==((Transform2D *)(in_RSI + 0x590),(Transform2D *)&local_48);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "This bone lacks a proper REST pose. Go to the Skeleton2D node and set one.";
    local_68 = 0;
    local_50 = 0x4a;
    String::parse_latin1((StrRange *)&local_68);
    RTR((String *)&local_58,(String *)&local_68);
    Vector<String>::push_back();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Bone2D::_notification(int) */

void __thiscall Bone2D::_notification(Bone2D *this,int param_1)

{
  Bone2D BVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  Bone2D *pBVar8;
  long *plVar9;
  long *plVar10;
  Skeleton2D *pSVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  void *pvVar15;
  uint uVar16;
  Skeleton2D *this_00;
  Bone2D BVar17;
  int iVar18;
  long in_FS_OFFSET;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  Vector local_158 [8];
  undefined8 local_150;
  Vector local_148 [8];
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  Bone2D *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 uStack_b0;
  uint7 uStack_af;
  Bone2D *local_a8;
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
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x24) {
    if (9 < param_1) {
      switch(param_1) {
      case 10:
        lVar6 = Node::get_parent();
        if (lVar6 == 0) {
          *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
        }
        else {
          uVar13 = __dynamic_cast(lVar6,&Object::typeinfo,&typeinfo,0);
          *(undefined8 *)(this + 0x588) = 0;
          *(undefined8 *)(this + 0x580) = uVar13;
          do {
            pSVar11 = (Skeleton2D *)__dynamic_cast(lVar6,&Object::typeinfo,&Skeleton2D::typeinfo,0);
            *(Skeleton2D **)(this + 0x588) = pSVar11;
            if (pSVar11 != (Skeleton2D *)0x0) goto LAB_0010770c;
            lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&typeinfo,0);
            if (lVar6 == 0) goto LAB_001078fe;
            lVar6 = Node::get_parent();
          } while (lVar6 != 0);
          pSVar11 = *(Skeleton2D **)(this + 0x588);
          if (pSVar11 != (Skeleton2D *)0x0) {
LAB_0010770c:
            uStack_100 = 0x3f80000000000000;
            local_f8 = 0;
            uStack_f0 = 0x3f800000;
            local_e8 = 0x3f80000000000000;
            uStack_e0 = 0;
            local_d8 = 0x3f800000;
            uStack_d0 = 0x3f80000000000000;
            local_c8 = 0;
            uStack_c0 = 0x3f800000;
            local_b8 = 0;
            uVar2 = *(uint *)(pSVar11 + 0x580);
            uStack_b0 = 0;
            pvVar15 = *(void **)(pSVar11 + 0x588);
            uStack_a0 = 0x3f80000000000000;
            local_98 = 0;
            uStack_90 = 0x3f800000;
            lStack_50 = (ulong)uStack_af << 8;
            local_88 = 0x3f80000000000000;
            uStack_80 = 0;
            local_78 = 0x3f800000;
            uStack_70 = 0x3f80000000000000;
            local_68 = 0;
            uStack_60 = 0x3f800000;
            local_58 = 0;
            this_00 = pSVar11;
            local_108 = this;
            local_a8 = this;
            if (uVar2 == *(uint *)(pSVar11 + 0x584)) {
              uVar14 = (ulong)(uVar2 * 2);
              if (uVar2 * 2 == 0) {
                uVar14 = 1;
              }
              *(int *)(pSVar11 + 0x584) = (int)uVar14;
              pvVar15 = (void *)Memory::realloc_static(pvVar15,uVar14 * 0x60,false);
              *(void **)(pSVar11 + 0x588) = pvVar15;
              if (pvVar15 == (void *)0x0) {
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              this_00 = *(Skeleton2D **)(this + 0x588);
              uVar2 = *(uint *)(pSVar11 + 0x580);
            }
            *(uint *)(pSVar11 + 0x580) = uVar2 + 1;
            puVar12 = (undefined8 *)((ulong)uVar2 * 0x60 + (long)pvVar15);
            *puVar12 = local_a8;
            puVar12[1] = uStack_a0;
            puVar12[2] = local_98;
            puVar12[3] = uStack_90;
            puVar12[4] = local_88;
            puVar12[5] = uStack_80;
            puVar12[6] = local_78;
            puVar12[7] = uStack_70;
            puVar12[8] = local_68;
            puVar12[9] = uStack_60;
            puVar12[10] = local_58;
            puVar12[0xb] = lStack_50;
            if ((this_00[0x590] == (Skeleton2D)0x0) &&
               (this_00[0x590] = (Skeleton2D)0x1, ((byte)this_00[0x2fa] & 0x40) != 0)) {
              Skeleton2D::_make_bone_setup_dirty(this_00);
            }
            plVar7 = (long *)Node::get_parent();
            pcVar3 = *(code **)(*plVar7 + 0x108);
            create_custom_callable_function_pointer<Skeleton2D>
                      ((Skeleton2D *)&local_118,*(char **)(this + 0x588),
                       (_func_void *)"&Skeleton2D::_make_bone_setup_dirty");
            if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar18 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname)
               , iVar18 != 0)) {
              _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
            }
            (*pcVar3)(plVar7,&_notification(int)::{lambda()#1}::operator()()::sname,
                      (Skeleton2D *)&local_118,8);
            Callable::~Callable((Callable *)&local_118);
          }
        }
LAB_001078fe:
        (**(code **)(*(long *)this + 0x290))(&local_178,this);
        *(undefined8 *)(this + 0x5c4) = local_178;
        *(undefined8 *)(this + 0x5cc) = uStack_170;
        this[0x5dc] = (Bone2D)0x1;
        *(undefined8 *)(this + 0x5d4) = local_168;
        lVar6 = Engine::get_singleton();
        if (*(char *)(lVar6 + 0xc0) != '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010795d:
            CanvasItem::queue_redraw();
            return;
          }
          goto LAB_00106f1d;
        }
        break;
      case 0xb:
        pSVar11 = *(Skeleton2D **)(this + 0x588);
        if (pSVar11 != (Skeleton2D *)0x0) {
          uVar2 = *(uint *)(pSVar11 + 0x580);
          if (uVar2 != 0) {
            plVar7 = *(long **)(pSVar11 + 0x588);
            uVar14 = 0;
            plVar9 = plVar7;
            do {
              uVar16 = (uint)uVar14;
              if ((Bone2D *)*plVar9 == this) {
                *(uint *)(pSVar11 + 0x580) = uVar2 - 1;
                if (uVar16 < uVar2 - 1) {
                  plVar9 = plVar7 + (ulong)(uVar16 + 1) * 0xc;
                  do {
                    plVar10 = plVar9 + 0xc;
                    plVar9[-0xc] = *plVar9;
                    plVar9[-0xb] = plVar9[1];
                    plVar9[-10] = plVar9[2];
                    plVar9[-9] = plVar9[3];
                    plVar9[-4] = plVar9[8];
                    plVar9[-3] = plVar9[9];
                    plVar9[-8] = plVar9[4];
                    plVar9[-7] = plVar9[5];
                    plVar9[-6] = plVar9[6];
                    plVar9[-5] = plVar9[7];
                    *(undefined8 *)((long)plVar9 + -0x17) = *(undefined8 *)((long)plVar9 + 0x49);
                    *(undefined8 *)((long)plVar9 + -0xf) = *(undefined8 *)((long)plVar9 + 0x51);
                    plVar9 = plVar10;
                  } while (plVar7 + (uVar14 + ((uVar2 - 2) - uVar16)) * 0xc + 0x18 != plVar10);
                }
                break;
              }
              uVar14 = (ulong)(uVar16 + 1);
              plVar9 = plVar9 + 0xc;
            } while (uVar16 + 1 != uVar2);
          }
          if ((pSVar11[0x590] == (Skeleton2D)0x0) &&
             (pSVar11[0x590] = (Skeleton2D)0x1, ((byte)pSVar11[0x2fa] & 0x40) != 0)) {
            Skeleton2D::_make_bone_setup_dirty(pSVar11);
          }
          plVar7 = (long *)Node::get_parent();
          pcVar3 = *(code **)(*plVar7 + 0x110);
          create_custom_callable_function_pointer<Skeleton2D>
                    ((Skeleton2D *)&local_118,*(char **)(this + 0x588),
                     (_func_void *)"&Skeleton2D::_make_bone_setup_dirty");
          if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar18 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
             iVar18 != 0)) {
            _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
          }
          (*pcVar3)(plVar7,&_notification(int)::{lambda()#2}::operator()()::sname,
                    (Skeleton2D *)&local_118);
          Callable::~Callable((Callable *)&local_118);
        }
        *(undefined8 *)(this + 0x580) = 0;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Node2D::set_transform(this);
          return;
        }
        goto LAB_00106f1d;
      case 0xd:
        if (this[0x5a8] != (Bone2D)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            calculate_length_and_rotation(this);
            return;
          }
          goto LAB_00106f1d;
        }
        break;
      case 0x1e:
        lVar6 = Engine::get_singleton();
        if (*(char *)(lVar6 + 0xc0) != '\0') {
          if (*(long *)(this + 0x5b8) == 0) {
            plVar7 = (long *)RenderingServer::get_singleton();
            uVar13 = (**(code **)(*plVar7 + 0xe78))(plVar7);
            *(undefined8 *)(this + 0x5b8) = uVar13;
            plVar7 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar7 + 0xe80))
                      (plVar7,*(undefined8 *)(this + 0x5b8),*(undefined8 *)(this + 0x428));
            plVar7 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar7 + 4000))(plVar7,*(undefined8 *)(this + 0x5b8),1);
            plVar7 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar7 + 0xf98))(plVar7,*(undefined8 *)(this + 0x5b8),10);
          }
          plVar7 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar7 + 0xfb8))(plVar7,*(undefined8 *)(this + 0x5b8));
          BVar1 = this[0x5c0];
          if (BVar1 != (Bone2D)0x0) {
            local_108 = (Bone2D *)0x3f800000;
            uStack_100 = 0x3f80000000000000;
            local_f8 = 0;
            auVar29._0_8_ = Node2D::get_global_scale();
            auVar28._8_8_ = 0;
            auVar28._0_8_ = _LC131;
            auVar29._8_8_ = _LC131;
            auVar29 = divps(auVar28,auVar29);
            local_a8 = auVar29._0_8_;
            Transform2D::set_scale((Vector2 *)&local_108);
            plVar7 = (long *)RenderingServer::get_singleton();
            (**(code **)(*plVar7 + 0xeb0))(plVar7,*(undefined8 *)(this + 0x5b8),&local_108);
            local_118 = 0;
            String::parse_latin1((String *)&local_118,"editors/2d/bone_color1");
            _EDITOR_GET((String *)&local_a8);
            auVar29 = Variant::operator_cast_to_Color((Variant *)&local_a8);
            uVar23 = auVar29._8_8_;
            uVar13 = auVar29._0_8_;
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            local_118 = 0;
            String::parse_latin1((String *)&local_118,"editors/2d/bone_color2");
            _EDITOR_GET((String *)&local_a8);
            auVar29 = Variant::operator_cast_to_Color((Variant *)&local_a8);
            uVar24 = auVar29._8_8_;
            uVar19 = auVar29._0_8_;
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            local_118 = 0;
            String::parse_latin1((String *)&local_118,"editors/2d/bone_ik_color");
            _EDITOR_GET((String *)&local_a8);
            auVar29 = Variant::operator_cast_to_Color((Variant *)&local_a8);
            uVar25 = auVar29._8_8_;
            uVar20 = auVar29._0_8_;
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            local_118 = 0;
            String::parse_latin1((String *)&local_118,"editors/2d/bone_outline_color");
            _EDITOR_GET((String *)&local_a8);
            auVar29 = Variant::operator_cast_to_Color((Variant *)&local_a8);
            uVar26 = auVar29._8_8_;
            uVar21 = auVar29._0_8_;
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            local_118 = 0;
            String::parse_latin1((String *)&local_118,"editors/2d/bone_selected_color");
            _EDITOR_GET((String *)&local_a8);
            auVar29 = Variant::operator_cast_to_Color((Variant *)&local_a8);
            uVar27 = auVar29._8_8_;
            uVar22 = auVar29._0_8_;
            if (Variant::needs_deinit[(int)local_a8] != '\0') {
              Variant::_clear_internal();
            }
            BVar17 = (Bone2D)0x0;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
            for (iVar18 = 0; iVar5 = Node::get_child_count(SUB81(this,0)), iVar18 < iVar5;
                iVar18 = iVar18 + 1) {
              lVar6 = Node::get_child((int)this,SUB41(iVar18,0));
              if ((lVar6 != 0) &&
                 (pBVar8 = (Bone2D *)__dynamic_cast(lVar6,&Object::typeinfo,&typeinfo,0),
                 pBVar8 != (Bone2D *)0x0)) {
                local_150 = 0;
                local_140 = 0;
                _editor_get_bone_shape(this,local_158,local_148,pBVar8);
                local_130 = 0;
                pcVar3 = *(code **)(*(long *)this + 0xa0);
                StringName::StringName
                          ((StringName *)&local_118,"_local_pose_override_enabled_",false);
                cVar4 = (*pcVar3)(this,(String *)&local_118);
                if ((StringName::configured != '\0') && (local_118 != 0)) {
                  StringName::unref();
                }
                if (cVar4 == '\0') {
                  Vector<Color>::push_back(uVar13,uVar23,local_138);
                  Vector<Color>::push_back(uVar19,uVar24,local_138);
                  Vector<Color>::push_back(uVar13,uVar23,local_138);
                  Vector<Color>::push_back(uVar19,uVar24,local_138);
                }
                else {
                  Vector<Color>::push_back(uVar20,uVar25,local_138);
                  Vector<Color>::push_back(uVar20,uVar25,local_138);
                  Vector<Color>::push_back(uVar20,uVar25,local_138);
                  Vector<Color>::push_back(uVar20,uVar25,local_138);
                }
                local_120 = 0;
                cVar4 = EditorSelection::is_selected
                                  (*(Node **)(CanvasItemEditor::singleton + 0xd98));
                if (cVar4 == '\0') {
                  Vector<Color>::push_back(uVar21,uVar26,local_128);
                  Vector<Color>::push_back(uVar21,uVar26,local_128);
                  Vector<Color>::push_back(uVar21,uVar26,local_128);
                  Vector<Color>::push_back(uVar21,uVar26,local_128);
                  Vector<Color>::push_back(uVar21,uVar26,local_128);
                  Vector<Color>::push_back(uVar21,uVar26,local_128);
                }
                else {
                  Vector<Color>::push_back(uVar22,uVar27,local_128);
                  Vector<Color>::push_back(uVar22,uVar27,local_128);
                  Vector<Color>::push_back(uVar22,uVar27,local_128);
                  Vector<Color>::push_back(uVar22,uVar27,local_128);
                  Vector<Color>::push_back(uVar22,uVar27,local_128);
                  Vector<Color>::push_back(uVar22,uVar27,local_128);
                }
                plVar7 = (long *)RenderingServer::get_singleton();
                local_110 = 0;
                (**(code **)(*plVar7 + 0xf50))
                          (plVar7,*(undefined8 *)(this + 0x5b8),local_148,local_128,
                           (String *)&local_118);
                CowData<Vector2>::_unref((CowData<Vector2> *)&local_110);
                plVar7 = (long *)RenderingServer::get_singleton();
                local_110 = 0;
                (**(code **)(*plVar7 + 0xf50))
                          (plVar7,*(undefined8 *)(this + 0x5b8),local_158,local_138,
                           (String *)&local_118);
                CowData<Vector2>::_unref((CowData<Vector2> *)&local_110);
                CowData<Color>::_unref((CowData<Color> *)&local_120);
                CowData<Color>::_unref((CowData<Color> *)&local_130);
                CowData<Vector2>::_unref((CowData<Vector2> *)&local_140);
                CowData<Vector2>::_unref((CowData<Vector2> *)&local_150);
                BVar17 = BVar1;
              }
            }
            if (BVar17 == (Bone2D)0x0) {
              local_150 = 0;
              local_140 = 0;
              _editor_get_bone_shape(this,local_158,local_148,(Bone2D *)0x0);
              local_130 = 0;
              pcVar3 = *(code **)(*(long *)this + 0xa0);
              StringName::StringName((StringName *)&local_118,"_local_pose_override_enabled_",false)
              ;
              cVar4 = (*pcVar3)(this,(String *)&local_118);
              if ((StringName::configured != '\0') && (local_118 != 0)) {
                StringName::unref();
              }
              if (cVar4 == '\0') {
                Vector<Color>::push_back(uVar13,uVar23,local_138);
                Vector<Color>::push_back(uVar19,uVar24,local_138);
                Vector<Color>::push_back(uVar13,uVar23,local_138);
                Vector<Color>::push_back(uVar19,uVar24,local_138);
              }
              else {
                Vector<Color>::push_back(uVar20,uVar25,local_138);
                Vector<Color>::push_back(uVar20,uVar25,local_138);
                Vector<Color>::push_back(uVar20,uVar25,local_138);
                Vector<Color>::push_back(uVar20,uVar25,local_138);
              }
              local_120 = 0;
              cVar4 = EditorSelection::is_selected(*(Node **)(CanvasItemEditor::singleton + 0xd98));
              if (cVar4 == '\0') {
                Vector<Color>::push_back(uVar21,uVar26,local_128);
                Vector<Color>::push_back(uVar21,uVar26,local_128);
                Vector<Color>::push_back(uVar21,uVar26,local_128);
                Vector<Color>::push_back(uVar21,uVar26,local_128);
                Vector<Color>::push_back(uVar21,uVar26,local_128);
                Vector<Color>::push_back(uVar21,uVar26,local_128);
              }
              else {
                Vector<Color>::push_back(uVar22,uVar27,local_128);
                Vector<Color>::push_back(uVar22,uVar27,local_128);
                Vector<Color>::push_back(uVar22,uVar27,local_128);
                Vector<Color>::push_back(uVar22,uVar27,local_128);
                Vector<Color>::push_back(uVar22,uVar27,local_128);
                Vector<Color>::push_back(uVar22,uVar27,local_128);
              }
              plVar7 = (long *)RenderingServer::get_singleton();
              local_110 = 0;
              (**(code **)(*plVar7 + 0xf50))
                        (plVar7,*(undefined8 *)(this + 0x5b8),local_148,local_128,
                         (String *)&local_118,0);
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_110);
              plVar7 = (long *)RenderingServer::get_singleton();
              local_110 = 0;
              (**(code **)(*plVar7 + 0xf50))
                        (plVar7,*(undefined8 *)(this + 0x5b8),local_158,local_138,
                         (String *)&local_118,0);
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_110);
              CowData<Color>::_unref((CowData<Color> *)&local_120);
              CowData<Color>::_unref((CowData<Color> *)&local_130);
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_140);
              CowData<Vector2>::_unref((CowData<Vector2> *)&local_150);
            }
          }
        }
        break;
      case 0x23:
        if (*(Skeleton2D **)(this + 0x588) != (Skeleton2D *)0x0) {
          Skeleton2D::_make_transform_dirty(*(Skeleton2D **)(this + 0x588));
        }
        if (this[0x5dc] != (Bone2D)0x0) {
          (**(code **)(*(long *)this + 0x290))(&local_178,this);
          *(undefined8 *)(this + 0x5c4) = local_178;
          *(undefined8 *)(this + 0x5cc) = uStack_170;
          *(undefined8 *)(this + 0x5d4) = local_168;
        }
        lVar6 = Engine::get_singleton();
        if (*(char *)(lVar6 + 0xc0) != '\0') {
          CanvasItem::queue_redraw();
          lVar6 = Node::get_parent();
          if (((lVar6 != 0) && (lVar6 = Node::get_parent(), lVar6 != 0)) &&
             (lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,&typeinfo,0), lVar6 != 0)) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010795d;
            goto LAB_00106f1d;
          }
        }
      }
    }
  }
  else if (param_1 - 0x2329U < 2) {
    (**(code **)(*(long *)this + 0x290))(&local_a8,this);
    Node2D::set_transform(this);
    *(undefined8 *)(this + 0x5d4) = local_98;
    *(Bone2D **)(this + 0x5c4) = local_a8;
    *(undefined8 *)(this + 0x5cc) = uStack_a0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106f1d:
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* CanvasItem::_edit_get_minimum_size() const */

undefined8 CanvasItem::_edit_get_minimum_size(void)

{
  return 0xbf800000bf800000;
}



/* CanvasItem::_edit_use_pivot() const */

undefined8 CanvasItem::_edit_use_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_set_pivot(Vector2 const&) */

void CanvasItem::_edit_set_pivot(Vector2 *param_1)

{
  return;
}



/* CanvasItem::_edit_get_pivot() const */

undefined8 CanvasItem::_edit_get_pivot(void)

{
  return 0;
}



/* CanvasItem::_edit_use_rect() const */

undefined8 CanvasItem::_edit_use_rect(void)

{
  return 0;
}



/* CanvasItem::_edit_get_rect() const */

undefined1  [16] CanvasItem::_edit_get_rect(void)

{
  return ZEXT816(0);
}



/* CanvasItem::get_anchorable_rect() const */

undefined1  [16] CanvasItem::get_anchorable_rect(void)

{
  return ZEXT816(0);
}



/* Bone2D::is_class_ptr(void*) const */

uint __thiscall Bone2D::is_class_ptr(Bone2D *this,void *param_1)

{
  return (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &Node2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Bone2D::_property_can_revertv(StringName const&) const */

undefined8 Bone2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Bone2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Bone2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Skeleton2D::is_class_ptr(void*) const */

uint __thiscall Skeleton2D::is_class_ptr(Skeleton2D *this,void *param_1)

{
  return (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &Node2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Skeleton2D::_property_can_revertv(StringName const&) const */

undefined8 Skeleton2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Skeleton2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Skeleton2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<Skeleton2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton2D,void> *this)

{
  return;
}



/* MethodBindTR<Transform2D, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Transform2D,int>::_gen_argument_type(MethodBindTR<Transform2D,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff7) + 0xb;
}



/* MethodBindTR<Transform2D, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Transform2D,int>::get_argument_meta(MethodBindTR<Transform2D,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, Transform2D, float, bool>::get_argument_meta(int) const */

char __thiscall
MethodBindT<int,Transform2D,float,bool>::get_argument_meta
          (MethodBindT<int,Transform2D,float,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x03';
  if (param_1 != 0) {
    cVar1 = (param_1 == 2) * '\t';
  }
  return cVar1;
}



/* MethodBindT<float, int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<float,int>::_gen_argument_type(MethodBindT<float,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x02';
  if (1 < (uint)param_1) {
    cVar1 = '\0';
  }
  return cVar1;
}



/* MethodBindT<float, int>::get_argument_meta(int) const */

char __thiscall MethodBindT<float,int>::get_argument_meta(MethodBindT<float,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\t';
  if (param_1 != 0) {
    cVar1 = (param_1 == 1) * '\x03';
  }
  return cVar1;
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<SkeletonModificationStack2D>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<SkeletonModificationStack2D>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<SkeletonModificationStack2D>>::_gen_argument_type
          (MethodBindT<Ref<SkeletonModificationStack2D>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<SkeletonModificationStack2D>>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindTR<Bone2D*, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Bone2D*,int>::_gen_argument_type(MethodBindTR<Bone2D*,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTR<Bone2D*, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Bone2D*,int>::get_argument_meta(MethodBindTR<Bone2D*,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
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



/* MethodBindTRC<Transform2D>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Transform2D>::_gen_argument_type(int param_1)

{
  return 0xb;
}



/* MethodBindTRC<Transform2D>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Transform2D>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Transform2D const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Transform2D_const&>::_gen_argument_type
          (MethodBindT<Transform2D_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0xb;
}



/* MethodBindT<Transform2D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Transform2D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Skeleton2D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton2D,void>::get_argument_count
          (CallableCustomMethodPointer<Skeleton2D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<Skeleton2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton2D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<Transform2D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform2D_const&>::~MethodBindT(MethodBindT<Transform2D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117600;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Transform2D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform2D_const&>::~MethodBindT(MethodBindT<Transform2D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117600;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001176c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001176c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Transform2D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform2D>::~MethodBindTRC(MethodBindTRC<Transform2D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117660;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform2D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform2D>::~MethodBindTRC(MethodBindTRC<Transform2D> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117660;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117720;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117720;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117780;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117780;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001177e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001177e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117840;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117840;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001178a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001178a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Bone2D*, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Bone2D*,int>::~MethodBindTR(MethodBindTR<Bone2D*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117900;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Bone2D*, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Bone2D*,int>::~MethodBindTR(MethodBindTR<Bone2D*,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117900;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<RID>::~MethodBindTRC() */

void __thiscall MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonModificationStack2D>>::~MethodBindT
          (MethodBindT<Ref<SkeletonModificationStack2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001179c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonModificationStack2D>>::~MethodBindT
          (MethodBindT<Ref<SkeletonModificationStack2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001179c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonModificationStack2D>>::~MethodBindTRC
          (MethodBindTRC<Ref<SkeletonModificationStack2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonModificationStack2D>>::~MethodBindTRC
          (MethodBindTRC<Ref<SkeletonModificationStack2D>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float, int>::~MethodBindT() */

void __thiscall MethodBindT<float,int>::~MethodBindT(MethodBindT<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float, int>::~MethodBindT() */

void __thiscall MethodBindT<float,int>::~MethodBindT(MethodBindT<float,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Transform2D, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,Transform2D,float,bool>::~MethodBindT(MethodBindT<int,Transform2D,float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, Transform2D, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,Transform2D,float,bool>::~MethodBindT(MethodBindT<int,Transform2D,float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117ae0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Transform2D, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Transform2D,int>::~MethodBindTR(MethodBindTR<Transform2D,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117b40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Transform2D, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Transform2D,int>::~MethodBindTR(MethodBindTR<Transform2D,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117b40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, Transform2D, float, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<int,Transform2D,float,bool>::_gen_argument_type
          (MethodBindT<int,Transform2D,float,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((((uint)param_1 < 4) && (cVar1 = '\x02', param_1 != 0)) && (cVar1 = '\v', param_1 != 1)) {
    cVar1 = (param_1 == 2) * '\x02' + '\x01';
  }
  return cVar1;
}



/* CallableCustomMethodPointer<Skeleton2D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Skeleton2D,void>::get_object
          (CallableCustomMethodPointer<Skeleton2D,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010937d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010937d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010937d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Bone2D::_validate_propertyv(PropertyInfo&) const */

void Bone2D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)_GLOBAL_OFFSET_TABLE_ == Node::_validate_property) {
    return;
  }
  CanvasItem::_validate_property(param_1);
  return;
}



/* Skeleton2D::_validate_propertyv(PropertyInfo&) const */

void Skeleton2D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)_GLOBAL_OFFSET_TABLE_ == Node::_validate_property) {
    return;
  }
  CanvasItem::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::_get_class_namev() const */

undefined8 * Bone2D::_get_class_namev(void)

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
LAB_00109533:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109533;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Bone2D");
      goto LAB_0010959e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Bone2D");
LAB_0010959e:
  return &_get_class_namev()::_class_name_static;
}



/* Skeleton2D::_get_class_namev() const */

undefined8 * Skeleton2D::_get_class_namev(void)

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
LAB_00109613:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109613;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton2D");
      goto LAB_0010967e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Skeleton2D");
LAB_0010967e:
  return &_get_class_namev()::_class_name_static;
}



/* Skeleton2D::get_class() const */

void Skeleton2D::get_class(void)

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



/* Bone2D::get_class() const */

void Bone2D::get_class(void)

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



/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Color>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Bone2D::_bind_methods() [clone .cold] */

void Bone2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Skeleton2D::_bind_methods() [clone .cold] */

void Skeleton2D::_bind_methods(void)

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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==((String *)param_1,"Object");
        return uVar7;
      }
LAB_00109c9f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00109bb3;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00109bb3:
    uVar5 = String::operator==((String *)param_1,(StrRange *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_00109c9f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Bone2D::_getv(StringName const&, Variant&) const */

void __thiscall Bone2D::_getv(Bone2D *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  
  cVar1 = _get(this,param_1,param_2);
  if ((cVar1 == '\0') && ((code *)PTR__get_0011d008 != Object::_get)) {
    CanvasItem::_get((StringName *)this,(Variant *)param_1);
    return;
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



/* Skeleton2D::_getv(StringName const&, Variant&) const */

void __thiscall Skeleton2D::_getv(Skeleton2D *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  
  cVar1 = _get(this,param_1,param_2);
  if ((cVar1 == '\0') && ((code *)PTR__get_0011d008 != Object::_get)) {
    CanvasItem::_get((StringName *)this,(Variant *)param_1);
    return;
  }
  return;
}



/* Skeleton2D::_setv(StringName const&, Variant const&) */

void Skeleton2D::_setv(StringName *param_1,Variant *param_2)

{
  char cVar1;
  
  if ((code *)PTR__set_0011d010 != Object::_set) {
    cVar1 = CanvasItem::_set(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
  }
  _set(param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00109f80) */
/* Skeleton2D::_notificationv(int, bool) */

void __thiscall Skeleton2D::_notificationv(Skeleton2D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011d018 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011d018 != CanvasItem::_notification) {
    Node2D::_notification(iVar1);
  }
  _notification(this,param_1);
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



/* Callable create_custom_callable_function_pointer<Skeleton2D>(Skeleton2D*, char const*, void
   (Skeleton2D::*)()) */

Skeleton2D *
create_custom_callable_function_pointer<Skeleton2D>
          (Skeleton2D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00117570;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* MethodBindTRC<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<RID>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0x17;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0010a1f5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010a1f5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::_setv(StringName const&, Variant const&) */

void __thiscall Bone2D::_setv(Bone2D *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  
  if ((code *)PTR__set_0011d010 != Object::_set) {
    cVar1 = CanvasItem::_set((StringName *)this,(Variant *)param_1);
    if (cVar1 != '\0') {
      return;
    }
  }
  _set(this,param_1,param_2);
  return;
}



/* CallableCustomMethodPointer<Skeleton2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Skeleton2D,void>::call
          (CallableCustomMethodPointer<Skeleton2D,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010a49f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a49f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a561;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a49f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC66,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a561:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
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
  local_60 = 0;
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
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_0010a665;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_0010a665:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 3;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0010a7f5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010a7f5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0010a945;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010a945:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<SkeletonModificationStack2D>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "SkeletonModificationStack2D";
  local_40 = 0x1b;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
      goto LAB_0010aa8d;
    }
  }
  StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010aa8d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* Node2D::is_class(String const&) const */

undefined8 __thiscall Node2D::is_class(Node2D *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010abff;
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
LAB_0010abff:
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
    if (cVar6 != '\0') goto LAB_0010acb3;
  }
  cVar6 = String::operator==((String *)param_1,"Node2D");
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
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010acb3;
    }
    cVar6 = String::operator==((String *)param_1,"CanvasItem");
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
        cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010acb3;
      }
      cVar6 = String::operator==((String *)param_1,"Node");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Object::is_class((Object *)this,param_1);
          return uVar8;
        }
        goto LAB_0010ae6e;
      }
    }
  }
LAB_0010acb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ae6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::is_class(String const&) const */

undefined8 __thiscall Skeleton2D::is_class(Skeleton2D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010aeef;
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
LAB_0010aeef:
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
    if (cVar5 != '\0') goto LAB_0010afa3;
  }
  cVar5 = String::operator==((String *)param_1,"Skeleton2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Node2D::is_class((Node2D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010afa3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::is_class(String const&) const */

undefined8 __thiscall Bone2D::is_class(Bone2D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010b06f;
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
LAB_0010b06f:
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
    if (cVar5 != '\0') goto LAB_0010b123;
  }
  cVar5 = String::operator==((String *)param_1,"Bone2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Node2D::is_class((Node2D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010b123:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform2D>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0xb;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_0010b265;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_0010b265:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<SkeletonModificationStack2D>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "SkeletonModificationStack2D";
    local_60 = 0x1b;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC8;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,3,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform2D const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Transform2D_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC8;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0xb,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,
               6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC8;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float,int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined8 uVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 3;
  }
  else {
    if (in_EDX != 1) goto LAB_0010b9ea;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 2;
  }
  local_90 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,uVar2,&local_90,0,(CowData<char32_t> *)&local_88,6,&local_80)
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  *puVar3 = local_78._0_4_;
  if (*(long *)(puVar3 + 2) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
    lVar1 = local_70;
    local_70 = 0;
    *(long *)(puVar3 + 2) = lVar1;
  }
  if (*(long *)(puVar3 + 4) != local_68) {
    StringName::unref();
    lVar1 = local_68;
    local_68 = 0;
    *(long *)(puVar3 + 4) = lVar1;
  }
  puVar3[6] = local_60;
  if (*(long *)(puVar3 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
    lVar1 = local_58;
    local_58 = 0;
    *(long *)(puVar3 + 8) = lVar1;
  }
  puVar3[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010b9ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Transform2D, float, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,Transform2D,float,bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined8 uVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 2;
  }
  else if (in_EDX == 1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 0xb;
  }
  else if (in_EDX == 2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 3;
  }
  else {
    if (in_EDX != 3) goto LAB_0010bd58;
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC8;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    uVar2 = 1;
  }
  local_90 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,uVar2,(CowData<char32_t> *)&local_90,0,
             (CowData<char32_t> *)&local_88,6,&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  *puVar3 = local_78._0_4_;
  if (*(long *)(puVar3 + 2) != local_70) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 2));
    lVar1 = local_70;
    local_70 = 0;
    *(long *)(puVar3 + 2) = lVar1;
  }
  if (*(long *)(puVar3 + 4) != local_68) {
    StringName::unref();
    lVar1 = local_68;
    local_68 = 0;
    *(long *)(puVar3 + 4) = lVar1;
  }
  puVar3[6] = local_60;
  if (*(long *)(puVar3 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar3 + 8));
    lVar1 = local_58;
    local_58 = 0;
    *(long *)(puVar3 + 8) = lVar1;
  }
  puVar3[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010bd58:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_a8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010c1ef;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c1ef:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011d020 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node2D::_get_property_listv(Node2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node2D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010c701;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c701:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Skeleton2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Skeleton2D::_get_property_listv(Skeleton2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node2D::_get_property_listv((Node2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Skeleton2D";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Skeleton2D";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010c9b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c9b1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Skeleton2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node2D::_get_property_listv((Node2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Bone2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Bone2D::_get_property_listv(Bone2D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node2D::_get_property_listv((Node2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Bone2D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Bone2D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0010cc71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cc71:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Bone2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node2D::_get_property_listv((Node2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Bone2D*, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Bone2D*,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    local_60 = 6;
    local_68 = "Bone2D";
    String::parse_latin1((StrRange *)&local_98);
    StringName::StringName((StringName *)&local_68,(StrRange *)&local_98,false);
    *puVar4 = 0x18;
    *(undefined8 *)(puVar4 + 2) = 0;
    StringName::StringName((StringName *)(puVar4 + 4),(StringName *)&local_68);
    bVar5 = StringName::configured != '\0';
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 6;
    if ((bVar5) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Transform2D, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Transform2D,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    local_68 = &_LC8;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_b0,0,(StrRange *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_80;
    *(long *)(puVar4 + 8) = local_78;
    puVar4[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0010d31a;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC8;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar4 = 0xb;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar4[10] = 6;
LAB_0010d2df:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_a0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010d2df;
    StringName::StringName((StringName *)&local_68,(CowData<char32_t> *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010d31a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Bone2D, Transform2D const&>(void (Bone2D::*)(Transform2D const&))
    */

MethodBind * create_method_bind<Bone2D,Transform2D_const&>(_func_void_Transform2D_ptr *param_1)

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
  *(_func_void_Transform2D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117600;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D, Transform2D>(Transform2D (Bone2D::*)() const) */

MethodBind * create_method_bind<Bone2D,Transform2D>(_func_Transform2D *param_1)

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
  *(_func_Transform2D **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117660;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D>(void (Bone2D::*)()) */

MethodBind * create_method_bind<Bone2D>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001176c0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D, int>(int (Bone2D::*)() const) */

MethodBind * create_method_bind<Bone2D,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00117720;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D, bool>(void (Bone2D::*)(bool)) */

MethodBind * create_method_bind<Bone2D,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117780;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D, bool>(bool (Bone2D::*)() const) */

MethodBind * create_method_bind<Bone2D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001177e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D, float>(void (Bone2D::*)(float)) */

MethodBind * create_method_bind<Bone2D,float>(_func_void_float *param_1)

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
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117840;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Bone2D, float>(float (Bone2D::*)() const) */

MethodBind * create_method_bind<Bone2D,float>(_func_float *param_1)

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
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001178a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Bone2D";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* Bone2D::_initialize_classv() */

void Bone2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0011d038 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "CanvasItem";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0011d028 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0011d030 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "Bone2D";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* MethodBind* create_method_bind<Skeleton2D, int>(int (Skeleton2D::*)() const) */

MethodBind * create_method_bind<Skeleton2D,int>(_func_int *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00117720;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D, Bone2D*, int>(Bone2D* (Skeleton2D::*)(int)) */

MethodBind * create_method_bind<Skeleton2D,Bone2D*,int>(_func_Bone2D_ptr_int *param_1)

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
  *(_func_Bone2D_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117900;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D, RID>(RID (Skeleton2D::*)() const) */

MethodBind * create_method_bind<Skeleton2D,RID>(_func_RID *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00117960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D, Ref<SkeletonModificationStack2D> >(void
   (Skeleton2D::*)(Ref<SkeletonModificationStack2D>)) */

MethodBind *
create_method_bind<Skeleton2D,Ref<SkeletonModificationStack2D>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001179c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D,
   Ref<SkeletonModificationStack2D>>(Ref<SkeletonModificationStack2D> (Skeleton2D::*)() const) */

MethodBind * create_method_bind<Skeleton2D,Ref<SkeletonModificationStack2D>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00117a20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D, float, int>(void (Skeleton2D::*)(float, int)) */

MethodBind * create_method_bind<Skeleton2D,float,int>(_func_void_float_int *param_1)

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
  *(_func_void_float_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117a80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D, int, Transform2D, float, bool>(void
   (Skeleton2D::*)(int, Transform2D, float, bool)) */

MethodBind *
create_method_bind<Skeleton2D,int,Transform2D,float,bool>
          (_func_void_int_Transform2D_float_bool *param_1)

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
  *(_func_void_int_Transform2D_float_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117ae0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* MethodBind* create_method_bind<Skeleton2D, Transform2D, int>(Transform2D (Skeleton2D::*)(int)) */

MethodBind * create_method_bind<Skeleton2D,Transform2D,int>(_func_Transform2D_int *param_1)

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
  *(_func_Transform2D_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117b40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Skeleton2D";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar2 = 0;
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
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010edd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0010edd0;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0010ed5c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010ed01;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010ed5c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
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
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010ed01:
  puVar8[-1] = param_1;
  return 0;
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



/* Skeleton2D::_initialize_classv() */

void Skeleton2D::_initialize_classv(void)

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
    if (Node2D::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0011d038 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "CanvasItem";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0011d028 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_58 = "CanvasItem";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "Node2D";
      local_70 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_0011d030 != CanvasItem::_bind_methods) {
        Node2D::_bind_methods();
      }
      Node2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node2D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "Skeleton2D";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010f6f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_0010f6f0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_0010f746;
  }
  if (lVar9 == lVar5) {
LAB_0010f66b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010f746:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010f5df;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010f66b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010f5df:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x10;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010fa10:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x10 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_0010fa10;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar11 == lVar4) {
LAB_0010f97c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_0010f914;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010f97c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _UNK_00117c48;
  uVar7 = __LC126;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_0010f914:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010faf0) */
/* Bone2D::_notificationv(int, bool) */

void __thiscall Bone2D::_notificationv(Bone2D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011d018 != CanvasItem::_notification) {
      Node2D::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011d018 != CanvasItem::_notification) {
    Node2D::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010fcf8) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTR<Transform2D, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Transform2D,int>::validated_call
          (MethodBindTR<Transform2D,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
      local_60 = 0;
      local_50 = 0x35;
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
      goto LAB_0011000f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_0011000f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Transform2D, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Transform2D,int>::ptrcall
          (MethodBindTR<Transform2D,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001101fc;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_001101fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Transform2D, float, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<int,Transform2D,float,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar2) {
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
      goto LAB_0011040d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)*(double *)(*(long *)(param_3 + 0x10) + 8);
  (*pcVar1)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
            *(undefined8 *)(*(long *)param_3 + 8),*(undefined1 *)(*(long *)(param_3 + 0x18) + 8));
LAB_0011040d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Transform2D, float, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,Transform2D,float,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011061c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(param_1 + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)**(double **)((long)param_3 + 0x10);
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
            **(char **)((long)param_3 + 0x18) != '\0');
LAB_0011061c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float,int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00110991;
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
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00110819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00110991:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float,int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00110b81;
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
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x00110a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               **(undefined4 **)((long)param_3 + 8));
    return;
  }
LAB_00110b81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<SkeletonModificationStack2D>>::call
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
      local_58 = (Object *)0x10fec8;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110d30;
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
LAB_00110d30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110fd0;
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
      local_58 = (char *)(*(code *)pVVar2)();
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
LAB_00110fd0:
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
  undefined8 uVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001111e2;
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
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_001111e2:
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
  undefined8 uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111391;
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
  *(undefined8 *)param_3 = uVar1;
LAB_00111391:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
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
  float fVar5;
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001115c0;
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
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
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
LAB_001115c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001117d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_001117d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00111997;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_00111997:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00111ce9;
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
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00111b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111ce9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00111ec9;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x00111d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00111ec9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111f90;
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
LAB_00111f90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001121a2;
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
LAB_001121a2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112351;
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
LAB_00112351:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00112691;
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
                    /* WARNING: Could not recover jumptable at 0x0011251d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00112691:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00112879;
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
                    /* WARNING: Could not recover jumptable at 0x00112702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00112879:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00112940;
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
LAB_00112940:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112b54;
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
LAB_00112b54:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112d03;
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
LAB_00112d03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112f90;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar2)();
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
LAB_00112f90:
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
      goto LAB_0011330f;
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
                    /* WARNING: Could not recover jumptable at 0x001131b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011330f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001134cf;
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
                    /* WARNING: Could not recover jumptable at 0x00113376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001134cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Transform2D>::call
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  Transform2D local_48 [24];
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001135b0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
      (*(code *)pVVar2)(local_48);
      Variant::Variant((Variant *)local_68,local_48);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_68[0];
      *(undefined8 *)(param_1 + 8) = local_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_58;
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
LAB_001135b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Transform2D>::validated_call
          (MethodBindTRC<Transform2D> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Variant **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
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
    if (local_58 == (Variant **)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Variant **)0x10fec8;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001137d9;
    }
    param_2 = local_58;
    if ((StringName::configured != '\0') && (local_58 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar1[2] = local_38;
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
LAB_001137d9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform2D>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform2D>::ptrcall
          (MethodBindTRC<Transform2D> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  void **local_78;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = (void **)0x10fec8;
      local_70 = 0x35;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_001139a7;
    }
    param_2 = local_78;
    if ((StringName::configured != '\0') && (local_78 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)(&local_48,param_1 + *(long *)(this + 0x60),param_2);
  *(undefined8 *)((long)param_3 + 0x10) = local_38;
  *(undefined8 *)param_3 = local_48;
  *(undefined8 *)((long)param_3 + 8) = uStack_40;
LAB_001139a7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform2D const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Transform2D_const&>::validated_call
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
      goto LAB_00113cf1;
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
                    /* WARNING: Could not recover jumptable at 0x00113b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00113cf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform2D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Transform2D_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00113ed1;
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
                    /* WARNING: Could not recover jumptable at 0x00113d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00113ed1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<SkeletonModificationStack2D>>::ptrcall
          (MethodBindTRC<Ref<SkeletonModificationStack2D>> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_48 = (Object *)0x10fec8;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00113f96;
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
    if (pOVar5 == (Object *)0x0) goto LAB_00113f96;
    *(undefined8 *)param_3 = 0;
    goto LAB_00113fd9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00113fd9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00113fd9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00113f96;
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
LAB_00113f96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<Ref<SkeletonModificationStack2D>>::validated_call
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
      local_58 = (Object *)0x10fec8;
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
      goto LAB_00114298;
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
LAB_00114256:
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
      pOVar4 = (Object *)
               __dynamic_cast(pOVar4,&Object::typeinfo,&SkeletonModificationStack2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00114256;
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
LAB_00114298:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<SkeletonModificationStack2D>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10fec8;
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
      goto LAB_0011455c;
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
LAB_00114538:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00114538;
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
LAB_0011455c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Bone2D*, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Bone2D*,int>::validated_call
          (MethodBindTR<Bone2D*,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
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
      goto LAB_001148f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_001148f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Bone2D*, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Bone2D*,int>::ptrcall
          (MethodBindTR<Bone2D*,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114948;
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
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_00114948:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Bone2D*, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Bone2D*,int>::call
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00114c10;
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
      if (in_R8D != 1) goto LAB_00114c50;
LAB_00114c40:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00114c50:
        uVar7 = 4;
        goto LAB_00114c05;
      }
      if (in_R8D == 1) goto LAB_00114c40;
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
    uVar4 = _LC151;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar12);
    pOVar8 = (Object *)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,pOVar8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00114c05:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00114c10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Transform2D, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTR<Transform2D,int>::call
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  Transform2D local_48 [24];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00114f90;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00114fd0;
LAB_00114fc0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00114fd0:
        uVar7 = 4;
        goto LAB_00114f85;
      }
      if (in_R8D == 1) goto LAB_00114fc0;
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
    uVar4 = _LC151;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)(local_48,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_68,local_48);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_68[0];
    *(undefined8 *)(param_1 + 8) = local_60;
    *(undefined8 *)(param_1 + 0x10) = uStack_58;
  }
  else {
    uVar7 = 3;
LAB_00114f85:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00114f90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, Transform2D, float, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,Transform2D,float,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant local_88 [32];
  Variant *local_68 [5];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_001153d2;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar14;
    }
    if ((int)(4 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar7 + -4 + (int)lVar9;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_68[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],1);
      uVar4 = _LC153;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],3);
      uVar4 = _LC154;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_float(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],0xb);
      uVar4 = _LC155;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Transform2D(local_88);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC151;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_68[0]);
      (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),iVar7,bVar6);
      goto LAB_001153d2;
    }
    uVar8 = 4;
  }
  else {
    uVar8 = 3;
  }
  *in_R9 = uVar8;
  in_R9[2] = 4;
LAB_001153d2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonModificationStack2D> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<SkeletonModificationStack2D>>::call
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
      local_48 = (Object *)0x10fec8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115770;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00115765:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00115770;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_001157c0;
LAB_001157b0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001157c0:
      uVar7 = 4;
      goto LAB_00115765;
    }
    if (in_R8D == 1) goto LAB_001157b0;
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
  uVar4 = _LC156;
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
LAB_001158dd:
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
      pOVar8 = (Object *)
               __dynamic_cast(pOVar8,&Object::typeinfo,&SkeletonModificationStack2D::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001158dd;
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
LAB_00115770:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<SkeletonModificationStack2D>>::validated_call
          (MethodBindTRC<Ref<SkeletonModificationStack2D>> *this,Object *param_1,Variant **param_2,
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
      local_48 = (Variant **)0x10fec8;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00115a86;
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
LAB_00115a86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(float, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float,int>
               (__UnexistingClass *param_1,_func_void_float_int *param_2,Variant **param_3,
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
    goto LAB_00115d5d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00115d8d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00115cc5;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00115da8;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00115d8d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00115da8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00115cc5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_float_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar4 = _LC157;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_int(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
      uVar4 = _LC158;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00115d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)(fVar12,(int)(param_1 + (long)param_3));
      return;
    }
  }
  uVar7 = 4;
LAB_00115d5d:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float,int>::call
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00115e46;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float,int>
            (p_Var2,(_func_void_float_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00115e46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
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
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011610d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00116170;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00116170:
      uVar6 = 4;
LAB_0011610d:
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
      goto LAB_0011608b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011608b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC158;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x001160e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001161d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001161d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011649d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00116500;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00116500:
      uVar6 = 4;
LAB_0011649d:
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
      goto LAB_0011641b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011641b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC159;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00116477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00116566;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00116566:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Transform2D const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(Transform2D const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Transform2D_const&>
               (__UnexistingClass *param_1,_func_void_Transform2D_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar9;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_5;
  if (uVar8 < 2) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_001168a8;
LAB_00116828:
      puVar9 = *(undefined4 **)CONCAT44(in_register_0000000c,param_4);
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001168a8:
        uVar6 = 4;
        goto LAB_00116835;
      }
      if (uVar8 == 1) goto LAB_00116828;
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
      puVar9 = (undefined4 *)(lVar1 + lVar7 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Transform2D_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar9,0xb);
    uVar4 = _LC160;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Transform2D(aVStack_48);
    (*param_2)(param_1 + (long)param_3);
  }
  else {
    uVar6 = 3;
LAB_00116835:
    *(undefined4 *)param_6 = uVar6;
    *(undefined4 *)(param_6 + 8) = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Transform2D const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Transform2D_const&>::call
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
      _err_print_error(&_LC66,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00116916;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Transform2D_const&>
            (p_Var2,(_func_void_Transform2D_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00116916:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

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
/* MethodBindTR<Transform2D, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Transform2D,int>::~MethodBindTR(MethodBindTR<Transform2D,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, Transform2D, float, bool>::~MethodBindT() */

void __thiscall
MethodBindT<int,Transform2D,float,bool>::~MethodBindT(MethodBindT<int,Transform2D,float,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float, int>::~MethodBindT() */

void __thiscall MethodBindT<float,int>::~MethodBindT(MethodBindT<float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<SkeletonModificationStack2D>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonModificationStack2D>>::~MethodBindTRC
          (MethodBindTRC<Ref<SkeletonModificationStack2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<SkeletonModificationStack2D> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonModificationStack2D>>::~MethodBindT
          (MethodBindT<Ref<SkeletonModificationStack2D>> *this)

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
/* MethodBindTR<Bone2D*, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Bone2D*,int>::~MethodBindTR(MethodBindTR<Bone2D*,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform2D>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Transform2D>::~MethodBindTRC(MethodBindTRC<Transform2D> *this)

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
/* MethodBindT<Transform2D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform2D_const&>::~MethodBindT(MethodBindT<Transform2D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Skeleton2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Skeleton2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Skeleton2D,void> *this)

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


