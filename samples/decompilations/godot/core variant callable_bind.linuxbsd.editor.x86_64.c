
/* CallableCustomBind::get_compare_equal_func() const */

code * CallableCustomBind::get_compare_equal_func(void)

{
  return _equal_func;
}



/* CallableCustomBind::get_compare_less_func() const */

code * CallableCustomBind::get_compare_less_func(void)

{
  return _less_func;
}



/* CallableCustomUnbind::get_compare_equal_func() const */

code * CallableCustomUnbind::get_compare_equal_func(void)

{
  return _equal_func;
}



/* CallableCustomUnbind::get_compare_less_func() const */

code * CallableCustomUnbind::get_compare_less_func(void)

{
  return _less_func;
}



/* CallableCustomUnbind::hash() const */

void CallableCustomUnbind::hash(void)

{
  Callable::hash();
  return;
}



/* CallableCustomUnbind::get_as_text() const */

CallableCustomUnbind * __thiscall CallableCustomUnbind::get_as_text(CallableCustomUnbind *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Callable::operator_cast_to_String((Callable *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomUnbind::_equal_func(CallableCustom const*, CallableCustom const*) */

undefined4 CallableCustomUnbind::_equal_func(CallableCustom *param_1,CallableCustom *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Callable::operator!=((Callable *)(param_1 + 0x10),(Callable *)(param_2 + 0x10));
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x20) >> 8),
                     *(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20));
  }
  return uVar2;
}



/* CallableCustomUnbind::_less_func(CallableCustom const*, CallableCustom const*) */

char CallableCustomUnbind::_less_func(CallableCustom *param_1,CallableCustom *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = Callable::operator<((Callable *)(param_1 + 0x10),(Callable *)(param_2 + 0x10));
  if (cVar1 == '\0') {
    cVar2 = Callable::operator<((Callable *)(param_2 + 0x10),(Callable *)(param_1 + 0x10));
    if (cVar2 == '\0') {
      return *(int *)(param_1 + 0x20) < *(int *)(param_2 + 0x20);
    }
  }
  return cVar1;
}



/* CallableCustomUnbind::is_valid() const */

void CallableCustomUnbind::is_valid(void)

{
  Callable::is_valid();
  return;
}



/* CallableCustomUnbind::get_method() const */

CallableCustomUnbind * __thiscall CallableCustomUnbind::get_method(CallableCustomUnbind *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Callable::get_method();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomUnbind::get_object() const */

void CallableCustomUnbind::get_object(void)

{
  Callable::get_object_id();
  return;
}



/* CallableCustomUnbind::get_base_comparator() const */

void CallableCustomUnbind::get_base_comparator(void)

{
  Callable::get_base_comparator();
  return;
}



/* CallableCustomUnbind::get_argument_count(bool&) const */

int __thiscall CallableCustomUnbind::get_argument_count(CallableCustomUnbind *this,bool *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Callable::get_argument_count((bool *)(this + 0x10));
  iVar2 = 0;
  if (*param_1 != false) {
    iVar2 = iVar1 + *(int *)(this + 0x20);
  }
  return iVar2;
}



/* CallableCustomBind::get_argument_count(bool&) const */

ulong __thiscall CallableCustomBind::get_argument_count(CallableCustomBind *this,bool *param_1)

{
  ulong uVar1;
  
  uVar1 = Callable::get_argument_count((bool *)(this + 0x10));
  if (*param_1 != false) {
    if (*(long *)(this + 0x28) != 0) {
      uVar1 = (ulong)(uint)((int)uVar1 - *(int *)(*(long *)(this + 0x28) + -8));
    }
    return uVar1;
  }
  return 0;
}



/* CallableCustomUnbind::get_bound_arguments_count() const */

void CallableCustomUnbind::get_bound_arguments_count(void)

{
  Callable::get_bound_arguments_count();
  return;
}



/* CallableCustomUnbind::get_unbound_arguments_count() const */

int __thiscall CallableCustomUnbind::get_unbound_arguments_count(CallableCustomUnbind *this)

{
  int iVar1;
  
  iVar1 = Callable::get_unbound_arguments_count();
  return iVar1 + *(int *)(this + 0x20);
}



/* CallableCustomBind::get_bound_arguments_count() const */

int __thiscall CallableCustomBind::get_bound_arguments_count(CallableCustomBind *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = Callable::get_bound_arguments_count();
  if (*(long *)(this + 0x28) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 0x28) + -8);
  }
  iVar2 = Callable::get_unbound_arguments_count();
  lVar3 = 0;
  if (-1 < lVar4 - iVar2) {
    lVar3 = lVar4 - iVar2;
  }
  return iVar1 + (int)lVar3;
}



/* CallableCustomBind::get_unbound_arguments_count() const */

long __thiscall CallableCustomBind::get_unbound_arguments_count(CallableCustomBind *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = Callable::get_unbound_arguments_count();
  lVar2 = (long)iVar1;
  if (*(long *)(this + 0x28) != 0) {
    lVar2 = lVar2 - *(long *)(*(long *)(this + 0x28) + -8);
  }
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  return lVar2;
}



/* CallableCustomUnbind::get_bound_arguments(Vector<Variant>&) const */

void CallableCustomUnbind::get_bound_arguments(Vector *param_1)

{
  Callable::get_bound_arguments_ref(param_1 + 0x10);
  return;
}



/* CallableCustomUnbind::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomUnbind::call
          (CallableCustomUnbind *this,Variant **param_1,int param_2,Variant *param_3,
          CallError *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x20);
  if (param_2 < iVar1) {
    *(undefined4 *)param_4 = 4;
    *(int *)(param_4 + 8) = iVar1;
    return;
  }
  Callable::callp((Variant **)(this + 0x10),(int)param_1,(Variant *)(ulong)(uint)(param_2 - iVar1),
                  (CallError *)param_3);
  return;
}



/* CallableCustomBind::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomBind::call
          (CallableCustomBind *this,Variant **param_1,int param_2,Variant *param_3,
          CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar10;
  void *__dest;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined1 auStack_68 [8];
  long local_60;
  CallError *local_58;
  Variant *local_50;
  long local_40;
  undefined1 *puVar9;
  
  puVar8 = auStack_68;
  puVar7 = auStack_68;
  puVar5 = auStack_68;
  puVar9 = auStack_68;
  lVar2 = *(long *)(this + 0x28);
  lVar10 = (long)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_4;
  local_50 = param_3;
  if (lVar2 == 0) {
    uVar3 = lVar10 * 8 + 0x17;
    puVar7 = auStack_68;
    while (puVar9 != auStack_68 + -(uVar3 & 0xfffffffffffff000)) {
      puVar8 = puVar7 + -0x1000;
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar9 = puVar7 + -0x1000;
      puVar7 = puVar7 + -0x1000;
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar8 + lVar1;
    puVar7 = puVar8 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    iVar11 = 0;
    lVar12 = 0;
    __dest = (void *)((ulong)(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0);
    if (param_2 < 1) goto LAB_00100420;
LAB_001003e2:
    *(undefined8 *)(puVar6 + -8) = 0x1003f5;
    local_60 = lVar10;
    __dest = memcpy(__dest,param_1,(ulong)(uint)param_2 << 3);
    puVar7 = puVar6;
    lVar10 = local_60;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    uVar3 = (lVar12 + lVar10) * 8 + 0x17;
    puVar8 = auStack_68;
    while (puVar5 != auStack_68 + -(uVar3 & 0xfffffffffffff000)) {
      puVar7 = puVar8 + -0x1000;
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
      puVar5 = puVar8 + -0x1000;
      puVar8 = puVar8 + -0x1000;
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar7 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    }
    __dest = (void *)((ulong)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0);
    puVar7 = puVar7 + lVar1;
    if (0 < param_2) goto LAB_001003e2;
  }
  iVar11 = (int)lVar12;
  if (0 < lVar12) {
    plVar4 = (long *)((long)__dest + lVar10 * 8);
    lVar10 = lVar2 + lVar12 * 0x18;
    do {
      *plVar4 = lVar2;
      lVar2 = lVar2 + 0x18;
      plVar4 = plVar4 + 1;
    } while (lVar2 != lVar10);
  }
LAB_00100420:
  *(undefined8 *)(puVar7 + -8) = 0x100438;
  Callable::callp((Variant **)(this + 0x10),(int)__dest,(Variant *)(ulong)(uint)(param_2 + iVar11),
                  (CallError *)local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_001004d6;
  __stack_chk_fail();
}



/* CallableCustomUnbind::rpc(int, Variant const**, int, Callable::CallError&) const */

undefined8 __thiscall
CallableCustomUnbind::rpc
          (CallableCustomUnbind *this,int param_1,Variant **param_2,int param_3,CallError *param_4)

{
  int iVar1;
  undefined8 extraout_RAX;
  undefined4 in_register_00000034;
  
  iVar1 = *(int *)(this + 0x20);
  if (iVar1 <= param_3) {
    Callable::rpcp((int)this + 0x10,(Variant **)CONCAT44(in_register_00000034,param_1),(int)param_2,
                   (CallError *)(ulong)(uint)(param_3 - iVar1));
    return extraout_RAX;
  }
  *(int *)(param_4 + 8) = iVar1;
  *(undefined4 *)param_4 = 4;
  return 3;
}



/* CallableCustomBind::rpc(int, Variant const**, int, Callable::CallError&) const */

void __thiscall
CallableCustomBind::rpc
          (CallableCustomBind *this,int param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar10;
  void *__dest;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined1 auStack_68 [8];
  long local_60;
  CallError *local_58;
  uint local_4c;
  long local_40;
  undefined1 *puVar9;
  
  puVar8 = auStack_68;
  puVar7 = auStack_68;
  puVar5 = auStack_68;
  puVar9 = auStack_68;
  lVar2 = *(long *)(this + 0x28);
  lVar10 = (long)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_4;
  local_4c = param_1;
  if (lVar2 == 0) {
    uVar3 = lVar10 * 8 + 0x17;
    puVar7 = auStack_68;
    while (puVar9 != auStack_68 + -(uVar3 & 0xfffffffffffff000)) {
      puVar8 = puVar7 + -0x1000;
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar9 = puVar7 + -0x1000;
      puVar7 = puVar7 + -0x1000;
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar8 + lVar1;
    puVar7 = puVar8 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    iVar11 = 0;
    lVar12 = 0;
    __dest = (void *)((ulong)(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0);
    if (param_3 < 1) goto LAB_00100608;
LAB_001005c4:
    *(undefined8 *)(puVar6 + -8) = 0x1005d7;
    local_60 = lVar10;
    __dest = memcpy(__dest,param_2,(ulong)(uint)param_3 << 3);
    puVar7 = puVar6;
    lVar10 = local_60;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    uVar3 = (lVar12 + lVar10) * 8 + 0x17;
    puVar8 = auStack_68;
    while (puVar5 != auStack_68 + -(uVar3 & 0xfffffffffffff000)) {
      puVar7 = puVar8 + -0x1000;
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
      puVar5 = puVar8 + -0x1000;
      puVar8 = puVar8 + -0x1000;
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar7 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    }
    __dest = (void *)((ulong)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0);
    puVar7 = puVar7 + lVar1;
    if (0 < param_3) goto LAB_001005c4;
  }
  iVar11 = (int)lVar12;
  if (0 < lVar12) {
    plVar4 = (long *)((long)__dest + lVar10 * 8);
    lVar10 = lVar2 + lVar12 * 0x18;
    do {
      *plVar4 = lVar2;
      lVar2 = lVar2 + 0x18;
      plVar4 = plVar4 + 1;
    } while (lVar2 != lVar10);
  }
LAB_00100608:
  *(undefined8 *)(puVar7 + -8) = 0x10061f;
  Callable::rpcp((int)this + 0x10,(Variant **)(ulong)local_4c,(int)__dest,
                 (CallError *)(ulong)(uint)(param_3 + iVar11));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_001006be;
  __stack_chk_fail();
}



/* CallableCustomUnbind::~CallableCustomUnbind() */

void __thiscall CallableCustomUnbind::~CallableCustomUnbind(CallableCustomUnbind *this)

{
  *(undefined ***)this = &PTR_hash_00101320;
  Callable::~Callable((Callable *)(this + 0x10));
  return;
}



/* CallableCustomUnbind::~CallableCustomUnbind() */

void __thiscall CallableCustomUnbind::~CallableCustomUnbind(CallableCustomUnbind *this)

{
  *(undefined ***)this = &PTR_hash_00101320;
  Callable::~Callable((Callable *)(this + 0x10));
  operator_delete(this,0x28);
  return;
}



/* CallableCustomBind::_equal_func(CallableCustom const*, CallableCustom const*) */

undefined8 CallableCustomBind::_equal_func(CallableCustom *param_1,CallableCustom *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = Callable::operator!=((Callable *)(param_1 + 0x10),(Callable *)(param_2 + 0x10));
  if (cVar1 != '\0') {
    return 0;
  }
  lVar3 = *(long *)(param_2 + 0x28);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = 0;
    if (lVar3 == 0) {
      return 1;
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + -8);
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_0010074f;
    }
  }
  lVar3 = *(long *)(lVar3 + -8);
LAB_0010074f:
  return CONCAT71((int7)((ulong)lVar2 >> 8),lVar3 == lVar2);
}



/* CallableCustomBind::_less_func(CallableCustom const*, CallableCustom const*) */

char CallableCustomBind::_less_func(CallableCustom *param_1,CallableCustom *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = Callable::operator<((Callable *)(param_1 + 0x10),(Callable *)(param_2 + 0x10));
  if (cVar1 == '\0') {
    cVar2 = Callable::operator<((Callable *)(param_2 + 0x10),(Callable *)(param_1 + 0x10));
    if (cVar2 == '\0') {
      if (*(long *)(param_1 + 0x28) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + -8);
      }
      if (*(long *)(param_2 + 0x28) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(*(long *)(param_2 + 0x28) + -8);
      }
      return lVar4 < lVar3;
    }
  }
  return cVar1;
}



/* CallableCustomUnbind::CallableCustomUnbind(Callable const&, int) */

void __thiscall
CallableCustomUnbind::CallableCustomUnbind(CallableCustomUnbind *this,Callable *param_1,int param_2)

{
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined ***)this = &PTR_hash_00101320;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  Callable::operator=((Callable *)(this + 0x10),param_1);
  *(int *)(this + 0x20) = param_2;
  return;
}



/* CallableCustomBind::~CallableCustomBind() */

void __thiscall CallableCustomBind::~CallableCustomBind(CallableCustomBind *this)

{
  *(undefined ***)this = &PTR_hash_00101290;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x28));
  Callable::~Callable((Callable *)(this + 0x10));
  return;
}



/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */

void __thiscall CowData<Variant>::_ref(CowData<Variant> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* CallableCustomBind::CallableCustomBind(Callable const&, Vector<Variant> const&) */

void __thiscall
CallableCustomBind::CallableCustomBind(CallableCustomBind *this,Callable *param_1,Vector *param_2)

{
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_hash_00101290;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  Callable::operator=((Callable *)(this + 0x10),param_1);
  if (*(long *)(this + 0x28) != *(long *)(param_2 + 8)) {
    CowData<Variant>::_ref((CowData<Variant> *)(this + 0x28),(CowData *)(param_2 + 8));
    return;
  }
  return;
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
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
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CallableCustomBind::~CallableCustomBind() */

void __thiscall CallableCustomBind::~CallableCustomBind(CallableCustomBind *this)

{
  *(undefined ***)this = &PTR_hash_00101290;
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x28));
  Callable::~Callable((Callable *)(this + 0x10));
  operator_delete(this,0x30);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallableCustomBind::get_bound_arguments(Vector<Variant>&) const */

void __thiscall CallableCustomBind::get_bound_arguments(CallableCustomBind *this,Vector *param_1)

{
  Variant *pVVar1;
  CowData<Variant> *this_00;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  Variant *pVVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  bool bVar19;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50[0] = 0;
  Callable::get_bound_arguments_ref((Vector *)(this + 0x10));
  if (local_50[0] == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)*(int *)(local_50[0] + -8);
  }
  iVar3 = Callable::get_unbound_arguments_count();
  iVar8 = (int)uVar9;
  if (iVar3 == 0 && iVar8 == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(this + 0x28)) {
      CowData<Variant>::_ref((CowData<Variant> *)(param_1 + 8),(CowData *)(this + 0x28));
    }
    goto LAB_00100d5e;
  }
  if (*(long *)(this + 0x28) == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(this + 0x28) + -8);
  }
  lVar16 = lVar16 - iVar3;
  if (lVar16 < 0) {
    lVar16 = 0;
  }
  iVar3 = (int)lVar16;
  if (iVar3 < 1) {
    if (*(long *)(param_1 + 8) != local_50[0]) {
      CowData<Variant>::_ref((CowData<Variant> *)(param_1 + 8),(CowData *)local_50);
    }
    goto LAB_00100d5e;
  }
  iVar4 = iVar8 + iVar3;
  this_00 = (CowData<Variant> *)(param_1 + 8);
  uVar17 = (ulong)iVar4;
  if (iVar4 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else if (*(long *)(param_1 + 8) == 0) {
    if (iVar4 != 0) {
      CowData<Variant>::_copy_on_write(this_00);
      uVar7 = 0;
LAB_00100dd2:
      uVar10 = uVar17 * 0x18 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 >> 2 | uVar10;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 >> 0x10 | uVar10;
      lVar16 = (uVar10 | uVar10 >> 0x20) + 1;
      if ((long)uVar7 < (long)uVar17) {
LAB_00100e26:
        if (uVar7 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static(lVar16 + 0x10,false);
          if (puVar6 == (undefined8 *)0x0) {
            _err_print_error("resize","./core/templates/cowdata.h",0x171,
                             "Parameter \"mem_new\" is null.",0,0);
          }
          else {
            puVar11 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)(param_1 + 8) = puVar11;
            lVar16 = 0;
LAB_00100c39:
            if (lVar16 < (long)uVar17) {
              uVar7 = lVar16 + 1;
              *(undefined4 *)(puVar11 + lVar16 * 3) = 0;
              *(undefined1 (*) [16])(puVar11 + lVar16 * 3 + 1) = (undefined1  [16])0x0;
              if ((long)uVar7 < (long)uVar17) {
                lVar16 = uVar7 * 0x18;
                do {
                  uVar7 = uVar7 + 1;
                  puVar12 = (undefined4 *)(*(long *)(param_1 + 8) + lVar16);
                  lVar16 = lVar16 + 0x18;
                  *puVar12 = 0;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                } while (uVar17 != uVar7);
              }
              puVar11 = *(undefined8 **)(param_1 + 8);
              if (puVar11 == (undefined8 *)0x0) {
                _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
            }
            puVar11[-1] = uVar17;
          }
        }
        else {
          iVar4 = CowData<Variant>::_realloc(this_00,lVar16);
          if (iVar4 == 0) {
LAB_00100c27:
            puVar11 = *(undefined8 **)(param_1 + 8);
            if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar16 = puVar11[-1];
            goto LAB_00100c39;
          }
        }
      }
      else {
        lVar18 = 0;
LAB_00100f04:
        lVar14 = *(long *)(param_1 + 8);
        uVar7 = uVar17;
        while( true ) {
          if (lVar14 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (*(ulong *)(lVar14 + -8) <= uVar7) break;
          if (Variant::needs_deinit[*(int *)(lVar14 + uVar7 * 0x18)] != '\0') {
            Variant::_clear_internal();
            lVar14 = *(long *)(param_1 + 8);
          }
          uVar7 = uVar7 + 1;
        }
        if (lVar16 != lVar18) {
          iVar4 = CowData<Variant>::_realloc(this_00,lVar16);
          if (iVar4 != 0) goto LAB_00100ca0;
          lVar14 = *(long *)(param_1 + 8);
          if (lVar14 == 0) {
            FUN_0010115a();
            return;
          }
        }
        *(ulong *)(lVar14 + -8) = uVar17;
      }
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(param_1 + 8) + -8);
    if (uVar17 != uVar7) {
      if (iVar4 != 0) {
        CowData<Variant>::_copy_on_write(this_00);
        uVar10 = uVar17 * 0x18 - 1;
        uVar10 = uVar10 >> 1 | uVar10;
        uVar10 = uVar10 >> 2 | uVar10;
        uVar10 = uVar10 >> 4 | uVar10;
        uVar10 = uVar10 >> 8 | uVar10;
        uVar10 = uVar10 >> 0x10 | uVar10;
        uVar10 = uVar10 >> 0x20 | uVar10;
        lVar16 = uVar10 + 1;
        if (uVar7 * 0x18 == 0) goto LAB_00100dd2;
        uVar5 = uVar7 * 0x18 - 1;
        uVar5 = uVar5 | uVar5 >> 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = uVar5 | uVar5 >> 0x10;
        uVar5 = uVar5 | uVar5 >> 0x20;
        if ((long)uVar7 < (long)uVar17) {
          if (uVar5 != uVar10) goto LAB_00100e26;
          goto LAB_00100c27;
        }
        lVar18 = uVar5 + 1;
        goto LAB_00100f04;
      }
      CowData<Variant>::_unref(this_00);
    }
  }
LAB_00100ca0:
  lVar18 = 0;
  CowData<Variant>::_copy_on_write(this_00);
  lVar16 = *(long *)(param_1 + 8);
  uVar17 = 0;
  do {
    lVar14 = *(long *)(this + 0x28);
    if (lVar14 == 0) {
      lVar15 = 0;
      goto LAB_00100d13;
    }
    lVar15 = *(long *)(lVar14 + -8);
    if (lVar15 <= (long)uVar17) goto LAB_00100d13;
    pVVar13 = (Variant *)(lVar14 + lVar18);
    pVVar1 = (Variant *)(lVar18 + lVar16);
    lVar18 = lVar18 + 0x18;
    Variant::operator=(pVVar1,pVVar13);
    bVar19 = uVar17 != iVar3 - 1;
    uVar17 = uVar17 + 1;
  } while (bVar19);
  if (0 < iVar8) {
    uVar17 = 0;
    lVar18 = 0;
    do {
      if (local_50[0] == 0) {
        lVar15 = 0;
LAB_00100d13:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar17,lVar15,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar15 = *(long *)(local_50[0] + -8);
      if (lVar15 <= (long)uVar17) goto LAB_00100d13;
      pVVar13 = (Variant *)(local_50[0] + lVar18);
      pVVar1 = (Variant *)(lVar16 + (long)iVar3 * 0x18 + lVar18);
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x18;
      Variant::operator=(pVVar1,pVVar13);
    } while (uVar9 != uVar17);
  }
LAB_00100d5e:
  CowData<Variant>::_unref((CowData<Variant> *)local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomBind::get_bound_arguments(Vector<Variant>&) const [clone .cold] */

void CallableCustomBind::get_bound_arguments(Vector *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010115a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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


