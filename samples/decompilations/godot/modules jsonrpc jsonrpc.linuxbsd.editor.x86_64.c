
/* JSONRPC::make_response(Variant const&, Variant const&) */

Variant * JSONRPC::make_response(Variant *param_1,Variant *param_2)

{
  char cVar1;
  Variant *pVVar2;
  Variant *in_RCX;
  Variant *in_RDX;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)param_1);
  Variant::Variant((Variant *)local_58,"2.0");
  Variant::Variant((Variant *)local_78,"jsonrpc");
  pVVar2 = (Variant *)Dictionary::operator[](param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"id");
  pVVar2 = (Variant *)Dictionary::operator[](param_1);
  Variant::operator=(pVVar2,in_RCX);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"result");
  pVVar2 = (Variant *)Dictionary::operator[](param_1);
  Variant::operator=(pVVar2,in_RDX);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JSONRPC::make_notification(String const&, Variant const&) */

String * JSONRPC::make_notification(String *param_1,Variant *param_2)

{
  char cVar1;
  Variant *pVVar2;
  Variant *in_RCX;
  String *in_RDX;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)param_1);
  Variant::Variant((Variant *)local_58,"2.0");
  Variant::Variant((Variant *)local_78,"jsonrpc");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,in_RDX);
  Variant::Variant((Variant *)local_78,"method");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"params");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar2,in_RCX);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JSONRPC::make_request(String const&, Variant const&, Variant const&) */

String * JSONRPC::make_request(String *param_1,Variant *param_2,Variant *param_3)

{
  char cVar1;
  Variant *pVVar2;
  Variant *in_RCX;
  Variant *in_R8;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)param_1);
  Variant::Variant((Variant *)local_58,"2.0");
  Variant::Variant((Variant *)local_78,"jsonrpc");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(String *)param_3);
  Variant::Variant((Variant *)local_78,"method");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"params");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar2,in_RCX);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"id");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  Variant::operator=(pVVar2,in_R8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JSONRPC::make_response_error(int, String const&, Variant const&) const */

Dictionary * JSONRPC::make_response_error(int param_1,String *param_2,Variant *param_3)

{
  char cVar1;
  Variant *pVVar2;
  String *in_RCX;
  undefined4 in_register_0000003c;
  Dictionary *this;
  Variant *in_R8;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this = (Dictionary *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(this);
  Variant::Variant((Variant *)local_58,"2.0");
  Variant::Variant((Variant *)local_78,"jsonrpc");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,(int)param_3);
  Variant::Variant((Variant *)local_78,"code");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,in_RCX);
  Variant::Variant((Variant *)local_78,"message");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_80);
  Variant::Variant((Variant *)local_78,"error");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"id");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)this);
  Variant::operator=(pVVar2,in_R8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* JSONRPC::~JSONRPC() */

void __thiscall JSONRPC::~JSONRPC(JSONRPC *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d818;
  pvVar5 = *(void **)(this + 0x180);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1a4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x188) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x188) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x180);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00100b42;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x188),false);
    Object::~Object((Object *)this);
    return;
  }
LAB_00100b42:
  Object::~Object((Object *)this);
  return;
}



/* JSONRPC::~JSONRPC() */

void __thiscall JSONRPC::~JSONRPC(JSONRPC *this)

{
  ~JSONRPC(this);
  operator_delete(this,0x1a8);
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



/* JSONRPC::JSONRPC() */

void __thiscall JSONRPC::JSONRPC(JSONRPC *this)

{
  Object::Object((Object *)this);
  *(undefined8 *)(this + 0x1a0) = 2;
  *(undefined ***)this = &PTR__initialize_classv_0010d818;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  return;
}



/* JSONRPC::set_scope(String const&, Object*) */

void __thiscall JSONRPC::set_scope(JSONRPC *this,String *param_1,Object *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           HashMap<String,Object*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Object*>>>
           ::operator[]((HashMap<String,Object*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Object*>>>
                         *)(this + 0x178),param_1);
  *puVar1 = param_2;
  return;
}



/* JSONRPC::process_action(Variant const&, bool) */

Variant * JSONRPC::process_action(Variant *param_1,bool param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  uint uVar14;
  Variant *pVVar15;
  undefined8 *puVar16;
  char in_CL;
  uint uVar17;
  int *in_RDX;
  long lVar18;
  int iVar19;
  uint uVar20;
  undefined7 in_register_00000031;
  String *pSVar21;
  long lVar22;
  StringName *pSVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  float fVar25;
  Variant *local_108;
  Variant local_c8 [8];
  char *local_c0;
  Array local_b8 [8];
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_98 [2];
  undefined1 local_90 [16];
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  pSVar21 = (String *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (*in_RDX != 0x1b) {
    if ((*in_RDX == 0x1c) && (in_CL != '\0')) {
      Variant::operator_cast_to_Array((Variant *)local_b8);
      iVar13 = Array::size();
      if (iVar13 == 0) {
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        local_a8 = "Invalid Request";
        local_b0 = 0;
        local_a0 = 0xf;
        String::parse_latin1((StrRange *)&local_b0);
        make_response_error((int)(Dictionary *)&local_a8,pSVar21,(Variant *)0xffff80a8);
        Variant::Variant((Variant *)local_58,(Dictionary *)&local_a8);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50;
        *(undefined8 *)(param_1 + 0x10) = uStack_48;
        Dictionary::~Dictionary((Dictionary *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Array::Array((Array *)&local_a8);
        if (0 < iVar13) {
          iVar19 = 0;
          do {
            Array::get((int)(Variant *)local_b8);
            process_action((Variant *)local_58,param_2);
            Array::push_back((Variant *)&local_a8);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            iVar19 = iVar19 + 1;
          } while (iVar13 != iVar19);
        }
        local_108 = (Variant *)local_58;
        Variant::Variant(local_108,(Array *)&local_a8);
        if (Variant::needs_deinit[*(int *)param_1] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_1 = local_58[0];
        *(undefined8 *)(param_1 + 8) = local_50;
        *(undefined8 *)(param_1 + 0x10) = uStack_48;
        Array::~Array((Array *)&local_a8);
      }
      Array::~Array(local_b8);
    }
    else {
      local_78[0] = 0;
      local_78[1] = 0;
      local_70 = (undefined1  [16])0x0;
      local_a8 = "Invalid Request";
      local_b0 = 0;
      local_a0 = 0xf;
      String::parse_latin1((StrRange *)&local_b0);
      make_response_error((int)(Dictionary *)&local_a8,pSVar21,(Variant *)0xffff80a8);
      Variant::Variant((Variant *)local_58,(Dictionary *)&local_a8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      Dictionary::~Dictionary((Dictionary *)&local_a8);
      lVar3 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar1 = (long *)(local_b0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    goto LAB_00100de4;
  }
  Variant::operator_cast_to_Dictionary(local_c8);
  Variant::Variant((Variant *)local_78,"");
  Variant::Variant((Variant *)local_98,"method");
  Dictionary::get((Variant *)local_58,local_c8);
  Variant::operator_cast_to_String((Variant *)&local_c0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar12 = String::begins_with((char *)&local_c0);
  if (cVar12 != '\0') {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Dictionary::~Dictionary((Dictionary *)local_c8);
    goto LAB_00100de4;
  }
  Array::Array(local_b8);
  Variant::Variant((Variant *)local_58,"params");
  cVar12 = Dictionary::has(local_c8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar12 != '\0') {
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
    Variant::Variant((Variant *)local_58,"params");
    Dictionary::get((Variant *)local_98,local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_98[0] == 0x1c) {
      Variant::operator_cast_to_Array((Variant *)&local_a8);
      Array::operator=(local_b8,(Array *)&local_a8);
      Array::~Array((Array *)&local_a8);
    }
    else {
      Array::push_back((Variant *)local_b8);
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  String::get_base_dir();
  if ((*(long *)(pSVar21 + 0x180) != 0) && (*(int *)(pSVar21 + 0x1a4) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pSVar21 + 0x1a0) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pSVar21 + 0x1a0) * 8);
    uVar14 = String::hash();
    uVar24 = CONCAT44(0,uVar2);
    lVar22 = *(long *)(pSVar21 + 0x188);
    uVar17 = 1;
    if (uVar14 != 0) {
      uVar17 = uVar14;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar17 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar24;
    lVar18 = SUB168(auVar4 * auVar8,8);
    uVar14 = *(uint *)(lVar22 + lVar18 * 4);
    if (uVar14 != 0) {
      uVar20 = 0;
      iVar13 = SUB164(auVar4 * auVar8,8);
      do {
        if (uVar14 == uVar17) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(pSVar21 + 0x180) + lVar18 * 8) + 0x10),
                                      (String *)&local_a8);
          if (cVar12 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            String::get_base_dir();
            puVar16 = (undefined8 *)
                      HashMap<String,Object*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Object*>>>
                      ::operator[]((HashMap<String,Object*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Object*>>>
                                    *)(pSVar21 + 0x178),(String *)&local_a8);
            pSVar23 = (StringName *)*puVar16;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            String::get_file();
            if (local_c0 != local_a8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              local_c0 = local_a8;
              local_a8 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            goto LAB_00100f7c;
          }
          lVar22 = *(long *)(pSVar21 + 0x188);
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar24;
        lVar18 = SUB168(auVar5 * auVar9,8);
        uVar14 = *(uint *)(lVar22 + lVar18 * 4);
        iVar13 = SUB164(auVar5 * auVar9,8);
      } while ((uVar14 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar24, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar24, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  pSVar23 = (StringName *)pSVar21;
LAB_00100f7c:
  local_98[0] = 0;
  local_98[1] = 0;
  local_90 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_58,"id");
  cVar12 = Dictionary::has(local_c8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar12 != '\0') {
    Variant::Variant((Variant *)local_58,"id");
    pVVar15 = (Variant *)Dictionary::operator[](local_c8);
    Variant::operator=((Variant *)local_98,pVVar15);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_98[0] == 3) {
      fVar25 = Variant::operator_cast_to_float((Variant *)local_98);
      iVar13 = Variant::operator_cast_to_int((Variant *)local_98);
      if (fVar25 == (float)iVar13) {
        iVar13 = Variant::operator_cast_to_int((Variant *)local_98);
        Variant::Variant((Variant *)local_58,iVar13);
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_90._8_8_ = uStack_48;
        local_90._0_8_ = local_50;
        local_98[0] = local_58[0];
      }
    }
  }
  if (pSVar23 == (StringName *)0x0) {
LAB_001012c0:
    operator+((char *)&local_b0,(String *)"Method not found: ");
    make_response_error((int)(CowData<char32_t> *)&local_a8,pSVar21,(Variant *)0xffff80a7);
    Variant::Variant((Variant *)local_58,(CowData<char32_t> *)&local_a8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  else {
    StringName::StringName((StringName *)&local_a8,(String *)&local_c0,false);
    cVar12 = Object::has_method(pSVar23);
    if (cVar12 == '\0') {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      goto LAB_001012c0;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,(String *)&local_c0,false);
    Object::callv((StringName *)local_78,(Array *)pSVar23);
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    if (local_98[0] != 0) {
      make_response((Variant *)&local_a8,(Variant *)pSVar21);
      Variant::Variant((Variant *)local_58,(CowData<char32_t> *)&local_a8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      Dictionary::~Dictionary((Dictionary *)&local_a8);
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array(local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  Dictionary::~Dictionary((Dictionary *)local_c8);
LAB_00100de4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSONRPC::process_string(String const&) */

String * JSONRPC::process_string(String *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *in_RDX;
  String *in_RSI;
  long in_FS_OFFSET;
  undefined8 local_330;
  char *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 local_310 [16];
  int local_2f8 [2];
  undefined1 local_2f0 [16];
  int local_2d8 [8];
  undefined **local_2b8 [72];
  long local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*in_RDX == 0) || (*(uint *)(*in_RDX + -8) < 2)) {
    *(undefined8 *)param_1 = 0;
    goto LAB_0010188e;
  }
  local_310 = (undefined1  [16])0x0;
  local_318 = 0;
  Resource::Resource((Resource *)local_2b8);
  local_2b8[0] = &PTR__initialize_classv_0010d640;
  local_78 = 0;
  local_70[0] = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = (undefined1  [16])0x0;
  iVar3 = JSON::parse((String *)local_2b8,SUB81(in_RDX,0));
  if (iVar3 == 0) {
    Variant::Variant((Variant *)local_2f8,(Variant *)local_70);
    process_action((Variant *)local_2d8,SUB81(in_RSI,0));
    if (Variant::needs_deinit[(int)local_318] != '\0') {
      Variant::_clear_internal();
    }
    local_318 = CONCAT44(local_318._4_4_,local_2d8[0]);
    if (Variant::needs_deinit[local_2f8[0]] != '\0') {
LAB_00101b80:
      Variant::_clear_internal();
      goto LAB_00101b5a;
    }
  }
  else {
    local_2f8[0] = 0;
    local_2f8[1] = 0;
    local_328 = "Parse error";
    local_2f0 = (undefined1  [16])0x0;
    local_330 = 0;
    local_320 = 0xb;
    String::parse_latin1((StrRange *)&local_330);
    make_response_error((int)(Dictionary *)&local_328,in_RSI,(Variant *)0xffff8044);
    Variant::Variant((Variant *)local_2d8,(Dictionary *)&local_328);
    if (Variant::needs_deinit[(int)local_318] != '\0') {
      Variant::_clear_internal();
    }
    local_318 = CONCAT44(local_318._4_4_,local_2d8[0]);
    Dictionary::~Dictionary((Dictionary *)&local_328);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
    if (Variant::needs_deinit[local_2f8[0]] != '\0') goto LAB_00101b80;
LAB_00101b5a:
    local_2d8[0] = (int)local_318;
  }
  if (local_2d8[0] == 0) {
    *(undefined8 *)param_1 = 0;
    local_328 = "";
    local_320 = 0;
    String::parse_latin1((StrRange *)param_1);
  }
  else {
    Variant::to_json_string();
  }
  lVar2 = local_58;
  local_2b8[0] = &PTR__initialize_classv_0010d640;
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
  if (Variant::needs_deinit[local_70[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)local_2b8);
  if (Variant::needs_deinit[(int)local_318] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010188e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSONRPC::_bind_methods() */

void JSONRPC::_bind_methods(void)

{
  StringName *this;
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  MethodBind *pMVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long in_FS_OFFSET;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  char *local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  long local_148;
  undefined4 local_140;
  char *local_138;
  char *pcStack_130;
  undefined8 local_128;
  char *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  Variant *local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar10 = PTR__LC33_0010de28;
  puVar9 = PTR__LC3_0010de20;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  local_d8 = (Variant *)0x103d95;
  pcStack_d0 = "target";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_d0;
  uVar13 = (uint)(Variant *)&local_78;
  local_78 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"set_scope",uVar13);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar12 = create_method_bind<JSONRPC,String_const&,Object*>(set_scope);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = 0;
  local_f8 = puVar10;
  pcStack_f0 = "recurse";
  auStack_70._0_8_ = &pcStack_f0;
  local_78 = (Variant *)&local_f8;
  D_METHODP((char *)&local_168,(char ***)"process_action",uVar13);
  Variant::Variant((Variant *)&local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = (Variant *)&local_78;
  pMVar12 = create_method_bind<JSONRPC,Variant,Variant_const&,bool>(process_action);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,&local_d8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)0x103d86;
  pcStack_d0 = (char *)0x0;
  local_78 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"process_string",uVar13);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar12 = create_method_bind<JSONRPC,String,String_const&>(process_string);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_98 = "method";
  auStack_90._8_8_ = &_LC3;
  auStack_90._0_8_ = "params";
  auStack_70._8_8_ = auStack_90 + 8;
  auStack_70._0_8_ = auStack_90;
  local_78 = (Variant *)&local_98;
  D_METHODP((char *)&local_168,(char ***)"make_request",uVar13);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar12 = create_method_bind<JSONRPC,Dictionary,String_const&,Variant_const&,Variant_const&>
                      (make_request);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_118 = "result";
  puStack_110 = puVar9;
  auStack_70._0_8_ = &puStack_110;
  local_78 = (Variant *)&local_118;
  D_METHODP((char *)&local_168,(char ***)"make_response",uVar13);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar12 = create_method_bind<JSONRPC,Dictionary,Variant_const&,Variant_const&>(make_response);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  local_138 = "method";
  pcStack_130 = "params";
  auStack_70._0_8_ = &pcStack_130;
  local_78 = (Variant *)&local_138;
  D_METHODP((char *)&local_168,(char ***)"make_notification",uVar13);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant *)0x0;
  pMVar12 = create_method_bind<JSONRPC,Dictionary,String_const&,Variant_const&>(make_notification);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  auStack_90 = (undefined1  [16])0x0;
  local_a8 = &_LC3;
  local_b8 = (Variant *)&_LC9;
  pcStack_b0 = "message";
  auStack_70._8_8_ = &local_a8;
  auStack_70._0_8_ = &pcStack_b0;
  local_98 = (char *)0x0;
  local_a0 = 0;
  local_78 = (Variant *)&local_b8;
  D_METHODP((char *)&local_168,(char ***)"make_response_error",uVar13);
  Variant::Variant((Variant *)&local_78,(Variant *)&local_98);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_b8 = (Variant *)&local_78;
  pMVar12 = create_method_bind<JSONRPC,Dictionary,int,String_const&,Variant_const&>
                      (make_response_error);
  ClassDB::bind_methodfi(1,pMVar12,false,(MethodDefinition *)&local_168,&local_b8,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  uVar11 = local_160._8_8_;
  if ((long *)local_160._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_160._8_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      if ((long *)local_160._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_160._8_8_ + -8);
      local_160._8_8_ = 0;
      if (lVar2 != 0) {
        lVar14 = 0;
        plVar15 = (long *)uVar11;
        do {
          if ((StringName::configured != '\0') && (*plVar15 != 0)) {
            StringName::unref();
          }
          lVar14 = lVar14 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar2 != lVar14);
      }
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_198,"PARSE_ERROR",false);
  local_168 = "PARSE_ERROR";
  local_1a0 = 0;
  local_160._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_1a0);
  local_180 = 0;
  local_168 = "JSONRPC::ErrorCode";
  local_160._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_180);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_178,(String *)&local_180)
  ;
  StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
  this = (StringName *)(local_160 + 8);
  local_160 = (undefined1  [16])0x0;
  local_188 = 0;
  local_190 = 0;
  local_168 = (char *)0x2;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0x10006;
  StringName::operator=(this,(StringName *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar15 = (long *)(local_178 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_180;
  if (local_180 != 0) {
    LOCK();
    plVar15 = (long *)(local_180 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_180 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_148;
  local_170 = local_160._8_8_;
  local_160._8_8_ = 0;
  if (local_148 != 0) {
    LOCK();
    plVar15 = (long *)(local_148 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_160._0_8_;
  if (local_160._0_8_ != 0) {
    LOCK();
    plVar15 = (long *)(local_160._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_160._8_8_;
      local_160 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_178 = 0;
  local_168 = "JSONRPC";
  local_160._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_170,(StringName *)&local_198,-0x7fbc,
             false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_1a0;
  if (local_1a0 != 0) {
    LOCK();
    plVar15 = (long *)(local_1a0 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_1a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_190,"INVALID_REQUEST",false);
  local_168 = "INVALID_REQUEST";
  local_198 = 0;
  local_160._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_198);
  local_180 = 0;
  local_168 = "JSONRPC::ErrorCode";
  local_160._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_180);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_178,(String *)&local_180)
  ;
  StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
  local_160 = (undefined1  [16])0x0;
  local_188 = 0;
  local_168 = (char *)0x2;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0x10006;
  StringName::operator=(this,(StringName *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar15 = (long *)(local_178 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  lVar2 = local_148;
  local_170 = local_160._8_8_;
  local_160._8_8_ = 0;
  if (local_148 != 0) {
    LOCK();
    plVar15 = (long *)(local_148 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_160._0_8_;
  if (local_160._0_8_ != 0) {
    LOCK();
    plVar15 = (long *)(local_160._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_160._8_8_;
      local_160 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_178 = 0;
  local_168 = "JSONRPC";
  local_160._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_170,(StringName *)&local_190,-0x7f58,
             false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar15 = (long *)(local_178 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_198;
  if (local_198 != 0) {
    LOCK();
    plVar15 = (long *)(local_198 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_198 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_190 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_190,"METHOD_NOT_FOUND",false);
  local_168 = "METHOD_NOT_FOUND";
  local_198 = 0;
  local_160._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_198);
  local_180 = 0;
  local_168 = "JSONRPC::ErrorCode";
  local_160._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_180);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_178,(String *)&local_180)
  ;
  StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
  local_160 = (undefined1  [16])0x0;
  local_188 = 0;
  local_168 = (char *)0x2;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0x10006;
  StringName::operator=(this,(StringName *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  lVar2 = local_180;
  if (local_180 != 0) {
    LOCK();
    plVar15 = (long *)(local_180 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_180 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_148;
  local_170 = local_160._8_8_;
  local_160._8_8_ = 0;
  if (local_148 != 0) {
    LOCK();
    plVar15 = (long *)(local_148 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_160._0_8_;
  if (local_160._0_8_ != 0) {
    LOCK();
    plVar15 = (long *)(local_160._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_160._8_8_;
      local_160 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_178 = 0;
  local_168 = "JSONRPC";
  local_160._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_170,(StringName *)&local_190,-0x7f59,
             false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar15 = (long *)(local_178 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_198;
  if (local_198 != 0) {
    LOCK();
    plVar15 = (long *)(local_198 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_198 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_190 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_198,"INVALID_PARAMS",false);
  local_168 = "INVALID_PARAMS";
  local_1a0 = 0;
  local_160._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_1a0);
  local_180 = 0;
  local_168 = "JSONRPC::ErrorCode";
  local_160._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_180);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_178,(String *)&local_180)
  ;
  StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
  local_160 = (undefined1  [16])0x0;
  local_188 = 0;
  local_190 = 0;
  local_168 = (char *)0x2;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0x10006;
  StringName::operator=(this,(StringName *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar15 = (long *)(local_178 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_180;
  if (local_180 != 0) {
    LOCK();
    plVar15 = (long *)(local_180 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_180 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_148;
  local_170 = local_160._8_8_;
  local_160._8_8_ = 0;
  if (local_148 != 0) {
    LOCK();
    plVar15 = (long *)(local_148 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_160._0_8_;
  if (local_160._0_8_ != 0) {
    LOCK();
    plVar15 = (long *)(local_160._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_160._8_8_;
      local_160 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_178 = 0;
  local_168 = "JSONRPC";
  local_160._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_170,(StringName *)&local_198,-0x7f5a,
             false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_178;
  if (local_178 != 0) {
    LOCK();
    plVar15 = (long *)(local_178 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_178 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  if ((StringName::configured != '\0') && (local_198 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_188,"INTERNAL_ERROR",false);
  local_168 = "INTERNAL_ERROR";
  local_190 = 0;
  local_160._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  local_180 = 0;
  local_168 = "JSONRPC::ErrorCode";
  local_160._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_180);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_178,(String *)&local_180)
  ;
  StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
  local_168 = (char *)0x2;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0x10006;
  local_160 = (undefined1  [16])0x0;
  StringName::operator=(this,(StringName *)&local_170);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  lVar2 = local_148;
  local_170 = local_160._8_8_;
  local_160._8_8_ = 0;
  if (local_148 != 0) {
    LOCK();
    plVar15 = (long *)(local_148 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_148 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_160._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_160._0_8_;
  if (local_160._0_8_ != 0) {
    LOCK();
    plVar15 = (long *)(local_160._0_8_ + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_160._8_8_;
      local_160 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_178 = 0;
  local_168 = "JSONRPC";
  local_160._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_168,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_170,(StringName *)&local_188,-0x7f5b,
             false);
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  lVar2 = local_190;
  if (local_190 != 0) {
    LOCK();
    plVar15 = (long *)(local_190 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_190 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* JSONRPC::is_class_ptr(void*) const */

uint __thiscall JSONRPC::is_class_ptr(JSONRPC *this,void *param_1)

{
  return (uint)CONCAT71(0x10dc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* JSONRPC::_getv(StringName const&, Variant&) const */

undefined8 JSONRPC::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSONRPC::_setv(StringName const&, Variant const&) */

undefined8 JSONRPC::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSONRPC::_validate_propertyv(PropertyInfo&) const */

void JSONRPC::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JSONRPC::_property_can_revertv(StringName const&) const */

undefined8 JSONRPC::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JSONRPC::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JSONRPC::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSONRPC::_notificationv(int, bool) */

void JSONRPC::_notificationv(int param_1,bool param_2)

{
  return;
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



/* JSON::is_class_ptr(void*) const */

uint __thiscall JSON::is_class_ptr(JSON *this,void *param_1)

{
  return (uint)CONCAT71(0x10dc,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10dc,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10dc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JSON::_getv(StringName const&, Variant&) const */

undefined8 JSON::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_setv(StringName const&, Variant const&) */

undefined8 JSON::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_validate_propertyv(PropertyInfo&) const */

void JSON::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JSON::_property_can_revertv(StringName const&) const */

undefined8 JSON::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JSON::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JSON::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_notificationv(int, bool) */

void JSON::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::_gen_argument_type
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this,int param_1)

{
  long lVar1;
  
  lVar1 = 0x1b;
  if (((uint)param_1 < 3) && (lVar1 = 2, param_1 != 0)) {
    lVar1 = (ulong)(param_1 == 1) << 2;
  }
  return lVar1;
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::get_argument_meta
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::_gen_argument_type(int) const */

uint __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&>::_gen_argument_type
          (MethodBindTR<Dictionary,String_const&,Variant_const&> *this,int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 * 4 ^ 4;
  if (1 < (uint)param_1) {
    uVar1 = 0x1b;
  }
  return uVar1;
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary,String_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::_gen_argument_type
          (MethodBindTR<Dictionary,Variant_const&,Variant_const&> *this,int param_1)

{
  return ~-((uint)param_1 < 2) & 0x1b;
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Dictionary,Variant_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::_gen_argument_type(int)
   const */

long __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::_gen_argument_type
          (MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&> *this,int param_1)

{
  long lVar1;
  
  lVar1 = 0x1b;
  if ((uint)param_1 < 3) {
    lVar1 = (ulong)(param_1 == 0) << 2;
  }
  return lVar1;
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::get_argument_meta(int)
   const */

undefined8
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<String, String const&>::_gen_argument_type(int) const */

undefined8 MethodBindTR<String,String_const&>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTR<String, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<String,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Variant, Variant const&, bool>::_gen_argument_type(int) const */

bool __thiscall
MethodBindTR<Variant,Variant_const&,bool>::_gen_argument_type
          (MethodBindTR<Variant,Variant_const&,bool> *this,int param_1)

{
  return param_1 == 1;
}



/* MethodBindTR<Variant, Variant const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<Variant,Variant_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, Object*>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<String_const&,Object*>::_gen_argument_type
          (MethodBindT<String_const&,Object*> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
  }
  return iVar1;
}



/* MethodBindT<String const&, Object*>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,Object*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, Object*>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Object*>::~MethodBindT(MethodBindT<String_const&,Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d978;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, Object*>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Object*>::~MethodBindT(MethodBindT<String_const&,Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d978;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Variant, Variant const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,Variant_const&,bool>::~MethodBindTR
          (MethodBindTR<Variant,Variant_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d9d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Variant, Variant const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,Variant_const&,bool>::~MethodBindTR
          (MethodBindTR<Variant,Variant_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d9d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<String, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,String_const&>::~MethodBindTR(MethodBindTR<String,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010da38;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<String, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,String_const&>::~MethodBindTR(MethodBindTR<String,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010da38;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010da98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010da98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,Variant_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010daf8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,Variant_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010daf8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010db58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010db58;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010dbb8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010dbb8;
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



/* JSON::_get_class_namev() const */

undefined8 * JSON::_get_class_namev(void)

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
LAB_00103ea3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103ea3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
      goto LAB_00103f0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
LAB_00103f0e:
  return &_get_class_namev()::_class_name_static;
}



/* JSONRPC::_get_class_namev() const */

undefined8 * JSONRPC::_get_class_namev(void)

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
LAB_00103f83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103f83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSONRPC");
      goto LAB_00103fee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSONRPC");
LAB_00103fee:
  return &_get_class_namev()::_class_name_static;
}



/* JSONRPC::get_class() const */

void JSONRPC::get_class(void)

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



/* JSON::get_class() const */

void JSON::get_class(void)

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



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d640;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d640;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* JSONRPC::is_class(String const&) const */

undefined8 __thiscall JSONRPC::is_class(JSONRPC *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001043df;
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
LAB_001043df:
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
    if (cVar6 != '\0') goto LAB_00104493;
  }
  cVar6 = String::operator==(param_1,"JSONRPC");
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
              if (lVar5 == 0) goto LAB_00104543;
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
LAB_00104543:
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
      if (cVar6 != '\0') goto LAB_00104493;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104493:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSONRPC::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void JSONRPC::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "JSONRPC";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JSONRPC";
  local_98 = 0;
  local_70 = 7;
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
LAB_00104768:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104768;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104786;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104786:
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
  StringName::StringName((StringName *)&local_78,"JSONRPC",false);
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



/* JSON::_initialize_classv() */

void JSON::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "JSON";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
      JSON::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x104e43);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC16;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x00104f1a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC16;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x00104f1a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
LAB_00105268:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105268;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105286;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105286:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010555f;
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
LAB_0010555f:
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
    if (cVar6 != '\0') goto LAB_00105613;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
              if (lVar5 == 0) goto LAB_001056eb;
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
LAB_001056eb:
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
      if (cVar6 != '\0') goto LAB_00105613;
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
                if (lVar5 == 0) goto LAB_001057cb;
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
LAB_001057cb:
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
        if (cVar6 != '\0') goto LAB_00105613;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00105874;
    }
  }
LAB_00105613:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105874:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::is_class(String const&) const */

undefined8 __thiscall JSON::is_class(JSON *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001058ef;
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
LAB_001058ef:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001059a3;
  }
  cVar5 = String::operator==(param_1,"JSON");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001059a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
LAB_00105b78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105b78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105b95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105b95:
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



/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JSON::_get_property_listv(JSON *this,List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC7;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC7;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105fc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105fc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105fe5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105fe5:
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
  StringName::StringName((StringName *)&local_78,"JSON",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Object*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Object*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Object*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Object*>>>
::operator[](HashMap<String,Object*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Object*>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00106a28:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_001068ba;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_001068be:
      if (iVar45 != 0) {
LAB_001068c6:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar38 == uVar52) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010676b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_001063a4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001063a4;
    if (iVar45 != 0) goto LAB_001068c6;
LAB_001063ca:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010676b;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_0010676b;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00106a28;
LAB_001068ba:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001068be;
    }
LAB_001063a4:
    if ((float)uVar39 * __LC24 < (float)(iVar45 + 1)) goto LAB_001063ca;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_001069fb:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00106653:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00106660;
LAB_00106895:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_001069fb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00106653;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00106895;
LAB_00106660:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010676b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodBind* create_method_bind<JSONRPC, String const&, Object*>(void (JSONRPC::*)(String const&,
   Object*)) */

MethodBind *
create_method_bind<JSONRPC,String_const&,Object*>(_func_void_String_ptr_Object_ptr *param_1)

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
  *(_func_void_String_ptr_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d978;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* MethodBind* create_method_bind<JSONRPC, Variant, Variant const&, bool>(Variant
   (JSONRPC::*)(Variant const&, bool)) */

MethodBind *
create_method_bind<JSONRPC,Variant,Variant_const&,bool>(_func_Variant_Variant_ptr_bool *param_1)

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
  *(_func_Variant_Variant_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d9d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* MethodBind* create_method_bind<JSONRPC, String, String const&>(String (JSONRPC::*)(String
   const&)) */

MethodBind * create_method_bind<JSONRPC,String,String_const&>(_func_String_String_ptr *param_1)

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
  *(_func_String_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010da38;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* MethodBind* create_method_bind<JSONRPC, Dictionary, String const&, Variant const&, Variant
   const&>(Dictionary (JSONRPC::*)(String const&, Variant const&, Variant const&)) */

MethodBind *
create_method_bind<JSONRPC,Dictionary,String_const&,Variant_const&,Variant_const&>
          (_func_Dictionary_String_ptr_Variant_ptr_Variant_ptr *param_1)

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
  *(_func_Dictionary_String_ptr_Variant_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010da98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* MethodBind* create_method_bind<JSONRPC, Dictionary, Variant const&, Variant const&>(Dictionary
   (JSONRPC::*)(Variant const&, Variant const&)) */

MethodBind *
create_method_bind<JSONRPC,Dictionary,Variant_const&,Variant_const&>
          (_func_Dictionary_Variant_ptr_Variant_ptr *param_1)

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
  *(_func_Dictionary_Variant_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010daf8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* MethodBind* create_method_bind<JSONRPC, Dictionary, String const&, Variant const&>(Dictionary
   (JSONRPC::*)(String const&, Variant const&)) */

MethodBind *
create_method_bind<JSONRPC,Dictionary,String_const&,Variant_const&>
          (_func_Dictionary_String_ptr_Variant_ptr *param_1)

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
  *(_func_Dictionary_String_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010db58;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* MethodBind* create_method_bind<JSONRPC, Dictionary, int, String const&, Variant
   const&>(Dictionary (JSONRPC::*)(int, String const&, Variant const&) const) */

MethodBind *
create_method_bind<JSONRPC,Dictionary,int,String_const&,Variant_const&>
          (_func_Dictionary_int_String_ptr_Variant_ptr *param_1)

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
  *(_func_Dictionary_int_String_ptr_Variant_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010dbb8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "JSONRPC";
  local_30 = 7;
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



/* JSONRPC::_bind_methods() [clone .cold] */

void JSONRPC::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JSONRPC::_initialize_classv() */

void JSONRPC::_initialize_classv(void)

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
    local_38 = "JSONRPC";
    local_50 = 0;
    local_30 = 7;
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
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_00107435;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00107435:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00107738) */
/* WARNING: Removing unreachable block (ram,0x0010786b) */
/* WARNING: Removing unreachable block (ram,0x00107980) */
/* WARNING: Removing unreachable block (ram,0x00107877) */
/* WARNING: Removing unreachable block (ram,0x00107893) */
/* WARNING: Removing unreachable block (ram,0x00107960) */
/* WARNING: Removing unreachable block (ram,0x0010789f) */
/* WARNING: Removing unreachable block (ram,0x001078b3) */
/* WARNING: Removing unreachable block (ram,0x00107940) */
/* WARNING: Removing unreachable block (ram,0x001078bf) */
/* WARNING: Removing unreachable block (ram,0x001078dd) */
/* WARNING: Removing unreachable block (ram,0x001078e9) */
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



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::validated_call
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107afb;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
            param_2[1] + 8,param_2[2]);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00107afb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::ptrcall
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107d45;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,param_2[1],param_2[2]
           );
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00107d45:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&>::validated_call
          (MethodBindTR<Dictionary,String_const&,Variant_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107f85;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1]);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00107f85:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&>::ptrcall
          (MethodBindTR<Dictionary,String_const&,Variant_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001081bf;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_001081bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::validated_call
          (MethodBindTR<Dictionary,Variant_const&,Variant_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001083f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_001083f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::ptrcall
          (MethodBindTR<Dictionary,Variant_const&,Variant_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010861f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1]);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010861f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::validated_call
          (MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010885f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1],
            param_2[2]);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010885f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::ptrcall
          (MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&> *this,
          Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108a76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1],param_2[2])
  ;
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00108a76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<String,String_const&>::validated_call
          (MethodBindTR<String,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108cec;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar2 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_48 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_00108cec:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<String,String_const&>::ptrcall
          (MethodBindTR<String,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108f51;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar2 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar4 = (long *)(local_48 + -0x10);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_00108f51:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, Variant const&, bool>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Variant,Variant_const&,bool>::validated_call
          (MethodBindTR<Variant,Variant_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109191;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2,param_2[1][8]);
  Variant::operator=(param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00109191:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, Variant const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Variant,Variant_const&,bool>::ptrcall
          (MethodBindTR<Variant,Variant_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_58 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar4 = (long *)(local_60 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001093f6;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar3)((Variant *)local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
  Variant::operator=((Variant *)param_3,(Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001093f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Object*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&,Object*>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109815;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined8 *)(*(long *)(param_3 + 8) + 0x10));
    return;
  }
LAB_00109815:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Object*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,Object*>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00109a25;
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
                    /* WARNING: Could not recover jumptable at 0x0010988a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00109a25:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<String, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTR<String,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
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
  long local_70;
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
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar10 = (long *)(local_70 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00109c10;
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
      if (in_R8D != 1) goto LAB_00109c60;
LAB_00109c50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00109c60:
        uVar7 = 4;
        goto LAB_00109c05;
      }
      if (in_R8D == 1) goto LAB_00109c50;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC65;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar12)((CowData<char32_t> *)&local_70,(Variant *)((long)plVar10 + (long)pVVar1),
                       (Variant *)&local_68);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00109c05:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00109c10:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  Variant *local_b8 [4];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_c8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_c8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_d0 = 0;
      local_c0 = 0x35;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<StringName>((StringName *)&local_c8,(StrRange *)&local_d0,&local_d8);
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_c8,0);
      pcVar5 = local_c8;
      if (local_c8 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_c8 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_c8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar14 = local_d0;
      if (local_d0 != 0) {
        LOCK();
        plVar12 = (long *)(local_d0 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_d0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a0f2;
    }
    if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar11 + -3 + (int)lVar8;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_b8[lVar8] = pVVar13;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_b8[2],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_78,local_b8[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_b8[1],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 1;
      }
      Variant::Variant((Variant *)local_58,local_b8[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_b8[0],4);
      uVar4 = _LC65;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_c8);
      (*(code *)pVVar15)((Dictionary *)&local_d0,(Variant *)((long)plVar12 + (long)pVVar1),
                         (Variant *)&local_c8,(Variant *)local_58,(Variant *)local_78);
      Variant::Variant((Variant *)local_98,(Dictionary *)&local_d0);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_98[0];
      *(undefined8 *)(param_1 + 8) = local_90;
      *(undefined8 *)(param_1 + 0x10) = uStack_88;
      Dictionary::~Dictionary((Dictionary *)&local_d0);
      pcVar5 = local_c8;
      if (local_c8 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_c8 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_c8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010a0f2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0010a0f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Dictionary,Variant_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0);
      pcVar4 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_a8 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar2 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar10 = (long *)(local_b0 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a520;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010a568;
      pVVar13 = *(Variant **)param_4;
LAB_0010a57d:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010a568:
        uVar7 = 4;
        goto LAB_0010a555;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0010a640;
        pVVar13 = pVVar11 + lVar9 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010a57d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010a640:
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
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 1;
    }
    Variant::Variant((Variant *)local_78,pVVar11);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar13,0);
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    Variant::Variant((Variant *)local_58,pVVar13);
    (*(code *)pVVar14)((Dictionary *)&local_a8,(Variant *)((long)plVar10 + (long)pVVar1),
                       (Variant *)local_58,(Variant *)local_78);
    Variant::Variant((Variant *)local_98,(Dictionary *)&local_a8);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_98[0];
    *(undefined8 *)(param_1 + 8) = local_90;
    *(undefined8 *)(param_1 + 0x10) = uStack_88;
    Dictionary::~Dictionary((Dictionary *)&local_a8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar7 = 3;
LAB_0010a555:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010a520:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Dictionary,String_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  Variant *pVVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_88 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_88 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar12 = (long *)(local_90 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a9d0;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_0010aa18;
      pVVar13 = *(Variant **)param_4;
LAB_0010aa2d:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar14 = (int)lVar2;
      if (iVar14 < iVar7) {
LAB_0010aa18:
        uVar8 = 4;
        goto LAB_0010aa05;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar14 + -2);
        if (lVar2 <= lVar10) goto LAB_0010aaf0;
        pVVar13 = pVVar11 + lVar10 * 0x18;
      }
      else {
        pVVar13 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010aa2d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
      if (lVar2 <= lVar10) {
LAB_0010aaf0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar15 & 1) != 0) {
      pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0);
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 1;
    }
    Variant::Variant((Variant *)local_58,pVVar11);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
    uVar4 = _LC65;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_88);
    (*(code *)pVVar15)((Dictionary *)&local_90,(Variant *)((long)plVar12 + (long)pVVar1),
                       (Variant *)&local_88,(Variant *)local_58);
    Variant::Variant((Variant *)local_78,(Dictionary *)&local_90);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_78[0];
    *(undefined8 *)(param_1 + 8) = local_70;
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    Dictionary::~Dictionary((Dictionary *)&local_90);
    pcVar5 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar12 = (long *)(local_88 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar8 = 3;
LAB_0010aa05:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0010a9d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98 [4];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))();
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0);
      pcVar5 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_a8 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar14 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        plVar13 = (long *)(local_b0 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_b0 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010aeba;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar8 + -3 + (int)lVar9;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_98[lVar9] = pVVar12;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[2],0);
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 2;
      }
      Variant::Variant((Variant *)local_58,local_98[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[1],4);
      uVar4 = _LC68;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a8);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_98[0],2);
      uVar4 = _LC69;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_98[0]);
      (*(code *)pVVar15)((Dictionary *)&local_b0,(Variant *)((long)plVar13 + (long)pVVar1),iVar8,
                         (Variant *)&local_a8,(Variant *)local_58);
      Variant::Variant((Variant *)local_78,(Dictionary *)&local_b0);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_78[0];
      *(undefined8 *)(param_1 + 8) = local_70;
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
      Dictionary::~Dictionary((Dictionary *)&local_b0);
      pcVar5 = local_a8;
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_a8 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010aeba;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_0010aeba:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Variant, Variant const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Variant,Variant_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  Variant *pVVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar10 = (long *)plVar13[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar10 = (long *)(plVar13[1] + 0x20);
    }
    if (local_88 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar13 = (long *)(local_88 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar13 = (long *)(local_90 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b2d8;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar12 = param_2[5];
    iVar8 = 2 - in_R8D;
    if (pVVar12 == (Variant *)0x0) {
      if (iVar8 != 0) goto LAB_0010b318;
      pVVar14 = *(Variant **)param_4;
LAB_0010b32d:
      pVVar12 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      iVar15 = (int)lVar2;
      if (iVar15 < iVar8) {
LAB_0010b318:
        uVar9 = 4;
        goto LAB_0010b305;
      }
      if (in_R8D == 0) {
        lVar11 = (long)(iVar15 + -2);
        if (lVar2 <= lVar11) goto LAB_0010b3f0;
        pVVar14 = pVVar12 + lVar11 * 0x18;
      }
      else {
        pVVar14 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010b32d;
      }
      lVar11 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar8));
      if (lVar2 <= lVar11) {
LAB_0010b3f0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar16 & 1) != 0) {
      pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar4 = _LC70;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar7 = Variant::operator_cast_to_bool(pVVar12);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14,0);
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = 0;
    }
    Variant::Variant((Variant *)local_58,pVVar14);
    (*(code *)pVVar16)(local_78,(Variant *)((long)plVar13 + (long)pVVar1),(Variant *)local_58,bVar7)
    ;
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_78[0];
    *(undefined8 *)(param_1 + 8) = local_70;
    *(undefined8 *)(param_1 + 0x10) = uStack_68;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    uVar9 = 3;
LAB_0010b305:
    *in_R9 = uVar9;
    in_R9[2] = 2;
  }
LAB_0010b2d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, Object*>(__UnexistingClass*,
   void (__UnexistingClass::*)(String const&, Object*), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,Object*>
               (__UnexistingClass *param_1,_func_void_String_ptr_Object_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  Object *pOVar8;
  Object *pOVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = (uint)param_5;
  if (2 < uVar13) {
    uVar7 = 3;
LAB_0010b705:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
    goto LAB_0010b70e;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar13;
  if (lVar1 == 0) {
    if (iVar6 != 0) goto LAB_0010b700;
    puVar12 = (undefined4 *)*plVar10;
LAB_0010b74d:
    this = (Variant *)plVar10[1];
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar6) {
LAB_0010b700:
      uVar7 = 4;
      goto LAB_0010b705;
    }
    if (uVar13 == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_0010b798;
      puVar12 = (undefined4 *)(lVar1 + lVar11 * 0x18);
    }
    else {
      puVar12 = (undefined4 *)*plVar10;
      if (uVar13 == 2) goto LAB_0010b74d;
    }
    lVar11 = (long)(int)((uVar13 ^ 1) + (iVar14 - iVar6));
    if (lVar2 <= lVar11) {
LAB_0010b798:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    this = (Variant *)(lVar1 + lVar11 * 0x18);
  }
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_String_ptr_Object_ptr **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,0x18);
  if (cVar5 == '\0') {
LAB_0010b66c:
    uVar4 = _LC71;
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  else {
    pOVar8 = Variant::operator_cast_to_Object_(this);
    pOVar9 = Variant::operator_cast_to_Object_(this);
    if ((pOVar8 != (Object *)0x0) && (pOVar9 == (Object *)0x0)) goto LAB_0010b66c;
  }
  Variant::operator_cast_to_Object_(this);
  cVar5 = Variant::can_convert_strict(*puVar12,4);
  uVar4 = _LC65;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_String((Variant *)&local_48);
  (*param_2)((String *)(param_1 + (long)param_3),(Object *)&local_48);
  lVar1 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar10 = (long *)(local_48 + -0x10);
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (*plVar10 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_0010b70e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, Object*>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<String_const&,Object*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC64,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010b8d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,Object*>
            (p_Var4,(_func_void_String_ptr_Object_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010b8d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
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
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_0010bb15;
  local_78 = 0;
  local_68 = &_LC20;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010bc08:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010bc08;
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
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_0010bb15:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<String, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<String,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010be75;
  }
  local_70 = 0;
  local_68 = &_LC20;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010bf87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010bf87;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010be75:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, Object*>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,Object*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  int local_6c;
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar4 = 0;
  *(undefined4 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined4 *)(pPVar4 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar4 + 8) = (undefined1  [16])0x0;
  local_6c = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,pPVar4);
  if (in_EDX == local_6c) {
    local_68 = 0;
    local_58 = "Object";
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = (char *)CONCAT44(local_58._4_4_,0x18);
    local_50 = 0;
    StringName::StringName((StringName *)&local_48,(StringName *)&local_60);
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
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
    *(undefined4 *)pPVar4 = local_58._0_4_;
    lVar2 = *(long *)(pPVar4 + 8);
    if (lVar2 != local_50) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(pPVar4 + 8);
          *(undefined8 *)(pPVar4 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(pPVar4 + 8) = local_50;
      local_50 = 0;
    }
    if (*(long *)(pPVar4 + 0x10) != local_48) {
      StringName::unref();
      lVar2 = local_48;
      local_48 = 0;
      *(long *)(pPVar4 + 0x10) = lVar2;
    }
    lVar3 = local_38;
    *(undefined4 *)(pPVar4 + 0x18) = local_40;
    lVar2 = *(long *)(pPVar4 + 0x20);
    if (lVar2 == local_38) {
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(pPVar4 + 0x20);
          *(undefined8 *)(pPVar4 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(pPVar4 + 0x20) = local_38;
      *(undefined4 *)(pPVar4 + 0x28) = local_30;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
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
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



/* void call_get_argument_type_info_helper<Variant const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Variant_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 == param_1) {
    local_70 = 0;
    local_68 = 0;
    local_40 = 0x20006;
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = (undefined4)local_68;
    lVar2 = *(long *)(param_3 + 8);
    if (lVar2 != local_60._0_8_) {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(param_3 + 8);
          *(undefined8 *)(param_3 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(undefined8 *)(param_3 + 8) = local_60._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
    }
    if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
      StringName::unref();
      uVar5 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(param_3 + 0x10) = uVar5;
    }
    lVar6 = local_48;
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_50;
    lVar2 = *(long *)(param_3 + 0x20);
    if (lVar2 == local_48) {
      *(undefined4 *)(param_3 + 0x28) = local_40;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(param_3 + 0x20);
          *(undefined8 *)(param_3 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      *(long *)(param_3 + 0x20) = local_48;
      *(undefined4 *)(param_3 + 0x28) = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar5 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar5 + -0x10),false);
      }
    }
    iVar7 = *param_2;
  }
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Dictionary, String const&, Variant const&, Variant
   const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Variant_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Variant_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010c568;
  }
  local_70 = 0;
  local_68 = &_LC20;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010c677:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010c677;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010c568:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, Variant const&, Variant const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Variant_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Variant_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010c831;
  }
  local_70 = 0;
  local_68 = &_LC20;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010c85f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010c85f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
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
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010c831:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Dictionary, String const&, Variant const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<Dictionary,String_const&,Variant_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<Variant_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010ca41;
  }
  local_70 = 0;
  local_68 = &_LC20;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010ca6f:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010ca6f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
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
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010ca41:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, String const&, Variant const&>(int, PropertyInfo&) */

void call_get_argument_type_info<int,String_const&,Variant_const&>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_84;
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
  local_84 = 0;
  iVar7 = 1;
  if (param_1 != 0) goto LAB_0010cb25;
  local_78 = 0;
  local_68 = &_LC20;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010cc38:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010cc38;
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
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_2 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar2 = local_48;
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) == local_48) {
    *(undefined4 *)(param_2 + 0x28) = local_40;
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
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = local_48;
    *(undefined4 *)(param_2 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar7 = local_84 + 1;
LAB_0010cb25:
  local_84 = iVar7;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_84,param_2);
  call_get_argument_type_info_helper<Variant_const&>(param_1,&local_84,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<int,String_const&,Variant_const&>(in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_0010ce79;
  }
  local_70 = 0;
  local_68 = &_LC20;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010cf87:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_0010cf87;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010ce79:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<Variant const&, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<Variant_const&,bool>(int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0;
  call_get_argument_type_info_helper<Variant_const&>(param_1,&local_74,param_2);
  if (param_1 != local_74) goto LAB_0010d01c;
  local_68 = 0;
  local_58 = &_LC20;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010d108:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010d108;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_58._0_4_;
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_2 + 8);
        *(undefined8 *)(param_2 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_2 + 8) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(param_2 + 0x10) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
  }
  lVar2 = local_38;
  *(int *)(param_2 + 0x18) = local_40;
  if (*(long *)(param_2 + 0x20) == local_38) {
    *(undefined4 *)(param_2 + 0x28) = local_30;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    *(long *)(param_2 + 0x20) = local_38;
    *(undefined4 *)(param_2 + 0x28) = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010d01c:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Variant, Variant const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Variant,Variant_const&,bool>::_gen_argument_type_info(int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  if (in_EDX < 2) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info<Variant_const&,bool>(in_EDX,(PropertyInfo *)&local_58);
    *puVar1 = (undefined4)local_58;
    *(undefined8 *)(puVar1 + 2) = local_50._0_8_;
    *(undefined8 *)(puVar1 + 4) = local_50._8_8_;
    puVar1[6] = (undefined4)local_40;
    *(undefined8 *)(puVar1 + 8) = local_38;
    puVar1[10] = local_30;
  }
  else {
    *puVar1 = 0;
    puVar1[6] = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    puVar1[10] = 0x20006;
    *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary, int, String const&, Variant const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,int,String_const&,Variant_const&>::~MethodBindTRC
          (MethodBindTRC<Dictionary,int,String_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary, String const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,String_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary, Variant const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,Variant_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,Variant_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Dictionary, String const&, Variant const&, Variant const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&>::~MethodBindTR
          (MethodBindTR<Dictionary,String_const&,Variant_const&,Variant_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<String, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<String,String_const&>::~MethodBindTR(MethodBindTR<String,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Variant, Variant const&, bool>::~MethodBindTR() */

void __thiscall
MethodBindTR<Variant,Variant_const&,bool>::~MethodBindTR
          (MethodBindTR<Variant,Variant_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, Object*>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,Object*>::~MethodBindT(MethodBindT<String_const&,Object*> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


