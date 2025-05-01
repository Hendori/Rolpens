
/* icu_76_godot::UVector::getDynamicClassID() const */

undefined1 * icu_76_godot::UVector::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::sortComparator(void const*, void const*, void const*) */

void icu_76_godot::sortComparator(void *param_1,void *param_2,void *param_3)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010001d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**param_1)(*param_2,*param_3);
  return;
}



/* icu_76_godot::sortiComparator(void const*, void const*, void const*) */

ulong icu_76_godot::sortiComparator(void *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = 0xffffffff;
                    /* WARNING: Load size is inaccurate */
  if (*param_3 <= *param_2) {
    uVar1 = (ulong)(*param_2 != *param_3);
  }
  return uVar1;
}



/* icu_76_godot::UVector::getStaticClassID() */

undefined1 * icu_76_godot::UVector::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UVector::UVector(UErrorCode&) */

void __thiscall icu_76_godot::UVector::UVector(UVector *this,UErrorCode *param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__UVector_001011a8;
  iVar1 = *(int *)param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  if (iVar1 < 1) {
    lVar2 = uprv_malloc_76_godot(0x40);
    *(long *)(this + 0x10) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)param_1 = 7;
    }
    else {
      *(undefined4 *)(this + 0xc) = 8;
    }
    return;
  }
  return;
}



/* icu_76_godot::UVector::UVector(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector::UVector(UVector *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__UVector_001011a8;
  iVar1 = *(int *)param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  if (iVar1 < 1) {
    if (param_1 - 1U < 0xfffffff) {
      lVar2 = (long)param_1 << 3;
    }
    else {
      lVar2 = 0x40;
      param_1 = 8;
    }
    lVar2 = uprv_malloc_76_godot(lVar2);
    *(long *)(this + 0x10) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)param_2 = 7;
    }
    else {
      *(int *)(this + 0xc) = param_1;
    }
    return;
  }
  return;
}



/* icu_76_godot::UVector::UVector(void (*)(void*), signed char (*)(UElement, UElement), UErrorCode&)
    */

void __thiscall
icu_76_godot::UVector::UVector
          (UVector *this,_func_void_void_ptr *param_1,_func_signed_UElement_UElement *param_2,
          UErrorCode *param_3)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__UVector_001011a8;
  iVar1 = *(int *)param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(_func_void_void_ptr **)(this + 0x18) = param_1;
  *(_func_signed_UElement_UElement **)(this + 0x20) = param_2;
  if (iVar1 < 1) {
    lVar2 = uprv_malloc_76_godot(0x40);
    *(long *)(this + 0x10) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)param_3 = 7;
    }
    else {
      *(undefined4 *)(this + 0xc) = 8;
    }
    return;
  }
  return;
}



/* icu_76_godot::UVector::UVector(void (*)(void*), signed char (*)(UElement, UElement), int,
   UErrorCode&) */

void __thiscall
icu_76_godot::UVector::UVector
          (UVector *this,_func_void_void_ptr *param_1,_func_signed_UElement_UElement *param_2,
          int param_3,UErrorCode *param_4)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__UVector_001011a8;
  iVar1 = *(int *)param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(_func_void_void_ptr **)(this + 0x18) = param_1;
  *(_func_signed_UElement_UElement **)(this + 0x20) = param_2;
  if (iVar1 < 1) {
    if (param_3 - 1U < 0xfffffff) {
      lVar2 = (long)param_3 << 3;
    }
    else {
      lVar2 = 0x40;
      param_3 = 8;
    }
    lVar2 = uprv_malloc_76_godot(lVar2);
    *(long *)(this + 0x10) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)param_4 = 7;
    }
    else {
      *(int *)(this + 0xc) = param_3;
    }
    return;
  }
  return;
}



/* icu_76_godot::UVector::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::UVector const&) const */

undefined8 __thiscall icu_76_godot::UVector::operator==(UVector *this,UVector *param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  
  if (*(int *)(this + 8) != *(int *)(param_1 + 8)) {
    return 0;
  }
  pcVar2 = *(code **)(this + 0x20);
  if ((pcVar2 != (code *)0x0) && (0 < *(int *)(this + 8))) {
    lVar3 = 0;
    while( true ) {
      cVar1 = (*pcVar2)(*(undefined8 *)(*(long *)(this + 0x10) + lVar3 * 8),
                        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8));
      if (cVar1 == '\0') {
        return 0;
      }
      lVar3 = lVar3 + 1;
      if (*(int *)(this + 8) <= (int)lVar3) break;
      pcVar2 = *(code **)(this + 0x20);
    }
  }
  return 1;
}



/* icu_76_godot::UVector::addElement(void*, UErrorCode&) */

void __thiscall icu_76_godot::UVector::addElement(UVector *this,void *param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(this + 8);
  iVar4 = iVar1 + 1;
  if (-1 < iVar4) {
    iVar2 = *(int *)(this + 0xc);
    if (iVar4 <= iVar2) {
      lVar3 = *(long *)(this + 0x10);
LAB_001002d3:
      *(int *)(this + 8) = iVar4;
      *(void **)(lVar3 + (long)iVar1 * 8) = param_1;
      return;
    }
    if (iVar2 < 0x40000000) {
      if (iVar4 <= iVar2 * 2) {
        iVar4 = iVar2 * 2;
      }
      if (iVar4 < 0x10000000) {
        lVar3 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x10),(long)iVar4 << 3);
        if (lVar3 == 0) {
          *(undefined4 *)param_2 = 7;
          return;
        }
        iVar1 = *(int *)(this + 8);
        *(long *)(this + 0x10) = lVar3;
        *(int *)(this + 0xc) = iVar4;
        iVar4 = iVar1 + 1;
        goto LAB_001002d3;
      }
    }
  }
  *(undefined4 *)param_2 = 1;
  return;
}



/* icu_76_godot::UVector::adoptElement(void*, UErrorCode&) */

void __thiscall icu_76_godot::UVector::adoptElement(UVector *this,void *param_1,UErrorCode *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 8);
  if (*(int *)param_2 < 1) {
    iVar4 = iVar1 + 1;
    if (-1 < iVar4) {
      iVar2 = *(int *)(this + 0xc);
      if (iVar4 <= iVar2) {
        lVar3 = *(long *)(this + 0x10);
LAB_00100394:
        *(int *)(this + 8) = iVar4;
        *(void **)(lVar3 + (long)iVar1 * 8) = param_1;
        return;
      }
      if (iVar2 < 0x40000000) {
        if (iVar4 <= iVar2 * 2) {
          iVar4 = iVar2 * 2;
        }
        if (iVar4 < 0x10000000) {
          lVar3 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x10),(long)iVar4 << 3);
          if (lVar3 == 0) {
            *(undefined4 *)param_2 = 7;
            goto LAB_001003be;
          }
          iVar1 = *(int *)(this + 8);
          *(long *)(this + 0x10) = lVar3;
          *(int *)(this + 0xc) = iVar4;
          iVar4 = iVar1 + 1;
          goto LAB_00100394;
        }
      }
    }
    *(undefined4 *)param_2 = 1;
  }
LAB_001003be:
                    /* WARNING: Could not recover jumptable at 0x001003cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x18))(param_1);
  return;
}



/* icu_76_godot::UVector::addElement(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector::addElement(UVector *this,int param_1,UErrorCode *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar2 = *(int *)(this + 8);
  iVar5 = iVar2 + 1;
  if (-1 < iVar5) {
    iVar3 = *(int *)(this + 0xc);
    if (iVar5 <= iVar3) {
      lVar4 = *(long *)(this + 0x10);
LAB_00100453:
      piVar1 = (int *)(lVar4 + (long)iVar2 * 8);
      piVar1[0] = 0;
      piVar1[1] = 0;
      *piVar1 = param_1;
      *(int *)(this + 8) = iVar5;
      return;
    }
    if (iVar3 < 0x40000000) {
      if (iVar5 <= iVar3 * 2) {
        iVar5 = iVar3 * 2;
      }
      if (iVar5 < 0x10000000) {
        lVar4 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x10),(long)iVar5 << 3);
        if (lVar4 == 0) {
          *(undefined4 *)param_2 = 7;
          return;
        }
        iVar2 = *(int *)(this + 8);
        *(long *)(this + 0x10) = lVar4;
        *(int *)(this + 0xc) = iVar5;
        iVar5 = iVar2 + 1;
        goto LAB_00100453;
      }
    }
  }
  *(undefined4 *)param_2 = 1;
  return;
}



/* icu_76_godot::UVector::setElementAt(void*, int) */

void __thiscall icu_76_godot::UVector::setElementAt(UVector *this,void *param_1,int param_2)

{
  long *plVar1;
  
  if ((param_2 < 0) || (*(int *)(this + 8) <= param_2)) {
    if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this + 0x18))(param_1);
      return;
    }
  }
  else {
    plVar1 = (long *)(*(long *)(this + 0x10) + (long)param_2 * 8);
    if ((*plVar1 != 0) && (*(code **)(this + 0x18) != (code *)0x0)) {
      (**(code **)(this + 0x18))();
      plVar1 = (long *)(*(long *)(this + 0x10) + (long)param_2 * 8);
    }
    *plVar1 = (long)param_1;
  }
  return;
}



/* icu_76_godot::UVector::setElementAt(int, int) */

void __thiscall icu_76_godot::UVector::setElementAt(UVector *this,int param_1,int param_2)

{
  int *piVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(this + 8))) {
    piVar1 = (int *)(*(long *)(this + 0x10) + (long)param_2 * 8);
    piVar1[0] = 0;
    piVar1[1] = 0;
    *piVar1 = param_1;
  }
  return;
}



/* icu_76_godot::UVector::insertElementAt(int, int, UErrorCode&) */

void __thiscall
icu_76_godot::UVector::insertElementAt(UVector *this,int param_1,int param_2,UErrorCode *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (0 < *(int *)param_3) {
    return;
  }
  iVar3 = *(int *)(this + 8) + 1;
  if (iVar3 < 0) goto LAB_00100680;
  iVar2 = *(int *)(this + 0xc);
  if (iVar2 < iVar3) {
    if (0x3fffffff < iVar2) goto LAB_00100680;
    if (iVar3 <= iVar2 * 2) {
      iVar3 = iVar2 * 2;
    }
    if (0xfffffff < iVar3) goto LAB_00100680;
    lVar4 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x10),(long)iVar3 << 3);
    if (lVar4 == 0) {
      *(undefined4 *)param_3 = 7;
      return;
    }
    *(long *)(this + 0x10) = lVar4;
    *(int *)(this + 0xc) = iVar3;
  }
  if ((-1 < param_2) && (iVar3 = *(int *)(this + 8), param_2 <= iVar3)) {
    lVar4 = *(long *)(this + 0x10);
    if (param_2 < iVar3) {
      uVar5 = (ulong)((iVar3 - param_2) - 1);
      lVar6 = uVar5 * -8;
      memmove((void *)(lVar6 + (long)iVar3 * 8 + lVar4),
              (void *)((long)iVar3 * 8 + -8 + lVar6 + lVar4),uVar5 * 8 + 8);
    }
    piVar1 = (int *)(lVar4 + (long)param_2 * 8);
    piVar1[0] = 0;
    piVar1[1] = 0;
    *piVar1 = param_1;
    *(int *)(this + 8) = iVar3 + 1;
    return;
  }
LAB_00100680:
  *(undefined4 *)param_3 = 1;
  return;
}



/* icu_76_godot::UVector::elementAt(int) const */

undefined8 __thiscall icu_76_godot::UVector::elementAt(UVector *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x10) + (long)param_1 * 8);
  }
  return uVar1;
}



/* icu_76_godot::UVector::elementAti(int) const */

undefined4 __thiscall icu_76_godot::UVector::elementAti(UVector *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 8))) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + (long)param_1 * 8);
  }
  return uVar1;
}



/* icu_76_godot::UVector::removeAllElements() */

void __thiscall icu_76_godot::UVector::removeAllElements(UVector *this)

{
  long lVar1;
  
  if ((*(long *)(this + 0x18) != 0) && (0 < *(int *)(this + 8))) {
    lVar1 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x10) + lVar1 * 8) != 0) {
        (**(code **)(this + 0x18))();
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < *(int *)(this + 8));
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* icu_76_godot::UVector::~UVector() */

void __thiscall icu_76_godot::UVector::~UVector(UVector *this)

{
  *(undefined ***)this = &PTR__UVector_001011a8;
  removeAllElements(this);
  uprv_free_76_godot(*(undefined8 *)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UVector::~UVector() */

void __thiscall icu_76_godot::UVector::~UVector(UVector *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UVector_001011a8;
  removeAllElements(this);
  uprv_free_76_godot(*(undefined8 *)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UVector::equals(icu_76_godot::UVector const&) const */

undefined8 __thiscall icu_76_godot::UVector::equals(UVector *this,UVector *param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != *(int *)(param_1 + 8)) {
    return 0;
  }
  pcVar3 = *(code **)(this + 0x20);
  if (pcVar3 == (code *)0x0) {
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        if (*(long *)(*(long *)(this + 0x10) + lVar4) !=
            *(long *)(*(long *)(param_1 + 0x10) + lVar4)) {
          return 0;
        }
        lVar4 = lVar4 + 8;
      } while ((long)iVar1 * 8 != lVar4);
    }
  }
  else {
    lVar4 = 0;
    if (0 < iVar1) {
      while( true ) {
        cVar2 = (*pcVar3)(*(long *)(param_1 + 0x10) + lVar4 * 8,
                          *(undefined8 *)(*(long *)(this + 0x10) + lVar4 * 8));
        if (cVar2 == '\0') {
          return 0;
        }
        lVar4 = lVar4 + 1;
        if (*(int *)(this + 8) <= (int)lVar4) break;
        pcVar3 = *(code **)(this + 0x20);
      }
      return 1;
    }
  }
  return 1;
}



/* icu_76_godot::UVector::indexOf(UElement, int, signed char) const */

int __thiscall icu_76_godot::UVector::indexOf(UVector *this,long param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  pcVar4 = *(code **)(this + 0x20);
  iVar2 = *(int *)(this + 8);
  if (pcVar4 == (code *)0x0) {
    if (param_3 < iVar2) {
      lVar7 = *(long *)(this + 0x10);
      lVar5 = (long)param_3 * 8;
      plVar6 = (long *)(lVar7 + lVar5);
      if ((param_4 & 1) != 0) {
        while( true ) {
          if (param_2 == *plVar6) {
            return param_3;
          }
          param_3 = param_3 + 1;
          lVar5 = lVar5 + 8;
          if (param_3 == iVar2) break;
          plVar6 = (long *)(lVar7 + lVar5);
        }
        return -1;
      }
      iVar1 = (int)*plVar6;
      while( true ) {
        if ((int)param_2 == iVar1) {
          return param_3;
        }
        param_3 = param_3 + 1;
        lVar5 = lVar5 + 8;
        if (param_3 == iVar2) break;
        iVar1 = *(int *)(lVar7 + lVar5);
      }
      return -1;
    }
  }
  else if (param_3 < iVar2) {
    lVar7 = (long)param_3 << 3;
    while( true ) {
      cVar3 = (*pcVar4)(param_2,*(undefined8 *)(*(long *)(this + 0x10) + lVar7));
      if (cVar3 != '\0') {
        return param_3;
      }
      param_3 = param_3 + 1;
      lVar7 = lVar7 + 8;
      if (*(int *)(this + 8) <= param_3) break;
      pcVar4 = *(code **)(this + 0x20);
    }
    return -1;
  }
  return -1;
}



/* icu_76_godot::UVector::containsAll(icu_76_godot::UVector const&) const */

undefined8 __thiscall icu_76_godot::UVector::containsAll(UVector *this,UVector *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 8) < 1) {
    return 1;
  }
  lVar2 = 0;
  do {
    iVar1 = indexOf(this,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),0,0);
    if (iVar1 < 0) {
      return 0;
    }
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < *(int *)(param_1 + 8));
  return 1;
}



/* icu_76_godot::UVector::containsNone(icu_76_godot::UVector const&) const */

undefined8 __thiscall icu_76_godot::UVector::containsNone(UVector *this,UVector *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 8) < 1) {
    return 1;
  }
  lVar2 = 0;
  do {
    iVar1 = indexOf(this,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar2 * 8),0,0);
    if (-1 < iVar1) {
      return 0;
    }
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < *(int *)(param_1 + 8));
  return 1;
}



/* icu_76_godot::UVector::indexOf(void*, int) const */

void icu_76_godot::UVector::indexOf(void *param_1,int param_2)

{
  indexOf();
  return;
}



/* icu_76_godot::UVector::indexOf(int, int) const */

void __thiscall icu_76_godot::UVector::indexOf(UVector *this,int param_1,int param_2)

{
  indexOf(this,param_1,param_2,0);
  return;
}



/* icu_76_godot::UVector::ensureCapacity(int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::UVector::ensureCapacity(UVector *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  long lVar2;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if (-1 < param_1) {
    iVar1 = *(int *)(this + 0xc);
    if (param_1 <= iVar1) {
      return 1;
    }
    if (iVar1 < 0x40000000) {
      if (param_1 <= iVar1 * 2) {
        param_1 = iVar1 * 2;
      }
      if (param_1 < 0x10000000) {
        lVar2 = uprv_realloc_76_godot(*(undefined8 *)(this + 0x10),(long)param_1 << 3);
        if (lVar2 == 0) {
          *(undefined4 *)param_2 = 7;
          return 0;
        }
        *(long *)(this + 0x10) = lVar2;
        *(int *)(this + 0xc) = param_1;
        return 1;
      }
    }
    *(undefined4 *)param_2 = 1;
    return 0;
  }
  *(undefined4 *)param_2 = 1;
  return 0;
}



/* icu_76_godot::UVector::insertElementAt(void*, int, UErrorCode&) */

void __thiscall
icu_76_godot::UVector::insertElementAt(UVector *this,void *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  
  cVar3 = ensureCapacity(this,*(int *)(this + 8) + 1,param_3);
  if (cVar3 != '\0') {
    if ((param_2 < 0) || (iVar1 = *(int *)(this + 8), iVar1 < param_2)) {
      *(undefined4 *)param_3 = 1;
      goto LAB_00100b77;
    }
    lVar2 = *(long *)(this + 0x10);
    if (param_2 < iVar1) {
      uVar5 = (ulong)((iVar1 - param_2) - 1);
      lVar4 = uVar5 * -8;
      memmove((void *)((long)iVar1 * 8 + lVar4 + lVar2),
              (void *)((long)iVar1 * 8 + -8 + lVar4 + lVar2),uVar5 * 8 + 8);
    }
    *(void **)(lVar2 + (long)param_2 * 8) = param_1;
    *(int *)(this + 8) = iVar1 + 1;
  }
  if (*(int *)param_3 < 1) {
    return;
  }
LAB_00100b77:
  if (*(code **)(this + 0x18) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this + 0x18))(param_1);
  return;
}



/* icu_76_godot::UVector::toArray(void**) const */

void __thiscall icu_76_godot::UVector::toArray(UVector *this,void **param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 8);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      *(undefined8 *)((long)param_1 + lVar2) = *(undefined8 *)(*(long *)(this + 0x10) + lVar2);
      lVar2 = lVar2 + 8;
    } while ((long)iVar1 * 8 != lVar2);
  }
  return;
}



/* icu_76_godot::UVector::setDeleter(void (*)(void*)) */

undefined8 __thiscall icu_76_godot::UVector::setDeleter(UVector *this,_func_void_void_ptr *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x18);
  *(_func_void_void_ptr **)(this + 0x18) = param_1;
  return uVar1;
}



/* icu_76_godot::UVector::setComparer(signed char (*)(UElement, UElement)) */

undefined8 __thiscall
icu_76_godot::UVector::setComparer(UVector *this,_func_signed_UElement_UElement *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x20);
  *(_func_signed_UElement_UElement **)(this + 0x20) = param_1;
  return uVar1;
}



/* icu_76_godot::UVector::orphanElementAt(int) */

undefined8 __thiscall icu_76_godot::UVector::orphanElementAt(UVector *this,int param_1)

{
  undefined8 *__dest;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((-1 < param_1) && (iVar1 = *(int *)(this + 8), param_1 < iVar1)) {
    __dest = (undefined8 *)(*(long *)(this + 0x10) + (long)param_1 * 8);
    uVar2 = *__dest;
    if (param_1 < iVar1 + -1) {
      memmove(__dest,(void *)(*(long *)(this + 0x10) + 8 + (long)param_1 * 8),
              (ulong)(uint)((iVar1 + -2) - param_1) * 8 + 8);
    }
    *(int *)(this + 8) = iVar1 + -1;
  }
  return uVar2;
}



/* icu_76_godot::UVector::removeElementAt(int) */

void __thiscall icu_76_godot::UVector::removeElementAt(UVector *this,int param_1)

{
  long lVar1;
  
  lVar1 = orphanElementAt(this,param_1);
  if ((lVar1 != 0) && (*(code **)(this + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x18))(lVar1);
    return;
  }
  return;
}



/* icu_76_godot::UVector::removeAll(icu_76_godot::UVector const&) */

undefined8 __thiscall icu_76_godot::UVector::removeAll(UVector *this,UVector *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 8) < 1) {
    return 0;
  }
  lVar3 = 0;
  uVar4 = 0;
  do {
    while (iVar1 = indexOf(this,*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8),0,0),
          iVar1 < 0) {
      lVar3 = lVar3 + 1;
      if (*(int *)(param_1 + 8) <= (int)lVar3) {
        return uVar4;
      }
    }
    lVar2 = orphanElementAt(this,iVar1);
    if ((lVar2 != 0) && (*(code **)(this + 0x18) != (code *)0x0)) {
      (**(code **)(this + 0x18))(lVar2);
    }
    uVar4 = 1;
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < *(int *)(param_1 + 8));
  return 1;
}



/* icu_76_godot::UVector::setSize(int, UErrorCode&) */

void __thiscall icu_76_godot::UVector::setSize(UVector *this,int param_1,UErrorCode *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  cVar2 = ensureCapacity(this,param_1,param_2);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(this + 8);
    uVar5 = (ulong)iVar1;
    if (iVar1 < param_1) {
      memset((void *)(*(long *)(this + 0x10) + uVar5 * 8),0,
             (ulong)(uint)((param_1 + -1) - iVar1) * 8 + 8);
    }
    else {
      while (uVar4 = (int)uVar5 - 1, param_1 <= (int)uVar4) {
        while( true ) {
          uVar5 = (ulong)uVar4;
          lVar3 = orphanElementAt(this,uVar4);
          if ((lVar3 == 0) || (*(code **)(this + 0x18) == (code *)0x0)) break;
          (**(code **)(this + 0x18))(lVar3);
          uVar4 = uVar4 - 1;
          if ((int)uVar4 < param_1) goto LAB_00100d7d;
        }
      }
    }
LAB_00100d7d:
    *(int *)(this + 8) = param_1;
  }
  return;
}



/* icu_76_godot::UVector::assign(icu_76_godot::UVector const&, void (*)(UElement*, UElement*),
   UErrorCode&) */

void __thiscall
icu_76_godot::UVector::assign
          (UVector *this,UVector *param_1,_func_void_UElement_ptr_UElement_ptr *param_2,
          UErrorCode *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  
  cVar2 = ensureCapacity(this,*(int *)(param_1 + 8),param_3);
  if (cVar2 != '\0') {
    setSize(this,*(int *)(param_1 + 8),param_3);
    if ((*(int *)param_3 < 1) && (0 < *(int *)(param_1 + 8))) {
      lVar4 = 0;
      do {
        lVar1 = lVar4 * 8;
        plVar3 = (long *)(*(long *)(this + 0x10) + lVar1);
        if ((*plVar3 != 0) && (*(code **)(this + 0x18) != (code *)0x0)) {
          (**(code **)(this + 0x18))(*plVar3);
          plVar3 = (long *)(*(long *)(this + 0x10) + lVar1);
        }
        lVar4 = lVar4 + 1;
        (*param_2)((UElement *)plVar3,(UElement *)(*(long *)(param_1 + 0x10) + lVar1));
      } while ((int)lVar4 < *(int *)(param_1 + 8));
      return;
    }
  }
  return;
}



/* icu_76_godot::UVector::retainAll(icu_76_godot::UVector const&) */

undefined8 __thiscall icu_76_godot::UVector::retainAll(UVector *this,UVector *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(this + 8) + -1;
  if (iVar3 < 0) {
    return 0;
  }
  uVar5 = 0;
  lVar4 = (long)iVar3 << 3;
  do {
    while (iVar1 = indexOf(param_1,*(undefined8 *)(*(long *)(this + 0x10) + lVar4),0,0), -1 < iVar1)
    {
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -8;
      if (iVar3 == -1) {
        return uVar5;
      }
    }
    lVar2 = orphanElementAt(this,iVar3);
    if ((lVar2 != 0) && (*(code **)(this + 0x18) != (code *)0x0)) {
      (**(code **)(this + 0x18))(lVar2);
    }
    iVar3 = iVar3 + -1;
    uVar5 = 1;
    lVar4 = lVar4 + -8;
  } while (iVar3 != -1);
  return 1;
}



/* icu_76_godot::UVector::removeElement(void*) */

undefined8 __thiscall icu_76_godot::UVector::removeElement(UVector *this,void *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = indexOf(this,param_1,0,1);
  if (iVar1 < 0) {
    return 0;
  }
  lVar2 = orphanElementAt(this,iVar1);
  if ((lVar2 != 0) && (*(code **)(this + 0x18) != (code *)0x0)) {
    (**(code **)(this + 0x18))(lVar2);
  }
  return 1;
}



/* icu_76_godot::UVector::sortedInsert(UElement, int (*)(UElement, UElement), UErrorCode&) */

void __thiscall
icu_76_godot::UVector::sortedInsert
          (UVector *this,undefined8 param_2,code *param_3,UErrorCode *param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  cVar2 = ensureCapacity(this,*(int *)(this + 8) + 1,param_4);
  if (cVar2 == '\0') {
    if (*(code **)(this + 0x18) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0010105a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x18))(param_2);
    return;
  }
  puVar4 = *(undefined8 **)(this + 0x10);
  iVar9 = *(int *)(this + 8);
  if (iVar9 != 0) {
    iVar8 = 0;
    do {
      iVar6 = (iVar8 + iVar9) / 2;
      iVar3 = (*param_3)(puVar4[iVar6],param_2);
      if (iVar3 < 1) {
        iVar8 = iVar6 + 1;
        if (iVar8 == iVar9) goto LAB_00100fd3;
      }
      else {
        iVar9 = iVar6;
        if (iVar8 == iVar6) goto LAB_00100fd3;
      }
      puVar4 = *(undefined8 **)(this + 0x10);
    } while( true );
  }
  iVar9 = 0;
LAB_00101020:
  *puVar4 = param_2;
  *(int *)(this + 8) = iVar9 + 1;
  return;
LAB_00100fd3:
  iVar9 = *(int *)(this + 8);
  lVar1 = *(long *)(this + 0x10);
  if (iVar8 < iVar9) {
    uVar5 = (ulong)((iVar9 - iVar8) - 1);
    lVar7 = uVar5 * -8;
    memmove((void *)(lVar7 + (long)iVar9 * 8 + lVar1),(void *)((long)iVar9 * 8 + -8 + lVar7 + lVar1)
            ,uVar5 * 8 + 8);
    puVar4 = (undefined8 *)(lVar1 + (long)iVar8 * 8);
  }
  else {
    puVar4 = (undefined8 *)(lVar1 + (long)iVar8 * 8);
  }
  goto LAB_00101020;
}



/* icu_76_godot::UVector::sortedInsert(void*, int (*)(UElement, UElement), UErrorCode&) */

void icu_76_godot::UVector::sortedInsert
               (void *param_1,_func_int_UElement_UElement *param_2,UErrorCode *param_3)

{
  sortedInsert();
  return;
}



/* icu_76_godot::UVector::sortedInsert(int, int (*)(UElement, UElement), UErrorCode&) */

void icu_76_godot::UVector::sortedInsert
               (int param_1,_func_int_UElement_UElement *param_2,UErrorCode *param_3)

{
  sortedInsert((UVector *)param_1,(ulong)param_2 & 0xffffffff);
  return;
}



/* icu_76_godot::UVector::sorti(UErrorCode&) */

void __thiscall icu_76_godot::UVector::sorti(UVector *this,UErrorCode *param_1)

{
  if (0 < *(int *)param_1) {
    return;
  }
  uprv_sortArray_76_godot
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 8),8,sortiComparator,0,0,param_1);
  return;
}



/* icu_76_godot::UVector::sort(int (*)(UElement, UElement), UErrorCode&) */

undefined1  [16] __thiscall
icu_76_godot::UVector::sort(UVector *this,_func_int_UElement_UElement *param_1,UErrorCode *param_2)

{
  undefined1 auVar1 [16];
  undefined8 in_RAX;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  _func_int_UElement_UElement *local_10 [2];
  
  if (0 < *(int *)param_2) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = in_RAX;
    return auVar2;
  }
  local_10[0] = param_1;
  uprv_sortArray_76_godot
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 8),8,sortComparator,local_10,0);
  auVar1._8_8_ = uStack_20;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* icu_76_godot::UVector::sortWithUComparator(int (*)(void const*, void const*, void const*), void
   const*, UErrorCode&) */

void __thiscall
icu_76_godot::UVector::sortWithUComparator
          (UVector *this,_func_int_void_ptr_void_ptr_void_ptr *param_1,void *param_2,
          UErrorCode *param_3)

{
  if (0 < *(int *)param_3) {
    return;
  }
  uprv_sortArray_76_godot
            (*(undefined8 *)(this + 0x10),*(undefined4 *)(this + 8),8,param_1,param_2,1,param_3);
  return;
}


