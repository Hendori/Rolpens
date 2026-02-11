
/* CowData<GodotCollisionObject2D::Shape>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<GodotCollisionObject2D::Shape>::_copy_on_write(CowData<GodotCollisionObject2D::Shape> *this)

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
  __n = lVar2 * 0x58;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotCollisionObject2D::_update_shapes() [clone .part.0] */

void __thiscall GodotCollisionObject2D::_update_shapes(GodotCollisionObject2D *this)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0x38);
  if (lVar3 != 0) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(lVar3 + -8) <= (long)uVar6) break;
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      lVar3 = *(long *)(this + 0x38);
      lVar1 = lVar3 + lVar7;
      if (*(char *)(lVar1 + 0x50) == '\0') {
        local_68 = *(undefined8 *)(*(long *)(lVar1 + 0x48) + 0x10);
        uStack_60 = *(undefined8 *)(*(long *)(lVar1 + 0x48) + 0x18);
        Transform2D::operator*((Transform2D *)&local_58,(Transform2D *)(this + 0x48));
        fVar18 = uStack_60._4_4_ * local_50;
        fVar13 = uStack_60._4_4_ * local_4c;
        fVar8 = (float)local_68 * local_58 + local_50 * local_68._4_4_ + local_48;
        fVar9 = (float)uStack_60 * local_58 + fVar8;
        fVar10 = local_54 * (float)local_68 + local_4c * local_68._4_4_ + local_44;
        fVar16 = fVar9;
        if (fVar9 <= fVar8 + 0.0) {
          fVar16 = fVar8 + 0.0;
        }
        fVar12 = fVar9;
        if (fVar8 <= fVar9) {
          fVar12 = fVar8;
        }
        fVar14 = local_54 * (float)uStack_60 + fVar10;
        fVar8 = fVar8 + fVar18;
        fVar17 = fVar14;
        if (fVar14 <= fVar10 + 0.0) {
          fVar17 = fVar10 + 0.0;
        }
        fVar11 = fVar14;
        if (fVar10 <= fVar14) {
          fVar11 = fVar10;
        }
        fVar10 = fVar10 + fVar13;
        if ((fVar16 - fVar12 < 0.0) || (fVar17 - fVar11 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        fVar15 = (fVar16 - fVar12) + fVar12;
        fVar17 = (fVar17 - fVar11) + fVar11;
        fVar16 = fVar8;
        if (fVar12 <= fVar8) {
          fVar16 = fVar12;
        }
        fVar13 = fVar13 + fVar14;
        fVar12 = fVar10;
        if (fVar11 <= fVar10) {
          fVar12 = fVar11;
        }
        fVar9 = fVar9 + fVar18;
        if (fVar8 <= fVar15) {
          fVar8 = fVar15;
        }
        if (fVar10 <= fVar17) {
          fVar10 = fVar17;
        }
        if ((fVar8 - fVar16 < 0.0) || (fVar10 - fVar12 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        fVar18 = (fVar8 - fVar16) + fVar16;
        fVar10 = (fVar10 - fVar12) + fVar12;
        fVar8 = fVar9;
        if (fVar16 <= fVar9) {
          fVar8 = fVar16;
        }
        fVar16 = fVar13;
        if (fVar12 <= fVar13) {
          fVar16 = fVar12;
        }
        if (fVar9 <= fVar18) {
          fVar9 = fVar18;
        }
        if (fVar13 <= fVar10) {
          fVar13 = fVar10;
        }
        fVar10 = (float)((double)(*(float *)(lVar1 + 0x3c) + *(float *)(lVar1 + 0x40)) * __LC8 *
                        __LC9);
        fVar9 = (fVar9 - fVar8) + fVar10 + fVar10;
        fVar13 = (fVar13 - fVar16) + fVar10 + fVar10;
        local_68 = CONCAT44(fVar16 - fVar10,fVar8 - fVar10);
        uStack_60 = CONCAT44(fVar13,fVar9);
        *(float *)(lVar1 + 0x34) = fVar8 - fVar10;
        *(float *)(lVar1 + 0x38) = fVar16 - fVar10;
        *(float *)(lVar1 + 0x3c) = fVar9;
        *(float *)(lVar1 + 0x40) = fVar13;
        if (*(int *)(lVar1 + 0x30) == 0) {
          puVar4 = (undefined8 *)GodotSpace2D::get_broadphase();
          uVar2 = (**(code **)*puVar4)(puVar4,this,uVar6 & 0xffffffff,&local_68);
          *(undefined4 *)(lVar1 + 0x30) = uVar2;
          plVar5 = (long *)GodotSpace2D::get_broadphase();
          (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined4 *)(lVar1 + 0x30),this[0x84]);
        }
        plVar5 = (long *)GodotSpace2D::get_broadphase();
        (**(code **)(*plVar5 + 8))(plVar5,*(undefined4 *)(lVar1 + 0x30),&local_68);
        lVar3 = *(long *)(this + 0x38);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x58;
    } while (lVar3 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCollisionObject2D::_shape_changed() */

void __thiscall GodotCollisionObject2D::_shape_changed(GodotCollisionObject2D *this)

{
  if (*(long *)(this + 0x40) != 0) {
    _update_shapes(this);
  }
                    /* WARNING: Could not recover jumptable at 0x0010054f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this);
  return;
}



/* GodotCollisionObject2D::set_shape(int, GodotShape2D*) */

void __thiscall
GodotCollisionObject2D::set_shape(GodotCollisionObject2D *this,int param_1,GodotShape2D *param_2)

{
  GodotCollisionObject2D *pGVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (long)param_1;
  lVar4 = *(long *)(this + 0x38);
  if (param_1 < 0) {
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + -8);
      goto LAB_0010060d;
    }
  }
  else if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + -8);
    if (lVar3 < lVar5) {
      GodotShape2D::remove_owner(*(GodotShapeOwner2D **)(lVar4 + 0x48 + lVar3 * 0x58));
      if (*(long *)(this + 0x38) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(this + 0x38) + -8);
        if (lVar3 < lVar4) {
          CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                    ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
          *(GodotShape2D **)(*(long *)(this + 0x38) + 0x48 + lVar3 * 0x58) = param_2;
          GodotShape2D::add_owner((GodotShapeOwner2D *)param_2);
          lVar4 = GodotPhysicsServer2D::godot_singleton;
          if (*(long *)(this + 0x88) != 0) {
            return;
          }
          pGVar1 = this + 0x88;
          *(long *)(this + 0x88) = GodotPhysicsServer2D::godot_singleton + 0x370;
          lVar3 = *(long *)(lVar4 + 0x370);
          *(undefined8 *)(this + 0xa0) = 0;
          *(long *)(this + 0x98) = lVar3;
          if (lVar3 == 0) {
            *(GodotCollisionObject2D **)(lVar4 + 0x378) = pGVar1;
          }
          else {
            *(GodotCollisionObject2D **)(lVar3 + 0x18) = pGVar1;
          }
          *(GodotCollisionObject2D **)(lVar4 + 0x370) = pGVar1;
          return;
        }
      }
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar3,lVar4,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    goto LAB_0010060d;
  }
  lVar5 = 0;
LAB_0010060d:
  _err_print_index_error
            ("set_shape","modules/godot_physics_2d/godot_collision_object_2d.cpp",0x35,lVar3,lVar5,
             "p_index","shapes.size()","",false,false);
  return;
}



/* GodotCollisionObject2D::set_shape_transform(int, Transform2D const&) */

void __thiscall
GodotCollisionObject2D::set_shape_transform
          (GodotCollisionObject2D *this,int param_1,Transform2D *param_2)

{
  GodotCollisionObject2D *pGVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar8 = (long)param_1;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(this + 0x38);
  if (param_1 < 0) {
    if (lVar7 == 0) goto LAB_001008e8;
    lVar7 = *(long *)(lVar7 + -8);
  }
  else if (lVar7 == 0) {
LAB_001008e8:
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar8 < lVar7) {
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      uVar5 = *(undefined8 *)(param_2 + 8);
      lVar7 = *(long *)(this + 0x38);
      lVar6 = lVar8 * 0x58;
      puVar2 = (undefined8 *)(lVar7 + lVar6);
      *puVar2 = *(undefined8 *)param_2;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar7 + 0x10 + lVar6) = *(undefined8 *)(param_2 + 0x10);
      Transform2D::affine_inverse();
      if (*(long *)(this + 0x38) == 0) {
        lVar7 = 0;
LAB_001008a3:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar7,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = *(long *)(*(long *)(this + 0x38) + -8);
      if (lVar7 <= lVar8) goto LAB_001008a3;
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      lVar7 = *(long *)(this + 0x38);
      lVar8 = *(long *)(this + 0x88);
      puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar6);
      *puVar2 = local_48;
      puVar2[1] = uStack_40;
      *(undefined8 *)(lVar7 + 0x28 + lVar6) = local_38;
      lVar7 = GodotPhysicsServer2D::godot_singleton;
      if (lVar8 == 0) {
        pGVar1 = this + 0x88;
        *(long *)(this + 0x88) = GodotPhysicsServer2D::godot_singleton + 0x370;
        lVar8 = *(long *)(lVar7 + 0x370);
        *(undefined8 *)(this + 0xa0) = 0;
        *(long *)(this + 0x98) = lVar8;
        if (lVar8 == 0) {
          *(GodotCollisionObject2D **)(lVar7 + 0x378) = pGVar1;
        }
        else {
          *(GodotCollisionObject2D **)(lVar8 + 0x18) = pGVar1;
        }
        *(GodotCollisionObject2D **)(lVar7 + 0x370) = pGVar1;
      }
      goto LAB_001007dc;
    }
  }
  _err_print_index_error
            ("set_shape_transform","modules/godot_physics_2d/godot_collision_object_2d.cpp",0x41,
             lVar8,lVar7,"p_index","shapes.size()","",false,false);
LAB_001007dc:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotCollisionObject2D::set_shape_disabled(int, bool) */

void __thiscall
GodotCollisionObject2D::set_shape_disabled(GodotCollisionObject2D *this,int param_1,bool param_2)

{
  GodotCollisionObject2D *pGVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)param_1;
  lVar3 = *(long *)(this + 0x38);
  if (param_1 < 0) {
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + -8);
      goto LAB_00100a11;
    }
  }
  else if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + -8);
    if (lVar4 < lVar3) {
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      lVar3 = *(long *)(this + 0x38) + lVar4 * 0x58;
      if (((bool)*(char *)(lVar3 + 0x50) != param_2) &&
         (lVar4 = *(long *)(this + 0x40), *(bool *)(lVar3 + 0x50) = param_2, lVar4 != 0)) {
        if (param_2) {
          if (*(int *)(lVar3 + 0x30) == 0) {
            return;
          }
          plVar2 = (long *)GodotSpace2D::get_broadphase();
          (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined4 *)(lVar3 + 0x30));
          lVar4 = *(long *)(this + 0x88);
          *(undefined4 *)(lVar3 + 0x30) = 0;
          lVar3 = GodotPhysicsServer2D::godot_singleton;
        }
        else {
          if (*(int *)(lVar3 + 0x30) != 0) {
            return;
          }
          lVar4 = *(long *)(this + 0x88);
          lVar3 = GodotPhysicsServer2D::godot_singleton;
        }
        GodotPhysicsServer2D::godot_singleton = lVar3;
        if (lVar4 == 0) {
          pGVar1 = this + 0x88;
          *(long *)(this + 0x88) = lVar3 + 0x370;
          lVar4 = *(long *)(lVar3 + 0x370);
          *(undefined8 *)(this + 0xa0) = 0;
          *(long *)(this + 0x98) = lVar4;
          if (lVar4 == 0) {
            *(GodotCollisionObject2D **)(lVar3 + 0x378) = pGVar1;
          }
          else {
            *(GodotCollisionObject2D **)(lVar4 + 0x18) = pGVar1;
          }
          *(GodotCollisionObject2D **)(lVar3 + 0x370) = pGVar1;
        }
      }
      return;
    }
    goto LAB_00100a11;
  }
  lVar3 = 0;
LAB_00100a11:
  _err_print_index_error
            ("set_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.cpp",0x4c,
             lVar4,lVar3,"p_idx","shapes.size()","",false,false);
  return;
}



/* GodotCollisionObject2D::_set_static(bool) */

void __thiscall GodotCollisionObject2D::_set_static(GodotCollisionObject2D *this,bool param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (this[0x84] == (GodotCollisionObject2D)param_1) {
    return;
  }
  this[0x84] = (GodotCollisionObject2D)param_1;
  if ((*(long *)(this + 0x40) != 0) && (lVar3 = *(long *)(this + 0x38), lVar3 != 0)) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      while( true ) {
        lVar1 = *(long *)(lVar3 + -8);
        if ((int)lVar1 <= (int)lVar5) {
          return;
        }
        if (lVar1 <= lVar5) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar1,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar1 = lVar3 + lVar6;
        if (*(int *)(lVar1 + 0x30) == 0) break;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x58;
        plVar4 = (long *)GodotSpace2D::get_broadphase();
        (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(lVar1 + 0x30),this[0x84]);
        lVar3 = *(long *)(this + 0x38);
        if (lVar3 == 0) {
          return;
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x58;
    } while (lVar3 != 0);
  }
  return;
}



/* GodotCollisionObject2D::_unregister_shapes() */

void __thiscall GodotCollisionObject2D::_unregister_shapes(GodotCollisionObject2D *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 == 0) {
    return;
  }
  lVar5 = 0;
  lVar4 = 0;
  do {
    while( true ) {
      if (*(long *)(lVar2 + -8) <= lVar4) {
        return;
      }
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      lVar2 = *(long *)(this + 0x38);
      lVar1 = lVar2 + lVar5;
      if (*(int *)(lVar1 + 0x30) != 0) break;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x58;
      if (lVar2 == 0) {
        return;
      }
    }
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 0x58;
    plVar3 = (long *)GodotSpace2D::get_broadphase();
    (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(lVar1 + 0x30));
    lVar2 = *(long *)(this + 0x38);
    *(undefined4 *)(lVar1 + 0x30) = 0;
  } while (lVar2 != 0);
  return;
}



/* GodotCollisionObject2D::_update_shapes() */

void __thiscall GodotCollisionObject2D::_update_shapes(GodotCollisionObject2D *this)

{
  if (*(long *)(this + 0x40) != 0) {
    _update_shapes(this);
    return;
  }
  return;
}



/* GodotCollisionObject2D::_update_shapes_with_motion(Vector2 const&) */

void __thiscall
GodotCollisionObject2D::_update_shapes_with_motion(GodotCollisionObject2D *this,Vector2 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x40) != 0) && (lVar5 = *(long *)(this + 0x38), lVar5 != 0)) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(lVar5 + -8) <= (long)uVar6) break;
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      lVar5 = *(long *)(this + 0x38);
      lVar1 = lVar5 + lVar7;
      if (*(char *)(lVar1 + 0x50) == '\0') {
        local_68 = *(undefined8 *)(*(long *)(lVar1 + 0x48) + 0x10);
        uStack_60 = *(undefined8 *)(*(long *)(lVar1 + 0x48) + 0x18);
        Transform2D::operator*((Transform2D *)&local_58,(Transform2D *)(this + 0x48));
        fVar10 = uStack_60._4_4_ * local_50;
        fVar13 = uStack_60._4_4_ * local_4c;
        fVar8 = (float)local_68 * local_58 + local_50 * local_68._4_4_ + local_48;
        fVar14 = (float)uStack_60 * local_58 + fVar8;
        fVar9 = local_54 * (float)local_68 + local_4c * local_68._4_4_ + local_44;
        fVar17 = fVar14;
        if (fVar14 <= fVar8 + 0.0) {
          fVar17 = fVar8 + 0.0;
        }
        fVar11 = fVar14;
        if (fVar8 <= fVar14) {
          fVar11 = fVar8;
        }
        fVar15 = local_54 * (float)uStack_60 + fVar9;
        fVar8 = fVar8 + fVar10;
        fVar18 = fVar15;
        if (fVar15 <= fVar9 + 0.0) {
          fVar18 = fVar9 + 0.0;
        }
        fVar12 = fVar15;
        if (fVar9 <= fVar15) {
          fVar12 = fVar9;
        }
        fVar9 = fVar9 + fVar13;
        if ((fVar17 - fVar11 < 0.0) || (fVar18 - fVar12 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        fVar16 = (fVar17 - fVar11) + fVar11;
        fVar18 = (fVar18 - fVar12) + fVar12;
        fVar17 = fVar8;
        if (fVar11 <= fVar8) {
          fVar17 = fVar11;
        }
        fVar10 = fVar10 + fVar14;
        fVar14 = fVar9;
        if (fVar12 <= fVar9) {
          fVar14 = fVar12;
        }
        fVar13 = fVar13 + fVar15;
        if (fVar8 <= fVar16) {
          fVar8 = fVar16;
        }
        if (fVar9 <= fVar18) {
          fVar9 = fVar18;
        }
        if ((fVar8 - fVar17 < 0.0) || (fVar9 - fVar14 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        fVar8 = (fVar8 - fVar17) + fVar17;
        fVar9 = (fVar9 - fVar14) + fVar14;
        local_68._0_4_ = fVar10;
        if (fVar17 <= fVar10) {
          local_68._0_4_ = fVar17;
        }
        local_68._4_4_ = fVar13;
        if (fVar14 <= fVar13) {
          local_68._4_4_ = fVar14;
        }
        if (fVar10 <= fVar8) {
          fVar10 = fVar8;
        }
        if (fVar13 <= fVar9) {
          fVar13 = fVar9;
        }
        fVar9 = *(float *)(param_1 + 4) + local_68._4_4_;
        fVar10 = fVar10 - (float)local_68;
        fVar8 = (float)local_68 + *(float *)param_1;
        fVar13 = fVar13 - local_68._4_4_;
        uStack_60._4_4_ = fVar13;
        uStack_60._0_4_ = fVar10;
        if ((fVar10 < 0.0) || (fVar13 < 0.0)) {
          _err_print_error("merge","./core/math/rect2.h",0xa8,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                           ,0,0);
        }
        fVar17 = fVar9;
        if (local_68._4_4_ <= fVar9) {
          fVar17 = local_68._4_4_;
        }
        fVar14 = fVar8;
        if ((float)local_68 <= fVar8) {
          fVar14 = (float)local_68;
        }
        fVar11 = fVar13 + fVar9;
        if (fVar13 + fVar9 <= uStack_60._4_4_ + local_68._4_4_) {
          fVar11 = uStack_60._4_4_ + local_68._4_4_;
        }
        fVar9 = fVar10 + fVar8;
        if (fVar10 + fVar8 <= (float)uStack_60 + (float)local_68) {
          fVar9 = (float)uStack_60 + (float)local_68;
        }
        local_68 = CONCAT44(fVar17,fVar14);
        uStack_60 = CONCAT44(fVar11 - fVar17,fVar9 - fVar14);
        *(float *)(lVar1 + 0x34) = fVar14;
        *(float *)(lVar1 + 0x38) = fVar17;
        *(float *)(lVar1 + 0x3c) = fVar9 - fVar14;
        *(float *)(lVar1 + 0x40) = fVar11 - fVar17;
        if (*(int *)(lVar1 + 0x30) == 0) {
          puVar3 = (undefined8 *)GodotSpace2D::get_broadphase();
          uVar2 = (**(code **)*puVar3)(puVar3,this,uVar6 & 0xffffffff,&local_68);
          *(undefined4 *)(lVar1 + 0x30) = uVar2;
          plVar4 = (long *)GodotSpace2D::get_broadphase();
          (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(lVar1 + 0x30),this[0x84]);
        }
        plVar4 = (long *)GodotSpace2D::get_broadphase();
        (**(code **)(*plVar4 + 8))(plVar4,*(undefined4 *)(lVar1 + 0x30),&local_68);
        lVar5 = *(long *)(this + 0x38);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x58;
    } while (lVar5 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotCollisionObject2D::_set_space(GodotSpace2D*) */

void __thiscall
GodotCollisionObject2D::_set_space(GodotCollisionObject2D *this,GodotSpace2D *param_1)

{
  long lVar1;
  GodotCollisionObject2D *pGVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  pGVar2 = *(GodotCollisionObject2D **)(this + 0x40);
  *(GodotSpace2D **)(this + 0x40) = param_1;
  if (pGVar2 != (GodotCollisionObject2D *)0x0) {
    lVar6 = 0;
    GodotSpace2D::remove_object(pGVar2);
    lVar4 = *(long *)(this + 0x38);
    for (lVar5 = 0; (lVar4 != 0 && (lVar5 < *(long *)(lVar4 + -8))); lVar5 = lVar5 + 1) {
      CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
      lVar4 = *(long *)(this + 0x38);
      lVar1 = lVar4 + lVar6;
      if (*(int *)(lVar1 + 0x30) != 0) {
        plVar3 = (long *)GodotSpace2D::get_broadphase();
        (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(lVar1 + 0x30));
        *(undefined4 *)(lVar1 + 0x30) = 0;
        lVar4 = *(long *)(this + 0x38);
      }
      lVar6 = lVar6 + 0x58;
    }
    param_1 = *(GodotSpace2D **)(this + 0x40);
  }
  if ((param_1 != (GodotSpace2D *)0x0) &&
     (GodotSpace2D::add_object((GodotCollisionObject2D *)param_1), *(long *)(this + 0x40) != 0)) {
    _update_shapes(this);
    return;
  }
  return;
}



/* GodotCollisionObject2D::GodotCollisionObject2D(GodotCollisionObject2D::Type) */

void __thiscall
GodotCollisionObject2D::GodotCollisionObject2D(GodotCollisionObject2D *this,undefined4 param_2)

{
  undefined8 uVar1;
  
  this[0x28] = (GodotCollisionObject2D)0x1;
  *(undefined ***)this = &PTR__shape_changed_00102038;
  *(undefined8 *)(this + 0x50) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x68) = 0x3f80000000000000;
  uVar1 = _LC24;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0x3f800000;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  this[0x84] = (GodotCollisionObject2D)0x1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(GodotCollisionObject2D **)(this + 0x90) = this;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  return;
}



/* GodotCollisionObject2D::remove_shape(int) */

void __thiscall GodotCollisionObject2D::remove_shape(GodotCollisionObject2D *this,int param_1)

{
  GodotCollisionObject2D *pGVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)param_1;
  lVar4 = *(long *)(this + 0x38);
  if (param_1 < 0) {
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar4 + -8);
      goto LAB_00101435;
    }
  }
  else if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + -8);
    if (lVar6 <= lVar7) goto LAB_00101435;
    lVar5 = lVar7;
    while (lVar5 < lVar6) {
      if (*(int *)(lVar4 + 0x30 + lVar5 * 0x58) != 0) {
        plVar3 = (long *)GodotSpace2D::get_broadphase();
        lVar4 = *(long *)(this + 0x38);
        if (lVar4 == 0) {
          lVar6 = 0;
          goto LAB_00101390;
        }
        lVar6 = *(long *)(lVar4 + -8);
        if (lVar6 <= lVar5) goto LAB_00101390;
        (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(lVar4 + 0x30 + lVar5 * 0x58));
        if (*(long *)(this + 0x38) == 0) {
          lVar4 = 0;
LAB_001013e3:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar4,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = *(long *)(*(long *)(this + 0x38) + -8);
        if (lVar4 <= lVar5) goto LAB_001013e3;
        CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                  ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
        lVar4 = *(long *)(this + 0x38);
        *(undefined4 *)(lVar4 + 0x30 + lVar5 * 0x58) = 0;
      }
      lVar5 = lVar5 + 1;
      if (lVar4 == 0) {
        lVar6 = 0;
        lVar5 = lVar7;
        goto LAB_00101390;
      }
      lVar6 = *(long *)(lVar4 + -8);
    }
    lVar5 = lVar7;
    if (lVar6 <= lVar7) {
LAB_00101390:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar6,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = lVar7 * 0x58;
    GodotShape2D::remove_owner(*(GodotShapeOwner2D **)(lVar4 + 0x48 + lVar6));
    if (*(long *)(this + 0x38) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(this + 0x38) + -8);
      if (lVar7 < lVar4) {
        CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                  ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
        lVar4 = *(long *)(this + 0x38);
        if (lVar4 == 0) {
          lVar5 = -1;
        }
        else {
          lVar5 = *(long *)(lVar4 + -8) + -1;
          if (lVar7 < lVar5) {
            memmove((void *)(lVar4 + lVar6),(void *)(lVar4 + 0x58 + lVar6),
                    (*(long *)(lVar4 + -8) - lVar7) * 0x58 - 0x58);
          }
        }
        CowData<GodotCollisionObject2D::Shape>::resize<false>
                  ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38),lVar5);
        goto LAB_00101507;
      }
    }
    _err_print_index_error
              ("remove_at","./core/templates/cowdata.h",0xe4,lVar7,lVar4,"p_index","size()","",false
               ,false);
LAB_00101507:
    lVar4 = GodotPhysicsServer2D::godot_singleton;
    if (*(long *)(this + 0x88) != 0) {
      return;
    }
    pGVar1 = this + 0x88;
    *(long *)(this + 0x88) = GodotPhysicsServer2D::godot_singleton + 0x370;
    lVar7 = *(long *)(lVar4 + 0x370);
    *(undefined8 *)(this + 0xa0) = 0;
    *(long *)(this + 0x98) = lVar7;
    if (lVar7 == 0) {
      *(GodotCollisionObject2D **)(lVar4 + 0x378) = pGVar1;
    }
    else {
      *(GodotCollisionObject2D **)(lVar7 + 0x18) = pGVar1;
    }
    *(GodotCollisionObject2D **)(lVar4 + 0x370) = pGVar1;
    return;
  }
  lVar6 = 0;
LAB_00101435:
  _err_print_index_error
            ("remove_shape","modules/godot_physics_2d/godot_collision_object_2d.cpp",0x72,lVar7,
             lVar6,"p_index","shapes.size()","",false,false);
  return;
}



/* GodotCollisionObject2D::remove_shape(GodotShape2D*) */

void __thiscall
GodotCollisionObject2D::remove_shape(GodotCollisionObject2D *this,GodotShape2D *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *(long *)(this + 0x38);
  if (lVar1 == 0) {
    return;
  }
  iVar3 = 0;
  lVar2 = 0;
  do {
    while( true ) {
      if (*(long *)(lVar1 + -8) <= lVar2) {
        return;
      }
      lVar2 = (long)iVar3;
      if (*(GodotShape2D **)(lVar1 + 0x48 + lVar2 * 0x58) == param_1) break;
      iVar3 = iVar3 + 1;
      lVar2 = (long)iVar3;
      if (lVar1 == 0) {
        return;
      }
    }
    remove_shape(this,iVar3);
    lVar1 = *(long *)(this + 0x38);
  } while (lVar1 != 0);
  return;
}



/* GodotCollisionObject2D::add_shape(GodotShape2D*, Transform2D const&, bool) */

void __thiscall
GodotCollisionObject2D::add_shape
          (GodotCollisionObject2D *this,GodotShape2D *param_1,Transform2D *param_2,bool param_3)

{
  GodotCollisionObject2D *pGVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint uStack_a4;
  undefined2 uStack_96;
  
  uVar5 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  Transform2D::affine_inverse();
  if (*(long *)(this + 0x38) == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0x38) + -8) + 1;
  }
  iVar7 = CowData<GodotCollisionObject2D::Shape>::resize<false>
                    ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38),lVar8);
  if (iVar7 == 0) {
    if (*(long *)(this + 0x38) == 0) {
      lVar9 = -1;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x38) + -8);
      lVar9 = lVar8 + -1;
      if (-1 < lVar9) {
        CowData<GodotCollisionObject2D::Shape>::_copy_on_write
                  ((CowData<GodotCollisionObject2D::Shape> *)(this + 0x38));
        puVar2 = (undefined8 *)(*(long *)(this + 0x38) + lVar9 * 0x58);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[10] = (ulong)CONCAT22(uStack_96,(ushort)param_3);
        puVar2[2] = uVar4;
        puVar2[3] = local_108;
        puVar2[4] = uStack_100;
        puVar2[5] = local_f8;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = (ulong)uStack_a4 << 0x20;
        puVar2[9] = param_1;
        goto LAB_00101807;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar8,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00101807:
  GodotShape2D::add_owner((GodotShapeOwner2D *)param_1);
  lVar8 = GodotPhysicsServer2D::godot_singleton;
  if (*(long *)(this + 0x88) == 0) {
    pGVar1 = this + 0x88;
    *(long *)(this + 0x88) = GodotPhysicsServer2D::godot_singleton + 0x370;
    lVar9 = *(long *)(lVar8 + 0x370);
    *(undefined8 *)(this + 0xa0) = 0;
    *(long *)(this + 0x98) = lVar9;
    if (lVar9 == 0) {
      *(GodotCollisionObject2D **)(lVar8 + 0x378) = pGVar1;
    }
    else {
      *(GodotCollisionObject2D **)(lVar9 + 0x18) = pGVar1;
    }
    *(GodotCollisionObject2D **)(lVar8 + 0x370) = pGVar1;
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<GodotCollisionObject2D::Shape>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<GodotCollisionObject2D::Shape>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<GodotCollisionObject2D::Shape>::_realloc(long) */

undefined8 __thiscall
CowData<GodotCollisionObject2D::Shape>::_realloc
          (CowData<GodotCollisionObject2D::Shape> *this,long param_1)

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
/* Error CowData<GodotCollisionObject2D::Shape>::resize<false>(long) */

undefined8 __thiscall
CowData<GodotCollisionObject2D::Shape>::resize<false>
          (CowData<GodotCollisionObject2D::Shape> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
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
    lVar11 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = *(long *)(lVar4 + -8);
    if (param_1 == lVar11) {
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
    lVar4 = lVar11 * 0x58;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x58 == 0) {
LAB_00101f50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x58 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar10 = uVar5 + 1;
  if (lVar10 == 0) goto LAB_00101f50;
  if (param_1 <= lVar11) {
    if ((lVar10 != lVar4) && (uVar8 = _realloc(this,lVar10), (int)uVar8 != 0)) {
      return uVar8;
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
  if (lVar10 == lVar4) {
LAB_00101ebc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00101e50;
  }
  else {
    if (lVar11 != 0) {
      uVar8 = _realloc(this,lVar10);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00101ebc;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _LC25;
  puVar6 = puVar9 + lVar4 * 0xb;
  do {
    *puVar6 = 0;
    puVar7 = puVar6 + 0xb;
    puVar6[1] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[2] = 0;
    *(undefined4 *)puVar6 = uVar3;
    *(undefined4 *)((long)puVar6 + 0xc) = uVar3;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 3) = uVar3;
    *(undefined4 *)((long)puVar6 + 0x24) = uVar3;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x3c) = 0;
    puVar6[9] = 0;
    *(undefined2 *)(puVar6 + 10) = 0;
    *(undefined4 *)((long)puVar6 + 0x54) = 0;
    puVar6 = puVar7;
  } while (puVar9 + param_1 * 0xb != puVar7);
LAB_00101e50:
  puVar9[-1] = param_1;
  return 0;
}


