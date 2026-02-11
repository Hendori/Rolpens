
/* icu_76_godot::BytesTrieBuilder::getElementUnit(int, int) const */

undefined1 __thiscall
icu_76_godot::BytesTrieBuilder::getElementUnit(BytesTrieBuilder *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(this + 0x18) + (long)param_1 * 8);
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return *(undefined1 *)((long)(iVar2 + 1) + **(long **)(this + 0x10) + (long)param_2);
}



/* icu_76_godot::BytesTrieBuilder::getElementValue(int) const */

undefined4 __thiscall
icu_76_godot::BytesTrieBuilder::getElementValue(BytesTrieBuilder *this,int param_1)

{
  return *(undefined4 *)(*(long *)(this + 0x18) + 4 + (long)param_1 * 8);
}



/* icu_76_godot::BytesTrieBuilder::countElementUnits(int, int, int) const */

int __thiscall
icu_76_godot::BytesTrieBuilder::countElementUnits
          (BytesTrieBuilder *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = (ulong)(uint)param_1;
  iVar3 = 0;
  iVar2 = *(int *)(*(long *)(this + 0x18) + (long)param_1 * 8);
  while( true ) {
    iVar4 = (int)uVar5 + 1;
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if (param_2 <= iVar4) break;
    uVar5 = (ulong)iVar4;
    while( true ) {
      iVar2 = *(int *)(*(long *)(this + 0x18) + uVar5 * 8);
      iVar4 = -iVar2;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      if (*(char *)((long)param_3 + **(long **)(this + 0x10) + (long)(iVar1 + 1)) !=
          *(char *)((long)param_3 + **(long **)(this + 0x10) + (long)(iVar4 + 1))) break;
      uVar5 = uVar5 + 1;
      if (param_2 <= (int)uVar5) goto LAB_001000c0;
    }
    iVar3 = iVar3 + 1;
  }
LAB_001000c0:
  return iVar3 + 1;
}



/* icu_76_godot::BytesTrieBuilder::skipElementsBySomeUnits(int, int, int) const */

void __thiscall
icu_76_godot::BytesTrieBuilder::skipElementsBySomeUnits
          (BytesTrieBuilder *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = (ulong)(uint)param_1;
  iVar5 = *(int *)(*(long *)(this + 0x18) + (long)param_1 * 8);
  do {
    iVar1 = -iVar5;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    uVar3 = (long)((int)uVar4 + 1);
    do {
      uVar4 = uVar3;
      iVar5 = *(int *)(*(long *)(this + 0x18) + uVar4 * 8);
      iVar2 = -iVar5;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
      uVar3 = uVar4 + 1;
    } while (*(char *)((long)param_2 + **(long **)(this + 0x10) + (long)(iVar1 + 1)) ==
             *(char *)((long)param_2 + **(long **)(this + 0x10) + (long)(iVar2 + 1)));
    param_3 = param_3 + -1;
  } while (0 < param_3);
  return;
}



/* icu_76_godot::BytesTrieBuilder::indexOfElementWithNextUnit(int, int, char16_t) const */

void __thiscall
icu_76_godot::BytesTrieBuilder::indexOfElementWithNextUnit
          (BytesTrieBuilder *this,int param_1,int param_2,wchar16 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = (long)param_1;
  do {
    iVar1 = *(int *)(*(long *)(this + 0x18) + lVar3 * 8);
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    lVar3 = lVar3 + 1;
  } while ((char)param_3 == *(char *)((long)param_2 + **(long **)(this + 0x10) + (long)(iVar2 + 1)))
  ;
  return;
}



/* icu_76_godot::BytesTrieBuilder::~BytesTrieBuilder() */

void __thiscall icu_76_godot::BytesTrieBuilder::~BytesTrieBuilder(BytesTrieBuilder *this)

{
  UMemory *this_00;
  void *in_RSI;
  
  this_00 = *(UMemory **)(this + 0x10);
  *(undefined ***)this = &PTR__BytesTrieBuilder_001017b0;
  if (this_00 != (UMemory *)0x0) {
    if (this_00[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)this_00);
    }
    icu_76_godot::UMemory::operator_delete(this_00,in_RSI);
  }
  if (*(UMemory **)(this + 0x18) != (UMemory *)0x0) {
    icu_76_godot::UMemory::operator_delete__(*(UMemory **)(this + 0x18),in_RSI);
  }
  uprv_free_76_godot(*(undefined8 *)(this + 0x28));
  icu_76_godot::StringTrieBuilder::~StringTrieBuilder((StringTrieBuilder *)this);
  return;
}



/* icu_76_godot::BytesTrieBuilder::~BytesTrieBuilder() */

void __thiscall icu_76_godot::BytesTrieBuilder::~BytesTrieBuilder(BytesTrieBuilder *this)

{
  void *in_RSI;
  
  ~BytesTrieBuilder(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringTrieBuilder::Node
   const&) const */

undefined8 __thiscall
icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::operator==(BTLinearMatchNode *this,Node *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  
  if (this != (BTLinearMatchNode *)param_1) {
    uVar2 = icu_76_godot::StringTrieBuilder::LinearMatchNode::operator==
                      ((LinearMatchNode *)this,param_1);
    if ((char)uVar2 != '\0') {
      iVar1 = memcmp(*(void **)(this + 0x28),*(void **)(param_1 + 0x28),(long)*(int *)(this + 0x18))
      ;
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
    }
    return uVar2;
  }
  return 1;
}



/* icu_76_godot::BytesTrieBuilder::getLimitOfLinearMatch(int, int, int) const */

void __thiscall
icu_76_godot::BytesTrieBuilder::getLimitOfLinearMatch
          (BytesTrieBuilder *this,int param_1,int param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(*(long *)(this + 0x18) + (long)param_1 * 8);
  lVar5 = **(long **)(this + 0x10);
  if ((int)uVar3 < 0) {
    uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar5 + (int)~uVar3),*(undefined1 *)(lVar5 + (int)-uVar3)
                          );
  }
  else {
    uVar8 = (uint)*(byte *)(lVar5 + (int)uVar3);
  }
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  lVar7 = (long)(param_3 + 1);
  if ((int)uVar8 <= param_3 + 1) {
    return;
  }
  while( true ) {
    iVar4 = *(int *)(*(long *)(this + 0x18) + (long)param_2 * 8);
    pcVar1 = (char *)((int)(uVar3 + 1) + lVar5 + lVar7);
    iVar6 = -iVar4;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    lVar2 = lVar5 + lVar7;
    lVar7 = lVar7 + 1;
    if (*(char *)(lVar2 + (iVar6 + 1)) != *pcVar1) break;
    if ((int)uVar8 <= (int)lVar7) {
      return;
    }
  }
  return;
}



/* icu_76_godot::BytesTrieBuilder::getElementStringLength(int) const */

ushort __thiscall
icu_76_godot::BytesTrieBuilder::getElementStringLength(BytesTrieBuilder *this,int param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(*(long *)(this + 0x18) + (long)param_1 * 8);
  lVar2 = **(long **)(this + 0x10);
  if (-1 < (int)uVar1) {
    return (ushort)*(byte *)(lVar2 + (int)uVar1);
  }
  return CONCAT11(*(undefined1 *)(lVar2 + (int)~uVar1),*(undefined1 *)(lVar2 + (int)-uVar1));
}



/* icu_76_godot::BytesTrieBuilder::createLinearMatchNode(int, int, int,
   icu_76_godot::StringTrieBuilder::Node*) const */

undefined8 * __thiscall
icu_76_godot::BytesTrieBuilder::createLinearMatchNode
          (BytesTrieBuilder *this,int param_1,int param_2,int param_3,Node *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 in_register_00000034;
  long lVar4;
  
  puVar2 = (undefined8 *)
           icu_76_godot::UMemory::operator_new
                     ((UMemory *)0x30,CONCAT44(in_register_00000034,param_1));
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = *(int *)(*(long *)(this + 0x18) + (long)param_1 * 8);
    iVar3 = -iVar1;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    lVar4 = (long)param_2 + (long)(iVar3 + 1) + **(long **)(this + 0x10);
    iVar1 = 0;
    if (param_4 != (Node *)0x0) {
      iVar1 = *(int *)(param_4 + 8);
    }
    iVar3 = iVar1 + 0x11cccbbb + param_3 * 0x25;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(int *)(puVar2 + 1) = iVar3;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *(undefined4 *)((long)puVar2 + 0x14) = 0;
    *(int *)(puVar2 + 3) = param_3;
    puVar2[4] = param_4;
    *puVar2 = &PTR__BTLinearMatchNode_00101860;
    puVar2[5] = lVar4;
    iVar1 = ustr_hashCharsN_76_godot(lVar4,param_3);
    *(int *)(puVar2 + 1) = iVar3 * 0x25 + iVar1;
  }
  return puVar2;
}



/* icu_76_godot::BytesTrieElement::setTo(icu_76_godot::StringPiece, int, icu_76_godot::CharString&,
   UErrorCode&) */

void icu_76_godot::BytesTrieElement::setTo
               (uint *param_1,int param_2,uint param_3,uint param_4,char *param_5,int *param_6)

{
  uint uVar1;
  
  if (0 < *param_6) {
    return;
  }
  if ((int)param_3 < 0x10000) {
    uVar1 = *(uint *)(param_5 + 0x38);
    if (0xff < (int)param_3) {
      icu_76_godot::CharString::append
                ((char)param_5,(UErrorCode *)(ulong)(uint)(int)(char)(param_3 >> 8));
      uVar1 = ~uVar1;
    }
    icu_76_godot::CharString::append((char)param_5,(UErrorCode *)(ulong)(uint)(int)(char)param_3);
    *param_1 = uVar1;
    param_1[1] = param_4;
    icu_76_godot::CharString::append(param_5,param_2,(UErrorCode *)(ulong)param_3);
    return;
  }
  *param_6 = 8;
  return;
}



/* icu_76_godot::BytesTrieElement::compareStringTo(icu_76_godot::BytesTrieElement const&,
   icu_76_godot::CharString const&) const */

int __thiscall
icu_76_godot::BytesTrieElement::compareStringTo
          (BytesTrieElement *this,BytesTrieElement *param_1,CharString *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)this;
  lVar3 = *(long *)param_2;
  if ((int)uVar1 < 0) {
    uVar2 = *(uint *)param_1;
    uVar8 = (uint)CONCAT11(*(undefined1 *)(lVar3 + (int)~uVar1),*(undefined1 *)(lVar3 + (int)-uVar1)
                          );
    uVar1 = -uVar1;
  }
  else {
    uVar8 = (uint)*(byte *)(lVar3 + (int)uVar1);
    uVar2 = *(uint *)param_1;
  }
  if ((int)uVar2 < 0) {
    uVar7 = (uint)CONCAT11(*(undefined1 *)(lVar3 + (int)~uVar2),*(undefined1 *)(lVar3 + (int)-uVar2)
                          );
    uVar2 = -uVar2;
  }
  else {
    uVar7 = (uint)*(byte *)(lVar3 + (int)uVar2);
  }
  uVar6 = uVar7;
  if ((int)(uVar8 - uVar7) < 1) {
    uVar6 = uVar8;
  }
  iVar5 = memcmp((void *)((int)(uVar1 + 1) + lVar3),(void *)(lVar3 + (int)(uVar2 + 1)),
                 (long)(int)uVar6);
  iVar4 = uVar8 - uVar7;
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  return iVar4;
}



void compareElementStrings(CharString *param_1,BytesTrieElement *param_2,BytesTrieElement *param_3)

{
  icu_76_godot::BytesTrieElement::compareStringTo(param_2,param_3,param_1);
  return;
}



/* icu_76_godot::BytesTrieBuilder::BytesTrieBuilder(UErrorCode&) */

void __thiscall
icu_76_godot::BytesTrieBuilder::BytesTrieBuilder(BytesTrieBuilder *this,UErrorCode *param_1)

{
  uint uVar1;
  long *plVar2;
  
  icu_76_godot::StringTrieBuilder::StringTrieBuilder((StringTrieBuilder *)this);
  uVar1 = *(uint *)param_1;
  *(undefined ***)this = &PTR__BytesTrieBuilder_001017b0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if ((int)uVar1 < 1) {
    plVar2 = (long *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)uVar1);
    if (plVar2 != (long *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 0x28;
      *plVar2 = (long)plVar2 + 0xd;
      *(undefined4 *)(plVar2 + 7) = 0;
      *(undefined2 *)((long)plVar2 + 0xc) = 0;
      *(long **)(this + 0x10) = plVar2;
      return;
    }
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)param_1 = 7;
  }
  return;
}



/* icu_76_godot::BytesTrieBuilder::add(icu_76_godot::StringPiece, int, UErrorCode&) */

long icu_76_godot::BytesTrieBuilder::add
               (long param_1,void *param_2,undefined8 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  void *__dest;
  void *__src;
  UMemory *this;
  int iVar2;
  
  if (*param_5 < 1) {
    if (*(int *)(param_1 + 0x34) < 1) {
      iVar1 = *(int *)(param_1 + 0x24);
      if (iVar1 == *(int *)(param_1 + 0x20)) {
        if (iVar1 == 0) {
          this = (UMemory *)0x2000;
          iVar2 = 0x400;
        }
        else {
          iVar2 = iVar1 * 4;
          this = (UMemory *)((long)iVar2 * 8);
          if (0xfffffffffffffff < (ulong)(long)iVar2) {
            this = (UMemory *)0xffffffffffffffff;
          }
        }
        __src = param_2;
        __dest = icu_76_godot::UMemory::operator_new__(this,(ulong)param_2);
        if (__dest == (void *)0x0) {
          *param_5 = 7;
          return param_1;
        }
        if (0 < *(int *)(param_1 + 0x24)) {
          __src = *(void **)(param_1 + 0x18);
          __dest = memcpy(__dest,__src,(long)*(int *)(param_1 + 0x24) << 3);
        }
        if (*(UMemory **)(param_1 + 0x18) != (UMemory *)0x0) {
          icu_76_godot::UMemory::operator_delete__(*(UMemory **)(param_1 + 0x18),__src);
        }
        *(void **)(param_1 + 0x18) = __dest;
        iVar1 = *(int *)(param_1 + 0x24);
        *(int *)(param_1 + 0x20) = iVar2;
      }
      else {
        __dest = *(void **)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x24) = iVar1 + 1;
      BytesTrieElement::setTo
                ((void *)((long)__dest + (long)iVar1 * 8),param_2,param_3,param_4,
                 *(undefined8 *)(param_1 + 0x10),param_5);
    }
    else {
      *param_5 = 0x1e;
    }
  }
  return param_1;
}



/* icu_76_godot::BytesTrieBuilder::buildBytes(UStringTrieBuildOption, UErrorCode&) */

void __thiscall
icu_76_godot::BytesTrieBuilder::buildBytes(BytesTrieBuilder *this,undefined4 param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_68;
  uint local_60;
  long local_58;
  uint local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 < 1) {
    if ((*(long *)(this + 0x28) == 0) || (*(int *)(this + 0x34) < 1)) {
      if (*(int *)(this + 0x34) == 0) {
        if (*(int *)(this + 0x24) == 0) {
          *param_3 = 8;
          goto LAB_00100820;
        }
        uprv_sortArray_76_godot
                  (*(undefined8 *)(this + 0x18),*(int *)(this + 0x24),8,compareElementStrings,
                   *(undefined8 *)(this + 0x10),0);
        if (0 < *param_3) goto LAB_00100820;
        puVar5 = *(uint **)(this + 0x18);
        plVar4 = *(long **)(this + 0x10);
        uVar1 = *puVar5;
        local_68 = *plVar4;
        if ((int)uVar1 < 0) {
          local_60 = (uint)CONCAT11(*(undefined1 *)(local_68 + (int)~uVar1),
                                    *(undefined1 *)(local_68 + (int)-uVar1));
          uVar1 = -uVar1;
        }
        else {
          local_60 = (uint)*(byte *)(local_68 + (int)uVar1);
        }
        local_68 = local_68 + (int)(uVar1 + 1);
        if (1 < *(int *)(this + 0x24)) {
          lVar3 = 0;
          while( true ) {
            lVar3 = lVar3 + 1;
            local_58 = *plVar4;
            uVar1 = puVar5[lVar3 * 2];
            if ((int)uVar1 < 0) {
              local_50 = (uint)CONCAT11(*(undefined1 *)(local_58 + (int)~uVar1),
                                        *(undefined1 *)(local_58 + (int)-uVar1));
              uVar1 = -uVar1;
            }
            else {
              local_50 = (uint)*(byte *)(local_58 + (int)uVar1);
            }
            local_58 = local_58 + (int)(uVar1 + 1);
            cVar2 = icu_76_godot::operator==((StringPiece *)&local_68,(StringPiece *)&local_58);
            if (cVar2 != '\0') {
              *param_3 = 1;
              goto LAB_00100820;
            }
            plVar4 = *(long **)(this + 0x10);
            local_68 = local_58;
            local_60 = local_50;
            if (*(int *)(this + 0x24) <= (int)lVar3 + 1) break;
            puVar5 = *(uint **)(this + 0x18);
          }
        }
      }
      else {
        plVar4 = *(long **)(this + 0x10);
      }
      *(undefined4 *)(this + 0x34) = 0;
      iVar6 = (int)plVar4[7];
      if (iVar6 < 0x400) {
        iVar6 = 0x400;
      }
      if (*(int *)(this + 0x30) < iVar6) {
        uprv_free_76_godot(*(undefined8 *)(this + 0x28));
        lVar3 = uprv_malloc_76_godot((long)iVar6);
        *(long *)(this + 0x28) = lVar3;
        if (lVar3 == 0) {
          *param_3 = 7;
          *(undefined4 *)(this + 0x30) = 0;
          goto LAB_00100820;
        }
        *(int *)(this + 0x30) = iVar6;
      }
      icu_76_godot::StringTrieBuilder::build(this,param_2,*(undefined4 *)(this + 0x24),param_3);
      if (*(long *)(this + 0x28) == 0) {
        *param_3 = 7;
      }
    }
  }
LAB_00100820:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BytesTrieBuilder::build(UStringTrieBuildOption, UErrorCode&) */

long * __thiscall
icu_76_godot::BytesTrieBuilder::build(BytesTrieBuilder *this,ulong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  buildBytes();
  if (*param_3 < 1) {
    plVar4 = (long *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,param_2);
    if (plVar4 == (long *)0x0) {
      *param_3 = 7;
      plVar4 = (long *)0x0;
    }
    else {
      lVar3 = *(long *)(this + 0x28);
      iVar1 = *(int *)(this + 0x30);
      iVar2 = *(int *)(this + 0x34);
      *(undefined4 *)(plVar4 + 3) = 0xffffffff;
      lVar5 = (iVar1 - iVar2) + lVar3;
      plVar4[2] = lVar5;
      *plVar4 = lVar3;
      plVar4[1] = lVar5;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  else {
    plVar4 = (long *)0x0;
  }
  return plVar4;
}



/* icu_76_godot::BytesTrieBuilder::buildStringPiece(UStringTrieBuildOption, UErrorCode&) */

undefined1  [16] __thiscall
icu_76_godot::BytesTrieBuilder::buildStringPiece
          (BytesTrieBuilder *this,undefined8 param_2,int *param_3)

{
  undefined1 auVar1 [16];
  
  buildBytes();
  if (0 < *param_3) {
    return ZEXT416(0);
  }
  auVar1._0_8_ = (long)(*(int *)(this + 0x30) - *(int *)(this + 0x34)) + *(long *)(this + 0x28);
  auVar1._8_4_ = *(int *)(this + 0x34);
  auVar1._12_4_ = 0;
  return auVar1;
}



/* icu_76_godot::BytesTrieBuilder::clear() */

BytesTrieBuilder * __thiscall icu_76_godot::BytesTrieBuilder::clear(BytesTrieBuilder *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined1 *)*puVar1 = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return this;
}



/* icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::BTLinearMatchNode(char const*, int,
   icu_76_godot::StringTrieBuilder::Node*) */

void __thiscall
icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::BTLinearMatchNode
          (BTLinearMatchNode *this,char *param_1,int param_2,Node *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_3 != (Node *)0x0) {
    iVar1 = *(int *)(param_3 + 8);
  }
  iVar2 = iVar1 + 0x11cccbbb + param_2 * 0x25;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)(this + 8) = iVar2;
  this[0x10] = (BTLinearMatchNode)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_2;
  *(Node **)(this + 0x20) = param_3;
  *(undefined ***)this = &PTR__BTLinearMatchNode_00101860;
  *(char **)(this + 0x28) = param_1;
  iVar1 = ustr_hashCharsN_76_godot();
  *(int *)(this + 8) = iVar2 * 0x25 + iVar1;
  return;
}



/* icu_76_godot::BytesTrieBuilder::ensureCapacity(int) */

undefined8 __thiscall
icu_76_godot::BytesTrieBuilder::ensureCapacity(BytesTrieBuilder *this,int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(this + 0x28) == 0) {
    return 0;
  }
  iVar5 = *(int *)(this + 0x30);
  if (*(int *)(this + 0x30) < param_1) {
    do {
      iVar3 = iVar5 * 2;
      iVar2 = iVar5 * -2;
      iVar5 = iVar3;
    } while (SBORROW4(param_1,iVar3) == param_1 + iVar2 < 0);
    uVar7 = (ulong)iVar3;
    lVar4 = uprv_malloc_76_godot(uVar7);
    if (lVar4 == 0) {
      uprv_free_76_godot(*(undefined8 *)(this + 0x28));
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0x30) = 0;
      return 0;
    }
    iVar5 = *(int *)(this + 0x34);
    lVar1 = *(long *)(this + 0x28);
    uVar6 = (ulong)(iVar3 - iVar5);
    if (uVar7 < uVar6) {
      uVar7 = uVar6;
    }
    __memcpy_chk(uVar6 + lVar4,(*(int *)(this + 0x30) - iVar5) + lVar1,(long)iVar5,uVar7 - uVar6);
    uprv_free_76_godot(lVar1);
    *(long *)(this + 0x28) = lVar4;
    *(int *)(this + 0x30) = iVar3;
  }
  return 1;
}



/* icu_76_godot::BytesTrieBuilder::write(int) */

undefined4 __thiscall icu_76_godot::BytesTrieBuilder::write(BytesTrieBuilder *this,int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(this + 0x34) + 1;
  cVar2 = ensureCapacity(this,iVar1);
  if (cVar2 != '\0') {
    *(int *)(this + 0x34) = iVar1;
    *(char *)(*(long *)(this + 0x28) + (long)(*(int *)(this + 0x30) - iVar1)) = (char)param_1;
  }
  return *(undefined4 *)(this + 0x34);
}



/* icu_76_godot::BytesTrieBuilder::writeValueAndType(signed char, int, int) */

ulong __thiscall
icu_76_godot::BytesTrieBuilder::writeValueAndType
          (BytesTrieBuilder *this,char param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  
  if (*(code **)(*(long *)this + 0x78) == write) {
    iVar1 = *(int *)(this + 0x34) + 1;
    cVar2 = ensureCapacity(this,iVar1);
    if (cVar2 != '\0') {
      *(int *)(this + 0x34) = iVar1;
      *(char *)(*(long *)(this + 0x28) + (long)(*(int *)(this + 0x30) - iVar1)) = (char)param_4;
    }
    uVar3 = (ulong)*(uint *)(this + 0x34);
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 0x78))(this,param_4);
  }
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(long *)this + 0x88))(this,param_3,0);
    return uVar3;
  }
  return uVar3;
}



/* icu_76_godot::BytesTrieBuilder::write(char const*, int) */

undefined4 __thiscall
icu_76_godot::BytesTrieBuilder::write(BytesTrieBuilder *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x34) + param_2;
  cVar1 = ensureCapacity(this,iVar2);
  if (cVar1 == '\0') {
    return *(undefined4 *)(this + 0x34);
  }
  *(int *)(this + 0x34) = iVar2;
  memcpy((void *)((long)(*(int *)(this + 0x30) - iVar2) + *(long *)(this + 0x28)),param_1,
         (long)param_2);
  return *(undefined4 *)(this + 0x34);
}



/* icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::write(icu_76_godot::StringTrieBuilder&) */

void __thiscall
icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::write
          (BTLinearMatchNode *this,StringTrieBuilder *param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  
  (**(code **)(**(long **)(this + 0x20) + 0x28))();
  BytesTrieBuilder::write((BytesTrieBuilder *)param_1,*(char **)(this + 0x28),*(int *)(this + 0x18))
  ;
  pcVar2 = *(code **)(*(long *)param_1 + 0x60);
  pcVar3 = *(code **)(*(long *)param_1 + 0x78);
  iVar6 = 0x10;
  if (pcVar2 != getMinLinearMatch) {
    iVar6 = (*pcVar2)(param_1);
  }
  iVar6 = iVar6 + *(int *)(this + 0x18) + -1;
  if (pcVar3 == BytesTrieBuilder::write) {
    iVar1 = *(int *)(param_1 + 0x34) + 1;
    cVar4 = ensureCapacity((BytesTrieBuilder *)param_1,iVar1);
    if (cVar4 != '\0') {
      *(int *)(param_1 + 0x34) = iVar1;
      *(char *)(*(long *)(param_1 + 0x28) + (long)(*(int *)(param_1 + 0x30) - iVar1)) = (char)iVar6;
    }
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x34);
    return;
  }
  uVar5 = (*pcVar3)(param_1,iVar6);
  *(undefined4 *)(this + 0xc) = uVar5;
  return;
}



/* icu_76_godot::BytesTrieBuilder::writeElementUnits(int, int, int) */

void __thiscall
icu_76_godot::BytesTrieBuilder::writeElementUnits
          (BytesTrieBuilder *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(this + 0x18) + (long)param_1 * 8);
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  write(this,(char *)((long)param_2 + (long)(iVar2 + 1) + **(long **)(this + 0x10)),param_3);
  return;
}



/* icu_76_godot::BytesTrieBuilder::writeValueAndFinal(int, signed char) */

ulong __thiscall
icu_76_godot::BytesTrieBuilder::writeValueAndFinal(BytesTrieBuilder *this,uint param_1,byte param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  byte local_28;
  uint local_27;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x41) {
    uVar7 = param_1 * 2 + 0x20 | (int)(char)param_3;
    if (*(code **)(*(long *)this + 0x78) != write) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(long *)this + 0x78))(this,uVar7);
        return uVar2;
      }
      goto LAB_00100fe3;
    }
    iVar4 = *(int *)(this + 0x34) + 1;
    cVar1 = ensureCapacity(this,iVar4);
    if (cVar1 != '\0') {
      *(int *)(this + 0x34) = iVar4;
      *(char *)(*(long *)(this + 0x28) + (long)(*(int *)(this + 0x30) - iVar4)) = (char)uVar7;
    }
    uVar2 = (ulong)*(uint *)(this + 0x34);
  }
  else {
    if (param_1 < 0x1000000) {
      bVar5 = (byte)(param_1 >> 8);
      if ((int)param_1 < 0x1b00) {
        local_28 = bVar5 * '\x02' + 0xa2;
        iVar4 = 2;
        lVar3 = 1;
      }
      else {
        cVar1 = (char)(param_1 >> 0x10);
        if ((int)param_1 < 0x120000) {
          local_28 = cVar1 * '\x02' - 0x28;
          iVar4 = 3;
          lVar3 = 2;
          lVar6 = 1;
        }
        else {
          local_27 = CONCAT31(local_27._1_3_,cVar1);
          iVar4 = 4;
          local_28 = 0xfc;
          lVar3 = 3;
          lVar6 = 2;
        }
        (&local_28)[lVar6] = bVar5;
      }
      (&local_28)[lVar3] = (byte)param_1;
    }
    else {
      local_27 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
                 param_1 << 0x18;
      local_28 = 0xfe;
      iVar4 = 5;
    }
    local_28 = local_28 | param_3;
    uVar2 = write(this,(char *)&local_28,iVar4);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00100fe3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BytesTrieBuilder::writeDeltaTo(int) */

ulong __thiscall icu_76_godot::BytesTrieBuilder::writeDeltaTo(BytesTrieBuilder *this,int param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  char local_25 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *(int *)(this + 0x34) - param_1;
  if (iVar8 < 0xc0) {
    if (*(code **)(*(long *)this + 0x78) != write) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(long *)this + 0x78))(this,iVar8);
        return uVar3;
      }
      goto LAB_00101165;
    }
    iVar5 = *(int *)(this + 0x34) + 1;
    cVar2 = ensureCapacity(this,iVar5);
    if (cVar2 != '\0') {
      *(int *)(this + 0x34) = iVar5;
      *(char *)(*(long *)(this + 0x28) + (long)(*(int *)(this + 0x30) - iVar5)) = (char)iVar8;
    }
    uVar3 = (ulong)*(uint *)(this + 0x34);
  }
  else {
    cVar2 = (char)((uint)iVar8 >> 8);
    if (iVar8 < 0x3000) {
      local_25[0] = cVar2 + -0x40;
      lVar4 = 1;
      iVar5 = 2;
    }
    else {
      cVar1 = (char)((uint)iVar8 >> 0x10);
      if (iVar8 < 0xe0000) {
        local_25[0] = cVar1 + -0x10;
        lVar4 = 2;
        iVar5 = 3;
        lVar6 = 1;
      }
      else {
        if (iVar8 < 0x1000000) {
          lVar4 = 3;
          iVar5 = 4;
          lVar6 = 2;
          lVar7 = 1;
          local_25[0] = -2;
        }
        else {
          lVar4 = 4;
          lVar6 = 3;
          lVar7 = 2;
          local_25[0] = -1;
          local_25[1] = (char)((uint)iVar8 >> 0x18);
          iVar5 = 5;
        }
        local_25[lVar7] = cVar1;
      }
      local_25[lVar6] = cVar2;
    }
    local_25[lVar4] = (char)iVar8;
    uVar3 = write(this,local_25,iVar5);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00101165:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BytesTrieBuilder::internalEncodeDelta(int, char*) */

undefined8 icu_76_godot::BytesTrieBuilder::internalEncodeDelta(int param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  
  cVar4 = (char)param_1;
  if (param_1 < 0xc0) {
    *param_2 = cVar4;
    return 1;
  }
  cVar1 = (char)((uint)param_1 >> 8);
  if (param_1 < 0x3000) {
    *param_2 = cVar1 + -0x40;
    param_2[1] = cVar4;
    return 2;
  }
  cVar5 = (char)((uint)param_1 >> 0x10);
  if (param_1 < 0xe0000) {
    lVar3 = 2;
    uVar2 = 3;
    lVar6 = 1;
    *param_2 = cVar5 + -0x10;
  }
  else {
    if (param_1 < 0x1000000) {
      lVar3 = 3;
      uVar2 = 4;
      lVar6 = 2;
      lVar7 = 1;
      cVar8 = -2;
    }
    else {
      lVar3 = 4;
      lVar6 = 3;
      lVar7 = 2;
      cVar8 = -1;
      param_2[1] = (char)((uint)param_1 >> 0x18);
      uVar2 = 5;
    }
    *param_2 = cVar8;
    param_2[lVar7] = cVar5;
  }
  param_2[lVar6] = cVar1;
  param_2[lVar3] = cVar4;
  return uVar2;
}



/* icu_76_godot::BytesTrieBuilder::matchNodesCanHaveValues() const */

undefined8 icu_76_godot::BytesTrieBuilder::matchNodesCanHaveValues(void)

{
  return 0;
}



/* icu_76_godot::BytesTrieBuilder::getMaxBranchLinearSubNodeLength() const */

undefined8 icu_76_godot::BytesTrieBuilder::getMaxBranchLinearSubNodeLength(void)

{
  return 5;
}



/* icu_76_godot::BytesTrieBuilder::getMinLinearMatch() const */

undefined8 icu_76_godot::BytesTrieBuilder::getMinLinearMatch(void)

{
  return 0x10;
}



/* icu_76_godot::BytesTrieBuilder::getMaxLinearMatchLength() const */

undefined8 icu_76_godot::BytesTrieBuilder::getMaxLinearMatchLength(void)

{
  return 0x10;
}



/* icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::~BTLinearMatchNode() */

void __thiscall
icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::~BTLinearMatchNode(BTLinearMatchNode *this)

{
  *(code **)this = icu_76_godot::StringTrieBuilder::LinearMatchNode::operator==;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::~BTLinearMatchNode() */

void __thiscall
icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::~BTLinearMatchNode(BTLinearMatchNode *this)

{
  void *in_RSI;
  
  *(code **)this = icu_76_godot::StringTrieBuilder::LinearMatchNode::operator==;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
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
LAB_0010159f:
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
      goto LAB_0010159f;
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



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::~BTLinearMatchNode() */

void __thiscall
icu_76_godot::BytesTrieBuilder::BTLinearMatchNode::~BTLinearMatchNode(BTLinearMatchNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


