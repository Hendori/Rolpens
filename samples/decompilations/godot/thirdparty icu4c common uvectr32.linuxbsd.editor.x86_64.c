
/* icu_76_godot::UVector32::getDynamicClassID() const */

undefined1 * icu_76_godot::UVector32::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UVector32::~UVector32() */

void __thiscall icu_76_godot::UVector32::~UVector32(UVector32 *this)

{
  *(undefined ***)this = &PTR__UVector32_00100968;
  uprv_free_76_godot(*(undefined8 *)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UVector32::~UVector32() */

void __thiscall icu_76_godot::UVector32::~UVector32(UVector32 *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UVector32_00100968;
  uprv_free_76_godot(*(undefined8 *)(this + 0x18));
  *(undefined8 *)(this + 0x18) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UVector32::getStaticClassID() */

undefined1 * icu_76_godot::UVector32::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UVector32::UVector32(UErrorCode&) */

void __thiscall icu_76_godot::UVector32::UVector32(UVector32 *this,UErrorCode *param_1)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__UVector32_00100968;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  lVar1 = uprv_malloc_76_godot(0x20);
  *(long *)(this + 0x18) = lVar1;
  if (lVar1 == 0) {
    *(undefined4 *)param_1 = 7;
  }
  else {
    *(undefined4 *)(this + 0xc) = 8;
  }
  return;
}



/* icu_76_godot::UVector32::UVector32(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector32::UVector32(UVector32 *this,int param_1,UErrorCode *param_2)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__UVector32_00100968;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (param_1 < 1) {
    lVar1 = 0x20;
    param_1 = 8;
  }
  else {
    lVar1 = (long)param_1 << 2;
    if (0x1fffffff < param_1) {
      param_1 = uprv_min_76_godot(8,0);
      lVar1 = (long)param_1 << 2;
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



/* icu_76_godot::UVector32::_init(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector32::_init(UVector32 *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x10);
  if (param_1 < 1) {
    if (iVar1 < 1) {
      lVar3 = 0x20;
      param_1 = 8;
    }
    else {
      param_1 = 8;
      if (iVar1 < 9) {
        param_1 = iVar1;
      }
      lVar3 = (long)param_1 << 2;
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
    lVar3 = (long)param_1 << 2;
    if (0x1fffffff < param_1) {
      param_1 = uprv_min_76_godot(8);
      lVar3 = (long)param_1 << 2;
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



/* icu_76_godot::UVector32::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UVector32 const&) const */

undefined8 __thiscall icu_76_godot::UVector32::operator==(UVector32 *this,UVector32 *param_1)

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
      if (*(int *)(*(long *)(this + 0x18) + lVar2) != *(int *)(*(long *)(param_1 + 0x18) + lVar2)) {
        return 0;
      }
      lVar2 = lVar2 + 4;
    } while ((long)iVar1 * 4 != lVar2);
  }
  return 1;
}



/* icu_76_godot::UVector32::setElementAt(int, int) */

void __thiscall icu_76_godot::UVector32::setElementAt(UVector32 *this,int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(this + 8))) {
    *(int *)(*(long *)(this + 0x18) + (long)param_2 * 4) = param_1;
  }
  return;
}



/* icu_76_godot::UVector32::containsAll(icu_76_godot::UVector32 const&) const */

undefined8 __thiscall icu_76_godot::UVector32::containsAll(UVector32 *this,UVector32 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 8) < 1) {
    return 1;
  }
  piVar5 = *(int **)(param_1 + 0x18);
  piVar1 = piVar5 + *(int *)(param_1 + 8);
  if (0 < *(int *)(this + 8)) {
    piVar2 = *(int **)(this + 0x18);
    iVar4 = *piVar5;
    piVar3 = piVar2;
    do {
      while (*piVar3 == iVar4) {
        piVar5 = piVar5 + 1;
        if (piVar5 == piVar1) {
          return 1;
        }
        piVar3 = piVar2;
        iVar4 = *piVar5;
      }
      piVar3 = piVar3 + 1;
    } while (piVar2 + *(int *)(this + 8) != piVar3);
  }
  return 0;
}



/* icu_76_godot::UVector32::containsNone(icu_76_godot::UVector32 const&) const */

undefined8 __thiscall icu_76_godot::UVector32::containsNone(UVector32 *this,UVector32 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (0 < *(int *)(param_1 + 8)) {
    piVar5 = *(int **)(param_1 + 0x18);
    piVar1 = piVar5 + *(int *)(param_1 + 8);
    do {
      if (0 < *(int *)(this + 8)) {
        piVar2 = *(int **)(this + 0x18);
        iVar4 = *piVar5;
        piVar3 = piVar2;
        while( true ) {
          do {
            if (iVar4 == *piVar3) {
              return 0;
            }
            piVar3 = piVar3 + 1;
          } while (piVar2 + *(int *)(this + 8) != piVar3);
          piVar5 = piVar5 + 1;
          if (piVar5 == piVar1) break;
          iVar4 = *piVar5;
          piVar3 = piVar2;
        }
        return 1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
  }
  return 1;
}



/* icu_76_godot::UVector32::removeAll(icu_76_godot::UVector32 const&) */

undefined8 __thiscall icu_76_godot::UVector32::removeAll(UVector32 *this,UVector32 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 8) < 1) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  lVar7 = 0;
  uVar6 = 0;
  while( true ) {
    iVar5 = *(int *)(this + 8);
    if (0 < iVar5) break;
LAB_001003df:
    lVar7 = lVar7 + 1;
    if (*(int *)(param_1 + 8) <= (int)lVar7) {
      return uVar6;
    }
  }
  lVar2 = *(long *)(this + 0x18);
  lVar3 = 0;
LAB_001003a9:
  if (*(int *)(lVar1 + lVar7 * 4) != *(int *)(lVar2 + lVar3 * 4)) goto LAB_001003a0;
  iVar5 = iVar5 + -1;
  lVar4 = (long)(int)lVar3;
  if ((int)lVar3 < iVar5) {
    do {
      *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar2 + 4 + lVar4 * 4);
      lVar4 = lVar4 + 1;
      iVar5 = *(int *)(this + 8) + -1;
    } while ((int)lVar4 < iVar5);
  }
  *(int *)(this + 8) = iVar5;
  uVar6 = 1;
  goto LAB_001003df;
LAB_001003a0:
  lVar3 = lVar3 + 1;
  if (iVar5 == lVar3) goto LAB_001003df;
  goto LAB_001003a9;
}



/* icu_76_godot::UVector32::retainAll(icu_76_godot::UVector32 const&) */

undefined8 __thiscall icu_76_godot::UVector32::retainAll(UVector32 *this,UVector32 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(int *)(this + 8) + -1 < 0) {
    return 0;
  }
  lVar1 = *(long *)(this + 0x18);
  lVar5 = (long)(*(int *)(this + 8) + -1);
  uVar6 = 0;
  do {
    iVar4 = (int)lVar5;
    if (0 < *(int *)(param_1 + 8)) {
      lVar2 = 0;
      do {
        if (*(int *)(lVar1 + lVar5 * 4) == *(int *)(*(long *)(param_1 + 0x18) + lVar2 * 4))
        goto joined_r0x0010044d;
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 8) != lVar2);
    }
    iVar3 = *(int *)(this + 8) + -1;
    lVar2 = lVar5;
    if (iVar4 < iVar3) {
      do {
        *(undefined4 *)(lVar1 + lVar2 * 4) = *(undefined4 *)(lVar1 + 4 + lVar2 * 4);
        lVar2 = lVar2 + 1;
        iVar3 = *(int *)(this + 8) + -1;
      } while ((int)lVar2 < iVar3);
    }
    *(int *)(this + 8) = iVar3;
    uVar6 = 1;
joined_r0x0010044d:
    lVar5 = lVar5 + -1;
    if (iVar4 + -1 < 0) {
      return uVar6;
    }
  } while( true );
}



/* icu_76_godot::UVector32::removeElementAt(int) */

void __thiscall icu_76_godot::UVector32::removeElementAt(UVector32 *this,int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (-1 < param_1) {
    iVar2 = *(int *)(this + 8) + -1;
    if (param_1 < iVar2) {
      lVar1 = *(long *)(this + 0x18);
      lVar3 = (long)param_1;
      do {
        *(undefined4 *)(lVar1 + lVar3 * 4) = *(undefined4 *)(lVar1 + 4 + lVar3 * 4);
        lVar3 = lVar3 + 1;
        iVar2 = *(int *)(this + 8) + -1;
      } while ((int)lVar3 < iVar2);
    }
    *(int *)(this + 8) = iVar2;
  }
  return;
}



/* icu_76_godot::UVector32::removeAllElements() */

void __thiscall icu_76_godot::UVector32::removeAllElements(UVector32 *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* icu_76_godot::UVector32::equals(icu_76_godot::UVector32 const&) const */

undefined8 __thiscall icu_76_godot::UVector32::equals(UVector32 *this,UVector32 *param_1)

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
      if (*(int *)(*(long *)(this + 0x18) + lVar2) != *(int *)(*(long *)(param_1 + 0x18) + lVar2)) {
        return 0;
      }
      lVar2 = lVar2 + 4;
    } while ((long)iVar1 * 4 != lVar2);
  }
  return 1;
}



/* icu_76_godot::UVector32::indexOf(int, int) const */

long __thiscall icu_76_godot::UVector32::indexOf(UVector32 *this,int param_1,int param_2)

{
  long lVar1;
  
  if (param_2 < *(int *)(this + 8)) {
    lVar1 = (long)param_2;
    do {
      if (*(int *)(*(long *)(this + 0x18) + lVar1 * 4) == param_1) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < *(int *)(this + 8));
  }
  return 0xffffffff;
}



/* icu_76_godot::UVector32::expandCapacity(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::UVector32::expandCapacity(UVector32 *this,int param_1,UErrorCode *param_2)

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
      if (0x3fffffff < iVar1) goto LAB_00100608;
      if (param_1 <= iVar1 * 2) {
        param_1 = iVar1 * 2;
      }
    }
    else {
      if (iVar2 < param_1) {
        *(undefined4 *)param_2 = 0xf;
        return 0;
      }
      if (0x3fffffff < iVar1) goto LAB_00100608;
      iVar4 = iVar1 * 2;
      if (iVar1 * 2 < param_1) {
        iVar4 = param_1;
      }
      param_1 = iVar4;
      if (iVar2 < iVar4) {
        param_1 = iVar2;
      }
    }
    if (param_1 < 0x20000000) {
      lVar3 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x18),(long)param_1 << 2);
      if (lVar3 == 0) {
        *(undefined4 *)param_2 = 7;
        return 0;
      }
      *(long *)(this + 0x18) = lVar3;
      *(int *)(this + 0xc) = param_1;
      return 1;
    }
  }
LAB_00100608:
  *(undefined4 *)param_2 = 1;
  return 0;
}



/* icu_76_godot::UVector32::insertElementAt(int, int, UErrorCode&) */

void __thiscall
icu_76_godot::UVector32::insertElementAt
          (UVector32 *this,int param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  
  if ((-1 < param_2) && (iVar1 = *(int *)(this + 8), param_2 <= iVar1)) {
    if (*(int *)(this + 0xc) < iVar1 + 1) {
      cVar3 = expandCapacity(this,iVar1 + 1,param_3);
      if (cVar3 == '\0') {
        return;
      }
      iVar1 = *(int *)(this + 8);
    }
    lVar2 = *(long *)(this + 0x18);
    if (param_2 < iVar1) {
      uVar4 = (ulong)((iVar1 - param_2) - 1);
      lVar5 = uVar4 * -4;
      memmove((void *)(lVar2 + (long)iVar1 * 4 + lVar5),
              (void *)((long)iVar1 * 4 + -4 + lVar5 + lVar2),uVar4 * 4 + 4);
    }
    *(int *)(lVar2 + (long)param_2 * 4) = param_1;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  return;
}



/* icu_76_godot::UVector32::setMaxCapacity(int) */

void __thiscall icu_76_godot::UVector32::setMaxCapacity(UVector32 *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  if (-1 < param_1) {
    if (((param_1 < 0x20000000) && (*(int *)(this + 0x10) = param_1, param_1 < *(int *)(this + 0xc))
        ) && (param_1 != 0)) {
      lVar2 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x18),(long)param_1 << 2);
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



/* icu_76_godot::UVector32::setSize(int) */

void __thiscall icu_76_godot::UVector32::setSize(UVector32 *this,int param_1)

{
  int iVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) goto LAB_0010077e;
  iVar1 = *(int *)(this + 8);
  if (iVar1 < param_1) {
    local_24 = 0;
    if (*(int *)(this + 0xc) < param_1) {
      cVar2 = expandCapacity(this,param_1,(UErrorCode *)&local_24);
      if (cVar2 == '\0') goto LAB_0010077e;
      iVar1 = *(int *)(this + 8);
      if (param_1 <= iVar1) goto LAB_0010077b;
    }
    memset((void *)(*(long *)(this + 0x18) + (long)iVar1 * 4),0,
           (ulong)(uint)((param_1 + -1) - iVar1) * 4 + 4);
  }
LAB_0010077b:
  *(int *)(this + 8) = param_1;
LAB_0010077e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UVector32::assign(icu_76_godot::UVector32 const&, UErrorCode&) */

void __thiscall
icu_76_godot::UVector32::assign(UVector32 *this,UVector32 *param_1,UErrorCode *param_2)

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
  if (*(int *)(param_1 + 8) < 1) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x18);
  lVar4 = 0;
  do {
    *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar1 + lVar4 * 4);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < *(int *)(param_1 + 8));
  return;
}



/* icu_76_godot::UVector32::sortedInsert(int, UErrorCode&) */

void __thiscall
icu_76_godot::UVector32::sortedInsert(UVector32 *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar1 = *(int *)(this + 8);
  iVar8 = iVar1;
  while (iVar5 = iVar8, iVar7 != iVar5) {
    iVar8 = (iVar7 + iVar5) / 2;
    if (*(int *)(*(long *)(this + 0x18) + (long)iVar8 * 4) <= param_1) {
      iVar7 = iVar8 + 1;
      iVar8 = iVar5;
    }
  }
  iVar8 = iVar1 + 1;
  if ((iVar8 < 0) || (*(int *)(this + 0xc) < iVar8)) {
    cVar3 = expandCapacity(this,iVar8,param_2);
    if (cVar3 == '\0') {
      return;
    }
    iVar1 = *(int *)(this + 8);
  }
  lVar2 = *(long *)(this + 0x18);
  if (iVar7 < iVar1) {
    uVar6 = (ulong)((iVar1 - iVar7) - 1);
    lVar4 = uVar6 * -4;
    memmove((void *)(lVar2 + (long)iVar1 * 4 + lVar4),(void *)((long)iVar1 * 4 + -4 + lVar4 + lVar2)
            ,uVar6 * 4 + 4);
  }
  *(int *)(lVar2 + (long)iVar7 * 4) = param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


