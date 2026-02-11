
/* JoltBodyReader3D::_acquire_internal(JPH::BodyID const*, int) */

void JoltBodyReader3D::_acquire_internal(BodyID *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 in_register_00000034;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                    (*(long **)(param_1 + 0x10),CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00100025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10),uVar1);
  return;
}



/* JoltBodyWriter3D::_acquire_internal(JPH::BodyID const*, int) */

void JoltBodyWriter3D::_acquire_internal(BodyID *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 in_register_00000034;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                    (*(long **)(param_1 + 0x10),CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00100055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10),uVar1);
  return;
}



/* JoltBodyReader3D::_release_internal() */

void __thiscall JoltBodyReader3D::_release_internal(JoltBodyReader3D *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010007b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(this + 0x38),*(code **)(*plVar1 + 0x40));
    return;
  }
  _err_print_error("_release_internal","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x82,
                   "Condition \"not_acquired()\" is true.",0,0);
  return;
}



/* JoltBodyWriter3D::_release_internal() */

void __thiscall JoltBodyWriter3D::_release_internal(JoltBodyWriter3D *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined8 *)(this + 0x38),*(code **)(*plVar1 + 0x50));
    return;
  }
  _err_print_error("_release_internal","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0xa7,
                   "Condition \"not_acquired()\" is true.",0,0);
  return;
}



/* JoltBodyAccessor3D::JoltBodyAccessor3D(JoltSpace3D const*) */

void __thiscall
JoltBodyAccessor3D::JoltBodyAccessor3D(JoltBodyAccessor3D *this,JoltSpace3D *param_1)

{
  *(JoltSpace3D **)(this + 8) = param_1;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  this[0x30] = (JoltBodyAccessor3D)0x0;
  return;
}



/* JoltBodyAccessor3D::~JoltBodyAccessor3D() */

void __thiscall JoltBodyAccessor3D::~JoltBodyAccessor3D(JoltBodyAccessor3D *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  if (((this[0x30] != (JoltBodyAccessor3D)0xff) && (this[0x30] == (JoltBodyAccessor3D)0x1)) &&
     (*(long *)(this + 0x28) != 0)) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00100164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*JPH::Free)(*(long *)(this + 0x28));
    return;
  }
  return;
}



/* JoltBodyAccessor3D::~JoltBodyAccessor3D() */

void __thiscall JoltBodyAccessor3D::~JoltBodyAccessor3D(JoltBodyAccessor3D *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  if (((this[0x30] != (JoltBodyAccessor3D)0xff) && (this[0x30] == (JoltBodyAccessor3D)0x1)) &&
     (*(long *)(this + 0x28) != 0)) {
    *(undefined8 *)(this + 0x18) = 0;
    (*JPH::Free)();
    operator_delete(this,0x38);
    return;
  }
  operator_delete(this,0x38);
  return;
}



/* JoltBodyAccessor3D::acquire(JPH::BodyID const*, int) */

void __thiscall JoltBodyAccessor3D::acquire(JoltBodyAccessor3D *this,BodyID *param_1,int param_2)

{
  JoltBodyAccessor3D JVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 8) != 0) {
    uVar2 = JoltSpace3D::get_lock_iface();
    *(undefined8 *)(this + 0x10) = uVar2;
    JVar1 = this[0x30];
    if (JVar1 == (JoltBodyAccessor3D)0x2) {
      *(BodyID **)(this + 0x18) = param_1;
      *(int *)(this + 0x20) = param_2;
    }
    else {
      if (((JVar1 != (JoltBodyAccessor3D)0xff) && (JVar1 == (JoltBodyAccessor3D)0x1)) &&
         (*(long *)(this + 0x28) != 0)) {
        *(undefined8 *)(this + 0x18) = 0;
        (*JPH::Free)();
      }
      *(BodyID **)(this + 0x18) = param_1;
      *(int *)(this + 0x20) = param_2;
      this[0x30] = (JoltBodyAccessor3D)0x2;
    }
                    /* WARNING: Could not recover jumptable at 0x00100216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)this)(this,param_1,param_2);
    return;
  }
  _err_print_error("acquire","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x36,
                   "Parameter \"space\" is null.",0,0);
  return;
}



/* JoltBodyAccessor3D::acquire(JPH::BodyID const&) */

void __thiscall JoltBodyAccessor3D::acquire(JoltBodyAccessor3D *this,BodyID *param_1)

{
  JoltBodyAccessor3D JVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 8) != 0) {
    uVar3 = JoltSpace3D::get_lock_iface();
    *(undefined8 *)(this + 0x10) = uVar3;
    JVar1 = this[0x30];
    if (JVar1 == (JoltBodyAccessor3D)0x0) {
      *(undefined4 *)(this + 0x18) = *(undefined4 *)param_1;
    }
    else {
      if (JVar1 != (JoltBodyAccessor3D)0xff) {
        if ((JVar1 == (JoltBodyAccessor3D)0x1) && (*(long *)(this + 0x28) != 0)) {
          *(undefined8 *)(this + 0x18) = 0;
          (*JPH::Free)();
        }
        this[0x30] = (JoltBodyAccessor3D)0xff;
      }
      uVar2 = *(undefined4 *)param_1;
      this[0x30] = (JoltBodyAccessor3D)0x0;
      *(undefined4 *)(this + 0x18) = uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x001002d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)this)(this,param_1,1);
    return;
  }
  _err_print_error("acquire","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x3e,
                   "Parameter \"space\" is null.",0,0);
  return;
}



/* JoltBodyAccessor3D::acquire_active() */

void __thiscall JoltBodyAccessor3D::acquire_active(JoltBodyAccessor3D *this)

{
  acquire(this,*(BodyID **)(*(long *)(*(long *)(this + 8) + 0x68) + 0xb0),
          *(int *)(*(long *)(*(long *)(this + 8) + 0x68) + 0xc0));
  return;
}



/* JoltBodyAccessor3D::acquire_all() */

void __thiscall JoltBodyAccessor3D::acquire_all(JoltBodyAccessor3D *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 8) != 0) {
    uVar1 = JoltSpace3D::get_lock_iface();
    *(undefined8 *)(this + 0x10) = uVar1;
    if (this[0x30] != (JoltBodyAccessor3D)0x1) {
      *(undefined8 *)(this + 0x28) = 0;
      this[0x30] = (JoltBodyAccessor3D)0x1;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    JPH::BodyManager::GetBodyIDs((Array *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001003d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)this)(this,*(undefined8 *)(this + 0x28),*(undefined4 *)(this + 0x18))
    ;
    return;
  }
  _err_print_error("acquire_all","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x4c,
                   "Parameter \"space\" is null.",0,0);
  return;
}



/* JoltBodyAccessor3D::release() */

void __thiscall JoltBodyAccessor3D::release(JoltBodyAccessor3D *this)

{
  (**(code **)(*(long *)this + 8))();
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* JoltBodyAccessor3D::get_ids() const */

JoltBodyAccessor3D * __thiscall JoltBodyAccessor3D::get_ids(JoltBodyAccessor3D *this)

{
  JoltBodyAccessor3D JVar1;
  
  if (*(long *)(this + 0x10) == 0) {
    _err_print_error("get_ids","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x62,
                     "Condition \"not_acquired()\" is true. Returning: nullptr",0,0);
    return (JoltBodyAccessor3D *)0x0;
  }
  JVar1 = this[0x30];
  if (JVar1 == (JoltBodyAccessor3D)0xff) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (JVar1 == (JoltBodyAccessor3D)0x1) {
    return *(JoltBodyAccessor3D **)(this + 0x28);
  }
  if (JVar1 == (JoltBodyAccessor3D)0x2) {
    return *(JoltBodyAccessor3D **)(this + 0x18);
  }
  return this + 0x18;
}



/* JoltBodyAccessor3D::get_count() const */

undefined4 __thiscall JoltBodyAccessor3D::get_count(JoltBodyAccessor3D *this)

{
  JoltBodyAccessor3D JVar1;
  
  if (*(long *)(this + 0x10) == 0) {
    _err_print_error("get_count","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x6d,
                     "Condition \"not_acquired()\" is true. Returning: 0",0,0);
    return 0;
  }
  JVar1 = this[0x30];
  if (JVar1 == (JoltBodyAccessor3D)0xff) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (JVar1 == (JoltBodyAccessor3D)0x1) {
    return *(undefined4 *)(this + 0x18);
  }
  if (JVar1 == (JoltBodyAccessor3D)0x2) {
    return *(undefined4 *)(this + 0x20);
  }
  return 1;
}



/* JoltBodyAccessor3D::get_at(int) const */

long __thiscall JoltBodyAccessor3D::get_at(JoltBodyAccessor3D *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  if (-1 < param_1) {
    iVar2 = get_count(this);
    if (param_1 < iVar2) {
      lVar3 = get_ids(this);
      return lVar3 + (long)param_1 * 4;
    }
  }
  iVar2 = get_count(this);
  _err_print_index_error
            ("get_at","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x78,(long)param_1,
             (long)iVar2,"p_index","get_count()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JoltBodyReader3D::JoltBodyReader3D(JoltSpace3D const*) */

void __thiscall JoltBodyReader3D::JoltBodyReader3D(JoltBodyReader3D *this,JoltSpace3D *param_1)

{
  *(JoltSpace3D **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  this[0x30] = (JoltBodyReader3D)0x0;
  *(undefined ***)this = &PTR__acquire_internal_00100bc0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



/* JoltBodyReader3D::try_get(JPH::BodyID const&) const */

ulong __thiscall JoltBodyReader3D::try_get(JoltBodyReader3D *this,BodyID *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)param_1;
  if (uVar1 != 0xffffffff) {
    if (*(long *)(this + 0x10) == 0) {
      _err_print_error("try_get","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0x8f,
                       "Condition \"not_acquired()\" is true. Returning: nullptr",0,0);
      return 0;
    }
    puVar2 = *(ulong **)(*(long *)(this + 0x10) + 8);
    if ((((ulong)(uVar1 & 0x7fffff) < *puVar2) &&
        (uVar3 = *(ulong *)(puVar2[2] + (ulong)(uVar1 & 0x7fffff) * 8), (uVar3 & 1) == 0)) &&
       (uVar1 == *(uint *)(uVar3 + 0x70))) {
      return uVar3;
    }
  }
  return 0;
}



/* JoltBodyReader3D::try_get(int) const */

undefined8 __thiscall JoltBodyReader3D::try_get(JoltBodyReader3D *this,int param_1)

{
  int iVar1;
  BodyID *pBVar2;
  undefined8 uVar3;
  
  iVar1 = JoltBodyAccessor3D::get_count((JoltBodyAccessor3D *)this);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    pBVar2 = (BodyID *)JoltBodyAccessor3D::get_at((JoltBodyAccessor3D *)this,param_1);
    uVar3 = try_get(this,pBVar2);
    return uVar3;
  }
  return 0;
}



/* JoltBodyReader3D::try_get() const */

undefined8 __thiscall JoltBodyReader3D::try_get(JoltBodyReader3D *this)

{
  int iVar1;
  BodyID *pBVar2;
  undefined8 uVar3;
  
  iVar1 = JoltBodyAccessor3D::get_count((JoltBodyAccessor3D *)this);
  if (0 < iVar1) {
    pBVar2 = (BodyID *)JoltBodyAccessor3D::get_at((JoltBodyAccessor3D *)this,0);
    uVar3 = try_get(this,pBVar2);
    return uVar3;
  }
  return 0;
}



/* JoltBodyWriter3D::JoltBodyWriter3D(JoltSpace3D const*) */

void __thiscall JoltBodyWriter3D::JoltBodyWriter3D(JoltBodyWriter3D *this,JoltSpace3D *param_1)

{
  *(JoltSpace3D **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  this[0x30] = (JoltBodyWriter3D)0x0;
  *(undefined ***)this = &PTR__acquire_internal_00100bf0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



/* JoltBodyWriter3D::try_get(JPH::BodyID const&) const */

ulong __thiscall JoltBodyWriter3D::try_get(JoltBodyWriter3D *this,BodyID *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)param_1;
  if (uVar1 != 0xffffffff) {
    if (*(long *)(this + 0x10) == 0) {
      _err_print_error("try_get","modules/jolt_physics/spaces/jolt_body_accessor_3d.cpp",0xb4,
                       "Condition \"not_acquired()\" is true. Returning: nullptr",0,0);
      return 0;
    }
    puVar2 = *(ulong **)(*(long *)(this + 0x10) + 8);
    if ((((ulong)(uVar1 & 0x7fffff) < *puVar2) &&
        (uVar3 = *(ulong *)(puVar2[2] + (ulong)(uVar1 & 0x7fffff) * 8), (uVar3 & 1) == 0)) &&
       (uVar1 == *(uint *)(uVar3 + 0x70))) {
      return uVar3;
    }
  }
  return 0;
}



/* JoltBodyWriter3D::try_get(int) const */

undefined8 __thiscall JoltBodyWriter3D::try_get(JoltBodyWriter3D *this,int param_1)

{
  int iVar1;
  BodyID *pBVar2;
  undefined8 uVar3;
  
  iVar1 = JoltBodyAccessor3D::get_count((JoltBodyAccessor3D *)this);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    pBVar2 = (BodyID *)JoltBodyAccessor3D::get_at((JoltBodyAccessor3D *)this,param_1);
    uVar3 = try_get(this,pBVar2);
    return uVar3;
  }
  return 0;
}



/* JoltBodyWriter3D::try_get() const */

undefined8 __thiscall JoltBodyWriter3D::try_get(JoltBodyWriter3D *this)

{
  int iVar1;
  BodyID *pBVar2;
  undefined8 uVar3;
  
  iVar1 = JoltBodyAccessor3D::get_count((JoltBodyAccessor3D *)this);
  if (0 < iVar1) {
    pBVar2 = (BodyID *)JoltBodyAccessor3D::get_at((JoltBodyAccessor3D *)this,0);
    uVar3 = try_get(this,pBVar2);
    return uVar3;
  }
  return 0;
}



/* JoltBodyWriter3D::~JoltBodyWriter3D() */

void __thiscall JoltBodyWriter3D::~JoltBodyWriter3D(JoltBodyWriter3D *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  if (((this[0x30] != (JoltBodyWriter3D)0xff) && (this[0x30] == (JoltBodyWriter3D)0x1)) &&
     (*(long *)(this + 0x28) != 0)) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00100994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*JPH::Free)(*(long *)(this + 0x28));
    return;
  }
  return;
}



/* JoltBodyReader3D::~JoltBodyReader3D() */

void __thiscall JoltBodyReader3D::~JoltBodyReader3D(JoltBodyReader3D *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  if (((this[0x30] != (JoltBodyReader3D)0xff) && (this[0x30] == (JoltBodyReader3D)0x1)) &&
     (*(long *)(this + 0x28) != 0)) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x001009d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*JPH::Free)(*(long *)(this + 0x28));
    return;
  }
  return;
}



/* JoltBodyReader3D::~JoltBodyReader3D() */

void __thiscall JoltBodyReader3D::~JoltBodyReader3D(JoltBodyReader3D *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  if (((this[0x30] != (JoltBodyReader3D)0xff) && (this[0x30] == (JoltBodyReader3D)0x1)) &&
     (*(long *)(this + 0x28) != 0)) {
    *(undefined8 *)(this + 0x18) = 0;
    (*JPH::Free)();
    operator_delete(this,0x40);
    return;
  }
  operator_delete(this,0x40);
  return;
}



/* JoltBodyWriter3D::~JoltBodyWriter3D() */

void __thiscall JoltBodyWriter3D::~JoltBodyWriter3D(JoltBodyWriter3D *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100b90;
  if (((this[0x30] != (JoltBodyWriter3D)0xff) && (this[0x30] == (JoltBodyWriter3D)0x1)) &&
     (*(long *)(this + 0x28) != 0)) {
    *(undefined8 *)(this + 0x18) = 0;
    (*JPH::Free)();
    operator_delete(this,0x40);
    return;
  }
  operator_delete(this,0x40);
  return;
}



/* JoltBodyAccessor3D::get_ids() const [clone .cold] */

void JoltBodyAccessor3D::get_ids(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* JoltBodyAccessor3D::get_count() const [clone .cold] */

void JoltBodyAccessor3D::get_count(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* JoltBodyAccessor3D::JoltBodyAccessor3D(JoltSpace3D const*) */

void JoltBodyAccessor3D::_GLOBAL__sub_I_JoltBodyAccessor3D(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC17;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltBodyReader3D::~JoltBodyReader3D() */

void __thiscall JoltBodyReader3D::~JoltBodyReader3D(JoltBodyReader3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltBodyWriter3D::~JoltBodyWriter3D() */

void __thiscall JoltBodyWriter3D::~JoltBodyWriter3D(JoltBodyWriter3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


