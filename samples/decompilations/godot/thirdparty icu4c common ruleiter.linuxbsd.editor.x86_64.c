
/* icu_76_godot::RuleCharacterIterator::RuleCharacterIterator(icu_76_godot::UnicodeString const&,
   icu_76_godot::SymbolTable const*, icu_76_godot::ParsePosition&) */

void __thiscall
icu_76_godot::RuleCharacterIterator::RuleCharacterIterator
          (RuleCharacterIterator *this,UnicodeString *param_1,SymbolTable *param_2,
          ParsePosition *param_3)

{
  *(UnicodeString **)this = param_1;
  *(ParsePosition **)(this + 8) = param_3;
  *(SymbolTable **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}



/* icu_76_godot::RuleCharacterIterator::atEnd() const */

undefined4 __thiscall icu_76_godot::RuleCharacterIterator::atEnd(RuleCharacterIterator *this)

{
  short sVar1;
  int iVar2;
  
  if (*(long *)(this + 0x18) != 0) {
    return 0;
  }
  sVar1 = *(short *)(*(long *)this + 8);
  if (sVar1 < 0) {
    iVar2 = *(int *)(*(long *)this + 0xc);
  }
  else {
    iVar2 = (int)(sVar1 >> 5);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == *(int *)(*(long *)(this + 8) + 8));
}



/* icu_76_godot::RuleCharacterIterator::getPos(icu_76_godot::RuleCharacterIterator::Pos&) const */

void __thiscall
icu_76_godot::RuleCharacterIterator::getPos(RuleCharacterIterator *this,Pos *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined8 *)param_1 = *(undefined8 *)(this + 0x18);
  *(ulong *)(param_1 + 8) = CONCAT44(uVar1,*(undefined4 *)(*(long *)(this + 8) + 8));
  return;
}



/* icu_76_godot::RuleCharacterIterator::setPos(icu_76_godot::RuleCharacterIterator::Pos const&) */

void __thiscall
icu_76_godot::RuleCharacterIterator::setPos(RuleCharacterIterator *this,Pos *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1;
  *(undefined4 *)(*(long *)(this + 8) + 8) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0xc);
  return;
}



/* icu_76_godot::RuleCharacterIterator::lookahead(icu_76_godot::UnicodeString&, int) const */

long icu_76_godot::RuleCharacterIterator::lookahead(UnicodeString *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined4 in_register_00000034;
  long lVar3;
  
  lVar3 = CONCAT44(in_register_00000034,param_2);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = *(long *)param_1;
    iVar1 = *(int *)(*(long *)(param_1 + 8) + 8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (-1 < *(short *)(lVar3 + 8)) {
    icu_76_godot::UnicodeString::doReplace
              (param_2,0,(UnicodeString *)(ulong)(uint)(int)(*(short *)(lVar3 + 8) >> 5),(int)lVar2,
               iVar1);
    return lVar3;
  }
  icu_76_godot::UnicodeString::doReplace
            (param_2,0,(UnicodeString *)(ulong)*(uint *)(lVar3 + 0xc),(int)lVar2,iVar1);
  return lVar3;
}



/* icu_76_godot::RuleCharacterIterator::jumpahead(int) */

void __thiscall
icu_76_godot::RuleCharacterIterator::jumpahead(RuleCharacterIterator *this,int param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 == 0) {
    lVar2 = *(long *)this;
    lVar3 = *(long *)(this + 8);
    sVar1 = *(short *)(lVar2 + 8);
    iVar5 = param_1 + *(int *)(lVar3 + 8);
    *(int *)(lVar3 + 8) = iVar5;
    if (sVar1 < 0) {
      iVar4 = *(int *)(lVar2 + 0xc);
    }
    else {
      iVar4 = (int)(sVar1 >> 5);
    }
    if (iVar4 < iVar5) {
      *(int *)(lVar3 + 8) = iVar4;
      return;
    }
  }
  else {
    sVar1 = *(short *)(lVar2 + 8);
    iVar5 = *(int *)(this + 0x20);
    *(int *)(this + 0x20) = param_1 + iVar5;
    if (sVar1 < 0) {
      iVar4 = *(int *)(lVar2 + 0xc);
    }
    else {
      iVar4 = (int)(sVar1 >> 5);
    }
    if (param_1 + iVar5 == iVar4) {
      *(undefined8 *)(this + 0x18) = 0;
      return;
    }
  }
  return;
}



/* icu_76_godot::RuleCharacterIterator::_current() const */

undefined8 __thiscall icu_76_godot::RuleCharacterIterator::_current(RuleCharacterIterator *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 0x18) != 0) {
    uVar3 = icu_76_godot::UnicodeString::char32At((int)*(long *)(this + 0x18));
    return uVar3;
  }
  lVar1 = *(long *)this;
  if (*(short *)(lVar1 + 8) < 0) {
    iVar2 = *(int *)(lVar1 + 0xc);
  }
  else {
    iVar2 = (int)(*(short *)(lVar1 + 8) >> 5);
  }
  if (*(int *)(*(long *)(this + 8) + 8) < iVar2) {
    uVar3 = icu_76_godot::UnicodeString::char32At((int)lVar1);
    return uVar3;
  }
  return 0xffffffff;
}



/* icu_76_godot::RuleCharacterIterator::_advance(int) */

void __thiscall
icu_76_godot::RuleCharacterIterator::_advance(RuleCharacterIterator *this,int param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(long *)(this + 0x18);
  if (lVar2 == 0) {
    lVar2 = *(long *)this;
    lVar3 = *(long *)(this + 8);
    sVar1 = *(short *)(lVar2 + 8);
    iVar5 = param_1 + *(int *)(lVar3 + 8);
    *(int *)(lVar3 + 8) = iVar5;
    if (sVar1 < 0) {
      iVar4 = *(int *)(lVar2 + 0xc);
    }
    else {
      iVar4 = (int)(sVar1 >> 5);
    }
    if (iVar4 < iVar5) {
      *(int *)(lVar3 + 8) = iVar4;
      return;
    }
  }
  else {
    sVar1 = *(short *)(lVar2 + 8);
    iVar5 = *(int *)(this + 0x20);
    *(int *)(this + 0x20) = param_1 + iVar5;
    if (sVar1 < 0) {
      iVar4 = *(int *)(lVar2 + 0xc);
    }
    else {
      iVar4 = (int)(sVar1 >> 5);
    }
    if (param_1 + iVar5 == iVar4) {
      *(undefined8 *)(this + 0x18) = 0;
      return;
    }
  }
  return;
}



/* icu_76_godot::RuleCharacterIterator::skipIgnored(int) */

void __thiscall
icu_76_godot::RuleCharacterIterator::skipIgnored(RuleCharacterIterator *this,int param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 & 4U) == 0) {
    return;
  }
  do {
    if (*(long *)(this + 0x18) == 0) {
      lVar1 = *(long *)this;
      if (*(short *)(lVar1 + 8) < 0) {
        iVar3 = *(int *)(lVar1 + 0xc);
      }
      else {
        iVar3 = (int)(*(short *)(lVar1 + 8) >> 5);
      }
      if (*(int *)(*(long *)(this + 8) + 8) < iVar3) {
        uVar4 = icu_76_godot::UnicodeString::char32At((int)lVar1);
        cVar2 = icu_76_godot::PatternProps::isWhiteSpace(uVar4);
        if (cVar2 == '\0') {
          return;
        }
        goto LAB_00100295;
      }
      cVar2 = icu_76_godot::PatternProps::isWhiteSpace(-1);
      if (cVar2 == '\0') {
        return;
      }
LAB_001002a2:
      iVar3 = 2;
    }
    else {
      uVar4 = icu_76_godot::UnicodeString::char32At((int)*(long *)(this + 0x18));
      cVar2 = icu_76_godot::PatternProps::isWhiteSpace(uVar4);
      if (cVar2 == '\0') {
        return;
      }
LAB_00100295:
      iVar3 = 1;
      if (0xffff < uVar4) goto LAB_001002a2;
    }
    _advance(this,iVar3);
  } while( true );
}



/* icu_76_godot::RuleCharacterIterator::next(int, signed char&, UErrorCode&) */

uint __thiscall
icu_76_godot::RuleCharacterIterator::next
          (RuleCharacterIterator *this,int param_1,signed *param_2,UErrorCode *param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  UnicodeString *local_a0;
  code *local_88;
  short local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    *param_2 = (signed)0x0;
LAB_00100353:
    do {
      uVar3 = _current(this);
      if (uVar3 < 0x10000) {
        _advance(this,1);
        if ((((uVar3 == 0x24) && (*(long *)(this + 0x18) == 0)) && ((param_1 & 1U) != 0)) &&
           (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)0x0)) {
          lVar4 = *(long *)this;
          if (*(short *)(lVar4 + 8) < 0) {
            iVar5 = *(int *)(lVar4 + 0xc);
          }
          else {
            iVar5 = (int)(*(short *)(lVar4 + 8) >> 5);
          }
          (**(code **)(*plVar1 + 0x20))
                    ((UnicodeString *)&local_88,plVar1,lVar4,*(undefined8 *)(this + 8),iVar5);
          iVar5 = local_7c;
          if (-1 < local_80) {
            iVar5 = (int)(local_80 >> 5);
          }
          if (iVar5 == 0) goto LAB_00100508;
          *(undefined4 *)(this + 0x20) = 0;
          lVar4 = (**(code **)(**(long **)(this + 0x10) + 0x10))
                            (*(long **)(this + 0x10),(UnicodeString *)&local_88);
          *(long *)(this + 0x18) = lVar4;
          if (lVar4 == 0) {
            *(undefined4 *)param_3 = 0x10012;
            icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
            break;
          }
          if (*(short *)(lVar4 + 8) < 0) {
            iVar5 = *(int *)(lVar4 + 0xc);
          }
          else {
            iVar5 = (int)(*(short *)(lVar4 + 8) >> 5);
          }
          if (iVar5 == 0) {
            lVar4 = 0;
          }
          *(long *)(this + 0x18) = lVar4;
          icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
          goto LAB_00100353;
        }
      }
      else {
        _advance(this,2);
      }
      if (((param_1 & 4U) == 0) ||
         (cVar2 = icu_76_godot::PatternProps::isWhiteSpace(uVar3), cVar2 == '\0'))
      goto LAB_00100383;
    } while( true );
  }
LAB_0010058a:
  uVar3 = 0xffffffff;
LAB_0010038d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_00100383:
  if ((uVar3 != 0x5c) || ((param_1 & 2U) == 0)) goto LAB_0010038d;
  local_88 = __stack_chk_fail;
  local_80 = 2;
  if (*(long *)(this + 0x18) == 0) {
    icu_76_godot::UnicodeString::doReplace
              ((int)&local_88,0,(UnicodeString *)0x0,(int)*(undefined8 *)this,
               *(int *)(*(long *)(this + 8) + 8));
  }
  else {
    icu_76_godot::UnicodeString::doReplace
              ((int)&local_88,0,(UnicodeString *)0x0,(int)*(long *)(this + 0x18),
               *(int *)(this + 0x20));
  }
  local_a0 = (UnicodeString *)&local_88;
  uVar3 = icu_76_godot::UnicodeString::unescapeAt((int *)local_a0);
  _advance(this,0);
  *param_2 = (signed)0x1;
  if (-1 < (int)uVar3) {
LAB_00100508:
    local_a0 = (UnicodeString *)&local_88;
    icu_76_godot::UnicodeString::~UnicodeString(local_a0);
    goto LAB_0010038d;
  }
  *(undefined4 *)param_3 = 0x10004;
  icu_76_godot::UnicodeString::~UnicodeString(local_a0);
  goto LAB_0010058a;
}


