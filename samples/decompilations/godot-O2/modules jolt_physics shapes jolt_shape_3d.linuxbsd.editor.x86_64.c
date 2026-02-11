
/* JoltShape3D::~JoltShape3D() */

void __thiscall JoltShape3D::~JoltShape3D(JoltShape3D *this)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00105288;
  plVar3 = *(long **)(this + 0x68);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x34) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x18) + lVar4) != 0) {
          *(int *)(*(long *)(this + 0x18) + lVar4) = 0;
          Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
          pvVar5 = *(void **)(this + 0x10);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* JoltShape3D::~JoltShape3D() */

void __thiscall JoltShape3D::~JoltShape3D(JoltShape3D *this)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00105288;
  plVar3 = *(long **)(this + 0x68);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x34) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x18) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x18) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 0x10);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00100187;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x18),false);
  }
LAB_00100187:
  operator_delete(this,0x70);
  return;
}



/* JoltShape3D::get_solver_bias() const */

undefined8 JoltShape3D::get_solver_bias(void)

{
  return 0;
}



/* JoltShape3D::try_build() */

void JoltShape3D::try_build(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 *in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 7));
  if (iVar4 == 0) {
    if (in_RSI[0xd] == 0) {
      (**(code **)*in_RSI)(&local_28);
      plVar3 = (long *)in_RSI[0xd];
      if (plVar3 == local_28) {
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
      }
      else {
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        in_RSI[0xd] = local_28;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 7));
    lVar2 = in_RSI[0xd];
    *in_RDI = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__throw_system_error(iVar4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShape3D::destroy() */

void JoltShape3D::destroy(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *in_RSI;
  long in_RDI;
  long *plVar5;
  long in_FS_OFFSET;
  
  uVar4 = pthread_mutex_lock((pthread_mutex_t *)(in_RDI + 0x38));
  if (uVar4 == 0) {
    plVar5 = *(long **)(in_RDI + 0x68);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
      *(undefined8 *)(in_RDI + 0x68) = 0;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(in_RDI + 0x38));
    for (puVar2 = *(undefined8 **)(in_RDI + 0x20); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      (**(code **)(*(long *)puVar2[2] + 0x88))();
    }
    return;
  }
  plVar5 = (long *)(ulong)uVar4;
  std::__throw_system_error(uVar4);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*plVar5 + 0x120))
            (*in_RSI,CONCAT44(*(undefined4 *)(in_RSI + 1),*(undefined4 *)(in_RSI + 1)));
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShape3D::make_scale_valid(JPH::Shape const*, Vector3 const&) */

void JoltShape3D::make_scale_valid(Shape *param_1,Vector3 *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x120))
            (*(undefined8 *)param_2,
             CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8)));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShape3D::is_scale_valid(Vector3 const&, Vector3 const&, float) */

undefined4 JoltShape3D::is_scale_valid(Vector3 *param_1,Vector3 *param_2,float param_3)

{
  float fVar1;
  
  if ((*(float *)param_2 == *(float *)param_1) ||
     (ABS(*(float *)param_1 - *(float *)param_2) < param_3)) {
    if ((*(float *)(param_2 + 4) == *(float *)(param_1 + 4)) ||
       (ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) < param_3)) {
      if (*(float *)(param_2 + 8) == *(float *)(param_1 + 8)) {
        return 1;
      }
      fVar1 = ABS(*(float *)(param_1 + 8) - *(float *)(param_2 + 8));
      return CONCAT31((int3)((uint)fVar1 >> 8),fVar1 < param_3);
    }
  }
  return 0;
}



/* JoltShape3D::_owners_to_string() const */

void JoltShape3D::_owners_to_string(void)

{
  long *plVar1;
  long lVar2;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_RSI + 0x34) == 0) {
    *(undefined8 *)in_RDI = 0;
    local_48 = "\'<unknown>\' and 0 other object(s)";
    local_40 = 0x21;
    String::parse_latin1(in_RDI);
  }
  else {
    JoltObject3D::to_string();
    local_48 = "\'%s\' and %d other object(s)";
    local_50 = 0;
    local_40 = 0x1b;
    String::parse_latin1((StrRange *)&local_50);
    vformat<String,int>();
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
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_58 + -0x10),false);
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltShape3D::set_solver_bias(float) */

void JoltShape3D::set_solver_bias(float param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0.0) {
    fVar4 = ABS(param_1) * _LC10;
    fVar5 = _LC10;
    if (_LC10 <= fVar4) {
      fVar5 = fVar4;
    }
    if (fVar5 <= ABS(param_1)) {
      _owners_to_string();
      local_38 = 
      "Custom solver bias for shapes is not supported when using Jolt Physics. Any such value will be ignored. This shape belongs to %s."
      ;
      local_40 = 0;
      local_30 = 0x81;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("set_solver_bias","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0x5b,
                       &local_38,0,1);
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
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltShape3D::with_user_data(JPH::Shape const*, unsigned long) */

JoltShape3D * __thiscall JoltShape3D::with_user_data(JoltShape3D *this,Shape *param_1,ulong param_2)

{
  Shape *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long local_a8 [2];
  char local_98;
  code *local_88;
  undefined4 local_80;
  ulong local_78;
  long *local_70;
  long local_60 [2];
  char local_50;
  long *local_48;
  Shape *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_50 = '\0';
  local_48 = (long *)0x0;
  if (param_1 != (Shape *)0x0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_88 = String::utf8;
  local_78 = param_2;
  local_40 = param_1;
  JoltCustomUserDataShapeSettings::Create();
  if (local_98 == '\x02') {
    String::utf8((char *)&local_d8,(int)local_b8);
    local_c8 = "Failed to override user data. It returned the following error: \'%s\'.";
    local_c0 = 0x44;
    local_d0 = 0;
    String::parse_latin1((StrRange *)&local_d0);
    vformat<String>(&local_c8,(StrRange *)&local_d0,&local_d8);
    _err_print_error("with_user_data","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0xa6,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_c8,0
                     ,0);
    pcVar4 = local_c8;
    if (local_c8 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_c8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar2 = (long *)(local_d8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(undefined8 *)this = 0;
  }
  else {
    *(long **)this = local_b8;
    if (local_b8 == (long *)0x0) goto LAB_001007f0;
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  if (local_98 == '\x01') {
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_b8 + 8))();
      }
    }
  }
  else if ((local_98 == '\x02') && (local_b8 != local_a8)) {
    (*JPH::Free)();
  }
LAB_001007f0:
  local_88 = JoltCustomUserDataShapeSettings::Create;
  if (local_40 != (Shape *)0x0) {
    LOCK();
    pSVar1 = local_40 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_40 + 8))();
    }
  }
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  local_88 = Variant::Variant;
  if (local_50 == '\x01') {
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_70 + 8))();
      }
    }
  }
  else if ((local_50 == '\x02') && (local_70 != local_60)) {
    (*JPH::Free)();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShape3D::with_double_sided(JPH::Shape const*, bool) */

JoltShape3D * __thiscall
JoltShape3D::with_double_sided(JoltShape3D *this,Shape *param_1,bool param_2)

{
  Shape *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long local_a8 [2];
  char local_98;
  code *local_88;
  undefined4 local_80;
  undefined8 local_78;
  long *local_70;
  long local_60 [2];
  char local_50;
  long *local_48;
  Shape *local_40;
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Shape *)0x0) {
    _err_print_error("with_double_sided","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0xac,
                     "Parameter \"p_shape\" is null.",0,0);
    *(undefined8 *)this = 0;
    goto LAB_00100b76;
  }
  local_80 = 0;
  local_78 = 0;
  local_50 = '\0';
  local_48 = (long *)0x0;
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_88 = _err_print_error;
  local_40 = param_1;
  local_38 = param_2;
  JoltCustomDoubleSidedShapeSettings::Create();
  if (local_98 == '\x02') {
    String::utf8((char *)&local_d8,(int)local_b8);
    local_c8 = "Failed to make shape double-sided. It returned the following error: \'%s\'.";
    local_c0 = 0x49;
    local_d0 = 0;
    String::parse_latin1((StrRange *)&local_d0);
    vformat<String>(&local_c8,(StrRange *)&local_d0,&local_d8);
    _err_print_error("with_double_sided","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0xb0,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_c8,0
                     ,0);
    pcVar4 = local_c8;
    if (local_c8 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_c8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar2 = (long *)(local_d8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(undefined8 *)this = 0;
LAB_00100aff:
    if (local_98 == '\x01') {
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar2 = local_b8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_b8 + 8))();
        }
      }
    }
    else if ((local_98 == '\x02') && (local_b8 != local_a8)) {
      (*JPH::Free)();
    }
  }
  else {
    *(long **)this = local_b8;
    if (local_b8 != (long *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
      goto LAB_00100aff;
    }
  }
  local_88 = JoltCustomUserDataShapeSettings::Create;
  if (local_40 != (Shape *)0x0) {
    LOCK();
    pSVar1 = local_40 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_40 + 8))();
    }
  }
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  local_88 = Variant::Variant;
  if (local_50 == '\x01') {
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_70 + 8))();
      }
    }
  }
  else if ((local_50 == '\x02') && (local_70 != local_60)) {
    (*JPH::Free)();
  }
LAB_00100b76:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltShape3D::without_custom_shapes(JPH::Shape const*) */

JoltShape3D * __thiscall JoltShape3D::without_custom_shapes(JoltShape3D *this,Shape *param_1)

{
  Shape *pSVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Shape *pSVar5;
  float fVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  long local_e8;
  long local_e0;
  Shape *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_b8 [2];
  char local_a8;
  code *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  fVar6 = _LC21;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = (uint)__LC0;
  uStack_114 = (uint)((ulong)__LC0 >> 0x20);
  uStack_110 = (uint)_UNK_001054a8;
  uStack_10c = (uint)((ulong)_UNK_001054a8 >> 0x20);
  switch(param_1[0x19]) {
  case (Shape)0x7:
    local_90 = 0;
    local_98 = JPH::StaticCompoundShapeSettings::Create;
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    local_88 = 0;
    puVar7 = puVar9 + *(long *)(param_1 + 0x50) * 5;
    local_60 = 0;
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    if (puVar7 != puVar9) {
      do {
        without_custom_shapes((JoltShape3D *)&local_d8,(Shape *)*puVar9);
        pSVar5 = local_d8;
        local_128 = CONCAT44(_UNK_001054b4,__LC20);
        uStack_120 = CONCAT44(_LC21,_UNK_001054b8);
        if (*(char *)((long)puVar9 + 0x24) == '\0') {
          fVar11 = *(float *)((long)puVar9 + 0x14);
          local_128 = *(undefined8 *)((long)puVar9 + 0x14);
          fVar21 = *(float *)((long)puVar9 + 0x1c);
          fVar18 = fVar6 - (fVar21 * fVar21 +
                           *(float *)(puVar9 + 3) * *(float *)(puVar9 + 3) + fVar11 * fVar11 + 0.0);
          fVar11 = 0.0;
          if (0.0 <= fVar18) {
            fVar11 = SQRT(fVar18);
          }
          uStack_120 = CONCAT44(fVar11,fVar21);
        }
        uVar4 = uStack_120;
        uVar3 = local_128;
        auVar25 = (**(code **)(*(long *)*puVar9 + 0x18))();
        fVar11 = auVar25._8_4_;
        if (*(char *)((long)puVar9 + 0x24) == '\0') {
          fVar21 = *(float *)((long)puVar9 + 0x14);
          fVar18 = *(float *)(puVar9 + 3);
          fVar20 = *(float *)((long)puVar9 + 0x1c);
          fVar12 = fVar6 - (fVar20 * fVar20 + fVar18 * fVar18 + fVar21 * fVar21 + 0.0);
          fVar13 = 0.0;
          if (0.0 <= fVar12) {
            fVar13 = SQRT(fVar12);
          }
          fVar19 = fVar21 * 0.0;
          fVar10 = fVar20 * 0.0;
          fVar22 = fVar18 * 0.0;
          fVar23 = fVar13 * 0.0;
          fVar12 = *(float *)((long)puVar9 + 0x14);
          uVar14 = *(uint *)(puVar9 + 3);
          fVar16 = fVar20;
          fVar17 = fVar13;
        }
        else {
          fVar23 = 0.0;
          fVar10 = 0.0;
          fVar22 = 0.0;
          fVar20 = 0.0;
          fVar19 = 0.0;
          fVar18 = fVar20;
          fVar21 = fVar20;
          fVar13 = fVar6;
          fVar12 = __LC20;
          uVar14 = _UNK_001054b4;
          fVar16 = _UNK_001054b8;
          fVar17 = _LC21;
        }
        local_128._0_4_ = auVar25._0_4_;
        fVar12 = (float)((uint)fVar12 ^ local_118);
        fVar15 = (float)(uVar14 ^ uStack_114);
        fVar16 = (float)((uint)fVar16 ^ uStack_110);
        fVar17 = (float)((uint)fVar17 ^ uStack_10c);
        local_128._4_4_ = auVar25._4_4_;
        fVar19 = (fVar13 * (float)local_128 + fVar19 + fVar18 * fVar11) - fVar20 * local_128._4_4_;
        fVar22 = (fVar13 * local_128._4_4_ - fVar21 * fVar11) + fVar22 + (float)local_128 * fVar20;
        fVar10 = ((fVar21 * local_128._4_4_ + fVar13 * fVar11) - (float)local_128 * fVar18) + fVar10
        ;
        fVar11 = ((fVar23 - (float)local_128 * fVar21) - fVar18 * local_128._4_4_) - fVar20 * fVar11
        ;
        local_128 = CONCAT44((*(float *)((long)puVar9 + 0xc) + *(float *)(param_1 + 0x24)) -
                             ((fVar15 * fVar11 - fVar19 * fVar16) + fVar22 * fVar17 +
                             fVar10 * fVar12),
                             (*(float *)(puVar9 + 1) + *(float *)(param_1 + 0x20)) -
                             ((fVar19 * fVar17 + fVar12 * fVar11 + fVar22 * fVar16) -
                             fVar10 * fVar15));
        uStack_120 = CONCAT44((*(float *)((long)puVar9 + 0x14) + *(float *)(param_1 + 0x2c)) -
                              (((fVar17 * fVar11 - fVar19 * fVar12) - fVar22 * fVar15) -
                              fVar10 * fVar16),
                              (*(float *)(puVar9 + 2) + *(float *)(param_1 + 0x28)) -
                              (((fVar19 * fVar15 + fVar16 * fVar11) - fVar22 * fVar12) +
                              fVar10 * fVar17));
        JPH::CompoundShapeSettings::AddShape(local_128,uStack_120,uVar3,uVar4,&local_98,pSVar5,0);
        if (local_d8 != (Shape *)0x0) {
          LOCK();
          pSVar5 = local_d8 + 8;
          *(int *)pSVar5 = *(int *)pSVar5 + -1;
          UNLOCK();
          if (*(int *)pSVar5 == 0) {
            (**(code **)(*(long *)local_d8 + 8))();
          }
        }
        puVar9 = puVar9 + 5;
      } while (puVar7 != puVar9);
    }
    JPH::StaticCompoundShapeSettings::Create();
    if (local_a8 == '\x02') {
      String::utf8((char *)&local_e8,(int)local_c8);
      local_d8 = (Shape *)0x103528;
      local_e0 = 0;
      local_d0 = 0x72;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<String>(&local_d8,(StrRange *)&local_e0,&local_e8);
      _err_print_error("without_custom_shapes","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0xcf,
                       "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_d8
                       ,0,0);
      pSVar5 = local_d8;
      if (local_d8 != (Shape *)0x0) {
        LOCK();
        pSVar1 = local_d8 + -0x10;
        *(long *)pSVar1 = *(long *)pSVar1 + -1;
        UNLOCK();
        if (*(long *)pSVar1 == 0) {
          local_d8 = (Shape *)0x0;
          Memory::free_static(pSVar5 + -0x10,false);
        }
      }
      lVar8 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar2 = (long *)(local_e0 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_e8;
      if (local_e8 != 0) {
        LOCK();
        plVar2 = (long *)(local_e8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *(undefined8 *)this = 0;
LAB_001011e0:
      if (local_a8 == '\x01') {
        if (local_c8 != (long *)0x0) {
          LOCK();
          plVar2 = local_c8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*local_c8 + 8))();
          }
        }
      }
      else if ((local_a8 == '\x02') && (local_c8 != local_b8)) {
        (*JPH::Free)();
      }
    }
    else {
      *(long **)this = local_c8;
      if (local_c8 != (long *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
        goto LAB_001011e0;
      }
    }
    local_98 = JPH::StaticCompoundShapeSettings::Create;
    JPH::CompoundShapeSettings::~CompoundShapeSettings((CompoundShapeSettings *)&local_98);
    break;
  case (Shape)0x8:
    local_90 = 0;
    local_98 = (code *)&JPH::DecoratedShape::vtable;
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    local_88 = 0;
    puVar7 = puVar9 + *(long *)(param_1 + 0x50) * 5;
    local_60 = 0;
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    if (puVar7 != puVar9) {
      do {
        without_custom_shapes((JoltShape3D *)&local_d8,(Shape *)*puVar9);
        pSVar5 = local_d8;
        local_128 = CONCAT44(_UNK_001054b4,__LC20);
        uStack_120 = CONCAT44(_LC21,_UNK_001054b8);
        if (*(char *)((long)puVar9 + 0x24) == '\0') {
          fVar11 = *(float *)((long)puVar9 + 0x14);
          local_128 = *(undefined8 *)((long)puVar9 + 0x14);
          fVar21 = *(float *)((long)puVar9 + 0x1c);
          fVar18 = fVar6 - (fVar21 * fVar21 +
                           *(float *)(puVar9 + 3) * *(float *)(puVar9 + 3) + fVar11 * fVar11 + 0.0);
          fVar11 = 0.0;
          if (0.0 <= fVar18) {
            fVar11 = SQRT(fVar18);
          }
          uStack_120 = CONCAT44(fVar11,fVar21);
        }
        uVar4 = uStack_120;
        uVar3 = local_128;
        auVar25 = (**(code **)(*(long *)*puVar9 + 0x18))();
        fVar11 = auVar25._8_4_;
        if (*(char *)((long)puVar9 + 0x24) == '\0') {
          fVar21 = *(float *)((long)puVar9 + 0x14);
          fVar18 = *(float *)(puVar9 + 3);
          fVar20 = *(float *)((long)puVar9 + 0x1c);
          fVar13 = 0.0;
          fVar12 = fVar6 - (fVar20 * fVar20 + fVar18 * fVar18 + fVar21 * fVar21 + 0.0);
          if (0.0 <= fVar12) {
            fVar13 = SQRT(fVar12);
          }
          fVar19 = fVar21 * 0.0;
          fVar22 = fVar20 * 0.0;
          fVar10 = fVar18 * 0.0;
          fVar23 = fVar13 * 0.0;
          fVar12 = *(float *)((long)puVar9 + 0x14);
          uVar14 = *(uint *)(puVar9 + 3);
          fVar16 = fVar20;
          fVar17 = fVar13;
        }
        else {
          fVar23 = 0.0;
          fVar22 = 0.0;
          fVar10 = 0.0;
          fVar20 = 0.0;
          fVar19 = 0.0;
          fVar18 = fVar20;
          fVar21 = fVar20;
          fVar13 = fVar6;
          fVar12 = __LC20;
          uVar14 = _UNK_001054b4;
          fVar16 = _UNK_001054b8;
          fVar17 = _LC21;
        }
        local_128._0_4_ = auVar25._0_4_;
        local_128._4_4_ = auVar25._4_4_;
        fVar12 = (float)((uint)fVar12 ^ local_118);
        fVar15 = (float)(uVar14 ^ uStack_114);
        fVar16 = (float)((uint)fVar16 ^ uStack_110);
        fVar17 = (float)((uint)fVar17 ^ uStack_10c);
        fVar19 = ((float)local_128 * fVar13 + fVar19 + fVar18 * fVar11) - fVar20 * local_128._4_4_;
        fVar10 = (fVar13 * local_128._4_4_ - fVar21 * fVar11) + fVar10 + (float)local_128 * fVar20;
        fVar22 = ((local_128._4_4_ * fVar21 + fVar13 * fVar11) - (float)local_128 * fVar18) + fVar22
        ;
        fVar11 = ((fVar23 - (float)local_128 * fVar21) - fVar18 * local_128._4_4_) - fVar20 * fVar11
        ;
        local_128 = CONCAT44((*(float *)((long)puVar9 + 0xc) + *(float *)(param_1 + 0x24)) -
                             (fVar22 * fVar12 +
                             fVar10 * fVar17 + (fVar15 * fVar11 - fVar19 * fVar16)),
                             (*(float *)(puVar9 + 1) + *(float *)(param_1 + 0x20)) -
                             ((fVar10 * fVar16 + fVar19 * fVar17 + fVar12 * fVar11) -
                             fVar22 * fVar15));
        uStack_120 = CONCAT44((*(float *)((long)puVar9 + 0x14) + *(float *)(param_1 + 0x2c)) -
                              (((fVar17 * fVar11 - fVar19 * fVar12) - fVar10 * fVar15) -
                              fVar22 * fVar16),
                              (*(float *)(puVar9 + 2) + *(float *)(param_1 + 0x28)) -
                              (fVar22 * fVar17 +
                              ((fVar19 * fVar15 + fVar16 * fVar11) - fVar10 * fVar12)));
        JPH::CompoundShapeSettings::AddShape(local_128,uStack_120,uVar3,uVar4,&local_98,pSVar5,0);
        if (local_d8 != (Shape *)0x0) {
          LOCK();
          pSVar5 = local_d8 + 8;
          *(int *)pSVar5 = *(int *)pSVar5 + -1;
          UNLOCK();
          if (*(int *)pSVar5 == 0) {
            (**(code **)(*(long *)local_d8 + 8))();
          }
        }
        puVar9 = puVar9 + 5;
      } while (puVar7 != puVar9);
    }
    JPH::MutableCompoundShapeSettings::Create();
    if (local_a8 == '\x02') {
      String::utf8((char *)&local_e8,(int)local_c8);
      local_d8 = (Shape *)0x1035a0;
      local_e0 = 0;
      local_d0 = 0x73;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<String>(&local_d8,(StrRange *)&local_e0,&local_e8);
      _err_print_error("without_custom_shapes","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0xde,
                       "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_d8
                       ,0,0);
      pSVar5 = local_d8;
      if (local_d8 != (Shape *)0x0) {
        LOCK();
        pSVar1 = local_d8 + -0x10;
        *(long *)pSVar1 = *(long *)pSVar1 + -1;
        UNLOCK();
        if (*(long *)pSVar1 == 0) {
          local_d8 = (Shape *)0x0;
          Memory::free_static(pSVar5 + -0x10,false);
        }
      }
      lVar8 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar2 = (long *)(local_e0 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_e8;
      if (local_e8 != 0) {
        LOCK();
        plVar2 = (long *)(local_e8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_e8 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      *(undefined8 *)this = 0;
LAB_00101572:
      if (local_a8 == '\x01') {
        if (local_c8 != (long *)0x0) {
          LOCK();
          plVar2 = local_c8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*local_c8 + 8))();
          }
        }
      }
      else if ((local_a8 == '\x02') && (local_c8 != local_b8)) {
        (*JPH::Free)();
      }
    }
    else {
      *(long **)this = local_c8;
      if (local_c8 != (long *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
        goto LAB_00101572;
      }
    }
    local_98 = (code *)&JPH::DecoratedShape::vtable;
    JPH::CompoundShapeSettings::~CompoundShapeSettings((CompoundShapeSettings *)&local_98);
    break;
  case (Shape)0x9:
    pSVar5 = *(Shape **)(param_1 + 0x20);
    without_custom_shapes((JoltShape3D *)&local_d8,pSVar5);
    if (local_d8 == pSVar5) goto LAB_001017d0;
    lVar8 = (*JPH::Allocate)(0x50);
    pSVar5 = local_d8;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    auVar24 = JPH::RotatedTranslatedShape::GetPosition((RotatedTranslatedShape *)param_1);
    JPH::RotatedTranslatedShape::RotatedTranslatedShape
              (auVar24._0_8_,auVar24._8_8_,uVar3,uVar4,lVar8,pSVar5);
    *(long *)this = lVar8;
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    goto LAB_0010163c;
  case (Shape)0xa:
    pSVar5 = *(Shape **)(param_1 + 0x20);
    without_custom_shapes((JoltShape3D *)&local_d8,pSVar5);
    if (local_d8 != pSVar5) {
      puVar7 = (undefined8 *)(*JPH::Allocate)(0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7[2] = 0;
      *(undefined2 *)(puVar7 + 3) = 0xa02;
      *puVar7 = JPH::RotatedTranslatedShape::RotatedTranslatedShape;
      puVar7[4] = local_d8;
      if (local_d8 == (Shape *)0x0) {
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        *puVar7 = &JPH::OffsetCenterOfMassShape::vtable;
        *(undefined8 **)this = puVar7;
      }
      else {
        LOCK();
        *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
        UNLOCK();
        *puVar7 = &JPH::OffsetCenterOfMassShape::vtable;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        *(undefined8 **)this = puVar7;
      }
LAB_00101637:
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
      goto LAB_0010163c;
    }
    goto LAB_001017d0;
  case (Shape)0xb:
    pSVar5 = *(Shape **)(param_1 + 0x20);
    without_custom_shapes((JoltShape3D *)&local_d8,pSVar5);
    if (local_d8 != pSVar5) {
      puVar7 = (undefined8 *)(*JPH::Allocate)(0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7[2] = 0;
      *(undefined2 *)(puVar7 + 3) = 0xb02;
      *puVar7 = JPH::RotatedTranslatedShape::RotatedTranslatedShape;
      puVar7[4] = local_d8;
      if (local_d8 == (Shape *)0x0) {
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        *puVar7 = &JPH::ScaledShapeSettings::vtable;
        *(undefined8 **)this = puVar7;
      }
      else {
        LOCK();
        *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
        UNLOCK();
        *puVar7 = &JPH::ScaledShapeSettings::vtable;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        *(undefined8 **)this = puVar7;
      }
      goto LAB_00101637;
    }
LAB_001017d0:
    *(Shape **)this = param_1;
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
LAB_0010163c:
    if (local_d8 != (Shape *)0x0) {
      LOCK();
      pSVar5 = local_d8 + 8;
      *(int *)pSVar5 = *(int *)pSVar5 + -1;
      UNLOCK();
      if (*(int *)pSVar5 == 0) {
        (**(code **)(*(long *)local_d8 + 8))();
      }
    }
    break;
  default:
    *(Shape **)this = param_1;
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    break;
  case (Shape)0xf:
  case (Shape)0x10:
    without_custom_shapes(this,*(Shape **)(param_1 + 0x20));
    break;
  case (Shape)0x17:
  case (Shape)0x18:
    puVar7 = (undefined8 *)(*JPH::Allocate)(0x30);
    uVar3 = _LC22;
    *(undefined4 *)(puVar7 + 1) = 0;
    puVar7[2] = 0;
    *(undefined2 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    *puVar7 = &JPH::StaticCompoundShapeSettings::vtable;
    puVar7[5] = uVar3;
    *(undefined8 **)this = puVar7;
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltShape3D::with_scale(JPH::Shape const*, Vector3 const&) */

JoltShape3D * __thiscall JoltShape3D::with_scale(JoltShape3D *this,Shape *param_1,Vector3 *param_2)

{
  Shape *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long local_c8 [2];
  char local_b8;
  code *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  long *local_90;
  long local_80 [2];
  char local_70;
  long *local_68;
  Shape *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Shape *)0x0) {
    _err_print_error("with_scale","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0x76,
                     "Parameter \"p_shape\" is null.",0,0);
    *(undefined8 *)this = 0;
    goto LAB_00101c04;
  }
  local_58 = *(undefined8 *)param_2;
  local_a0 = 0;
  uStack_50 = CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8));
  local_70 = '\0';
  local_98 = 0;
  local_68 = (long *)0x0;
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_a8 = (code *)&JPH::OffsetCenterOfMassShapeSettings::vtable;
  local_60 = param_1;
  JPH::ScaledShapeSettings::Create();
  if (local_b8 == '\x02') {
    String::utf8((char *)&local_f8,(int)local_d8);
    local_e8 = "Failed to scale shape with {scale=%v}. It returned the following error: \'%s\'.";
    local_e0 = 0x4d;
    local_f0 = 0;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<Vector3,String>
              (*(undefined8 *)param_2,*(undefined4 *)(param_2 + 8),&local_e8,(StrRange *)&local_f0,
               &local_f8);
    _err_print_error("with_scale","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0x7a,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_e8,0
                     ,0);
    pcVar4 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_e8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar2 = (long *)(local_f0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar2 = (long *)(local_f8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(undefined8 *)this = 0;
LAB_00101b8d:
    if (local_b8 == '\x01') {
      if (local_d8 != (long *)0x0) {
        LOCK();
        plVar2 = local_d8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_d8 + 8))();
        }
      }
    }
    else if ((local_b8 == '\x02') && (local_d8 != local_c8)) {
      (*JPH::Free)();
    }
  }
  else {
    *(long **)this = local_d8;
    if (local_d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
      goto LAB_00101b8d;
    }
  }
  local_a8 = JoltCustomUserDataShapeSettings::Create;
  if (local_60 != (Shape *)0x0) {
    LOCK();
    pSVar1 = local_60 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_60 + 8))();
    }
  }
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  local_a8 = Variant::Variant;
  if (local_70 == '\x01') {
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_90 + 8))();
      }
    }
  }
  else if ((local_70 == '\x02') && (local_90 != local_80)) {
    (*JPH::Free)();
  }
LAB_00101c04:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JoltShape3D::with_center_of_mass_offset(JPH::Shape const*, Vector3 const&) */

JoltShape3D * __thiscall
JoltShape3D::with_center_of_mass_offset(JoltShape3D *this,Shape *param_1,Vector3 *param_2)

{
  Shape *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long local_c8 [2];
  char local_b8;
  code *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  long *local_90;
  long local_80 [2];
  char local_70;
  long *local_68;
  Shape *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Shape *)0x0) {
    _err_print_error("with_center_of_mass_offset","modules/jolt_physics/shapes/jolt_shape_3d.cpp",
                     0x8b,"Parameter \"p_shape\" is null.",0,0);
    *(undefined8 *)this = 0;
    goto LAB_00101f84;
  }
  local_58 = *(undefined8 *)param_2;
  local_a0 = 0;
  uStack_50 = CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8));
  local_70 = '\0';
  local_98 = 0;
  local_68 = (long *)0x0;
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_a8 = Variant::Variant;
  local_60 = param_1;
  JPH::OffsetCenterOfMassShapeSettings::Create();
  if (local_b8 == '\x02') {
    String::utf8((char *)&local_f8,(int)local_d8);
    local_e8 = 
    "Failed to offset center of mass with {offset=%v}. It returned the following error: \'%s\'.";
    local_e0 = 0x58;
    local_f0 = 0;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<Vector3,String>
              (*(undefined8 *)param_2,*(undefined4 *)(param_2 + 8),&local_e8,(StrRange *)&local_f0,
               &local_f8);
    _err_print_error("with_center_of_mass_offset","modules/jolt_physics/shapes/jolt_shape_3d.cpp",
                     0x8f,"Condition \"shape_result.HasError()\" is true. Returning: nullptr",
                     &local_e8,0,0);
    pcVar4 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_e8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar2 = (long *)(local_f0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar2 = (long *)(local_f8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(undefined8 *)this = 0;
LAB_00101f0d:
    if (local_b8 == '\x01') {
      if (local_d8 != (long *)0x0) {
        LOCK();
        plVar2 = local_d8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_d8 + 8))();
        }
      }
    }
    else if ((local_b8 == '\x02') && (local_d8 != local_c8)) {
      (*JPH::Free)();
    }
  }
  else {
    *(long **)this = local_d8;
    if (local_d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
      goto LAB_00101f0d;
    }
  }
  local_a8 = JoltCustomUserDataShapeSettings::Create;
  if (local_60 != (Shape *)0x0) {
    LOCK();
    pSVar1 = local_60 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_60 + 8))();
    }
  }
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  local_a8 = Variant::Variant;
  if (local_70 == '\x01') {
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_90 + 8))();
      }
    }
  }
  else if ((local_70 == '\x02') && (local_90 != local_80)) {
    (*JPH::Free)();
  }
LAB_00101f84:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JoltShape3D::with_center_of_mass(JPH::Shape const*, Vector3 const&) */

JoltShape3D * __thiscall
JoltShape3D::with_center_of_mass(JoltShape3D *this,Shape *param_1,Vector3 *param_2)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [12];
  undefined8 local_30;
  float local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Shape *)0x0) {
    _err_print_error("with_center_of_mass","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0x95,
                     "Parameter \"p_shape\" is null.",0,0);
    *(undefined8 *)this = 0;
  }
  else {
    auVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    local_28 = *(float *)(param_2 + 8) - auVar3._8_4_;
    fVar1 = (float)*(undefined8 *)param_2 - auVar3._0_4_;
    fVar2 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) - auVar3._4_4_;
    local_30 = CONCAT44(fVar2,fVar1);
    if ((fVar2 == 0.0 && fVar1 == 0.0) && (local_28 == 0.0)) {
      *(Shape **)this = param_1;
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      with_center_of_mass_offset(this,param_1,(Vector3 *)&local_30);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JoltShape3D::with_basis_origin(JPH::Shape const*, Basis const&, Vector3 const&) */

JoltShape3D * __thiscall
JoltShape3D::with_basis_origin(JoltShape3D *this,Shape *param_1,Basis *param_2,Vector3 *param_3)

{
  Shape *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 uStack_e0;
  long local_d8 [2];
  char local_c8;
  code *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_90 [2];
  char local_80;
  long *local_78;
  Shape *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (Shape *)0x0) {
    _err_print_error("with_basis_origin","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0x80,
                     "Parameter \"p_shape\" is null.",0,0);
    *(undefined8 *)this = 0;
    goto LAB_00102459;
  }
  Basis::get_quaternion();
  Quaternion::normalized();
  local_b0 = 0;
  local_68 = *(undefined8 *)param_3;
  local_a8 = 0;
  uStack_60 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
  local_80 = '\0';
  local_78 = (long *)0x0;
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_b8 = Memory::alloc_static;
  local_58 = local_e8;
  uStack_50 = uStack_e0;
  local_70 = param_1;
  JPH::RotatedTranslatedShapeSettings::Create();
  if (local_c8 == '\x02') {
    String::utf8((char *)&local_108,(int)local_e8);
    local_100 = 0;
    local_f8 = 
    "Failed to offset shape with {basis=%s origin=%v}. It returned the following error: \'%s\'.";
    local_f0 = 0x58;
    String::parse_latin1((StrRange *)&local_100);
    vformat<Basis,Vector3,String>
              (*(undefined8 *)param_3,*(undefined4 *)(param_3 + 8),&local_f8,(StrRange *)&local_100,
               &local_108);
    _err_print_error("with_basis_origin","modules/jolt_physics/shapes/jolt_shape_3d.cpp",0x85,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_f8,0
                    );
    pcVar4 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_f8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar2 = (long *)(local_100 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar2 = (long *)(local_108 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *(undefined8 *)this = 0;
LAB_001023e2:
    if (local_c8 == '\x01') {
      if (local_e8 != (long *)0x0) {
        LOCK();
        plVar2 = local_e8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_e8 + 8))();
        }
      }
    }
    else if ((local_c8 == '\x02') && (local_e8 != local_d8)) {
      (*JPH::Free)();
    }
  }
  else {
    *(long **)this = local_e8;
    if (local_e8 != (long *)0x0) {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
      goto LAB_001023e2;
    }
  }
  local_b8 = JoltCustomUserDataShapeSettings::Create;
  if (local_70 != (Shape *)0x0) {
    LOCK();
    pSVar1 = local_70 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      (**(code **)(*(long *)local_70 + 8))();
    }
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar2 = local_78 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_78 + 0x18))();
    }
  }
  local_b8 = Variant::Variant;
  if (local_80 == '\x01') {
    if (local_a0 != (long *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_a0 + 8))();
      }
    }
  }
  else if ((local_80 == '\x02') && (local_a0 != local_90)) {
    (*JPH::Free)();
  }
LAB_00102459:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JoltShape3D::add_owner(JoltShapedObject3D*) */

void __thiscall JoltShape3D::add_owner(JoltShape3D *this,JoltShapedObject3D *param_1)

{
  int *piVar1;
  JoltShapedObject3D *local_10 [2];
  
  local_10[0] = param_1;
  piVar1 = (int *)HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
                  ::operator[]((HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
                                *)(this + 8),local_10);
  *piVar1 = *piVar1 + 1;
  return;
}



/* JoltShape3D::remove_owner(JoltShapedObject3D*) */

int * __thiscall JoltShape3D::remove_owner(JoltShape3D *this,JoltShapedObject3D *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
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
  int *piVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  long *plVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  JoltShapedObject3D *local_40 [2];
  
  local_40[0] = param_1;
  piVar30 = (int *)HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
                   ::operator[]((HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
                                 *)(this + 8),local_40);
  iVar5 = *piVar30;
  *piVar30 = iVar5 + -1;
  if (((iVar5 + -1 < 1) && (lVar7 = *(long *)(this + 0x10), lVar7 != 0)) &&
     (piVar30 = (int *)(ulong)*(uint *)(this + 0x34), *(uint *)(this + 0x34) != 0)) {
    lVar8 = *(long *)(this + 0x18);
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar36 = CONCAT44(0,uVar6);
    uVar31 = (long)local_40[0] * 0x3ffff - 1;
    uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
    uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
    uVar31 = uVar31 >> 0x16 ^ uVar31;
    uVar38 = uVar31 & 0xffffffff;
    if ((int)uVar31 == 0) {
      uVar38 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar38 * lVar9;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar36;
    auVar12 = auVar12 * auVar21;
    piVar30 = auVar12._0_8_;
    uVar39 = *(uint *)(lVar8 + auVar12._8_8_ * 4);
    uVar31 = (ulong)auVar12._8_4_;
    if (uVar39 != 0) {
      uVar37 = 0;
      uVar32 = auVar12._8_8_;
      do {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)((int)uVar31 + 1) * lVar9;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar36;
        auVar15 = auVar15 * auVar24;
        uVar34 = auVar15._8_8_;
        piVar30 = auVar15._0_8_;
        uVar33 = auVar15._8_4_;
        if (((uint)uVar38 == uVar39) &&
           (piVar30 = *(int **)(lVar7 + uVar32 * 8),
           local_40[0] == *(JoltShapedObject3D **)(piVar30 + 4))) {
          puVar40 = (uint *)(lVar8 + uVar34 * 4);
          uVar38 = (ulong)uVar33;
          uVar39 = *puVar40;
          if ((uVar39 != 0) &&
             (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar39 * lVar9, auVar25._8_8_ = 0,
             auVar25._0_8_ = uVar36, auVar17._8_8_ = 0,
             auVar17._0_8_ = (ulong)((uVar33 + uVar6) - SUB164(auVar16 * auVar25,8)) * lVar9,
             auVar26._8_8_ = 0, auVar26._0_8_ = uVar36, SUB164(auVar17 * auVar26,8) != 0)) {
            while( true ) {
              puVar4 = (uint *)(lVar8 + uVar31 * 4);
              *puVar40 = *puVar4;
              puVar1 = (undefined8 *)(lVar7 + uVar34 * 8);
              *puVar4 = uVar39;
              puVar2 = (undefined8 *)(lVar7 + uVar31 * 8);
              uVar10 = *puVar1;
              *puVar1 = *puVar2;
              *puVar2 = uVar10;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)((int)uVar38 + 1) * lVar9;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = uVar36;
              uVar34 = SUB168(auVar20 * auVar29,8);
              puVar40 = (uint *)(lVar8 + uVar34 * 4);
              uVar39 = *puVar40;
              uVar31 = uVar38;
              if ((uVar39 == 0) ||
                 (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar39 * lVar9, auVar27._8_8_ = 0,
                 auVar27._0_8_ = uVar36, auVar19._8_8_ = 0,
                 auVar19._0_8_ =
                      (ulong)((SUB164(auVar20 * auVar29,8) + uVar6) - SUB164(auVar18 * auVar27,8)) *
                      lVar9, auVar28._8_8_ = 0, auVar28._0_8_ = uVar36,
                 SUB164(auVar19 * auVar28,8) == 0)) break;
              uVar38 = uVar34 & 0xffffffff;
            }
          }
          *(undefined4 *)(lVar8 + uVar31 * 4) = 0;
          plVar3 = (long *)(lVar7 + uVar31 * 8);
          plVar35 = (long *)*plVar3;
          if (*(long **)(this + 0x20) == plVar35) {
            *(long *)(this + 0x20) = *plVar35;
            plVar35 = (long *)*plVar3;
          }
          if (*(long **)(this + 0x28) == plVar35) {
            *(long *)(this + 0x28) = plVar35[1];
            plVar35 = (long *)*plVar3;
          }
          if ((long *)plVar35[1] != (long *)0x0) {
            *(long *)plVar35[1] = *plVar35;
            plVar35 = (long *)*plVar3;
          }
          if (*plVar35 != 0) {
            *(long *)(*plVar35 + 8) = plVar35[1];
            plVar35 = (long *)*plVar3;
          }
          Memory::free_static(plVar35,false);
          piVar11 = *(int **)(this + 0x10);
          piVar30 = piVar11 + uVar31 * 2;
          piVar30[0] = 0;
          piVar30[1] = 0;
          *(int *)(this + 0x34) = *(int *)(this + 0x34) + -1;
          return piVar11;
        }
        uVar39 = *(uint *)(lVar8 + uVar34 * 4);
        uVar31 = uVar34 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar39 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar39 * lVar9, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar36, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar6 + uVar33) - SUB164(auVar13 * auVar22,8)) * lVar9,
              auVar23._8_8_ = 0, auVar23._0_8_ = uVar36, piVar30 = SUB168(auVar14 * auVar23,0),
              uVar32 = uVar34, uVar37 <= SUB164(auVar14 * auVar23,8)));
    }
  }
  return piVar30;
}



/* JoltShape3D::remove_self() */

void __thiscall JoltShape3D::remove_self(JoltShape3D *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  JoltShapedObject3D *local_70;
  int local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (undefined1  [16])0x0;
  local_40 = 0;
  local_50 = (undefined1  [16])0x0;
  uVar5 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) <=
          *(uint *)(hash_table_size_primes + uVar5 * 4)) {
        iVar2 = *(int *)(this + 0x34);
        local_40 = uVar5 & 0xffffffff;
        goto joined_r0x00102b29;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar2 = *(int *)(this + 0x34);
joined_r0x00102b29:
  if ((iVar2 != 0) && (plVar6 = *(long **)(this + 0x20), plVar6 != (long *)0x0)) {
    do {
      HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
      ::insert(&local_70,local_68,(bool)((char)plVar6 + '\x10'));
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    uVar3 = local_60._0_8_;
    uVar5 = local_40;
    for (puVar8 = (undefined8 *)local_50._0_8_; local_40 = uVar5, puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)*puVar8) {
      JoltShapedObject3D::remove_shape((JoltShape3D *)puVar8[2]);
      uVar5 = local_40;
    }
    if ((undefined8 *)uVar3 != (undefined8 *)0x0) {
      local_40._4_4_ = (int)(uVar5 >> 0x20);
      uVar4 = local_60._8_8_;
      bVar9 = local_40._4_4_ != 0;
      if ((bVar9) && (*(uint *)(hash_table_size_primes + (uVar5 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_60._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (uVar5 & 0xffffffff) * 4) * 4);
        piVar7 = (int *)local_60._8_8_;
        puVar8 = (undefined8 *)uVar3;
        do {
          if (*piVar7 != 0) {
            *piVar7 = 0;
            Memory::free_static((void *)*puVar8,false);
            *puVar8 = 0;
          }
          piVar7 = piVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (piVar1 != piVar7);
      }
      Memory::free_static((void *)uVar3,false);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar4,false);
        return;
      }
      goto LAB_00102b4c;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102b4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetPosition() const */

undefined1  [16] __thiscall JPH::RotatedTranslatedShape::GetPosition(RotatedTranslatedShape *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float local_18;
  float fStack_14;
  
  auVar14 = (**(code **)(**(long **)(this + 0x20) + 0x18))();
  fVar6 = auVar14._8_4_;
  fVar7 = *(float *)(this + 0x40);
  fVar1 = *(float *)(this + 0x4c);
  local_18 = auVar14._0_4_;
  fStack_14 = auVar14._4_4_;
  fVar2 = *(float *)(this + 0x48);
  fVar3 = *(float *)(this + 0x44);
  fVar9 = (float)(*(uint *)(this + 0x40) ^ __LC0);
  fVar10 = (float)(*(uint *)(this + 0x44) ^ _UNK_001054a4);
  fVar11 = (float)(*(uint *)(this + 0x48) ^ _UNK_001054a8);
  fVar12 = (float)(*(uint *)(this + 0x4c) ^ _UNK_001054ac);
  fVar13 = (fVar1 * local_18 + fVar7 * 0.0 + fVar3 * fVar6) - fVar2 * fStack_14;
  fVar8 = (fVar1 * fStack_14 - fVar7 * fVar6) + fVar3 * 0.0 + fVar2 * local_18;
  fVar5 = ((fVar1 * fVar6 + fVar7 * fStack_14) - fVar3 * local_18) + fVar2 * 0.0;
  fVar7 = ((fVar1 * 0.0 - fVar7 * local_18) - fVar3 * fStack_14) - fVar2 * fVar6;
  auVar4._4_4_ = *(float *)(this + 0x34) -
                 (fVar5 * fVar9 + fVar8 * fVar12 + (fVar10 * fVar7 - fVar13 * fVar11));
  auVar4._0_4_ = *(float *)(this + 0x30) -
                 ((fVar8 * fVar11 + fVar9 * fVar7 + fVar13 * fVar12) - fVar5 * fVar10);
  auVar4._8_4_ = *(float *)(this + 0x38) -
                 (fVar5 * fVar12 + ((fVar11 * fVar7 + fVar13 * fVar10) - fVar8 * fVar9));
  auVar4._12_4_ =
       *(float *)(this + 0x3c) -
       (((fVar12 * fVar7 - fVar13 * fVar9) - fVar8 * fVar10) - fVar5 * fVar11);
  return auVar4;
}



/* JPH::CompoundShapeSettings::~CompoundShapeSettings() */

void __thiscall JPH::CompoundShapeSettings::~CompoundShapeSettings(CompoundShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x50);
  *(undefined **)this = &ShapeSettings::vtable;
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(this + 0x40) != 0) &&
       (plVar4 = plVar3 + *(long *)(this + 0x40) * 8, plVar3 < plVar4)) {
      do {
        plVar2 = (long *)plVar3[1];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar2 = (long *)*plVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        plVar3 = plVar3 + 8;
      } while (plVar3 < plVar4);
      plVar3 = *(long **)(this + 0x50);
    }
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)(plVar3);
  }
  *(code **)this = Variant::Variant;
  if (this[0x38] == (CompoundShapeSettings)0x1) {
    plVar3 = *(long **)(this + 0x18);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00102dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (CompoundShapeSettings)0x2) &&
          (*(CompoundShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::CompoundShapeSettings::~CompoundShapeSettings() */

void __thiscall JPH::CompoundShapeSettings::~CompoundShapeSettings(CompoundShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(this + 0x50);
  *(undefined **)this = &ShapeSettings::vtable;
  if (plVar3 != (long *)0x0) {
    if ((*(long *)(this + 0x40) != 0) &&
       (plVar4 = plVar3 + *(long *)(this + 0x40) * 8, plVar3 < plVar4)) {
      do {
        plVar2 = (long *)plVar3[1];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar2 = (long *)*plVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
        plVar3 = plVar3 + 8;
      } while (plVar3 < plVar4);
      plVar3 = *(long **)(this + 0x50);
    }
    *(undefined8 *)(this + 0x40) = 0;
    (*Free)(plVar3);
  }
  *(code **)this = Variant::Variant;
  if (this[0x38] == (CompoundShapeSettings)0x1) {
    plVar3 = *(long **)(this + 0x18);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  else if ((this[0x38] == (CompoundShapeSettings)0x2) &&
          (*(CompoundShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00102e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001030a0) */
/* WARNING: Removing unreachable block (ram,0x001031d0) */
/* WARNING: Removing unreachable block (ram,0x00103349) */
/* WARNING: Removing unreachable block (ram,0x001031dc) */
/* WARNING: Removing unreachable block (ram,0x001031e6) */
/* WARNING: Removing unreachable block (ram,0x0010332b) */
/* WARNING: Removing unreachable block (ram,0x001031f2) */
/* WARNING: Removing unreachable block (ram,0x001031fc) */
/* WARNING: Removing unreachable block (ram,0x0010330d) */
/* WARNING: Removing unreachable block (ram,0x00103208) */
/* WARNING: Removing unreachable block (ram,0x00103212) */
/* WARNING: Removing unreachable block (ram,0x001032ef) */
/* WARNING: Removing unreachable block (ram,0x0010321e) */
/* WARNING: Removing unreachable block (ram,0x00103228) */
/* WARNING: Removing unreachable block (ram,0x001032d1) */
/* WARNING: Removing unreachable block (ram,0x00103234) */
/* WARNING: Removing unreachable block (ram,0x0010323e) */
/* WARNING: Removing unreachable block (ram,0x001032b3) */
/* WARNING: Removing unreachable block (ram,0x00103246) */
/* WARNING: Removing unreachable block (ram,0x00103250) */
/* WARNING: Removing unreachable block (ram,0x00103298) */
/* WARNING: Removing unreachable block (ram,0x00103258) */
/* WARNING: Removing unreachable block (ram,0x0010326e) */
/* WARNING: Removing unreachable block (ram,0x0010327a) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 *
vformat<String,int>(undefined8 *param_1,bool *param_2,String_conflict *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
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



/* WARNING: Removing unreachable block (ram,0x00103958) */
/* WARNING: Removing unreachable block (ram,0x00103a88) */
/* WARNING: Removing unreachable block (ram,0x00103c50) */
/* WARNING: Removing unreachable block (ram,0x00103a94) */
/* WARNING: Removing unreachable block (ram,0x00103a9e) */
/* WARNING: Removing unreachable block (ram,0x00103c30) */
/* WARNING: Removing unreachable block (ram,0x00103aaa) */
/* WARNING: Removing unreachable block (ram,0x00103ab4) */
/* WARNING: Removing unreachable block (ram,0x00103c10) */
/* WARNING: Removing unreachable block (ram,0x00103ac0) */
/* WARNING: Removing unreachable block (ram,0x00103aca) */
/* WARNING: Removing unreachable block (ram,0x00103bf0) */
/* WARNING: Removing unreachable block (ram,0x00103ad6) */
/* WARNING: Removing unreachable block (ram,0x00103ae0) */
/* WARNING: Removing unreachable block (ram,0x00103bd0) */
/* WARNING: Removing unreachable block (ram,0x00103aec) */
/* WARNING: Removing unreachable block (ram,0x00103af6) */
/* WARNING: Removing unreachable block (ram,0x00103bb0) */
/* WARNING: Removing unreachable block (ram,0x00103b02) */
/* WARNING: Removing unreachable block (ram,0x00103b0c) */
/* WARNING: Removing unreachable block (ram,0x00103b90) */
/* WARNING: Removing unreachable block (ram,0x00103b14) */
/* WARNING: Removing unreachable block (ram,0x00103b2a) */
/* WARNING: Removing unreachable block (ram,0x00103b36) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

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



/* String vformat<Vector3, String>(String const&, Vector3 const, String const) */

long * vformat<Vector3,String>
                 (undefined8 param_1_00,undefined4 param_2,long *param_1,bool *param_4,
                 String_conflict *param_5)

{
  Variant *pVVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  Variant *pVVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined4 local_f0;
  char local_d9;
  Array local_d8 [8];
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = param_1_00;
  local_f0 = param_2;
  Variant::Variant(local_88,(Vector3 *)&local_f8);
  Variant::Variant(local_70,param_5);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar6 = (int)local_d8;
  Array::resize(iVar6);
  pVVar5 = (Variant *)Array::operator[](iVar6);
  Variant::operator=(pVVar5,local_88);
  pVVar5 = (Variant *)Array::operator[](iVar6);
  Variant::operator=(pVVar5,local_70);
  local_d9 = '\0';
  String::sprintf((Array *)&local_d0,param_4);
  if (local_d9 == '\0') {
    *param_1 = local_d0;
  }
  else {
    local_a0 = 0;
    local_98 = ".";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = "\": ";
    local_b8 = 0;
    local_90 = 3;
    String::parse_latin1((StrRange *)&local_b8);
    local_98 = "Formatting error in string \"";
    local_c8 = 0;
    local_90 = 0x1c;
    String::parse_latin1((StrRange *)&local_c8);
    String::operator+((String_conflict *)&local_c0,(String_conflict *)&local_c8);
    String::operator+((String_conflict *)&local_b0,(String_conflict *)&local_c0);
    String::operator+((String_conflict *)&local_a8,(String_conflict *)&local_b0);
    String::operator+((String_conflict *)&local_98,(String_conflict *)&local_a8);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String_conflict *)&local_98
                     ,0,0);
    pcVar4 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_98 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar2 = (long *)(local_a8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar2 = (long *)(local_b0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar2 = (long *)(local_c0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar2 = (long *)(local_c8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar2 = (long *)(local_b8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar2 = (long *)(local_a0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_d0;
    *param_1 = 0;
    if (local_d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  pVVar5 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String vformat<Basis, Vector3, String>(String const&, Basis const, Vector3 const, String const)
    */

long * vformat<Basis,Vector3,String>
                 (undefined8 param_1_00,undefined4 param_2,long *param_1,bool *param_4,
                 String_conflict *param_5)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  int iVar5;
  Variant *pVVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined4 local_110;
  char local_f9;
  Array local_f8 [8];
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = param_1_00;
  local_110 = param_2;
  Variant::Variant(local_a8,(Basis *)&stack0x00000008);
  Variant::Variant(local_90,(Vector3 *)&local_118);
  iVar5 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar7 = (int)local_f8;
  Array::resize(iVar7);
  pVVar6 = local_a8;
  do {
    iVar5 = iVar5 + 1;
    pVVar4 = (Variant *)Array::operator[](iVar7);
    Variant::operator=(pVVar4,pVVar6);
    pVVar6 = pVVar6 + 0x18;
  } while (iVar5 != 3);
  local_f9 = '\0';
  String::sprintf((Array *)&local_f0,param_4);
  if (local_f9 == '\0') {
    *param_1 = local_f0;
  }
  else {
    local_c0 = 0;
    local_b8 = ".";
    local_b0 = 1;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "\": ";
    local_d8 = 0;
    local_b0 = 3;
    String::parse_latin1((StrRange *)&local_d8);
    local_b8 = "Formatting error in string \"";
    local_e8 = 0;
    local_b0 = 0x1c;
    String::parse_latin1((StrRange *)&local_e8);
    String::operator+((String_conflict *)&local_e0,(String_conflict *)&local_e8);
    String::operator+((String_conflict *)&local_d0,(String_conflict *)&local_e0);
    String::operator+((String_conflict *)&local_c8,(String_conflict *)&local_d0);
    String::operator+((String_conflict *)&local_b8,(String_conflict *)&local_c8);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String_conflict *)&local_b8
                     ,0,0);
    pcVar3 = local_b8;
    if (local_b8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_f0;
    *param_1 = 0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  pVVar6 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar4 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<JoltShapedObject3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<JoltShapedObject3D*>,
   DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*, int> > >::_resize_and_rehash(unsigned
   int) */

void __thiscall
HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
::_resize_and_rehash
          (HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
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
/* HashMap<JoltShapedObject3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<JoltShapedObject3D*>,
   DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*, int> >
   >::operator[](JoltShapedObject3D* const&) */

undefined1  [16] __thiscall
HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
::operator[](HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
             *this,JoltShapedObject3D **param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
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
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined1 (*pauVar44) [16];
  JoltShapedObject3D *pJVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_70;
  uint local_68;
  
  uVar31 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  pJVar45 = *param_1;
  uVar37 = *(uint *)(hash_table_size_primes + uVar31 * 4);
  uVar43 = CONCAT44(0,uVar37);
  if (__s_00 == (void *)0x0) {
    uVar31 = uVar43 * 4;
    uVar29 = uVar43 * 8;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    lStack_70 = 0x104cb0;
    __s_00 = (void *)Memory::alloc_static(uVar29,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar29)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar43 != uVar31);
        pJVar45 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar31);
        lStack_70 = 0x104cfa;
        memset(__s_00,0,uVar29);
        pJVar45 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
LAB_00104d09:
      if (iVar36 == 0) goto LAB_00104da0;
      uVar31 = (ulong)*(uint *)(this + 0x28);
      lVar39 = *(long *)(this + 0x10);
      goto LAB_001049b4;
    }
    pJVar45 = *param_1;
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_00104d09;
  }
  else {
    iVar36 = *(int *)(this + 0x2c);
    if (iVar36 == 0) {
LAB_00104da0:
      iVar36 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = (long)pJVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar41 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar43;
      lVar34 = SUB168(auVar4 * auVar16,8);
      lVar39 = *(long *)(this + 0x10);
      uVar40 = SUB164(auVar4 * auVar16,8);
      uVar33 = *(uint *)(lVar39 + lVar34 * 4);
      if (uVar33 != 0) {
        uVar38 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar41 == uVar33) &&
             (pJVar45 == *(JoltShapedObject3D **)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar40 * 8) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar40 + 1) * lVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar43;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar33 = *(uint *)(lVar39 + lVar34 * 4);
          uVar40 = SUB164(auVar5 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar43, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar40 + uVar37) - SUB164(auVar6 * auVar18,8)) * lVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar43, lVar35 = SUB168(auVar7 * auVar19,8),
                uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_001049b4:
      uVar41 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar31 * 4));
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = (long)pJVar45 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar42 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar42 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar41;
      lVar34 = SUB168(auVar8 * auVar20,8);
      uVar37 = *(uint *)(lVar39 + lVar34 * 4);
      uVar33 = SUB164(auVar8 * auVar20,8);
      if (uVar37 != 0) {
        uVar40 = 0;
        lVar35 = lVar34;
        do {
          if (((uint)uVar42 == uVar37) &&
             (*(JoltShapedObject3D **)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10) == pJVar45)) {
            pauVar30 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar33 * 8);
            *(undefined4 *)(pauVar30[1] + 8) = 0;
            lStack_70 = lVar35;
            goto LAB_00104a9e;
          }
          uVar40 = uVar40 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar41;
          lVar34 = SUB168(auVar9 * auVar21,8);
          uVar37 = *(uint *)(lVar39 + lVar34 * 4);
          uVar33 = SUB164(auVar9 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar37 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar41, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar31 * 4) + uVar33) -
                            SUB164(auVar10 * auVar22,8)) * lVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, lVar35 = SUB168(auVar11 * auVar23,8),
                uVar40 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar43 * __LC36 < (float)(iVar36 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104a9e;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  pJVar45 = *param_1;
  pauVar30 = (undefined1 (*) [16])operator_new(0x20,"");
  *(JoltShapedObject3D **)pauVar30[1] = pJVar45;
  *(undefined4 *)(pauVar30[1] + 8) = 0;
  *pauVar30 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar30;
  }
  else {
    *puVar3 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar3;
  }
  pJVar45 = *param_1;
  lVar39 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar30;
  uVar31 = (long)pJVar45 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar43 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar43 = 1;
  }
  uVar38 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar40 = (uint)uVar43;
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar31 = CONCAT44(0,uVar37);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar43 * lVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lStack_70 = SUB168(auVar12 * auVar24,8);
  lVar34 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar39 + lStack_70 * 4);
  iVar36 = SUB164(auVar12 * auVar24,8);
  uVar33 = *puVar1;
  pauVar28 = pauVar30;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar2;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar37 + iVar36) - SUB164(auVar13 * auVar25,8)) * lVar2;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    local_68 = SUB164(auVar14 * auVar26,8);
    pauVar44 = pauVar28;
    if (local_68 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar34 + lStack_70 * 8);
      pauVar44 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_68;
    }
    uVar40 = (uint)uVar43;
    uVar38 = uVar38 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar36 + 1) * lVar2;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lStack_70 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar39 + lStack_70 * 4);
    iVar36 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar44;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar34 + lStack_70 * 8) = pauVar28;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104a9e:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar30[1] + 8;
  return auVar47;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<JoltShapedObject3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<JoltShapedObject3D*>,
   DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*, int> > >::insert(JoltShapedObject3D*
   const&, int const&, bool) */

void HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
     ::insert(JoltShapedObject3D **param_1,int *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
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
  JoltShapedObject3D *pJVar22;
  uint uVar23;
  ulong uVar24;
  JoltShapedObject3D *pJVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  long *plVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  char in_R8B;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  JoltShapedObject3D *pJVar36;
  
  plVar28 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  if (__s_00 == (void *)0x0) {
    uVar33 = (ulong)uVar2;
    uVar24 = uVar33 * 4;
    uVar31 = uVar33 * 8;
    uVar26 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 4) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar31,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar31)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar33 != uVar24);
        goto LAB_00104e26;
      }
      memset(__s,0,uVar24);
      memset(__s_00,0,uVar31);
      iVar27 = param_2[0xb];
      lVar35 = *plVar28;
      goto LAB_00104e31;
    }
    iVar27 = param_2[0xb];
    lVar35 = *plVar28;
    if (__s_00 != (void *)0x0) goto LAB_00104e31;
  }
  else {
LAB_00104e26:
    iVar27 = param_2[0xb];
    lVar35 = *plVar28;
LAB_00104e31:
    if (iVar27 != 0) {
      uVar33 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4));
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
      uVar24 = lVar35 * 0x3ffff - 1;
      uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
      uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
      uVar24 = uVar24 >> 0x16 ^ uVar24;
      uVar31 = uVar24 & 0xffffffff;
      if ((int)uVar24 == 0) {
        uVar31 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar31 * lVar4;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar33;
      lVar29 = SUB168(auVar6 * auVar14,8);
      uVar32 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
      uVar23 = SUB164(auVar6 * auVar14,8);
      if (uVar32 != 0) {
        uVar34 = 0;
        do {
          if (((uint)uVar31 == uVar32) &&
             (*(long *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == lVar35)) {
            pJVar25 = *(JoltShapedObject3D **)((long)__s_00 + (ulong)uVar23 * 8);
            *(undefined4 *)(pJVar25 + 0x18) = *in_RCX;
            goto LAB_001050f8;
          }
          uVar34 = uVar34 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar23 + 1) * lVar4;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar33;
          lVar29 = SUB168(auVar7 * auVar15,8);
          uVar32 = *(uint *)(*(long *)(param_2 + 4) + lVar29 * 4);
          uVar23 = SUB164(auVar7 * auVar15,8);
        } while ((uVar32 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar32 * lVar4, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar33, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                 (ulong)(uint)param_2[10] * 4) + uVar23) -
                                      SUB164(auVar8 * auVar16,8)) * lVar4, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar33, uVar34 <= SUB164(auVar9 * auVar17,8)));
      }
    }
  }
  if ((float)uVar2 * __LC36 < (float)(iVar27 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pJVar25 = (JoltShapedObject3D *)0x0;
      goto LAB_001050f8;
    }
    _resize_and_rehash((HashMap<JoltShapedObject3D*,int,HashMapHasherDefault,HashMapComparatorDefault<JoltShapedObject3D*>,DefaultTypedAllocator<HashMapElement<JoltShapedObject3D*,int>>>
                        *)param_2,param_2[10] + 1);
  }
  lVar35 = *plVar28;
  uVar3 = *in_RCX;
  pJVar25 = (JoltShapedObject3D *)operator_new(0x20,"");
  *(long *)(pJVar25 + 0x10) = lVar35;
  *(undefined4 *)(pJVar25 + 0x18) = uVar3;
  *(undefined1 (*) [16])pJVar25 = (undefined1  [16])0x0;
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    *(JoltShapedObject3D **)(param_2 + 6) = pJVar25;
    *(JoltShapedObject3D **)(param_2 + 8) = pJVar25;
  }
  else if (in_R8B == '\0') {
    *puVar5 = pJVar25;
    *(undefined8 **)(pJVar25 + 8) = puVar5;
    *(JoltShapedObject3D **)(param_2 + 8) = pJVar25;
  }
  else {
    lVar35 = *(long *)(param_2 + 6);
    *(JoltShapedObject3D **)(lVar35 + 8) = pJVar25;
    *(long *)pJVar25 = lVar35;
    *(JoltShapedObject3D **)(param_2 + 6) = pJVar25;
  }
  lVar35 = *(long *)(param_2 + 4);
  uVar24 = *plVar28 * 0x3ffff - 1;
  uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
  uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
  uVar24 = uVar24 >> 0x16 ^ uVar24;
  uVar31 = uVar24 & 0xffffffff;
  if ((int)uVar24 == 0) {
    uVar31 = 1;
  }
  uVar34 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  uVar23 = (uint)uVar31;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[10] * 4);
  uVar24 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31 * lVar4;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24;
  lVar30 = SUB168(auVar10 * auVar18,8);
  lVar29 = *(long *)(param_2 + 2);
  puVar1 = (uint *)(lVar35 + lVar30 * 4);
  iVar27 = SUB164(auVar10 * auVar18,8);
  uVar32 = *puVar1;
  pJVar22 = pJVar25;
  while (uVar32 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar32 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar24;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar27) - SUB164(auVar11 * auVar19,8)) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar24;
    uVar23 = SUB164(auVar12 * auVar20,8);
    pJVar36 = pJVar22;
    if (uVar23 < uVar34) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar32;
      puVar5 = (undefined8 *)(lVar29 + lVar30 * 8);
      pJVar36 = (JoltShapedObject3D *)*puVar5;
      *puVar5 = pJVar22;
      uVar34 = uVar23;
    }
    uVar23 = (uint)uVar31;
    uVar34 = uVar34 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar27 + 1) * lVar4;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    lVar30 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar35 + lVar30 * 4);
    iVar27 = SUB164(auVar13 * auVar21,8);
    pJVar22 = pJVar36;
    uVar32 = *puVar1;
  }
  *(JoltShapedObject3D **)(lVar29 + lVar30 * 8) = pJVar22;
  *puVar1 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_001050f8:
  *param_1 = pJVar25;
  return;
}



/* JoltShape3D::_owners_to_string() const */

void JoltShape3D::_GLOBAL__sub_I__owners_to_string(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC44;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CompoundShapeSettings::~CompoundShapeSettings() */

void __thiscall JPH::CompoundShapeSettings::~CompoundShapeSettings(CompoundShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


