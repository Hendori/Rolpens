
/* icu_76_godot::CharString::CharString(icu_76_godot::CharString&&) */

void __thiscall icu_76_godot::CharString::CharString(CharString *this,CharString *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CharString *__src;
  
  __src = *(CharString **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(CharString **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src == param_1 + 0xd) {
    *(CharString **)this = this + 0xd;
    memcpy(this + 0xd,__src,(long)iVar1);
  }
  else {
    *(CharString **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (CharString)0x0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(this + 0x38) = uVar2;
  return;
}



/* icu_76_godot::CharString::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::CharString&&) */

CharString * __thiscall icu_76_godot::CharString::operator=(CharString *this,CharString *param_1)

{
  int iVar1;
  CharString *__src;
  
  if (this[0xc] != (CharString)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  __src = *(CharString **)param_1;
  if (__src == param_1 + 0xd) {
    iVar1 = *(int *)(param_1 + 8);
    *(CharString **)this = this + 0xd;
    memcpy(this + 0xd,__src,(long)iVar1);
  }
  else {
    *(CharString **)this = __src;
    *(CharString **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (CharString)0x0;
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return this;
}



/* icu_76_godot::CharString::cloneData(UErrorCode&) const */

undefined8 __thiscall icu_76_godot::CharString::cloneData(CharString *this,UErrorCode *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)param_1 < 1) {
    iVar1 = *(int *)(this + 0x38);
    lVar2 = uprv_malloc_76_godot((long)(iVar1 + 1));
    if (lVar2 == 0) {
      *(undefined4 *)param_1 = 7;
      uVar3 = 0;
    }
    else {
      uVar3 = __memcpy_chk(lVar2,*(undefined8 *)this,(long)(*(int *)(this + 0x38) + 1),
                           (long)(iVar1 + 1));
    }
    return uVar3;
  }
  return 0;
}



/* icu_76_godot::CharString::extract(char*, int, UErrorCode&) const */

void __thiscall
icu_76_godot::CharString::extract(CharString *this,char *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  if (*(int *)param_3 < 1) {
    if ((-1 < param_2) && ((param_2 < 1 || (param_1 != (char *)0x0)))) {
      if ((0 < iVar1 && param_1 != *(char **)this) && (iVar1 <= param_2)) {
        param_1 = (char *)memcpy(param_1,*(char **)this,(long)iVar1);
        iVar1 = *(int *)(this + 0x38);
      }
      u_terminateChars_76_godot(param_1,param_2,iVar1,param_3);
      return;
    }
    *(undefined4 *)param_3 = 1;
  }
  return;
}



/* icu_76_godot::CharString::lastIndexOf(char) const */

ulong __thiscall icu_76_godot::CharString::lastIndexOf(CharString *this,char param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(this + 0x38);
  uVar2 = uVar1;
  do {
    uVar2 = uVar2 - 1;
    if ((int)uVar1 < 1) {
      return 0xffffffff;
    }
    uVar1 = (ulong)((int)uVar1 - 1);
  } while (*(char *)(*(long *)this + uVar2) != param_1);
  return uVar1;
}



/* icu_76_godot::CharString::contains(icu_76_godot::StringPiece) const */

undefined8 icu_76_godot::CharString::contains(long *param_1,void *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  uVar3 = 0;
  if (param_3 == 0) {
    return 0;
  }
  lVar1 = *param_1;
  iVar5 = (int)param_1[7] - param_3;
  if (-1 < iVar5) {
    lVar4 = 0;
    while( true ) {
      iVar2 = memcmp((void *)(lVar1 + lVar4),param_2,(long)param_3);
      if (iVar2 == 0) break;
      lVar4 = lVar4 + 1;
      if (iVar5 < (int)lVar4) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* icu_76_godot::CharString::truncate(int) */

CharString * __thiscall icu_76_godot::CharString::truncate(CharString *this,int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_1 < *(int *)(this + 0x38)) {
    *(int *)(this + 0x38) = param_1;
    *(undefined1 *)(*(long *)this + (long)param_1) = 0;
  }
  return this;
}



/* icu_76_godot::CharString::ensureCapacity(int, int, UErrorCode&) */

undefined8 __thiscall
icu_76_godot::CharString::ensureCapacity
          (CharString *this,int param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (0 < *(int *)param_3) {
    return 0;
  }
  if (*(int *)(this + 8) < param_1) {
    if (param_2 == 0) {
      param_2 = *(int *)(this + 8) + param_1;
    }
    iVar4 = *(int *)(this + 0x38) + 1;
    if ((param_1 < param_2) && (0 < param_2)) {
      lVar3 = uprv_malloc_76_godot((long)param_2);
      if (lVar3 != 0) {
        if (0 < iVar4) {
          iVar1 = *(int *)(this + 8);
          if (iVar4 <= *(int *)(this + 8)) {
            iVar1 = iVar4;
          }
          if (param_2 < iVar1) {
            iVar1 = param_2;
          }
          __memcpy_chk(lVar3,*(undefined8 *)this,(long)iVar1,(long)param_2);
        }
        if (this[0xc] != (CharString)0x0) {
          uprv_free_76_godot(*(undefined8 *)this);
        }
        *(long *)this = lVar3;
        *(int *)(this + 8) = param_2;
        this[0xc] = (CharString)0x1;
        goto LAB_001002e8;
      }
      iVar4 = *(int *)(this + 0x38) + 1;
    }
    if (0 < param_1) {
      lVar3 = uprv_malloc_76_godot((long)param_1);
      if (lVar3 != 0) {
        if (0 < iVar4) {
          iVar1 = *(int *)(this + 8);
          if (param_1 <= *(int *)(this + 8)) {
            iVar1 = param_1;
          }
          if (iVar4 < iVar1) {
            iVar1 = iVar4;
          }
          __memcpy_chk(lVar3,*(undefined8 *)this,(long)iVar1,(long)param_1);
        }
        if (this[0xc] != (CharString)0x0) {
          uprv_free_76_godot(*(undefined8 *)this);
        }
        *(long *)this = lVar3;
        *(int *)(this + 8) = param_1;
        this[0xc] = (CharString)0x1;
        goto LAB_001002e8;
      }
    }
    *(undefined4 *)param_3 = 7;
    uVar2 = 0;
  }
  else {
LAB_001002e8:
    uVar2 = 1;
  }
  return uVar2;
}



/* icu_76_godot::CharString::copyFrom(icu_76_godot::CharString const&, UErrorCode&) */

CharString * __thiscall
icu_76_godot::CharString::copyFrom(CharString *this,CharString *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  char cVar2;
  
  if ((*(int *)param_2 < 1) && (this != param_1)) {
    cVar2 = ensureCapacity(this,*(int *)(param_1 + 0x38) + 1,0,param_2);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x38);
      __src = *(void **)param_1;
      *(int *)(this + 0x38) = iVar1;
      memcpy(*(void **)this,__src,(long)(iVar1 + 1));
    }
  }
  return this;
}



/* icu_76_godot::CharString::append(char, UErrorCode&) */

CharString * __thiscall
icu_76_godot::CharString::append(CharString *this,char param_1,UErrorCode *param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = ensureCapacity(this,*(int *)(this + 0x38) + 2,0,param_2);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(this + 0x38);
    *(int *)(this + 0x38) = iVar1 + 1;
    *(char *)(*(long *)this + (long)iVar1) = param_1;
    *(undefined1 *)(*(long *)this + (long)*(int *)(this + 0x38)) = 0;
  }
  return this;
}



/* icu_76_godot::CharString::append(char const*, int, UErrorCode&) */

CharString * __thiscall
icu_76_godot::CharString::append(CharString *this,char *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    if ((param_2 < -1) || ((param_1 == (char *)0x0 && (param_2 != 0)))) {
      *(undefined4 *)param_3 = 1;
    }
    else {
      if (param_2 == -1) {
        sVar4 = strlen(param_1);
        param_2 = (int)sVar4;
      }
      if (0 < param_2) {
        iVar1 = *(int *)(this + 0x38);
        pcVar2 = *(char **)this;
        if (pcVar2 + iVar1 == param_1) {
          if (param_2 < *(int *)(this + 8) - iVar1) {
            *(int *)(this + 0x38) = iVar1 + param_2;
            pcVar2[iVar1 + param_2] = '\0';
          }
          else {
            *(undefined4 *)param_3 = 5;
          }
        }
        else if (((param_1 < pcVar2) || (pcVar2 + iVar1 <= param_1)) ||
                (param_2 < *(int *)(this + 8) - iVar1)) {
          cVar3 = ensureCapacity(this,iVar1 + 1 + param_2,0,param_3);
          if (cVar3 != '\0') {
            memcpy((void *)((long)*(int *)(this + 0x38) + *(long *)this),param_1,(long)param_2);
            iVar1 = *(int *)(this + 0x38);
            *(int *)(this + 0x38) = param_2 + iVar1;
            *(undefined1 *)(*(long *)this + (long)(param_2 + iVar1)) = 0;
          }
        }
        else {
          local_78 = (char *)((long)&local_6c + 1);
          local_70 = 0x28;
          local_40 = 0;
          local_6c = 0;
          append((CharString *)&local_78,param_1,param_2,param_3);
          this = (CharString *)append(this,local_78,local_40,param_3);
          if ((char)local_6c != '\0') {
            uprv_free_76_godot(local_78);
          }
        }
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* icu_76_godot::CharString::getAppendBuffer(int, int, int&, UErrorCode&) */

long __thiscall
icu_76_godot::CharString::getAppendBuffer
          (CharString *this,int param_1,int param_2,int *param_3,UErrorCode *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  if (*(int *)param_4 < 1) {
    uVar1 = *(uint *)(this + 0x38);
    iVar3 = ~uVar1 + *(int *)(this + 8);
    if (iVar3 < param_1) {
      cVar2 = ensureCapacity(this,uVar1 + 1 + param_1,uVar1 + 1 + param_2,param_4);
      if (cVar2 == '\0') goto LAB_001006d4;
      iVar3 = (*(int *)(this + 8) - *(int *)(this + 0x38)) + -1;
    }
    *param_3 = iVar3;
    return (long)*(int *)(this + 0x38) + *(long *)this;
  }
LAB_001006d4:
  *param_3 = 0;
  return 0;
}



/* icu_76_godot::CharString::appendInvariantChars(char16_t const*, int, UErrorCode&) */

CharString * __thiscall
icu_76_godot::CharString::appendInvariantChars
          (CharString *this,wchar16 *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  char cVar2;
  
  if (*(int *)param_3 < 1) {
    cVar2 = uprv_isInvariantUString_76_godot(param_1,param_2);
    if (cVar2 == '\0') {
      *(undefined4 *)param_3 = 0x1a;
      return this;
    }
    cVar2 = ensureCapacity(this,*(int *)(this + 0x38) + param_2 + 1,0,param_3);
    if (cVar2 != '\0') {
      u_UCharsToChars_76_godot(param_1,(long)*(int *)(this + 0x38) + *(long *)this,param_2);
      iVar1 = *(int *)(this + 0x38);
      *(int *)(this + 0x38) = iVar1 + param_2;
      *(undefined1 *)(*(long *)this + (long)(iVar1 + param_2)) = 0;
    }
  }
  return this;
}



/* icu_76_godot::CharString::appendInvariantChars(icu_76_godot::UnicodeString const&, UErrorCode&)
    */

CharString * __thiscall
icu_76_godot::CharString::appendInvariantChars
          (CharString *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  UnicodeString *pUVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if ((uVar1 & 0x11) == 0) goto LAB_001007cd;
LAB_00100830:
    pUVar4 = (UnicodeString *)0x0;
  }
  else {
    iVar5 = (int)((short)uVar1 >> 5);
    if ((uVar1 & 0x11) != 0) goto LAB_00100830;
LAB_001007cd:
    pUVar4 = param_1 + 10;
    if ((uVar1 & 2) == 0) {
      iVar2 = *(int *)param_2;
      pUVar4 = *(UnicodeString **)(param_1 + 0x18);
      goto joined_r0x001007fa;
    }
  }
  iVar2 = *(int *)param_2;
joined_r0x001007fa:
  if (iVar2 < 1) {
    cVar3 = uprv_isInvariantUString_76_godot(pUVar4,iVar5);
    if (cVar3 == '\0') {
      *(undefined4 *)param_2 = 0x1a;
      return this;
    }
    cVar3 = ensureCapacity(this,*(int *)(this + 0x38) + iVar5 + 1,0,param_2);
    if (cVar3 != '\0') {
      u_UCharsToChars_76_godot(pUVar4,(long)*(int *)(this + 0x38) + *(long *)this,iVar5);
      iVar2 = *(int *)(this + 0x38);
      *(int *)(this + 0x38) = iVar5 + iVar2;
      *(undefined1 *)(*(long *)this + (long)(iVar5 + iVar2)) = 0;
    }
  }
  return this;
}



/* icu_76_godot::CharString::appendNumber(int, UErrorCode&) */

CharString * __thiscall
icu_76_godot::CharString::appendNumber(CharString *this,int param_1,UErrorCode *param_2)

{
  CharString CVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar5 = *(int *)(this + 0x38);
  if (param_1 < 0) {
    cVar4 = ensureCapacity(this,iVar5 + 2,0,param_2);
    if (cVar4 != '\0') {
      iVar5 = *(int *)(this + 0x38);
      *(int *)(this + 0x38) = iVar5 + 1;
      *(undefined1 *)(*(long *)this + (long)iVar5) = 0x2d;
      *(undefined1 *)(*(long *)this + (long)*(int *)(this + 0x38)) = 0;
    }
    if (0 < *(int *)param_2) {
      return this;
    }
    iVar5 = *(int *)(this + 0x38);
  }
  else if (param_1 == 0) {
    cVar4 = ensureCapacity(this,iVar5 + 2,0,param_2);
    if (cVar4 == '\0') {
      return this;
    }
    iVar5 = *(int *)(this + 0x38);
    *(int *)(this + 0x38) = iVar5 + 1;
    *(undefined1 *)(*(long *)this + (long)iVar5) = 0x30;
    *(undefined1 *)(*(long *)this + (long)*(int *)(this + 0x38)) = 0;
    return this;
  }
  lVar11 = (long)iVar5;
  iVar14 = 0;
  if (param_1 != 0) {
    do {
      lVar7 = (long)iVar5;
      iVar3 = param_1 / 10;
      iVar5 = param_1 % 10;
      if (iVar5 < 1) {
        iVar5 = -iVar5;
      }
      if (0 < *(int *)param_2) {
        return this;
      }
      iVar12 = (int)lVar11 + 2;
      if (*(int *)(this + 8) < iVar12) {
        iVar13 = iVar12 + *(int *)(this + 8);
        iVar10 = (int)lVar11 + 1;
        if ((iVar12 < iVar13) && (0 < iVar13)) {
          lVar11 = uprv_malloc_76_godot((long)iVar13);
          if (lVar11 != 0) {
            if (iVar10 < 1) {
              CVar1 = this[0xc];
            }
            else {
              iVar12 = *(int *)(this + 8);
              if (iVar10 <= *(int *)(this + 8)) {
                iVar12 = iVar10;
              }
              if (iVar13 < iVar12) {
                iVar12 = iVar13;
              }
              __memcpy_chk(lVar11,*(undefined8 *)this,(long)iVar12,(long)iVar13);
              CVar1 = this[0xc];
            }
            if (CVar1 != (CharString)0x0) {
              uprv_free_76_godot(*(undefined8 *)this);
            }
            *(long *)this = lVar11;
            lVar7 = (long)*(int *)(this + 0x38);
            *(int *)(this + 8) = iVar13;
            this[0xc] = (CharString)0x1;
            goto LAB_00100980;
          }
          iVar10 = *(int *)(this + 0x38) + 1;
        }
        if (iVar12 < 1) {
LAB_00100b08:
          *(undefined4 *)param_2 = 7;
          return this;
        }
        lVar11 = uprv_malloc_76_godot((long)iVar12);
        if (lVar11 == 0) goto LAB_00100b08;
        if (iVar10 < 1) {
          CVar1 = this[0xc];
        }
        else {
          iVar13 = *(int *)(this + 8);
          if (iVar12 <= *(int *)(this + 8)) {
            iVar13 = iVar12;
          }
          if (iVar10 < iVar13) {
            iVar13 = iVar10;
          }
          __memcpy_chk(lVar11,*(undefined8 *)this,(long)iVar13,(long)iVar12);
          CVar1 = this[0xc];
        }
        if (CVar1 == (CharString)0x0) {
          *(long *)this = lVar11;
          lVar7 = (long)*(int *)(this + 0x38);
          *(int *)(this + 8) = iVar12;
          this[0xc] = (CharString)0x1;
        }
        else {
          uprv_free_76_godot(*(undefined8 *)this);
          lVar7 = (long)*(int *)(this + 0x38);
          *(long *)this = lVar11;
          this[0xc] = (CharString)0x1;
          *(int *)(this + 8) = iVar12;
        }
      }
      else {
        lVar11 = *(long *)this;
      }
LAB_00100980:
      iVar14 = iVar14 + 1;
      *(int *)(this + 0x38) = (int)lVar7 + 1;
      *(char *)(lVar11 + lVar7) = (char)iVar5 + '0';
      *(undefined1 *)(*(long *)this + (long)*(int *)(this + 0x38)) = 0;
      if (0 < *(int *)param_2) {
        return this;
      }
      iVar5 = *(int *)(this + 0x38);
      lVar11 = (long)iVar5;
      param_1 = iVar3;
    } while (iVar3 != 0);
  }
  iVar5 = (int)lVar11 + -1;
  iVar14 = (int)lVar11 - iVar14;
  if (iVar14 < iVar5) {
    lVar6 = (long)iVar14;
    lVar7 = lVar6 + -1;
    do {
      puVar8 = (undefined1 *)(((lVar7 + lVar11) - lVar6) + *(long *)this);
      puVar9 = (undefined1 *)(*(long *)this + lVar6);
      lVar6 = lVar6 + 1;
      uVar2 = *puVar9;
      *puVar9 = *puVar8;
      *puVar8 = uVar2;
    } while ((int)lVar6 < (iVar5 + iVar14) - (int)lVar6);
  }
  return this;
}



/* icu_76_godot::CharString::appendPathPart(icu_76_godot::StringPiece, UErrorCode&) */

CharString *
icu_76_godot::CharString::appendPathPart
          (CharString *param_1,char *param_2,int param_3,UErrorCode *param_4)

{
  int iVar1;
  char cVar2;
  
  if ((*(int *)param_4 < 1) && (param_3 != 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((0 < iVar1) && (*(char *)(*(long *)param_1 + (long)(iVar1 + -1)) != '/')) {
      cVar2 = ensureCapacity(param_1,iVar1 + 2,0,param_4);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        *(undefined1 *)(*(long *)param_1 + (long)iVar1) = 0x2f;
        *(undefined1 *)(*(long *)param_1 + (long)*(int *)(param_1 + 0x38)) = 0;
      }
    }
    append(param_1,param_2,param_3,param_4);
  }
  return param_1;
}



/* icu_76_godot::CharString::ensureEndsWithFileSeparator(UErrorCode&) */

CharString * __thiscall
icu_76_godot::CharString::ensureEndsWithFileSeparator(CharString *this,UErrorCode *param_1)

{
  int iVar1;
  char cVar2;
  
  if (((*(int *)param_1 < 1) && (iVar1 = *(int *)(this + 0x38), 0 < iVar1)) &&
     (*(char *)(*(long *)this + (long)(iVar1 + -1)) != '/')) {
    cVar2 = ensureCapacity(this,iVar1 + 2,0,param_1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(this + 0x38);
      *(int *)(this + 0x38) = iVar1 + 1;
      *(undefined1 *)(*(long *)this + (long)iVar1) = 0x2f;
      *(undefined1 *)(*(long *)this + (long)*(int *)(this + 0x38)) = 0;
    }
    return this;
  }
  return this;
}



/* icu_76_godot::CharString::getDirSepChar() const */

undefined8 icu_76_godot::CharString::getDirSepChar(void)

{
  return 0x2f;
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
LAB_00100faf:
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
      goto LAB_00100faf;
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


