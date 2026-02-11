
/* std::_Function_handler<bool (tvg::Paint const*, void*),
   tvg::Accessor::set(std::unique_ptr<tvg::Picture, std::default_delete<tvg::Picture> >,
   std::function<bool (tvg::Paint const*)>)::{lambda(tvg::Paint const*,
   void*)#1}>::_M_invoke(std::_Any_data const&, tvg::Paint const*&&, void*&&) */

void std::
     _Function_handler<bool(tvg::Paint_const*,void*),tvg::Accessor::set(std::unique_ptr<tvg::Picture,std::default_delete<tvg::Picture>>,std::function<bool(tvg::Paint_const*)>)::{lambda(tvg::Paint_const*,void*)#1}>
     ::_M_invoke(_Any_data *param_1,Paint **param_2,void **param_3)

{
  void *pvVar1;
  long in_FS_OFFSET;
  Paint *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar1 = *param_3;
  local_18 = *param_2;
  if (*(long *)((long)pvVar1 + 0x10) == 0) {
    std::__throw_bad_function_call();
  }
  else {
    (**(code **)((long)pvVar1 + 0x18))(pvVar1,&local_18);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<bool (tvg::Paint const*, void*),
   tvg::Accessor::set(std::unique_ptr<tvg::Picture, std::default_delete<tvg::Picture> >,
   std::function<bool (tvg::Paint const*)>)::{lambda(tvg::Paint const*,
   void*)#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<bool(tvg::Paint_const*,void*),tvg::Accessor::set(std::unique_ptr<tvg::Picture,std::default_delete<tvg::Picture>>,std::function<bool(tvg::Paint_const*)>)::{lambda(tvg::Paint_const*,void*)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &tvg::Accessor::
                set(std::unique_ptr<tvg::Picture,std::default_delete<tvg::Picture>>,std::function<bool(tvg::Paint_const*)>)
                ::{lambda(tvg::Paint_const*,void*)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* accessChildren(tvg::Iterator*, std::function<bool (tvg::Paint const*, void*)>, void*) */

undefined8 accessChildren(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_001000ec:
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar3 != 0) {
    local_78 = lVar3;
    local_70 = param_3;
    if (*(long *)(param_2 + 0x10) != 0) {
      cVar1 = (**(code **)(param_2 + 0x18))(param_2,&local_78,&local_70);
      if (cVar1 != '\0') goto code_r0x001000db;
      goto LAB_001001b8;
    }
    std::__throw_bad_function_call();
    goto LAB_001001c4;
  }
  uVar4 = 1;
LAB_00100103:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_001001c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001000db:
  plVar2 = (long *)tvg::Paint::Impl::iterator();
  if (plVar2 != (long *)0x0) {
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_2 + 0x10) != (code *)0x0) {
      (**(code **)(param_2 + 0x10))(local_68,param_2,2);
      local_58 = *(code **)(param_2 + 0x10);
      uStack_50 = *(undefined8 *)(param_2 + 0x18);
    }
    cVar1 = accessChildren(plVar2,local_68,param_3);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 8))(plVar2);
LAB_001001b8:
      uVar4 = 0;
      goto LAB_00100103;
    }
    (**(code **)(*plVar2 + 8))();
  }
  goto LAB_001000ec;
}



/* tvg::Accessor::set(tvg::Paint*, std::function<bool (tvg::Paint const*, void*)>, void*) */

undefined8 __thiscall
tvg::Accessor::set(undefined8 param_1_00,long param_1,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  code *local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 1;
    if (*(long *)(param_3 + 0x10) != 0) {
      local_68 = param_1;
      local_60 = param_4;
      cVar1 = (**(code **)(param_3 + 0x18))(param_3,&local_68,&local_60);
      if (cVar1 != '\0') {
        plVar3 = (long *)tvg::Paint::Impl::iterator();
        if (plVar3 != (long *)0x0) {
          local_48 = (code *)0x0;
          uStack_40 = 0;
          local_58 = (undefined1  [16])0x0;
          if (*(code **)(param_3 + 0x10) != (code *)0x0) {
            (**(code **)(param_3 + 0x10))(local_58,param_3,2);
            local_48 = *(code **)(param_3 + 0x10);
            uStack_40 = *(undefined8 *)(param_3 + 0x18);
          }
          accessChildren(plVar3,local_58,param_4);
          if (local_48 != (code *)0x0) {
            (*local_48)(local_58,local_58,3);
          }
          (**(code **)(*plVar3 + 8))(plVar3);
          uVar2 = 0;
          goto LAB_00100230;
        }
      }
      uVar2 = 0;
    }
  }
LAB_00100230:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Accessor::set(std::unique_ptr<tvg::Picture, std::default_delete<tvg::Picture> >,
   std::function<bool (tvg::Paint const*)>) */

Accessor * __thiscall tvg::Accessor::set(Accessor *this,Accessor *param_2,undefined8 *param_3)

{
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  code *local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (undefined1  [16])0x0;
  local_38 = std::
             _Function_handler<bool(tvg::Paint_const*,void*),tvg::Accessor::set(std::unique_ptr<tvg::Picture,std::default_delete<tvg::Picture>>,std::function<bool(tvg::Paint_const*)>)::{lambda(tvg::Paint_const*,void*)#1}>
             ::_M_manager;
  uStack_30 = 0x100000;
  set(param_2,*param_3,local_48);
  if (local_38 != (code *)0x0) {
    (*local_38)(local_48,local_48,3);
  }
  *(undefined8 *)this = *param_3;
  *param_3 = 0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Accessor::id(char const*) */

void tvg::Accessor::id(char *param_1)

{
  tvg::djb2Encode(param_1);
  return;
}



/* tvg::Accessor::~Accessor() */

void __thiscall tvg::Accessor::~Accessor(Accessor *this)

{
  return;
}



/* tvg::Accessor::Accessor() */

void __thiscall tvg::Accessor::Accessor(Accessor *this)

{
  *(undefined8 *)this = 0;
  return;
}



/* tvg::Accessor::gen() */

Accessor * __thiscall tvg::Accessor::gen(Accessor *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  *puVar1 = 0;
  *(undefined8 **)this = puVar1;
  return this;
}


