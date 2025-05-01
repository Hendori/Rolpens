
/* icu_76_godot::RBBIDataWrapper::isDataVersionAcceptable(unsigned char const*) */

bool icu_76_godot::RBBIDataWrapper::isDataVersionAcceptable(uchar *param_1)

{
  return *param_1 == '\x06';
}



/* icu_76_godot::RBBIDataWrapper::init0() */

undefined4 __thiscall icu_76_godot::RBBIDataWrapper::init0(RBBIDataWrapper *this)

{
  undefined4 uVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  LOCK();
  uVar1 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(this + 0x38) = 0;
  UNLOCK();
  this[0x88] = (RBBIDataWrapper)0x1;
  return uVar1;
}



/* icu_76_godot::RBBIDataWrapper::init(icu_76_godot::RBBIDataHeader const*, UErrorCode&) */

void __thiscall
icu_76_godot::RBBIDataWrapper::init
          (RBBIDataWrapper *this,RBBIDataHeader *param_1,UErrorCode *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  UnicodeString aUStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_2) goto LAB_0010008f;
  iVar2 = *(int *)param_1;
  *(RBBIDataHeader **)this = param_1;
  if ((iVar2 == 0xb1a0) && (param_1[4] == (RBBIDataHeader)0x6)) {
    this[0x88] = (RBBIDataWrapper)0x0;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(RBBIDataHeader **)(this + 8) = param_1 + *(uint *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(RBBIDataHeader **)(this + 0x10) = param_1 + *(uint *)(param_1 + 0x18);
    }
    uVar4 = ucptrie_openFromBinary_76_godot
                      (0,0xffffffff,param_1 + *(uint *)(param_1 + 0x20),
                       *(undefined4 *)(param_1 + 0x24),0,param_2);
    iVar2 = *(int *)param_2;
    *(undefined8 *)(this + 0x30) = uVar4;
    if (0 < iVar2) goto LAB_0010008f;
    uVar3 = ucptrie_getValueWidth_76_godot(uVar4);
    if ((uVar3 & 0xfffffffd) == 0) {
      uVar3 = *(uint *)(*(long *)this + 0x28);
      uVar1 = *(undefined4 *)(*(long *)this + 0x2c);
      *(RBBIDataHeader **)(this + 0x18) = param_1 + uVar3;
      icu_76_godot::UnicodeString::fromUTF8(aUStack_68,param_1 + uVar3,uVar1);
      icu_76_godot::UnicodeString::operator=((UnicodeString *)(this + 0x48),aUStack_68);
      icu_76_godot::UnicodeString::~UnicodeString(aUStack_68);
      *(RBBIDataHeader **)(this + 0x20) = param_1 + *(uint *)(*(long *)this + 0x30);
      *(uint *)(this + 0x28) = *(uint *)(param_1 + 0x34) >> 2;
      LOCK();
      *(undefined4 *)(this + 0x38) = 1;
      UNLOCK();
      goto LAB_0010008f;
    }
  }
  *(undefined4 *)param_2 = 3;
LAB_0010008f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBIDataWrapper::RBBIDataWrapper(icu_76_godot::RBBIDataHeader const*, UErrorCode&)
    */

void __thiscall
icu_76_godot::RBBIDataWrapper::RBBIDataWrapper
          (RBBIDataWrapper *this,RBBIDataHeader *param_1,UErrorCode *param_2)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(code **)(this + 0x48) = udata_close_76_godot;
  *(undefined2 *)(this + 0x50) = 2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  LOCK();
  *(undefined4 *)(this + 0x38) = 0;
  UNLOCK();
  this[0x88] = (RBBIDataWrapper)0x1;
  init(this,param_1,param_2);
  return;
}



/* icu_76_godot::RBBIDataWrapper::RBBIDataWrapper(icu_76_godot::RBBIDataHeader const*,
   icu_76_godot::RBBIDataWrapper::EDontAdopt, UErrorCode&) */

void __thiscall
icu_76_godot::RBBIDataWrapper::RBBIDataWrapper
          (RBBIDataWrapper *this,RBBIDataHeader *param_1,undefined8 param_3,UErrorCode *param_4)

{
  *(code **)(this + 0x48) = udata_close_76_godot;
  *(undefined2 *)(this + 0x50) = 2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  LOCK();
  *(undefined4 *)(this + 0x38) = 0;
  UNLOCK();
  this[0x88] = (RBBIDataWrapper)0x1;
  init(this,param_1,param_4);
  this[0x88] = (RBBIDataWrapper)0x1;
  return;
}



/* icu_76_godot::RBBIDataWrapper::RBBIDataWrapper(UDataMemory*, UErrorCode&) */

ulong __thiscall
icu_76_godot::RBBIDataWrapper::RBBIDataWrapper
          (RBBIDataWrapper *this,UDataMemory *param_1,UErrorCode *param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(code **)(this + 0x48) = udata_close_76_godot;
  *(undefined2 *)(this + 0x50) = 2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  LOCK();
  uVar1 = *(uint *)(this + 0x38);
  *(uint *)(this + 0x38) = 0;
  UNLOCK();
  iVar2 = *(int *)param_2;
  this[0x88] = (RBBIDataWrapper)0x1;
  if (iVar2 < 1) {
    puVar3 = *(ushort **)(param_1 + 8);
    uVar4 = (ulong)*puVar3;
    if ((((*puVar3 < 0x14) || (puVar3[4] != 0)) || (puVar3[6] != 0x7242)) ||
       ((puVar3[7] != 0x206b || ((char)puVar3[8] != '\x06')))) {
      *(undefined4 *)param_2 = 3;
    }
    else {
      uVar4 = init(this,(RBBIDataHeader *)((long)puVar3 + uVar4),param_2);
      *(UDataMemory **)(this + 0x40) = param_1;
    }
    return uVar4;
  }
  return (ulong)uVar1;
}



/* icu_76_godot::RBBIDataWrapper::~RBBIDataWrapper() */

void __thiscall icu_76_godot::RBBIDataWrapper::~RBBIDataWrapper(RBBIDataWrapper *this)

{
  ucptrie_close_76_godot(*(undefined8 *)(this + 0x30));
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(this + 0x40) == 0) {
    if (this[0x88] == (RBBIDataWrapper)0x0) {
      uprv_free_76_godot(*(undefined8 *)this);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x48));
      return;
    }
  }
  else {
    udata_close_76_godot();
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x48));
  return;
}



/* icu_76_godot::RBBIDataWrapper::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::RBBIDataWrapper const&)
   const */

undefined8 __thiscall
icu_76_godot::RBBIDataWrapper::operator==(RBBIDataWrapper *this,RBBIDataWrapper *param_1)

{
  void *__s1;
  void *__s2;
  int iVar1;
  undefined4 extraout_var;
  
  __s1 = *(void **)this;
  __s2 = *(void **)param_1;
  if (__s1 == __s2) {
    return 1;
  }
  if (*(uint *)((long)__s1 + 8) != *(uint *)((long)__s2 + 8)) {
    return 0;
  }
  iVar1 = memcmp(__s1,__s2,(ulong)*(uint *)((long)__s1 + 8));
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



/* icu_76_godot::RBBIDataWrapper::hashCode() */

undefined4 __thiscall icu_76_godot::RBBIDataWrapper::hashCode(RBBIDataWrapper *this)

{
  return *(undefined4 *)(*(long *)this + 0x14);
}



/* icu_76_godot::RBBIDataWrapper::removeReference() */

void icu_76_godot::RBBIDataWrapper::removeReference(void)

{
  UMemory *pUVar1;
  void *in_RSI;
  UMemory *in_RDI;
  
  LOCK();
  pUVar1 = in_RDI + 0x38;
  *(int *)pUVar1 = *(int *)pUVar1 + -1;
  UNLOCK();
  if (*(int *)pUVar1 != 0) {
    return;
  }
  ucptrie_close_76_godot(*(undefined8 *)(in_RDI + 0x30));
  *(undefined8 *)(in_RDI + 0x30) = 0;
  if (*(long *)(in_RDI + 0x40) == 0) {
    if (in_RDI[0x88] == (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)in_RDI);
    }
  }
  else {
    udata_close_76_godot();
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(in_RDI + 0x48));
  icu_76_godot::UMemory::operator_delete(in_RDI,in_RSI);
  return;
}



/* icu_76_godot::RBBIDataWrapper::addReference() */

RBBIDataWrapper * __thiscall icu_76_godot::RBBIDataWrapper::addReference(RBBIDataWrapper *this)

{
  LOCK();
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  UNLOCK();
  return this;
}



/* icu_76_godot::RBBIDataWrapper::getRuleSourceString() const */

RBBIDataWrapper * __thiscall
icu_76_godot::RBBIDataWrapper::getRuleSourceString(RBBIDataWrapper *this)

{
  return this + 0x48;
}



/* icu_76_godot::RBBIDataWrapper::printData() */

void icu_76_godot::RBBIDataWrapper::printData(void)

{
  return;
}



int ubrk_swap_76_godot(long param_1,long param_2,int param_3,long param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *__s;
  long lVar10;
  
  if ((param_5 == (int *)0x0) || (0 < *param_5)) {
    return 0;
  }
  if (((param_1 == 0 || param_2 == 0) || (param_3 < -1)) || ((0 < param_3 && (param_4 == 0)))) {
    *param_5 = 1;
    return 0;
  }
  if (((*(short *)(param_2 + 0xc) != 0x7242) || (*(short *)(param_2 + 0xe) != 0x206b)) ||
     (*(char *)(param_2 + 0x10) != '\x06')) {
    udata_printError_76_godot
              (param_1,
               "ubrk_swap(): data format %02x.%02x.%02x.%02x (format version %02x) is not recognized\n"
               ,*(undefined1 *)(param_2 + 0xc),*(undefined1 *)(param_2 + 0xd),
               *(undefined1 *)(param_2 + 0xe),*(undefined1 *)(param_2 + 0xf),
               *(undefined1 *)(param_2 + 0x10));
    *param_5 = 0x10;
    return 0;
  }
  iVar2 = udata_swapDataHeader_76_godot(param_1);
  puVar8 = (undefined4 *)(param_2 + iVar2);
  iVar3 = (**(code **)(param_1 + 0x10))(*puVar8);
  if (((iVar3 != 0xb1a0) || (*(char *)(puVar8 + 1) != '\x06')) ||
     (uVar4 = (**(code **)(param_1 + 0x10))(puVar8[2]), uVar4 < 0x50)) {
    udata_printError_76_godot(param_1,"ubrk_swap(): RBBI Data header is invalid.\n");
    *param_5 = 0x10;
    return 0;
  }
  iVar3 = (**(code **)(param_1 + 0x10))(puVar8[2]);
  iVar9 = iVar2 + iVar3;
  if (param_3 == -1) {
    return iVar9;
  }
  if (param_3 < iVar9) {
    udata_printError_76_godot
              (param_1,"ubrk_swap(): too few bytes (%d after ICU Data header) for break data.\n",
               iVar3);
    *param_5 = 8;
    return 0;
  }
  __s = (undefined4 *)(iVar2 + param_4);
  if (puVar8 != __s) {
    memset(__s,0,(long)iVar3);
  }
  iVar2 = (**(code **)(param_1 + 0x10))(puVar8[4]);
  lVar10 = (long)iVar2;
  iVar2 = (**(code **)(param_1 + 0x10))(puVar8[5]);
  if (0 < iVar2) {
    uVar4 = (**(code **)(param_1 + 0x10))(*(undefined4 *)((long)puVar8 + lVar10 + 0x10));
    (**(code **)(param_1 + 0x38))(param_1,(long)puVar8 + lVar10,0x14,(long)__s + lVar10,param_5);
    if ((uVar4 & 4) == 0) {
      (**(code **)(param_1 + 0x30))
                (param_1,(long)puVar8 + lVar10 + 0x14,iVar2 + -0x14,(long)__s + lVar10 + 0x14,
                 param_5);
    }
    else if (puVar8 != __s) {
      memmove((void *)((long)__s + lVar10 + 0x14),(void *)((long)puVar8 + lVar10 + 0x14),
              (long)(iVar2 + -0x14));
    }
  }
  iVar2 = (**(code **)(param_1 + 0x10))(puVar8[6]);
  lVar10 = (long)iVar2;
  iVar2 = (**(code **)(param_1 + 0x10))(puVar8[7]);
  if (iVar2 < 1) {
LAB_00100798:
    uVar4 = (**(code **)(param_1 + 0x10))(puVar8[8]);
    uVar5 = (**(code **)(param_1 + 0x10))(puVar8[9]);
    uVar6 = (**(code **)(param_1 + 0x10))(puVar8[8]);
    ucptrie_swap_76_godot
              (param_1,(ulong)uVar6 + (long)puVar8,uVar5,(ulong)uVar4 + (long)__s,param_5);
    if (puVar8 == __s) goto LAB_001006e7;
  }
  else {
    uVar4 = (**(code **)(param_1 + 0x10))(*(undefined4 *)((long)puVar8 + lVar10 + 0x10));
    (**(code **)(param_1 + 0x38))(param_1,(long)puVar8 + lVar10,0x14,(long)__s + lVar10,param_5);
    if ((uVar4 & 4) == 0) {
      (**(code **)(param_1 + 0x30))
                (param_1,(long)puVar8 + lVar10 + 0x14,iVar2 + -0x14,(long)__s + lVar10 + 0x14,
                 param_5);
      goto LAB_00100798;
    }
    if (puVar8 == __s) {
      uVar4 = (**(code **)(param_1 + 0x10))(puVar8[8]);
      uVar5 = (**(code **)(param_1 + 0x10))(puVar8[9]);
      uVar6 = (**(code **)(param_1 + 0x10))(puVar8[8]);
      ucptrie_swap_76_godot
                (param_1,(ulong)uVar6 + (long)puVar8,uVar5,(ulong)uVar4 + (long)puVar8,param_5);
      goto LAB_001006e7;
    }
    memmove((void *)((long)__s + lVar10 + 0x14),(void *)((long)puVar8 + lVar10 + 0x14),
            (long)(iVar2 + -0x14));
    uVar4 = (**(code **)(param_1 + 0x10))(puVar8[8]);
    uVar5 = (**(code **)(param_1 + 0x10))(puVar8[9]);
    uVar6 = (**(code **)(param_1 + 0x10))(puVar8[8]);
    ucptrie_swap_76_godot
              (param_1,(ulong)uVar6 + (long)puVar8,uVar5,(ulong)uVar4 + (long)__s,param_5);
  }
  uVar4 = (**(code **)(param_1 + 0x10))(puVar8[0xb]);
  uVar6 = (**(code **)(param_1 + 0x10))(puVar8[10]);
  uVar7 = (**(code **)(param_1 + 0x10))(puVar8[10]);
  memmove((void *)((ulong)uVar7 + (long)__s),(void *)((ulong)uVar6 + (long)puVar8),(ulong)uVar4);
LAB_001006e7:
  pcVar1 = *(code **)(param_1 + 0x38);
  uVar4 = (**(code **)(param_1 + 0x10))(puVar8[0xc]);
  uVar5 = (**(code **)(param_1 + 0x10))(puVar8[0xd]);
  uVar6 = (**(code **)(param_1 + 0x10))(puVar8[0xc]);
  (*pcVar1)(param_1,(ulong)uVar6 + (long)puVar8,uVar5,(ulong)uVar4 + (long)__s,param_5);
  (**(code **)(param_1 + 0x38))(param_1,puVar8,0x50,__s,param_5);
  (**(code **)(param_1 + 0x38))(param_1,__s + 1,4,__s + 1,param_5);
  return iVar9;
}


