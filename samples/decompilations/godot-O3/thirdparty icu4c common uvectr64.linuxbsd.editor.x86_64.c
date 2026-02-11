
/* icu_76_godot::UVector64::getDynamicClassID() const */

undefined1 * icu_76_godot::UVector64::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UVector64::~UVector64() */

void __thiscall icu_76_godot::UVector64::~UVector64(UVector64 *this)

{
  *(undefined ***)this = &PTR__UVector64_001005b8;
  uprv_free_76_godot(*(undefined8 *)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UVector64::~UVector64() */

void __thiscall icu_76_godot::UVector64::~UVector64(UVector64 *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UVector64_001005b8;
  uprv_free_76_godot(*(undefined8 *)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UVector64::getStaticClassID() */

undefined1 * icu_76_godot::UVector64::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UVector64::UVector64(UErrorCode&) */

void __thiscall icu_76_godot::UVector64::UVector64(UVector64 *this,UErrorCode *param_1)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__UVector64_001005b8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  lVar1 = uprv_malloc_76_godot(0x40);
  *(long *)(this + 0x18) = lVar1;
  if (lVar1 == 0) {
    *(undefined4 *)param_1 = 7;
  }
  else {
    *(undefined4 *)(this + 0xc) = 8;
  }
  return;
}



/* icu_76_godot::UVector64::UVector64(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector64::UVector64(UVector64 *this,int param_1,UErrorCode *param_2)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__UVector64_001005b8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (param_1 < 1) {
    lVar1 = 0x40;
    param_1 = 8;
  }
  else {
    lVar1 = (long)param_1 << 3;
    if (0xfffffff < param_1) {
      param_1 = uprv_min_76_godot(8,0);
      lVar1 = (long)param_1 << 3;
    }
  }
  lVar1 = uprv_malloc_76_godot(lVar1);
  *(long *)(this + 0x18) = lVar1;
  if (lVar1 == 0) {
    *(undefined4 *)param_2 = 7;
  }
  else {
    *(int *)(this + 0xc) = param_1;
  }
  return;
}



/* icu_76_godot::UVector64::_init(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector64::_init(UVector64 *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < 1) {
    if (iVar1 < 1) {
      lVar3 = 0x40;
      param_1 = 8;
    }
    else {
      param_1 = 8;
      if (iVar1 < 9) {
        param_1 = iVar1;
      }
      lVar3 = (long)param_1 << 3;
    }
  }
  else {
    iVar2 = iVar1;
    if (param_1 <= iVar1) {
      iVar2 = param_1;
    }
    if (0 < iVar1) {
      param_1 = iVar2;
    }
    lVar3 = (long)param_1 << 3;
    if (0xfffffff < param_1) {
      param_1 = uprv_min_76_godot(8);
      lVar3 = (long)param_1 << 3;
    }
  }
  lVar3 = uprv_malloc_76_godot(lVar3);
  *(long *)(this + 0x18) = lVar3;
  if (lVar3 == 0) {
    *(undefined4 *)param_2 = 7;
  }
  else {
    *(int *)(this + 0xc) = param_1;
  }
  return;
}



/* icu_76_godot::UVector64::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UVector64 const&) */

undefined8 __thiscall icu_76_godot::UVector64::operator==(UVector64 *this,UVector64 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != *(int *)(param_1 + 8)) {
    return 0;
  }
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x18) + lVar2) != *(long *)(*(long *)(param_1 + 0x18) + lVar2))
      {
        return 0;
      }
      lVar2 = lVar2 + 8;
    } while ((long)iVar1 * 8 != lVar2);
  }
  return 1;
}



/* icu_76_godot::UVector64::setElementAt(long, int) */

void __thiscall icu_76_godot::UVector64::setElementAt(UVector64 *this,long param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(this + 8))) {
    *(long *)(*(long *)(this + 0x18) + (long)param_2 * 8) = param_1;
  }
  return;
}



/* icu_76_godot::UVector64::removeAllElements() */

void __thiscall icu_76_godot::UVector64::removeAllElements(UVector64 *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* icu_76_godot::UVector64::expandCapacity(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::UVector64::expandCapacity(UVector64 *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if (-1 < param_1) {
    iVar1 = *(int *)(this + 0xc);
    if (param_1 <= iVar1) {
      return 1;
    }
    iVar2 = *(int *)(this + 0x10);
    if (iVar2 < 1) {
      if (0x3fffffff < iVar1) goto LAB_00100318;
      if (param_1 <= iVar1 * 2) {
        param_1 = iVar1 * 2;
      }
    }
    else {
      if (iVar2 < param_1) {
        *(undefined4 *)param_2 = 0xf;
        return 0;
      }
      if (0x3fffffff < iVar1) goto LAB_00100318;
      iVar4 = iVar1 * 2;
      if (iVar1 * 2 < param_1) {
        iVar4 = param_1;
      }
      param_1 = iVar4;
      if (iVar2 < iVar4) {
        param_1 = iVar2;
      }
    }
    if (param_1 < 0x10000000) {
      lVar3 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x18),(long)param_1 << 3);
      if (lVar3 == 0) {
        *(undefined4 *)param_2 = 7;
        return 0;
      }
      *(long *)(this + 0x18) = lVar3;
      *(int *)(this + 0xc) = param_1;
      return 1;
    }
  }
LAB_00100318:
  *(undefined4 *)param_2 = 1;
  return 0;
}



/* icu_76_godot::UVector64::insertElementAt(long, int, UErrorCode&) */

void __thiscall
icu_76_godot::UVector64::insertElementAt
          (UVector64 *this,long param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if ((-1 < param_2) && (iVar1 = *(int *)(this + 8), param_2 <= iVar1)) {
    iVar6 = iVar1 + 1;
    if (*(int *)(this + 0xc) < iVar6) {
      cVar3 = expandCapacity(this,iVar6,param_3);
      if (cVar3 == '\0') {
        return;
      }
      iVar1 = *(int *)(this + 8);
      iVar6 = iVar1 + 1;
    }
    lVar2 = *(long *)(this + 0x18);
    if (param_2 < iVar1) {
      uVar4 = (ulong)((iVar1 - param_2) - 1);
      lVar5 = uVar4 * -8;
      memmove((void *)(lVar5 + (long)iVar1 * 8 + lVar2),
              (void *)((long)iVar1 * 8 + -8 + lVar5 + lVar2),uVar4 * 8 + 8);
    }
    *(long *)(lVar2 + (long)param_2 * 8) = param_1;
    *(int *)(this + 8) = iVar6;
  }
  return;
}



/* icu_76_godot::UVector64::setMaxCapacity(int) */

void __thiscall icu_76_godot::UVector64::setMaxCapacity(UVector64 *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  if (-1 < param_1) {
    if (((param_1 < 0x10000000) && (*(int *)(this + 0x10) = param_1, param_1 < *(int *)(this + 0xc))
        ) && (param_1 != 0)) {
      lVar2 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x18),(long)param_1 << 3);
      if (lVar2 != 0) {
        *(long *)(this + 0x18) = lVar2;
        iVar1 = *(int *)(this + 0x10);
        *(int *)(this + 0xc) = iVar1;
        if (iVar1 < *(int *)(this + 8)) {
          *(int *)(this + 8) = iVar1;
        }
      }
    }
    return;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}



/* icu_76_godot::UVector64::setSize(int) */

void __thiscall icu_76_godot::UVector64::setSize(UVector64 *this,int param_1)

{
  int iVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) goto LAB_0010048e;
  iVar1 = *(int *)(this + 8);
  if (iVar1 < param_1) {
    local_24 = 0;
    if (*(int *)(this + 0xc) < param_1) {
      cVar2 = expandCapacity(this,param_1,(UErrorCode *)&local_24);
      if (cVar2 == '\0') goto LAB_0010048e;
      iVar1 = *(int *)(this + 8);
      if (param_1 <= iVar1) goto LAB_0010048b;
    }
    memset((void *)(*(long *)(this + 0x18) + (long)iVar1 * 8),0,
           (ulong)(uint)((param_1 + -1) - iVar1) * 8 + 8);
  }
LAB_0010048b:
  *(int *)(this + 8) = param_1;
LAB_0010048e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UVector64::assign(icu_76_godot::UVector64 const&, UErrorCode&) */

void __thiscall
icu_76_godot::UVector64::assign(UVector64 *this,UVector64 *param_1,UErrorCode *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  if ((iVar5 < 0) || (*(int *)(this + 0xc) < iVar5)) {
    cVar3 = expandCapacity(this,iVar5,param_2);
    if (cVar3 == '\0') {
      return;
    }
    iVar5 = *(int *)(param_1 + 8);
  }
  setSize(this,iVar5);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 < 1) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x18);
  lVar4 = 0;
  do {
    *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
    lVar4 = lVar4 + 8;
  } while ((long)iVar5 * 8 != lVar4);
  return;
}


