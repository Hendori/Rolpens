
/* icu_76_godot::ICU_Utility::parseInteger(icu_76_godot::UnicodeString const&, int&, int) */

int icu_76_godot::ICU_Utility::parseInteger(UnicodeString *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  UnicodeString *pUVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  uint local_48;
  int local_44;
  
  local_48 = *param_2;
  if ((int)local_48 < param_3) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      uVar7 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar7 = (uint)((short)uVar1 >> 5);
    }
    if (local_48 < uVar7) {
      if ((uVar1 & 2) == 0) {
        pUVar4 = *(UnicodeString **)(param_1 + 0x18);
      }
      else {
        pUVar4 = param_1 + 10;
      }
      lVar5 = (long)(int)local_48;
      if (*(short *)(pUVar4 + lVar5 * 2) == 0x30) {
        uVar8 = local_48 + 1;
        if ((((int)uVar8 < param_3) && (uVar8 < uVar7)) &&
           ((*(ushort *)(pUVar4 + lVar5 * 2 + 2) & 0xffdf) == 0x58)) {
          local_44 = 0;
          iVar6 = 0x10;
          lVar5 = (long)(int)(local_48 + 2);
          local_48 = local_48 + 2;
        }
        else {
          lVar5 = (long)(int)uVar8;
          local_44 = 1;
          iVar6 = 8;
          local_48 = uVar8;
        }
      }
      else {
        local_44 = 0;
        iVar6 = 10;
      }
      goto LAB_00100089;
    }
  }
  local_44 = 0;
  lVar5 = (long)(int)local_48;
  iVar6 = 10;
LAB_00100089:
  lVar5 = lVar5 * 2;
  uVar7 = local_48;
  iVar10 = 0;
  while ((int)uVar7 < param_3) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((short)uVar1 < 0) {
      uVar8 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar8 = (uint)((short)uVar1 >> 5);
    }
    uVar9 = 0xffff;
    if (uVar7 < uVar8) {
      if ((uVar1 & 2) == 0) {
        pUVar4 = *(UnicodeString **)(param_1 + 0x18);
      }
      else {
        pUVar4 = param_1 + 10;
      }
      uVar9 = *(undefined2 *)(pUVar4 + lVar5);
    }
    iVar3 = u_digit_76_godot(uVar9,iVar6);
    if (iVar3 < 0) break;
    uVar7 = uVar7 + 1;
    lVar5 = lVar5 + 2;
    iVar3 = iVar3 + iVar6 * iVar10;
    bVar2 = iVar3 <= iVar10;
    iVar10 = iVar3;
    if (bVar2) {
      return 0;
    }
  }
  if ((local_44 - local_48) + uVar7 == 0) {
    return iVar10;
  }
  *param_2 = uVar7;
  return iVar10;
}



/* icu_76_godot::ICU_Utility::parsePattern(icu_76_godot::UnicodeString const&, int, int,
   icu_76_godot::UnicodeString const&, int*) */

uint icu_76_godot::ICU_Utility::parsePattern
               (UnicodeString *param_1,int param_2,int param_3,UnicodeString *param_4,int *param_5)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  UnicodeString *pUVar5;
  uint uVar6;
  long lVar7;
  undefined2 uVar8;
  uint uVar9;
  long lVar10;
  short sVar11;
  long in_FS_OFFSET;
  uint local_4c [2];
  uint local_44;
  long local_40;
  
  lVar10 = 0;
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c[0] = param_2;
  do {
    uVar1 = *(ushort *)(param_4 + 8);
    if ((short)uVar1 < 0) {
      uVar6 = *(uint *)(param_4 + 0xc);
    }
    else {
      uVar6 = (uint)((short)uVar1 >> 5);
    }
    uVar9 = local_4c[0];
    if ((int)uVar6 <= (int)(uint)lVar7) goto LAB_00100375;
    if ((uint)lVar7 < uVar6) {
      pUVar5 = param_4 + 10;
      if ((uVar1 & 2) == 0) {
        pUVar5 = *(UnicodeString **)(param_4 + 0x18);
      }
      sVar11 = *(short *)(pUVar5 + lVar7 * 2);
      if (sVar11 == 0x23) {
        local_44 = local_4c[0];
        iVar4 = parseInteger(param_1,(int *)&local_44,param_3);
        param_5[lVar10] = iVar4;
        if (local_44 == local_4c[0]) goto LAB_00100370;
        local_4c[0] = local_44;
        lVar10 = (long)((int)lVar10 + 1);
      }
      else {
        if (sVar11 != 0x7e) {
          if (sVar11 != 0x20) goto LAB_00100316;
          if (param_3 <= (int)local_4c[0]) {
LAB_00100370:
            uVar9 = 0xffffffff;
LAB_00100375:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return uVar9;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          uVar1 = *(ushort *)(param_1 + 8);
          if ((short)uVar1 < 0) {
            uVar6 = *(uint *)(param_1 + 0xc);
          }
          else {
            uVar6 = (uint)((short)uVar1 >> 5);
          }
          uVar9 = 0xffff;
          if (local_4c[0] < uVar6) {
            pUVar5 = param_1 + 10;
            if ((uVar1 & 2) == 0) {
              pUVar5 = *(UnicodeString **)(param_1 + 0x18);
            }
            uVar9 = (uint)*(ushort *)(pUVar5 + (long)(int)local_4c[0] * 2);
          }
          local_4c[0] = local_4c[0] + 1;
          cVar2 = icu_76_godot::PatternProps::isWhiteSpace(uVar9);
          if (cVar2 == '\0') goto LAB_00100370;
        }
        local_4c[0] = icu_76_godot::ICU_Utility::skipWhitespace(param_1,local_4c,0);
      }
    }
    else {
      sVar11 = -1;
LAB_00100316:
      if (param_3 <= (int)local_4c[0]) goto LAB_00100370;
      uVar1 = *(ushort *)(param_1 + 8);
      if ((short)uVar1 < 0) {
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar6 = (uint)((short)uVar1 >> 5);
      }
      uVar8 = 0xffff;
      if (local_4c[0] < uVar6) {
        pUVar5 = param_1 + 10;
        if ((uVar1 & 2) == 0) {
          pUVar5 = *(UnicodeString **)(param_1 + 0x18);
        }
        uVar8 = *(undefined2 *)(pUVar5 + (long)(int)local_4c[0] * 2);
      }
      local_4c[0] = local_4c[0] + 1;
      sVar3 = u_tolower_76_godot(uVar8);
      if (sVar11 != sVar3) goto LAB_00100370;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}



/* icu_76_godot::ICU_Utility::parseUnicodeIdentifier(icu_76_godot::UnicodeString const&, int&) */

ICU_Utility * __thiscall
icu_76_godot::ICU_Utility::parseUnicodeIdentifier
          (ICU_Utility *this,UnicodeString *param_1,int *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(code **)this = icu_76_godot::UnicodeString::append;
  *(undefined2 *)(this + 8) = 2;
  iVar5 = *param_2;
  while( true ) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar3 = (int)(*(short *)(param_1 + 8) >> 5);
    }
    if (iVar3 <= iVar5) break;
    uVar4 = icu_76_godot::UnicodeString::char32At((int)param_1);
    if (*(short *)(this + 8) < 0) {
      iVar3 = *(int *)(this + 0xc);
    }
    else {
      iVar3 = (int)(*(short *)(this + 8) >> 5);
    }
    if (iVar3 == 0) {
      cVar2 = u_isIDStart_76_godot(uVar4);
      if (cVar2 == '\0') {
        uVar1 = *(ushort *)(this + 8);
        if ((uVar1 & 1) != 0) {
          icu_76_godot::UnicodeString::unBogus();
          return this;
        }
        if ((short)uVar1 < 0) {
          iVar5 = *(int *)(this + 0xc);
        }
        else {
          iVar5 = (int)((short)uVar1 >> 5);
        }
        if (iVar5 == 0) {
          return this;
        }
        *(ushort *)(this + 8) = uVar1 & 0x1f;
        return this;
      }
    }
    else {
      cVar2 = u_isIDPart_76_godot();
      if (cVar2 == '\0') break;
    }
    icu_76_godot::UnicodeString::append((int)this);
    iVar5 = iVar5 + 1 + (uint)(0xffff < uVar4);
  }
  *param_2 = iVar5;
  return this;
}



/* icu_76_godot::ICU_Utility::parseNumber(icu_76_godot::UnicodeString const&, int&, signed char) */

ulong icu_76_godot::ICU_Utility::parseNumber(long param_1,int *param_2,char param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = 0;
  iVar5 = *param_2;
  while (*(short *)(param_1 + 8) < 0) {
    if (*(int *)(param_1 + 0xc) <= iVar5) goto LAB_00100531;
LAB_001004ea:
    uVar2 = icu_76_godot::UnicodeString::char32At((int)param_1);
    iVar3 = u_digit_76_godot(uVar2,(int)param_3);
    if (iVar3 < 0) goto LAB_00100531;
    lVar1 = (long)param_3 * uVar4 + (long)iVar3;
    if (0x7fffffff < lVar1) goto LAB_00100550;
    uVar4 = (ulong)(int)lVar1;
    iVar5 = iVar5 + 1;
  }
  if (iVar5 < *(short *)(param_1 + 8) >> 5) goto LAB_001004ea;
LAB_00100531:
  if (*param_2 != iVar5) {
    *param_2 = iVar5;
    goto LAB_0010053b;
  }
LAB_00100550:
  uVar4 = 0xffffffff;
LAB_0010053b:
  return uVar4 & 0xffffffff;
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
LAB_0010083f:
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
      goto LAB_0010083f;
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


