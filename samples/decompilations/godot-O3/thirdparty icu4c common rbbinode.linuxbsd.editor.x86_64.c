
/* icu_76_godot::RBBINode::RBBINode(icu_76_godot::RBBINode::NodeType) */

void __thiscall icu_76_godot::RBBINode::RBBINode(RBBINode *this,UErrorCode *param_2)

{
  UVector *pUVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  iVar2 = (int)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)this = iVar2;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (RBBINode)0x0;
  *(undefined2 *)(this + 0x80) = 0;
  this[0x82] = (RBBINode)0x0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(code **)(this + 0x30) = icu_76_godot::UVector::UVector;
  *(undefined2 *)(this + 0x38) = 2;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  local_24 = 0;
  pUVar1 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_2);
  if (pUVar1 != (UVector *)0x0) {
    param_2 = (UErrorCode *)&local_24;
    icu_76_godot::UVector::UVector(pUVar1,param_2);
  }
  *(UVector **)(this + 0x88) = pUVar1;
  pUVar1 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_2);
  if (pUVar1 != (UVector *)0x0) {
    param_2 = (UErrorCode *)&local_24;
    icu_76_godot::UVector::UVector(pUVar1,param_2);
  }
  *(UVector **)(this + 0x90) = pUVar1;
  pUVar1 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_2);
  if (pUVar1 != (UVector *)0x0) {
    icu_76_godot::UVector::UVector(pUVar1,(UErrorCode *)&local_24);
  }
  *(UVector **)(this + 0x98) = pUVar1;
  if (iVar2 == 8) {
    *(undefined4 *)(this + 0x28) = 4;
  }
  else if (iVar2 == 9) {
    *(undefined4 *)(this + 0x28) = 3;
  }
  else if (iVar2 == 7) {
    *(undefined4 *)(this + 0x28) = 1;
  }
  else if (iVar2 == 0xf) {
    *(undefined4 *)(this + 0x28) = 2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBINode::RBBINode(icu_76_godot::RBBINode const&) */

void __thiscall icu_76_godot::RBBINode::RBBINode(RBBINode *this,RBBINode *param_1)

{
  undefined8 uVar1;
  UVector *pUVar2;
  UErrorCode *pUVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  pUVar3 = (UErrorCode *)(param_1 + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(code **)(this + 0x30) = icu_76_godot::UVector::UVector;
  *(undefined2 *)(this + 0x38) = 2;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  icu_76_godot::UnicodeString::operator=((UnicodeString *)(this + 0x30),(UnicodeString *)pUVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  this[0x81] = (RBBINode)0x0;
  local_24 = 0;
  *(undefined8 *)(this + 0x70) = uVar1;
  this[0x78] = param_1[0x78];
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  this[0x82] = param_1[0x82];
  pUVar2 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar3);
  if (pUVar2 != (UVector *)0x0) {
    pUVar3 = (UErrorCode *)&local_24;
    icu_76_godot::UVector::UVector(pUVar2,pUVar3);
  }
  *(UVector **)(this + 0x88) = pUVar2;
  pUVar2 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar3);
  if (pUVar2 != (UVector *)0x0) {
    pUVar3 = (UErrorCode *)&local_24;
    icu_76_godot::UVector::UVector(pUVar2,pUVar3);
  }
  *(UVector **)(this + 0x90) = pUVar2;
  pUVar2 = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar3);
  if (pUVar2 != (UVector *)0x0) {
    icu_76_godot::UVector::UVector(pUVar2,(UErrorCode *)&local_24);
  }
  *(UVector **)(this + 0x98) = pUVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RBBINode::cloneTree() */

RBBINode * icu_76_godot::RBBINode::cloneTree(void)

{
  int iVar1;
  RBBINode *this;
  long lVar2;
  ulong in_RSI;
  RBBINode *in_RDI;
  
  iVar1 = *(int *)in_RDI;
  while (iVar1 == 2) {
    in_RDI = *(RBBINode **)(in_RDI + 0x10);
    iVar1 = *(int *)in_RDI;
  }
  if (iVar1 != 1) {
    this = (RBBINode *)icu_76_godot::UMemory::operator_new((UMemory *)0xa0,in_RSI);
    if (this != (RBBINode *)0x0) {
      RBBINode(this,in_RDI);
      if (*(long *)(in_RDI + 0x10) != 0) {
        lVar2 = cloneTree();
        *(long *)(this + 0x10) = lVar2;
        *(RBBINode **)(lVar2 + 8) = this;
      }
      if (*(long *)(in_RDI + 0x18) != 0) {
        lVar2 = cloneTree();
        *(long *)(this + 0x18) = lVar2;
        *(RBBINode **)(lVar2 + 8) = this;
      }
      return this;
    }
    in_RDI = (RBBINode *)0x0;
  }
  return in_RDI;
}



/* icu_76_godot::RBBINode::findNodes(icu_76_godot::UVector*, icu_76_godot::RBBINode::NodeType,
   UErrorCode&) */

void __thiscall
icu_76_godot::RBBINode::findNodes(RBBINode *this,void *param_1,int param_3,int *param_4)

{
  do {
    if (0 < *param_4) {
      return;
    }
    if (*(int *)this == param_3) {
      icu_76_godot::UVector::addElement(param_1,(UErrorCode *)this);
    }
    if (*(long *)((UErrorCode *)this + 0x10) != 0) {
      findNodes((RBBINode *)*(long *)((UErrorCode *)this + 0x10),param_1,param_3,param_4);
    }
    this = *(RBBINode **)((UErrorCode *)this + 0x18);
  } while (this != (RBBINode *)0x0);
  return;
}



/* icu_76_godot::RBBINode::~RBBINode() */

void __thiscall icu_76_godot::RBBINode::~RBBINode(RBBINode *this)

{
  RBBINode *in_RSI;
  
  if (*(UnicodeSet **)(this + 0x20) != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  if ((*(uint *)this & 0xfffffffd) != 0) {
    NRDeleteNode(*(RBBINode **)(this + 0x10),in_RSI);
    *(undefined8 *)(this + 0x10) = 0;
    NRDeleteNode(*(RBBINode **)(this + 0x18),in_RSI);
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  if (*(long **)(this + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x98) + 8))();
  }
  icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)(this + 0x30));
  return;
}



/* icu_76_godot::RBBINode::NRDeleteNode(icu_76_godot::RBBINode*) */

void __thiscall icu_76_godot::RBBINode::NRDeleteNode(RBBINode *this,RBBINode *param_1)

{
  RBBINode *pRVar1;
  RBBINode *pRVar2;
  
  if (this != (RBBINode *)0x0) {
    pRVar1 = *(RBBINode **)(this + 8);
    if (this != pRVar1) {
      do {
        pRVar2 = *(RBBINode **)(this + 0x10);
        if (((pRVar2 == (RBBINode *)0x0) &&
            (pRVar2 = *(RBBINode **)(this + 0x18), pRVar2 == (RBBINode *)0x0)) ||
           ((*(uint *)this & 0xfffffffd) == 0)) {
          pRVar2 = *(RBBINode **)(this + 8);
          if (pRVar2 != (RBBINode *)0x0) {
            if (*(RBBINode **)(pRVar2 + 0x10) == this) {
              *(undefined8 *)(pRVar2 + 0x10) = 0;
            }
            else if (*(RBBINode **)(pRVar2 + 0x18) == this) {
              *(undefined8 *)(pRVar2 + 0x18) = 0;
            }
          }
          ~RBBINode(this);
          icu_76_godot::UMemory::operator_delete((UMemory *)this,param_1);
        }
        else if (*(long *)(pRVar2 + 8) == 0) {
          *(RBBINode **)(pRVar2 + 8) = this;
        }
        this = pRVar2;
      } while ((this != pRVar1) && (this != (RBBINode *)0x0));
    }
    return;
  }
  return;
}



/* icu_76_godot::RBBINode::flattenVariables(UErrorCode&, int) */

RBBINode * __thiscall
icu_76_godot::RBBINode::flattenVariables(RBBINode *this,UErrorCode *param_1,int param_2)

{
  long lVar1;
  RBBINode *pRVar2;
  
  if (*(int *)param_1 < 1) {
    if (param_2 < 0xdad) {
      if (*(int *)this == 2) {
        pRVar2 = (RBBINode *)cloneTree();
        if (pRVar2 != (RBBINode *)0x0) {
          *(undefined2 *)(pRVar2 + 0x81) = *(undefined2 *)(this + 0x81);
        }
        ~RBBINode(this);
        icu_76_godot::UMemory::operator_delete((UMemory *)this,param_1);
        this = pRVar2;
      }
      else {
        if (*(RBBINode **)(this + 0x10) != (RBBINode *)0x0) {
          lVar1 = flattenVariables(*(RBBINode **)(this + 0x10),param_1,param_2 + 1);
          *(long *)(this + 0x10) = lVar1;
          *(RBBINode **)(lVar1 + 8) = this;
        }
        if (*(RBBINode **)(this + 0x18) != (RBBINode *)0x0) {
          lVar1 = flattenVariables(*(RBBINode **)(this + 0x18),param_1,param_2 + 1);
          *(long *)(this + 0x18) = lVar1;
          *(RBBINode **)(lVar1 + 8) = this;
        }
      }
    }
    else {
      *(undefined4 *)param_1 = 0x1f;
    }
  }
  return this;
}



/* icu_76_godot::RBBINode::flattenSets() */

void icu_76_godot::RBBINode::flattenSets(void)

{
  long lVar1;
  RBBINode *pRVar2;
  RBBINode *pRVar3;
  void *in_RSI;
  RBBINode *in_RDI;
  
  pRVar3 = *(RBBINode **)(in_RDI + 0x10);
  if (pRVar3 == (RBBINode *)0x0) goto LAB_001005d5;
  if (*(int *)pRVar3 == 0) goto LAB_001005f8;
LAB_001005cd:
  flattenSets();
LAB_001005d5:
  do {
    pRVar3 = in_RDI + 0x18;
    pRVar2 = in_RDI;
    in_RDI = *(RBBINode **)pRVar3;
    if (*(RBBINode **)pRVar3 == (RBBINode *)0x0) {
      return;
    }
    while( true ) {
      if (*(int *)in_RDI == 0) {
        lVar1 = cloneTree();
        *(long *)(pRVar2 + 0x18) = lVar1;
        *(RBBINode **)(lVar1 + 8) = pRVar2;
        ~RBBINode(in_RDI);
        icu_76_godot::UMemory::operator_delete((UMemory *)in_RDI,in_RSI);
        return;
      }
      pRVar3 = *(RBBINode **)(in_RDI + 0x10);
      if (pRVar3 == (RBBINode *)0x0) break;
      if (*(int *)pRVar3 != 0) goto LAB_001005cd;
LAB_001005f8:
      lVar1 = cloneTree();
      *(long *)(in_RDI + 0x10) = lVar1;
      *(RBBINode **)(lVar1 + 8) = in_RDI;
      ~RBBINode(pRVar3);
      icu_76_godot::UMemory::operator_delete((UMemory *)pRVar3,in_RSI);
      pRVar3 = in_RDI + 0x18;
      pRVar2 = in_RDI;
      in_RDI = *(RBBINode **)pRVar3;
      if (*(RBBINode **)pRVar3 == (RBBINode *)0x0) {
        return;
      }
    }
  } while( true );
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_0010093f:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_0010093f;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


