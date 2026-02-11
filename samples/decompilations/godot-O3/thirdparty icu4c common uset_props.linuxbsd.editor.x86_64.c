
undefined4
uset_applyPattern_76_godot
          (UnicodeString *param_1,wchar16 *param_2,int param_3,uint param_4,int *param_5)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  code *local_88;
  undefined8 local_80;
  UnicodeString local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if (param_1 != (UnicodeString *)0x0) {
      icu_76_godot::UnicodeString::UnicodeString(local_78,param_2,param_3);
      local_88 = icu_76_godot::ParsePosition::~ParsePosition;
      local_80 = _LC0;
      icu_76_godot::UnicodeSet::applyPattern
                (param_1,(ParsePosition *)local_78,(uint)&local_88,(SymbolTable *)(ulong)param_4,
                 (UErrorCode *)0x0);
      uVar1 = (undefined4)local_80;
      icu_76_godot::ParsePosition::~ParsePosition((ParsePosition *)&local_88);
      icu_76_godot::UnicodeString::~UnicodeString(local_78);
      goto LAB_00100094;
    }
    *param_5 = 1;
  }
  uVar1 = 0;
LAB_00100094:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void icu_76_godot::UnicodeSet::uset_applyIntPropertyValue_76_godot(void)

{
  applyIntPropertyValue();
  return;
}



void uset_applyPropertyAlias_76_godot
               (UnicodeString *param_1,wchar16 *param_2,int param_3,wchar16 *param_4,int param_5)

{
  long in_FS_OFFSET;
  UnicodeString aUStack_c8 [64];
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeString::UnicodeString(aUStack_c8,param_2,param_3);
  icu_76_godot::UnicodeString::UnicodeString(local_88,param_4,param_5);
  icu_76_godot::UnicodeSet::applyPropertyAlias(param_1,aUStack_c8,(UErrorCode *)local_88);
  icu_76_godot::UnicodeString::~UnicodeString(local_88);
  icu_76_godot::UnicodeString::~UnicodeString(aUStack_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong uset_resemblesPattern_76_godot(wchar16 *param_1,int param_2,uint param_3)

{
  short sVar1;
  char cVar2;
  ulong unaff_R12;
  long in_FS_OFFSET;
  UnicodeString aUStack_68 [8];
  ushort local_60;
  short local_5e;
  uint local_5c;
  long local_50;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeString::UnicodeString(aUStack_68,param_1,param_2);
  if (-1 < (short)local_60) {
    local_5c = (uint)((short)local_60 >> 5);
  }
  if (((int)(param_3 + 1) < (int)local_5c) && (param_3 < local_5c)) {
    if ((local_60 & 2) == 0) {
      sVar1 = *(short *)(local_50 + (long)(int)param_3 * 2);
    }
    else {
      sVar1 = (&local_5e)[(int)param_3];
    }
    unaff_R12 = 1;
    if (sVar1 == 0x5b) goto LAB_00100200;
  }
  cVar2 = icu_76_godot::UnicodeSet::resemblesPattern(aUStack_68,param_3);
  unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),cVar2 != '\0');
LAB_00100200:
  icu_76_godot::UnicodeString::~UnicodeString(aUStack_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_R12 & 0xffffffff;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_closeOver_76_godot(int param_1)

{
  closeOver(param_1);
  return;
}



UnicodeSet * uset_openPattern_76_godot(undefined8 param_1,int param_2,UErrorCode *param_3)

{
  UnicodeSet *this;
  UnicodeSet *pUVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (ulong)(param_2 == -1);
  local_70 = param_1;
  icu_76_godot::UnicodeString::UnicodeString(local_68,uVar2,&local_70,param_2);
  this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,uVar2);
  if (this == (UnicodeSet *)0x0) {
    *(undefined4 *)param_3 = 7;
    pUVar1 = (UnicodeSet *)0x0;
  }
  else {
    icu_76_godot::UnicodeSet::UnicodeSet(this,local_68,param_3);
    pUVar1 = this;
    if (0 < *(int *)param_3) {
      pUVar1 = (UnicodeSet *)0x0;
      icu_76_godot::UnicodeSet::~UnicodeSet(this);
    }
  }
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



UnicodeSet *
uset_openPatternOptions_76_godot(undefined8 param_1,int param_2,uint param_3,UErrorCode *param_4)

{
  ulong uVar1;
  UnicodeSet *this;
  UnicodeSet *pUVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  UnicodeString local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (ulong)(param_2 == -1);
  local_80 = param_1;
  icu_76_godot::UnicodeString::UnicodeString(local_78,uVar1,&local_80);
  this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,uVar1);
  if (this == (UnicodeSet *)0x0) {
    *(undefined4 *)param_4 = 7;
    pUVar2 = (UnicodeSet *)0x0;
  }
  else {
    icu_76_godot::UnicodeSet::UnicodeSet(this,local_78,param_3,(SymbolTable *)0x0,param_4);
    pUVar2 = this;
    if (0 < *(int *)param_4) {
      pUVar2 = (UnicodeSet *)0x0;
      icu_76_godot::UnicodeSet::~UnicodeSet(this);
    }
  }
  icu_76_godot::UnicodeString::~UnicodeString(local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uset_toPattern_76_godot
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_80;
  code *local_78;
  undefined2 local_70;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = icu_76_godot::UnicodeString::extract;
  local_70 = 2;
  icu_76_godot::UnicodeSet::toPattern(param_1,(UnicodeString *)&local_78,(int)param_4);
  local_80 = param_2;
  uVar1 = icu_76_godot::UnicodeString::extract((UnicodeString *)&local_78,&local_80,param_3,param_5)
  ;
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


