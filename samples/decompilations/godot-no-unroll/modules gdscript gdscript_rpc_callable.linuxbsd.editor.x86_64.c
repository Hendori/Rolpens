
/* GDScriptRPCCallable::hash() const */

undefined4 __thiscall GDScriptRPCCallable::hash(GDScriptRPCCallable *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* GDScriptRPCCallable::get_compare_equal_func() const */

code * GDScriptRPCCallable::get_compare_equal_func(void)

{
  return compare_equal;
}



/* GDScriptRPCCallable::get_compare_less_func() const */

code * GDScriptRPCCallable::get_compare_less_func(void)

{
  return compare_less;
}



/* GDScriptRPCCallable::get_object() const */

undefined8 __thiscall GDScriptRPCCallable::get_object(GDScriptRPCCallable *this)

{
  return *(undefined8 *)(*(long *)(this + 0x10) + 0x60);
}



/* GDScriptRPCCallable::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
GDScriptRPCCallable::call
          (GDScriptRPCCallable *this,Variant **param_1,int param_2,Variant *param_3,
          CallError *param_4)

{
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(this + 0x10) + 0x68))
            (local_38,*(long **)(this + 0x10),this + 0x20,param_1,param_2,param_4);
  if (Variant::needs_deinit[*(int *)param_3] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_3 = local_38[0];
  *(undefined8 *)(param_3 + 8) = local_30;
  *(undefined8 *)(param_3 + 0x10) = uStack_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptRPCCallable::get_method() const */

void GDScriptRPCCallable::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,(StringName *)(in_RSI + 0x20));
  return;
}



/* GDScriptRPCCallable::get_argument_count(bool&) const */

void GDScriptRPCCallable::get_argument_count(bool *param_1)

{
  Object::get_method_argument_count(*(StringName **)(param_1 + 0x10),param_1 + 0x20);
  return;
}



/* GDScriptRPCCallable::rpc(int, Variant const**, int, Callable::CallError&) const */

undefined8 __thiscall
GDScriptRPCCallable::rpc
          (GDScriptRPCCallable *this,int param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  undefined8 extraout_RAX;
  undefined4 in_register_00000034;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    *(undefined4 *)param_4 = 0;
    Node::rpcp((int)lVar1,(StringName *)CONCAT44(in_register_00000034,param_1),
               (Variant **)(this + 0x20),(int)param_2);
    return extraout_RAX;
  }
  *(undefined4 *)param_4 = 5;
  return 3;
}



/* GDScriptRPCCallable::compare_equal(CallableCustom const*, CallableCustom const*) */

bool GDScriptRPCCallable::compare_equal(CallableCustom *param_1,CallableCustom *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if ((code *)**(undefined8 **)param_1 == hash) {
    iVar2 = *(int *)(param_1 + 0x28);
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)param_1)();
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  if (pcVar1 == hash) {
    return iVar2 == *(int *)(param_2 + 0x28);
  }
  iVar3 = (*pcVar1)(param_2);
  return iVar2 == iVar3;
}



/* GDScriptRPCCallable::compare_less(CallableCustom const*, CallableCustom const*) */

bool GDScriptRPCCallable::compare_less(CallableCustom *param_1,CallableCustom *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if ((code *)**(undefined8 **)param_1 == hash) {
    uVar2 = *(uint *)(param_1 + 0x28);
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)param_1)();
    pcVar1 = (code *)**(undefined8 **)param_2;
  }
  if (pcVar1 == hash) {
    return uVar2 < *(uint *)(param_2 + 0x28);
  }
  uVar3 = (*pcVar1)(param_2);
  return uVar2 < uVar3;
}



/* GDScriptRPCCallable::get_as_text() const */

String * GDScriptRPCCallable::get_as_text(void)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar8;
  StrRange *local_b0;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(in_RSI + 0x10) + 0x48))((String *)&local_90);
  (**(code **)(**(long **)(in_RSI + 0x10) + 0x98))(local_58);
  lVar4 = Variant::get_validated_object();
  if (lVar4 == 0) {
LAB_00100490:
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    pOVar5 = (Object *)__dynamic_cast(lVar4,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(*(long *)pOVar5 + 0x1e0))((String *)&local_68,pOVar5);
        cVar3 = StringName::is_empty();
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (cVar3 == '\0') {
          local_70 = 0;
          local_68 = ")";
          local_60 = 1;
          String::parse_latin1((StrRange *)&local_70);
          (**(code **)(*(long *)pOVar5 + 0x1e0))(&local_88,pOVar5);
          if (local_88 == 0) {
LAB_001008e9:
            local_80 = 0;
          }
          else {
            pcVar2 = *(char **)(local_88 + 8);
            local_80 = 0;
            if (pcVar2 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(local_88 + 0x10) + -0x10);
              if (*(long *)(local_88 + 0x10) == 0) goto LAB_001008e9;
              do {
                lVar4 = *plVar1;
                if (lVar4 == 0) goto LAB_001008e9;
                LOCK();
                lVar7 = *plVar1;
                bVar8 = lVar4 == lVar7;
                if (bVar8) {
                  *plVar1 = lVar4 + 1;
                  lVar7 = lVar4;
                }
                UNLOCK();
              } while (!bVar8);
              if (lVar7 != -1) {
                local_80 = *(long *)(local_88 + 0x10);
              }
            }
            else {
              local_60 = strlen(pcVar2);
              local_68 = pcVar2;
              String::parse_latin1((StrRange *)&local_80);
            }
          }
          operator+((char *)&local_78,(String *)&_LC1);
          String::operator+((String *)&local_68,(String *)&local_78);
          String::operator+=((String *)&local_90,(String *)&local_68);
          pcVar2 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          lVar4 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_88 != 0)) {
            StringName::unref();
          }
        }
        else {
          Resource::get_path();
          cVar3 = String::is_resource_file();
          pcVar2 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)((long)local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static((void *)((long)pcVar2 + -0x10),false);
            }
          }
          if (cVar3 == '\0') goto LAB_001004c6;
          local_70 = 0;
          local_68 = ")";
          local_60 = 1;
          String::parse_latin1((StrRange *)&local_70);
          Resource::get_path();
          String::get_file();
          operator+((char *)&local_78,(String *)&_LC1);
          String::operator+((String *)&local_68,(String *)&local_78);
          String::operator+=((String *)&local_90,(String *)&local_68);
          pcVar2 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar2 + -0x10,false);
            }
          }
          lVar4 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
        }
        lVar4 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        goto LAB_001004c6;
      }
      goto LAB_00100490;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
      goto LAB_001004c6;
    }
  }
  pOVar5 = (Object *)0x0;
LAB_001004c6:
  local_b0 = (StrRange *)&local_78;
  local_70 = 0;
  local_68 = " (rpc)";
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  lVar4 = *(long *)(in_RSI + 0x20);
  if (lVar4 == 0) {
    local_78 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar4 + 8);
    local_78 = 0;
    if (pcVar2 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
      if (*(long *)(lVar4 + 0x10) != 0) {
        do {
          lVar7 = *plVar1;
          if (lVar7 == 0) goto LAB_00100532;
          LOCK();
          lVar6 = *plVar1;
          bVar8 = lVar7 == lVar6;
          if (bVar8) {
            *plVar1 = lVar7 + 1;
            lVar6 = lVar7;
          }
          UNLOCK();
        } while (!bVar8);
        if (lVar6 != -1) {
          local_78 = *(long *)(lVar4 + 0x10);
        }
      }
    }
    else {
      local_60 = strlen(pcVar2);
      local_68 = pcVar2;
      String::parse_latin1(local_b0);
    }
  }
LAB_00100532:
  local_88 = 0;
  local_68 = "::";
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_88);
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+(in_RDI,(String *)&local_68);
  pcVar2 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  lVar4 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* GDScriptRPCCallable::GDScriptRPCCallable(Object*, StringName const&) */

long __thiscall
GDScriptRPCCallable::GDScriptRPCCallable
          (GDScriptRPCCallable *this,Object *param_1,StringName *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lStack_28;
  
  CallableCustom::CallableCustom((CallableCustom *)this);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_hash_00100c80;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (param_1 != (Object *)0x0) {
    *(Object **)(this + 0x10) = param_1;
    StringName::operator=((StringName *)(this + 0x20),param_2);
    if (*(long *)(this + 0x20) == 0) {
      uVar2 = StringName::get_empty_hash();
    }
    else {
      uVar2 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    }
    uVar1 = *(undefined8 *)(*(long *)(this + 0x10) + 0x60);
    iVar4 = (int)uVar1;
    iVar5 = (int)((ulong)uVar1 >> 0x20);
    uVar2 = (iVar4 * 0x16a88000 | (uint)(iVar4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar2;
    uVar2 = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + 0xe6546b64 ^
            (iVar5 * 0x16a88000 | (uint)(iVar5 * -0x3361d2af) >> 0x11) * 0x1b873593;
    *(uint *)(this + 0x28) = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + -0x19ab949c;
    lStack_28 = __dynamic_cast(*(long *)(this + 0x10),&Object::typeinfo,&Node::typeinfo,0);
    *(long *)(this + 0x18) = lStack_28;
    if (lStack_28 == 0) {
      lStack_28 = 0;
      _err_print_error("GDScriptRPCCallable","modules/gdscript/gdscript_rpc_callable.cpp",0x5d,
                       "Parameter \"node\" is null.",
                       "RPC can only be defined on class that extends Node.",0);
    }
    return lStack_28;
  }
  lVar3 = _err_print_error("GDScriptRPCCallable","modules/gdscript/gdscript_rpc_callable.cpp",0x57,
                           "Parameter \"p_object\" is null.",0,0);
  return lVar3;
}



/* GDScriptRPCCallable::~GDScriptRPCCallable() */

void __thiscall GDScriptRPCCallable::~GDScriptRPCCallable(GDScriptRPCCallable *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR_hash_00100c80;
  if ((bVar1) && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* GDScriptRPCCallable::~GDScriptRPCCallable() */

void __thiscall GDScriptRPCCallable::~GDScriptRPCCallable(GDScriptRPCCallable *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR_hash_00100c80;
  if ((bVar1) && (*(long *)(this + 0x20) != 0)) {
    StringName::unref();
  }
  operator_delete(this,0x30);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptRPCCallable::~GDScriptRPCCallable() */

void __thiscall GDScriptRPCCallable::~GDScriptRPCCallable(GDScriptRPCCallable *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


