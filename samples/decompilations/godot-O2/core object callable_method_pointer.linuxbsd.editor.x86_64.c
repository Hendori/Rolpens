
/* CallableCustomMethodPointerBase::get_compare_equal_func() const */

code * CallableCustomMethodPointerBase::get_compare_equal_func(void)

{
  return compare_equal;
}



/* CallableCustomMethodPointerBase::get_compare_less_func() const */

code * CallableCustomMethodPointerBase::get_compare_less_func(void)

{
  return compare_less;
}



/* CallableCustomMethodPointerBase::hash() const */

undefined4 __thiscall CallableCustomMethodPointerBase::hash(CallableCustomMethodPointerBase *this)

{
  return *(undefined4 *)(this + 0x1c);
}



/* CallableCustomMethodPointerBase::compare_equal(CallableCustom const*, CallableCustom const*) */

undefined8
CallableCustomMethodPointerBase::compare_equal(CallableCustom *param_1,CallableCustom *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
    iVar1 = memcmp(*(void **)(param_1 + 0x10),*(void **)(param_2 + 0x10),
                   (ulong)(uint)(*(int *)(param_1 + 0x18) * 4));
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return 0;
}



/* CallableCustomMethodPointerBase::compare_less(CallableCustom const*, CallableCustom const*) */

uint CallableCustomMethodPointerBase::compare_less(CallableCustom *param_1,CallableCustom *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != *(uint *)(param_2 + 0x18)) {
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < *(uint *)(param_2 + 0x18));
  }
  uVar1 = memcmp(*(void **)(param_1 + 0x10),*(void **)(param_2 + 0x10),(ulong)(uVar1 * 4));
  return uVar1 >> 0x1f;
}



/* CallableCustomMethodPointerBase::_setup(unsigned int*, unsigned int) */

void __thiscall
CallableCustomMethodPointerBase::_setup
          (CallableCustomMethodPointerBase *this,uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = param_2 >> 2;
  *(uint **)(this + 0x10) = param_1;
  *(uint *)(this + 0x18) = uVar4;
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      while (uVar3 == 0) {
        uVar3 = 1;
        uVar2 = (*param_1 * 0x16a88000 | *param_1 * -0x3361d2af >> 0x11) * 0x1b873593 ^ 0x7f07c65;
        *(uint *)(this + 0x1c) = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + -0x19ab949c;
        if ((ulong)uVar4 == 1) {
          return;
        }
      }
      puVar1 = param_1 + uVar3;
      uVar3 = uVar3 + 1;
      uVar2 = (*puVar1 * 0x16a88000 | *puVar1 * -0x3361d2af >> 0x11) * 0x1b873593 ^
              *(uint *)(this + 0x1c);
      *(uint *)(this + 0x1c) = (uVar2 << 0xd | uVar2 >> 0x13) * 5 + -0x19ab949c;
    } while (uVar4 != uVar3);
  }
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
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


