
UnicodeSet * uset_openEmpty_76_godot(undefined8 param_1,ulong param_2)

{
  UnicodeSet *this;
  
  this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,param_2);
  if (this != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::UnicodeSet(this);
  }
  return this;
}



UnicodeSet * uset_open_76_godot(int param_1,ulong param_2)

{
  UnicodeSet *this;
  
  this = (UnicodeSet *)icu_76_godot::UMemory::operator_new((UMemory *)0xc8,param_2);
  if (this != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::UnicodeSet(this,param_1,(int)param_2);
  }
  return this;
}



bool uset_isFrozen_76_godot(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x58) != 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_freeze_76_godot(void)

{
  freeze();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_cloneAsThawed_76_godot(void)

{
  cloneAsThawed();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_set_76_godot(int param_1,int param_2)

{
  set(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_add_76_godot(int param_1)

{
  add(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_remove_76_godot(int param_1)

{
  remove(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_hasStrings_76_godot(void)

{
  hasStrings();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_containsNone_76_godot(UnicodeSet *param_1)

{
  containsNone(param_1);
  return;
}



bool uset_containsSome_76_godot(UnicodeSet *param_1)

{
  char cVar1;
  
  cVar1 = icu_76_godot::UnicodeSet::containsNone(param_1);
  return cVar1 == '\0';
}



void icu_76_godot::UnicodeSet::uset_span_76_godot(void)

{
  span();
  return;
}



void icu_76_godot::UnicodeSet::uset_spanBack_76_godot(void)

{
  spanBack();
  return;
}



void icu_76_godot::UnicodeSet::uset_spanUTF8_76_godot(void)

{
  spanUTF8();
  return;
}



void icu_76_godot::UnicodeSet::uset_spanBackUTF8_76_godot(void)

{
  spanBackUTF8();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_indexOf_76_godot(int param_1)

{
  indexOf(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_charAt_76_godot(int param_1)

{
  charAt(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_getStringCount_76_godot(void)

{
  stringsSize();
  return;
}



long uset_getString_76_godot(int param_1,int param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar2 = icu_76_godot::UnicodeSet::stringsSize();
  if ((-1 < param_2) && (param_2 < iVar2)) {
    lVar3 = icu_76_godot::UnicodeSet::getString(param_1);
    if (*(short *)(lVar3 + 8) < 0) {
      *param_3 = *(int *)(lVar3 + 0xc);
      uVar1 = *(ushort *)(lVar3 + 8);
    }
    else {
      *param_3 = (int)(*(short *)(lVar3 + 8) >> 5);
      uVar1 = *(ushort *)(lVar3 + 8);
    }
    if ((uVar1 & 0x11) == 0) {
      if ((uVar1 & 2) == 0) {
        lVar3 = *(long *)(lVar3 + 0x18);
      }
      else {
        lVar3 = lVar3 + 10;
      }
    }
    else {
      lVar3 = 0;
    }
    return lVar3;
  }
  *param_3 = 0;
  return 0;
}



undefined8 uset_serialize_76_godot(ushort *param_1,int param_2,UErrorCode *param_3,int *param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != (int *)0x0) && (*param_4 < 1)) {
    uVar1 = icu_76_godot::UnicodeSet::serialize(param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



undefined8 uset_getSerializedSet_76_godot(long *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  if (param_1 != (long *)0x0) {
    if ((param_2 != (ushort *)0x0) && (0 < param_3)) {
      uVar1 = *param_2;
      if ((short)uVar1 < 0) {
        if ((int)((uVar1 & 0x7fff) + 1) < param_3) {
          uVar2 = param_2[1];
          *(uint *)((long)param_1 + 0xc) = uVar1 & 0x7fff;
          *param_1 = (long)(param_2 + 2);
          *(uint *)(param_1 + 1) = (uint)uVar2;
          return 1;
        }
      }
      else {
        uVar3 = (uint)uVar1;
        if ((int)uVar3 < param_3) {
          *(uint *)((long)param_1 + 0xc) = uVar3;
          *(uint *)(param_1 + 1) = uVar3;
          *param_1 = (long)(param_2 + 1);
          return 1;
        }
      }
    }
    param_1[1] = 0;
  }
  return 0;
}



void uset_setSerializedToOne_76_godot(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != (long *)0x0) && (param_2 < 0x110000)) {
    *param_1 = (long)(param_1 + 2);
    lVar3 = _LC4;
    lVar2 = _LC1;
    lVar1 = _LC0;
    if ((int)param_2 < 0xffff) {
      *(short *)(param_1 + 2) = (short)param_2;
      *(short *)((long)param_1 + 0x12) = (short)param_2 + 1;
      param_1[1] = lVar1;
      return;
    }
    if (param_2 == 0xffff) {
      *(undefined4 *)(param_1 + 2) = 0x1ffff;
      param_1[1] = lVar2;
      *(undefined2 *)((long)param_1 + 0x14) = 0;
      return;
    }
    if (param_2 != 0x10ffff) {
      param_1[1] = _LC3;
      param_1[2] = (((ulong)(ushort)(param_2 + 1) << 0x10 |
                    (ulong)((int)(param_2 + 1) >> 0x10 & 0xffff)) << 0x10 |
                   (ulong)(param_2 & 0xffff)) << 0x10 | (ulong)((int)param_2 >> 0x10 & 0xffff);
      return;
    }
    *(undefined4 *)(param_1 + 2) = 0xffff0010;
    param_1[1] = lVar3;
  }
  return;
}



uint uset_serializedContains_76_godot(undefined8 *param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((param_1 == (undefined8 *)0x0) || (0x10ffff < param_2)) {
    return 0;
  }
  puVar1 = (ushort *)*param_1;
  uVar10 = *(uint *)(param_1 + 1);
  if (0xffff < (int)param_2) {
    uVar11 = 0;
    uVar4 = (ushort)(param_2 >> 0x10);
    if ((puVar1[(int)uVar10] <= uVar4) &&
       ((uVar6 = (ushort)param_2, puVar1[(int)uVar10] != uVar4 ||
        (puVar1[(long)(int)uVar10 + 1] <= uVar6)))) {
      iVar9 = *(int *)((long)param_1 + 0xc) + -2;
      uVar11 = iVar9 - uVar10;
      if ((uVar4 < puVar1[iVar9]) || ((puVar1[iVar9] == uVar4 && (uVar6 < puVar1[(long)iVar9 + 1])))
         ) {
        uVar5 = (int)uVar11 >> 1 & 0xfffffffe;
        if (uVar5 != 0) {
          uVar7 = 0;
          uVar12 = uVar11;
          uVar13 = uVar11;
          uVar8 = uVar7;
          do {
            uVar11 = uVar5;
            uVar2 = uVar5;
            uVar3 = uVar8;
            if (((puVar1[(int)(uVar5 + uVar10)] <= uVar4) &&
                (uVar11 = uVar12, uVar7 = uVar5, uVar2 = uVar13, uVar3 = uVar5,
                puVar1[(int)(uVar5 + uVar10)] == uVar4)) &&
               (uVar11 = uVar13, uVar6 < puVar1[(long)(int)(uVar5 + uVar10) + 1])) {
              uVar11 = uVar5;
              uVar7 = uVar8;
              uVar2 = uVar5;
              uVar3 = uVar8;
            }
            uVar8 = uVar3;
            uVar13 = uVar2;
            uVar5 = (int)(uVar11 + uVar7) >> 1 & 0xfffffffe;
            uVar12 = uVar11;
          } while (uVar7 != uVar5);
        }
      }
      else {
        uVar11 = uVar11 + 2;
      }
    }
    return uVar11 + uVar10 * 2 >> 1 & 1;
  }
  if ((int)(uint)*puVar1 <= (int)param_2) {
    if ((int)(uint)puVar1[(int)(uVar10 - 1)] <= (int)param_2) {
      return uVar10 & 1;
    }
    uVar11 = 0;
    uVar10 = uVar10 - 1;
    while (uVar5 = uVar10, uVar10 = (int)(uVar11 + uVar5) >> 1, uVar11 != uVar10) {
      if ((int)(uint)puVar1[(int)uVar10] <= (int)param_2) {
        uVar11 = uVar10;
        uVar10 = uVar5;
      }
    }
    return uVar5 & 1;
  }
  return 0;
}



int uset_getSerializedRangeCount_76_godot(long param_1)

{
  if (param_1 != 0) {
    return (*(int *)(param_1 + 8) + 1 + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 2) / 2;
  }
  return 0;
}



undefined8 uset_getSerializedRange_76_godot(long *param_1,int param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  if ((((param_1 == (long *)0x0) || (param_2 < 0)) || (param_3 == (uint *)0x0)) ||
     (param_4 == (int *)0x0)) {
    return 0;
  }
  iVar2 = (int)param_1[1];
  iVar4 = param_2 * 2;
  lVar3 = *param_1;
  iVar6 = *(int *)((long)param_1 + 0xc);
  if (iVar2 == iVar4 || SBORROW4(iVar2,iVar4) != iVar2 + param_2 * -2 < 0) {
    iVar6 = iVar6 - iVar2;
    iVar4 = (iVar4 - iVar2) * 2;
    if (iVar6 <= iVar4) {
      return 0;
    }
    lVar5 = (long)iVar4;
    lVar3 = lVar3 + (long)iVar2 * 2;
    *param_3 = CONCAT22(*(undefined2 *)(lVar3 + lVar5 * 2),*(undefined2 *)(lVar3 + 2 + lVar5 * 2));
    if (iVar4 + 2 < iVar6) {
      *param_4 = CONCAT22(*(undefined2 *)(lVar3 + 4 + lVar5 * 2),
                          *(undefined2 *)(lVar3 + 2 + (long)(iVar4 + 2) * 2)) + -1;
      return 1;
    }
  }
  else {
    iVar1 = iVar4 + 1;
    *param_3 = (uint)*(ushort *)(lVar3 + (long)iVar4 * 2);
    if (iVar1 < iVar2) {
      *param_4 = *(ushort *)(lVar3 + (long)iVar1 * 2) - 1;
      return 1;
    }
    if (iVar1 < iVar6) {
      *param_4 = CONCAT22(*(undefined2 *)(lVar3 + (long)iVar1 * 2),
                          *(undefined2 *)(lVar3 + 2 + (long)iVar1 * 2)) + -1;
      return 1;
    }
  }
  *param_4 = 0x10ffff;
  return 1;
}



void uset_close_76_godot(UnicodeSet *param_1)

{
  if (param_1 != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(param_1);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_clone_76_godot(void)

{
  clone();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_addAll_76_godot(UnicodeSet *param_1)

{
  addAll(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_addRange_76_godot(int param_1,int param_2)

{
  add(param_1,param_2);
  return;
}



void uset_addString_76_godot(UnicodeString *param_1,undefined8 param_2,ulong param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 >> 0x1f & 1,&local_70);
  icu_76_godot::UnicodeSet::add(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_addAllCodePoints_76_godot(UnicodeString *param_1,wchar16 *param_2,int param_3)

{
  long in_FS_OFFSET;
  UnicodeString aUStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::UnicodeString::UnicodeString(aUStack_68,param_2,param_3);
  icu_76_godot::UnicodeSet::addAll(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(aUStack_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_removeString_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  icu_76_godot::UnicodeSet::remove(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_removeAllCodePoints_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  icu_76_godot::UnicodeSet::removeAll(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_retainString_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  icu_76_godot::UnicodeSet::retain(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_retainAllCodePoints_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  icu_76_godot::UnicodeSet::retainAll(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_complementString_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  icu_76_godot::UnicodeSet::complement(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uset_complementAllCodePoints_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  icu_76_godot::UnicodeSet::complementAll(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uset_containsString_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  uVar1 = icu_76_godot::UnicodeSet::contains(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
uset_containsAllCodePoints_76_godot(UnicodeString *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70);
  uVar1 = icu_76_godot::UnicodeSet::containsAll(param_1);
  icu_76_godot::UnicodeString::~UnicodeString(local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_removeRange_76_godot(int param_1,int param_2)

{
  remove(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_removeAll_76_godot(UnicodeSet *param_1)

{
  removeAll(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_retain_76_godot(int param_1,int param_2)

{
  retain(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_retainAll_76_godot(UnicodeSet *param_1)

{
  retainAll(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_compact_76_godot(void)

{
  compact();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_complement_76_godot(void)

{
  complement();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_complementRange_76_godot(int param_1,int param_2)

{
  complement(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_complementAll_76_godot(UnicodeSet *param_1)

{
  complementAll(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_clear_76_godot(void)

{
  clear();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_removeAllStrings_76_godot(void)

{
  removeAllStrings();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_isEmpty_76_godot(void)

{
  isEmpty();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_contains_76_godot(int param_1)

{
  contains(param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_containsRange_76_godot(int param_1,int param_2)

{
  contains(param_1,param_2);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_containsAll_76_godot(UnicodeSet *param_1)

{
  containsAll(param_1);
  return;
}



void __thiscall icu_76_godot::UnicodeSet::uset_equals_76_godot(UnicodeSet *this,UnicodeSet *param_1)

{
  operator==(this,param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_size_76_godot(void)

{
  size();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void icu_76_godot::UnicodeSet::uset_getRangeCount_76_godot(void)

{
  getRangeCount();
  return;
}



int uset_getItemCount_76_godot(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = icu_76_godot::UnicodeSet::getRangeCount();
  iVar2 = icu_76_godot::UnicodeSet::stringsSize();
  return iVar2 + iVar1;
}



undefined8
uset_getItem_76_godot
          (int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined8 param_5,
          undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_7 < 1) {
    if (param_2 < 0) {
      *param_7 = 1;
    }
    else {
      iVar1 = icu_76_godot::UnicodeSet::getRangeCount();
      if (param_2 < iVar1) {
        uVar3 = icu_76_godot::UnicodeSet::getRangeStart(param_1);
        *param_3 = uVar3;
        uVar3 = icu_76_godot::UnicodeSet::getRangeEnd(param_1);
        *param_4 = uVar3;
        goto LAB_00100d06;
      }
      iVar2 = icu_76_godot::UnicodeSet::stringsSize();
      if (param_2 - iVar1 < iVar2) {
        uVar4 = icu_76_godot::UnicodeSet::getString(param_1);
        local_48 = param_5;
        uVar4 = icu_76_godot::UnicodeString::extract(uVar4,&local_48,param_6,param_7);
        goto LAB_00100cc5;
      }
      *param_7 = 8;
    }
    uVar4 = 0xffffffff;
  }
  else {
LAB_00100d06:
    uVar4 = 0;
  }
LAB_00100cc5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


