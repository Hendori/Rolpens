
/* icu_76_godot::ScriptSet::ScriptSet() */

void __thiscall icu_76_godot::ScriptSet::ScriptSet(ScriptSet *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::ScriptSet::~ScriptSet() */

void __thiscall icu_76_godot::ScriptSet::~ScriptSet(ScriptSet *this)

{
  return;
}



/* icu_76_godot::ScriptSet::ScriptSet(icu_76_godot::ScriptSet const&) */

void __thiscall icu_76_godot::ScriptSet::ScriptSet(ScriptSet *this,ScriptSet *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x14) = uVar1;
  return;
}



/* icu_76_godot::ScriptSet::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::ScriptSet const&) */

ScriptSet * __thiscall icu_76_godot::ScriptSet::operator=(ScriptSet *this,ScriptSet *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x14) = uVar1;
  return this;
}



/* icu_76_godot::ScriptSet::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::ScriptSet const&) const */

undefined8 __thiscall icu_76_godot::ScriptSet::operator==(ScriptSet *this,ScriptSet *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(this + lVar1) != *(int *)(param_1 + lVar1)) {
      return 0;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x1c);
  return 1;
}



/* icu_76_godot::ScriptSet::test(UScriptCode, UErrorCode&) const */

undefined4 __thiscall icu_76_godot::ScriptSet::test(ScriptSet *this,uint param_2,int *param_3)

{
  uint uVar1;
  
  if (*param_3 < 1) {
    if (param_2 < 0xe0) {
      uVar1 = 1 << ((byte)param_2 & 0x1f) & *(uint *)(this + (ulong)(uint)((int)param_2 >> 5) * 4);
      return CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
    }
    *param_3 = 1;
  }
  return 0;
}



/* icu_76_godot::ScriptSet::set(UScriptCode, UErrorCode&) */

ScriptSet * __thiscall icu_76_godot::ScriptSet::set(ScriptSet *this,uint param_2,int *param_3)

{
  if (*param_3 < 1) {
    if (0xdf < param_2) {
      *param_3 = 1;
      return this;
    }
    *(uint *)(this + (ulong)(uint)((int)param_2 >> 5) * 4) =
         *(uint *)(this + (ulong)(uint)((int)param_2 >> 5) * 4) | 1 << ((byte)param_2 & 0x1f);
  }
  return this;
}



/* icu_76_godot::ScriptSet::reset(UScriptCode, UErrorCode&) */

ScriptSet * __thiscall icu_76_godot::ScriptSet::reset(ScriptSet *this,uint param_2,int *param_3)

{
  byte bVar1;
  
  if (*param_3 < 1) {
    if (0xdf < param_2) {
      *param_3 = 1;
      return this;
    }
    bVar1 = (byte)param_2 & 0x1f;
    *(uint *)(this + (ulong)(uint)((int)param_2 >> 5) * 4) =
         *(uint *)(this + (ulong)(uint)((int)param_2 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  return this;
}



/* icu_76_godot::ScriptSet::Union(icu_76_godot::ScriptSet const&) */

void __thiscall icu_76_godot::ScriptSet::Union(ScriptSet *this,ScriptSet *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(uint *)(this + lVar1) = *(uint *)(this + lVar1) | *(uint *)(param_1 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x1c);
  return;
}



/* icu_76_godot::ScriptSet::intersect(icu_76_godot::ScriptSet const&) */

void __thiscall icu_76_godot::ScriptSet::intersect(ScriptSet *this,ScriptSet *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(uint *)(this + lVar1) = *(uint *)(this + lVar1) & *(uint *)(param_1 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x1c);
  return;
}



/* icu_76_godot::ScriptSet::intersect(UScriptCode, UErrorCode&) */

ScriptSet * __thiscall icu_76_godot::ScriptSet::intersect(ScriptSet *this,uint param_2,int *param_3)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 local_38 [12];
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = SUB1612((undefined1  [16])0x0,0);
  uStack_2c = 0;
  auStack_28 = SUB1612((undefined1  [16])0x0,4);
  if (*param_3 < 1) {
    if (param_2 < 0xe0) {
      *(int *)(local_38 + (ulong)(uint)((int)param_2 >> 5) * 4) = 1 << ((byte)param_2 & 0x1f);
      lVar1 = 0;
      do {
        *(uint *)(this + lVar1) = *(uint *)(this + lVar1) & *(uint *)(local_38 + lVar1);
        lVar1 = lVar1 + 4;
      } while (lVar1 != 0x1c);
    }
    else {
      *param_3 = 1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ScriptSet::intersects(icu_76_godot::ScriptSet const&) const */

undefined8 __thiscall icu_76_godot::ScriptSet::intersects(ScriptSet *this,ScriptSet *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((*(uint *)(this + lVar1) & *(uint *)(param_1 + lVar1)) != 0) {
      return 1;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x1c);
  return 0;
}



/* icu_76_godot::ScriptSet::contains(icu_76_godot::ScriptSet const&) const */

undefined8 __thiscall icu_76_godot::ScriptSet::contains(ScriptSet *this,ScriptSet *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  ScriptSet *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  uint local_1c [3];
  long local_10;
  
  puVar1 = (uint *)&local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(undefined8 *)this;
  uStack_30 = (undefined4)*(undefined8 *)(this + 8);
  uStack_2c = (undefined4)*(undefined8 *)(this + 0xc);
  uStack_28 = (undefined4)((ulong)*(undefined8 *)(this + 0xc) >> 0x20);
  uStack_24 = *(undefined8 *)(this + 0x14);
  pSVar4 = param_1;
  do {
    *puVar1 = *puVar1 & *(uint *)pSVar4;
    puVar1 = puVar1 + 1;
    pSVar4 = pSVar4 + 4;
  } while (puVar1 != local_1c);
  lVar2 = 0;
  do {
    if (*(int *)((long)&local_38 + lVar2) != *(int *)(param_1 + lVar2)) {
      uVar3 = 0;
      goto LAB_001002f0;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x1c);
  uVar3 = 1;
LAB_001002f0:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ScriptSet::setAll() */

ScriptSet * __thiscall icu_76_godot::ScriptSet::setAll(ScriptSet *this)

{
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  return this;
}



/* icu_76_godot::ScriptSet::resetAll() */

ScriptSet * __thiscall icu_76_godot::ScriptSet::resetAll(ScriptSet *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc) = (undefined1  [16])0x0;
  return this;
}



/* icu_76_godot::ScriptSet::countMembers() const */

int __thiscall icu_76_godot::ScriptSet::countMembers(ScriptSet *this)

{
  ScriptSet *pSVar1;
  uint uVar2;
  int iVar3;
  
  pSVar1 = this + 0x1c;
  iVar3 = 0;
  do {
    for (uVar2 = *(uint *)this; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      iVar3 = iVar3 + 1;
    }
    this = this + 4;
  } while (this != pSVar1);
  return iVar3;
}



/* icu_76_godot::ScriptSet::hashCode() const */

uint __thiscall icu_76_godot::ScriptSet::hashCode(ScriptSet *this)

{
  uint uVar1;
  ScriptSet *pSVar2;
  ScriptSet *pSVar3;
  
  uVar1 = *(uint *)this;
  pSVar2 = this + 4;
  do {
    pSVar3 = pSVar2 + 8;
    uVar1 = uVar1 ^ *(uint *)pSVar2 ^ *(uint *)(pSVar2 + 4);
    pSVar2 = pSVar3;
  } while (pSVar3 != this + 0x1c);
  return uVar1;
}



/* icu_76_godot::ScriptSet::nextSetBit(int) const */

int __thiscall icu_76_godot::ScriptSet::nextSetBit(ScriptSet *this,int param_1)

{
  if ((uint)param_1 < 0xe0) {
    do {
      if ((1 << ((byte)param_1 & 0x1f) & *(uint *)(this + (ulong)(uint)(param_1 >> 5) * 4)) != 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != 0xe0);
  }
  return -1;
}



/* icu_76_godot::ScriptSet::isEmpty() const */

undefined8 __thiscall icu_76_godot::ScriptSet::isEmpty(ScriptSet *this)

{
  ScriptSet *pSVar1;
  
  pSVar1 = this + 0x1c;
  do {
    if (*(int *)this != 0) {
      return 0;
    }
    this = this + 4;
  } while (this != pSVar1);
  return 1;
}



/* icu_76_godot::ScriptSet::displayScripts(icu_76_godot::UnicodeString&) const */

UnicodeString * __thiscall
icu_76_godot::ScriptSet::displayScripts(ScriptSet *this,UnicodeString *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined2 local_7a;
  UnicodeString local_78 [72];
  long local_30;
  
  iVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)*this & 1) == 0) {
    do {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0xe0) goto LAB_00100510;
    } while ((1 << ((byte)iVar2 & 0x1f) & *(uint *)(this + (ulong)(uint)(iVar2 >> 5) * 4)) == 0);
  }
  while( true ) {
    uVar1 = uscript_getShortName_76_godot(iVar2);
    icu_76_godot::UnicodeString::UnicodeString(local_78,uVar1,0xffffffff,0);
    icu_76_godot::UnicodeString::doAppend(param_1,(int)local_78,0);
    icu_76_godot::UnicodeString::~UnicodeString(local_78);
    iVar2 = nextSetBit(this,iVar2 + 1);
    if (iVar2 < 0) break;
    local_7a = 0x20;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)param_1,(int)&local_7a,0);
  }
LAB_00100510:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ScriptSet::parseScripts(icu_76_godot::UnicodeString const&, UErrorCode&) */

ScriptSet * __thiscall
icu_76_godot::ScriptSet::parseScripts(ScriptSet *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long in_FS_OFFSET;
  code *local_a8;
  ushort local_a0;
  int local_9c;
  undefined1 local_68 [39];
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc) = (undefined1  [16])0x0;
  if (*(int *)param_2 < 1) {
    iVar5 = 0;
    local_a8 = icu_76_godot::UnicodeString::moveIndex32;
    local_a0 = 2;
    sVar3 = *(short *)(param_1 + 8);
LAB_0010060a:
    if (sVar3 < 0) {
      iVar7 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar7 = (int)(sVar3 >> 5);
    }
    if (iVar5 < iVar7) {
      uVar4 = icu_76_godot::UnicodeString::char32At((int)param_1);
      iVar5 = icu_76_godot::UnicodeString::moveIndex32((int)param_1,iVar5);
      cVar2 = u_isUWhiteSpace_76_godot(uVar4);
      if (cVar2 == '\0') goto LAB_00100698;
      goto LAB_001005e9;
    }
    goto LAB_001006cf;
  }
LAB_001006d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
LAB_00100698:
  icu_76_godot::UnicodeString::append((int)(UnicodeString *)&local_a8);
  sVar3 = *(short *)(param_1 + 8);
  if (sVar3 < 0) {
    iVar7 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar7 = (int)(sVar3 >> 5);
  }
  if (iVar7 <= iVar5) {
LAB_001005e9:
    iVar7 = (int)((short)local_a0 >> 5);
    if ((short)local_a0 < 0) {
      iVar7 = local_9c;
    }
    if (0 < iVar7) {
      icu_76_godot::UnicodeString::extract((UnicodeString *)&local_a8,0,iVar7,local_68,0x27,0);
      local_41 = 0;
      uVar6 = u_getPropertyValueEnum_76_godot(0x100a,local_68);
      if (uVar6 == 0xffffffff) goto LAB_001006c8;
      if (0 < *(int *)param_2) goto LAB_001006cf;
      if (0xdf < uVar6) goto LAB_001006c8;
      *(uint *)(this + (ulong)(uint)((int)uVar6 >> 5) * 4) =
           *(uint *)(this + (ulong)(uint)((int)uVar6 >> 5) * 4) | 1 << ((byte)uVar6 & 0x1f);
      uVar1 = local_a0 & 1;
      local_a0 = local_a0 & 0x1f;
      if (uVar1 != 0) {
        local_a0 = 2;
      }
    }
    sVar3 = *(short *)(param_1 + 8);
  }
  goto LAB_0010060a;
LAB_001006c8:
  *(undefined4 *)param_2 = 1;
LAB_001006cf:
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_a8);
  goto LAB_001006d7;
}



/* icu_76_godot::ScriptSet::setScriptExtensions(int, UErrorCode&) */

void __thiscall
icu_76_godot::ScriptSet::setScriptExtensions(ScriptSet *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  int local_9c;
  uint *local_98;
  int local_90;
  char local_8c;
  uint local_88 [22];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    puVar2 = local_88;
    local_8c = '\0';
    uVar4 = 0x14;
    local_90 = 0x14;
    while( true ) {
      local_9c = 0;
      local_98 = puVar2;
      iVar1 = uscript_getScriptExtensions_76_godot(param_1,puVar2,uVar4 & 0xffffffff,&local_9c);
      uVar4 = (ulong)iVar1;
      if (local_9c != 0xf) break;
      if ((iVar1 < 1) ||
         (puVar2 = (uint *)uprv_malloc_76_godot((long)iVar1 << 2), puVar2 == (uint *)0x0)) {
        *(undefined4 *)param_2 = 7;
        goto joined_r0x00100879;
      }
      if (local_8c != '\0') {
        uprv_free_76_godot(local_98);
      }
      local_8c = '\x01';
      local_90 = iVar1;
    }
    if (local_9c < 1) {
      if ((0 < iVar1) && (uVar3 = *local_98, *(int *)param_2 < 1)) {
        puVar2 = local_98;
        while (uVar3 < 0xe0) {
          puVar2 = puVar2 + 1;
          *(uint *)(this + (ulong)(uint)((int)uVar3 >> 5) * 4) =
               *(uint *)(this + (ulong)(uint)((int)uVar3 >> 5) * 4) | 1 << ((byte)uVar3 & 0x1f);
          if (local_98 + uVar4 == puVar2) goto joined_r0x00100879;
          uVar3 = *puVar2;
        }
        *(undefined4 *)param_2 = 1;
      }
    }
    else {
      *(int *)param_2 = local_9c;
    }
joined_r0x00100879:
    if (local_8c != '\0') {
      uprv_free_76_godot(local_98);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 uhash_equalsScriptSet_76_godot(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) {
      return 0;
    }
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x1c);
  return 1;
}



ulong uhash_compareScriptSet_76_godot(ScriptSet *param_1,ScriptSet *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ScriptSet *pSVar4;
  uint uVar5;
  ulong uVar6;
  
  iVar2 = 0;
  pSVar4 = param_1;
  do {
    for (uVar1 = *(uint *)pSVar4; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    pSVar4 = pSVar4 + 4;
  } while (pSVar4 != param_1 + 0x1c);
  iVar3 = 0;
  pSVar4 = param_2;
  do {
    for (uVar1 = *(uint *)pSVar4; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar3 = iVar3 + 1;
    }
    pSVar4 = pSVar4 + 4;
  } while (param_2 + 0x1c != pSVar4);
  if (iVar2 - iVar3 != 0) {
    return (ulong)(uint)(iVar2 - iVar3);
  }
  uVar1 = *(uint *)param_2 & 1;
  if (((byte)*param_1 & 1) == 0) {
    uVar6 = 0;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar5;
      if (uVar5 == 0xe0) {
        uVar6 = 0xffffffff;
        if (uVar1 != 0) {
          return 0xffffffff;
        }
        goto LAB_00100998;
      }
    } while ((1 << ((byte)uVar5 & 0x1f) & *(uint *)(param_1 + (ulong)(uint)((int)uVar5 >> 5) * 4))
             == 0);
    if (uVar1 != 0) {
      return uVar6;
    }
  }
  else {
    uVar6 = 0;
    if (uVar1 != 0) {
      return 0;
    }
  }
LAB_00100998:
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (iVar2 == 0xe0) {
      uVar1 = (int)uVar6 + 1;
      if (uVar1 == 0) {
        return 0;
      }
      goto LAB_00100a12;
    }
  } while ((1 << ((byte)iVar2 & 0x1f) & *(uint *)(param_2 + (ulong)(uint)(iVar2 >> 5) * 4)) == 0);
  uVar1 = (int)uVar6 - iVar2;
  if (uVar1 == 0) {
    do {
      uVar1 = icu_76_godot::ScriptSet::nextSetBit(param_1,(int)uVar6 + 1);
      uVar6 = (ulong)uVar1;
      iVar2 = icu_76_godot::ScriptSet::nextSetBit(param_2,iVar2 + 1);
      uVar1 = (int)uVar6 - iVar2;
      if (uVar1 != 0) {
        return (ulong)uVar1;
      }
    } while (0 < (int)uVar6);
    return 0;
  }
LAB_00100a12:
  return (ulong)uVar1;
}



uint uhash_hashScriptSet_76_godot(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = *param_1;
  puVar2 = param_1 + 1;
  do {
    puVar3 = puVar2 + 2;
    uVar1 = uVar1 ^ *puVar2 ^ puVar2[1];
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 7);
  return uVar1;
}



void uhash_deleteScriptSet_76_godot(UMemory *param_1,void *param_2)

{
  if (param_1 != (UMemory *)0x0) {
    icu_76_godot::UMemory::operator_delete(param_1,param_2);
    return;
  }
  return;
}


