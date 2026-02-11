
/* unorm_iterate(UCharIterator*, signed char, char16_t*, int, UNormalizationMode, int, signed char,
   signed char*, UErrorCode*) */

ulong unorm_iterate(long param_1,char param_2,long param_3,int param_4,undefined4 param_5,
                   uint param_6,char param_7,undefined8 param_8,int *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = icu_76_godot::Normalizer2Factory::getInstance(param_5,param_9);
  uVar4 = param_6 & 0x20;
  if ((param_6 & 0x20) == 0) {
    if (*param_9 < 1) {
      if (((-1 < param_4) && (param_3 != 0 || param_4 < 1)) && (param_1 != 0)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = _iterate(param_1,(int)param_2,param_3,param_4,uVar1,(int)param_7);
          return uVar3;
        }
        goto LAB_001006dc;
      }
      *param_9 = 1;
    }
  }
  else {
    uVar4 = 0;
    uVar2 = uniset_getUnicode32Instance_76_godot(param_9);
    if (*param_9 < 1) {
      local_58 = unorm2_quickCheck_76_godot;
      local_50 = uVar1;
      local_48 = uVar2;
      if (((param_4 < 0) || (param_3 == 0 && 0 < param_4)) || (param_1 == 0)) {
        *param_9 = 1;
        uVar4 = 0;
      }
      else {
        uVar4 = _iterate(param_1,(int)param_2,param_3,param_4,&local_58,(int)param_7,param_8,param_9
                        );
      }
      icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_58);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar4;
  }
LAB_001006dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unorm_quickCheck_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = icu_76_godot::Normalizer2Factory::getInstance(param_3,param_4);
  unorm2_quickCheck_76_godot(uVar1,param_1,param_2,param_4);
  return;
}



ulong unorm_quickCheckWithOptions_76_godot
                (undefined8 param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = icu_76_godot::Normalizer2Factory::getInstance(param_3,param_5);
  if ((param_4 & 0x20) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = unorm2_quickCheck_76_godot(uVar2,param_1,param_2,param_5);
      return uVar3;
    }
  }
  else {
    local_38 = uniset_getUnicode32Instance_76_godot(param_5);
    local_48 = unorm2_quickCheck_76_godot;
    local_40 = uVar2;
    uVar1 = unorm2_quickCheck_76_godot(&local_48,param_1,param_2,param_5);
    icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unorm_isNormalized_76_godot
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = icu_76_godot::Normalizer2Factory::getInstance(param_3,param_4);
  unorm2_isNormalized_76_godot(uVar1,param_1,param_2,param_4);
  return;
}



ulong unorm_isNormalizedWithOptions_76_godot
                (undefined8 param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = icu_76_godot::Normalizer2Factory::getInstance(param_3,param_5);
  if ((param_4 & 0x20) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = unorm2_isNormalized_76_godot(uVar2,param_1,param_2,param_5);
      return uVar3;
    }
  }
  else {
    local_38 = uniset_getUnicode32Instance_76_godot(param_5);
    local_48 = unorm2_quickCheck_76_godot;
    local_40 = uVar2;
    uVar1 = unorm2_isNormalized_76_godot(&local_48,param_1,param_2,param_5);
    icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong unorm_normalize_76_godot
                (undefined8 param_1,undefined4 param_2,undefined4 param_3,ulong param_4,
                undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = icu_76_godot::Normalizer2Factory::getInstance(param_3,param_7);
  if ((param_4 & 0x20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = unorm2_normalize_76_godot(uVar2,param_1,param_2,param_5,param_6,param_7);
      return uVar3;
    }
  }
  else {
    local_48 = uniset_getUnicode32Instance_76_godot(param_7);
    local_58 = unorm2_quickCheck_76_godot;
    local_50 = uVar2;
    uVar1 = unorm2_normalize_76_godot
                      ((FilteredNormalizer2 *)&local_58,param_1,param_2,param_5,param_6,param_7);
    icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_58);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unorm_previous_76_godot
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,char param_6,undefined8 param_7,undefined8 param_8)

{
  unorm_iterate(param_1,0,param_2,param_3,param_4,param_5,(int)param_6,param_7,param_8);
  return;
}



void unorm_next_76_godot(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,char param_6,undefined8 param_7,undefined8 param_8)

{
  unorm_iterate(param_1,1,param_2,param_3,param_4,param_5,(int)param_6,param_7,param_8);
  return;
}



ulong unorm_concatenate_76_godot
                (wchar16 *param_1,int param_2,wchar16 *param_3,int param_4,wchar16 *param_5,
                int param_6,undefined4 param_7,ulong param_8,UErrorCode *param_9)

{
  Normalizer2 *pNVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  code *local_58;
  Normalizer2 *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pNVar1 = (Normalizer2 *)icu_76_godot::Normalizer2Factory::getInstance(param_7,param_9);
  if ((param_8 & 0x20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = _concatenate(param_1,param_2,param_3,param_4,param_5,param_6,pNVar1,param_9);
      return uVar3;
    }
  }
  else {
    uVar4 = 0;
    uVar2 = uniset_getUnicode32Instance_76_godot(param_9);
    if (*(int *)param_9 < 1) {
      local_58 = unorm2_quickCheck_76_godot;
      local_50 = pNVar1;
      local_48 = uVar2;
      uVar4 = _concatenate(param_1,param_2,param_3,param_4,param_5,param_6,(Normalizer2 *)&local_58,
                           param_9);
      icu_76_godot::FilteredNormalizer2::~FilteredNormalizer2((FilteredNormalizer2 *)&local_58);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


