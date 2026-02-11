
/* icu_76_godot::CharStringByteSink::~CharStringByteSink() */

void __thiscall icu_76_godot::CharStringByteSink::~CharStringByteSink(CharStringByteSink *this)

{
  *(undefined ***)this = &PTR__CharStringByteSink_00100b90;
  icu_76_godot::ByteSink::~ByteSink((ByteSink *)this);
  return;
}



/* icu_76_godot::CharStringByteSink::~CharStringByteSink() */

void __thiscall icu_76_godot::CharStringByteSink::~CharStringByteSink(CharStringByteSink *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__CharStringByteSink_00100b90;
  icu_76_godot::ByteSink::~ByteSink((ByteSink *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::CharStringByteSink::Append(char const*, int) */

void __thiscall
icu_76_godot::CharStringByteSink::Append(CharStringByteSink *this,char *param_1,int param_2)

{
  long lVar1;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::CharString::append
            (*(char **)(this + 8),(int)param_1,(UErrorCode *)CONCAT44(in_register_00000014,param_2))
  ;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001000df) */
/* icu_76_godot::CharStringByteSink::GetAppendBuffer(int, int, char*, int, int*) */

undefined8 __thiscall
icu_76_godot::CharStringByteSink::GetAppendBuffer
          (CharStringByteSink *this,int param_1,int param_2,char *param_3,int param_4,int *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 in_register_00000014;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 1) || (param_4 < param_1)) {
    *param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = icu_76_godot::CharString::getAppendBuffer
                      ((int)*(undefined8 *)(this + 8),param_1,
                       (int *)CONCAT44(in_register_00000014,param_2),(UErrorCode *)param_5);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* icu_76_godot::ByteSinkUtil::appendChange(int, char16_t const*, int, icu_76_godot::ByteSink&,
   icu_76_godot::Edits*, UErrorCode&) */

undefined8
icu_76_godot::ByteSinkUtil::appendChange
          (int param_1,wchar16 *param_2,int param_3,ByteSink *param_4,Edits *param_5,
          UErrorCode *param_6)

{
  byte *pbVar1;
  wchar16 wVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  UErrorCode *pUVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  int local_110 [2];
  undefined1 local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_6 < 1) {
    if (0 < param_3) {
      iVar12 = 0;
      iVar13 = 0;
      do {
        iVar3 = param_3 - iVar12;
        if (iVar3 < 0x2aaaaaaa) {
          iVar9 = iVar3 * 3;
        }
        else {
          iVar9 = iVar3 * 2;
          if (0x3ffffffe < iVar3) {
            iVar9 = 0x7fffffff;
          }
        }
        lVar5 = (**(code **)(*(long *)param_4 + 0x18))(param_4,4,iVar9,local_108,200,local_110);
        pUVar11 = (UErrorCode *)0x0;
        local_110[0] = local_110[0] + -3;
        if (iVar12 < param_3) {
          do {
            iVar3 = (int)pUVar11;
            if (local_110[0] <= iVar3) break;
            wVar2 = param_2[iVar12];
            uVar4 = (uint)(ushort)wVar2;
            pbVar1 = (byte *)(lVar5 + iVar3);
            uVar7 = iVar3 + 1;
            if ((uVar4 & 0xfc00) == 0xd800) {
              lVar8 = (long)iVar12;
              iVar12 = iVar12 + 2;
              uVar4 = (ushort)param_2[lVar8 + 1] + 0xfca02400 + uVar4 * 0x400;
              if ((int)uVar4 < 0x10000) {
LAB_0010030c:
                *pbVar1 = (byte)(uVar4 >> 0xc) | 0xe0;
              }
              else {
                lVar8 = (long)(int)uVar7;
                uVar7 = iVar3 + 2;
                *pbVar1 = (byte)(uVar4 >> 0x12) | 0xf0;
                *(byte *)(lVar5 + lVar8) = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
              }
              *(byte *)(lVar5 + (int)uVar7) = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              uVar7 = uVar7 + 1;
LAB_0010026f:
              uVar10 = uVar7 + 1;
              *(byte *)(lVar5 + (int)uVar7) = (byte)uVar4 & 0x3f | 0x80;
            }
            else {
              iVar12 = iVar12 + 1;
              if (0x7f < uVar4) {
                if (0x7ff < uVar4) goto LAB_0010030c;
                *pbVar1 = (byte)((ushort)wVar2 >> 6) | 0xc0;
                goto LAB_0010026f;
              }
              *pbVar1 = (byte)wVar2;
              uVar10 = uVar7;
            }
            pUVar11 = (UErrorCode *)(ulong)uVar10;
          } while (iVar12 < param_3);
          if (0x7fffffff - iVar13 < (int)pUVar11) {
            *(undefined4 *)param_6 = 8;
            goto LAB_00100361;
          }
          iVar13 = iVar13 + (int)pUVar11;
        }
        if (*(code **)(*(long *)param_4 + 0x10) == CharStringByteSink::Append) {
          local_110[1] = 0;
          icu_76_godot::CharString::append(*(char **)(param_4 + 8),(int)lVar5,pUVar11);
        }
        else {
          (**(code **)(*(long *)param_4 + 0x10))(param_4,lVar5);
        }
      } while (iVar12 < param_3);
    }
    if (param_5 != (Edits *)0x0) {
      icu_76_godot::Edits::addReplace((int)param_5,param_1);
    }
    uVar6 = 1;
  }
  else {
LAB_00100361:
    uVar6 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ByteSinkUtil::appendChange(unsigned char const*, unsigned char const*, char16_t
   const*, int, icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) */

undefined8
icu_76_godot::ByteSinkUtil::appendChange
          (uchar *param_1,uchar *param_2,wchar16 *param_3,int param_4,ByteSink *param_5,
          Edits *param_6,UErrorCode *param_7)

{
  undefined8 uVar1;
  
  if (*(int *)param_7 < 1) {
    if ((long)param_2 - (long)param_1 < 0x80000000) {
      uVar1 = appendChange((int)((long)param_2 - (long)param_1),param_3,param_4,param_5,param_6,
                           param_7);
      return uVar1;
    }
    *(undefined4 *)param_7 = 8;
  }
  return 0;
}



/* icu_76_godot::ByteSinkUtil::appendCodePoint(int, int, icu_76_godot::ByteSink&,
   icu_76_godot::Edits*) */

void icu_76_godot::ByteSinkUtil::appendCodePoint
               (int param_1,int param_2,ByteSink *param_3,Edits *param_4)

{
  byte bVar1;
  int iVar2;
  UErrorCode *pUVar3;
  long lVar4;
  long in_FS_OFFSET;
  byte local_24 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_2 < 0x80) {
    pUVar3 = (UErrorCode *)0x1;
    local_24[0] = (byte)param_2;
  }
  else {
    bVar1 = (byte)((uint)param_2 >> 6);
    if ((uint)param_2 < 0x800) {
      local_24[0] = bVar1 | 0xc0;
      pUVar3 = (UErrorCode *)0x2;
      iVar2 = 1;
    }
    else {
      local_24[0] = (byte)((uint)param_2 >> 0xc);
      if ((uint)param_2 < 0x10000) {
        pUVar3 = (UErrorCode *)0x3;
        iVar2 = 2;
        lVar4 = 1;
        local_24[0] = local_24[0] | 0xe0;
      }
      else {
        pUVar3 = (UErrorCode *)0x4;
        lVar4 = 2;
        local_24[1] = local_24[0] & 0x3f | 0x80;
        local_24[0] = (byte)((uint)param_2 >> 0x12) | 0xf0;
        iVar2 = 3;
      }
      local_24[lVar4] = bVar1 & 0x3f | 0x80;
    }
    local_24[iVar2] = (byte)param_2 & 0x3f | 0x80;
  }
  if (param_4 != (Edits *)0x0) {
    icu_76_godot::Edits::addReplace((int)param_4,param_1);
  }
  if (*(code **)(*(long *)param_3 + 0x10) == CharStringByteSink::Append) {
    icu_76_godot::CharString::append(*(char **)(param_3 + 8),(int)local_24,pUVar3);
  }
  else {
    (**(code **)(*(long *)param_3 + 0x10))(param_3,local_24,pUVar3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ByteSinkUtil::appendTwoBytes(int, icu_76_godot::ByteSink&) */

void icu_76_godot::ByteSinkUtil::appendTwoBytes(int param_1,ByteSink *param_2)

{
  long in_FS_OFFSET;
  byte local_12;
  byte local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_11 = (byte)param_1 & 0x3f | 0x80;
  local_12 = (byte)(param_1 >> 6) | 0xc0;
  if (*(code **)(*(long *)param_2 + 0x10) == CharStringByteSink::Append) {
    icu_76_godot::CharString::append(*(char **)(param_2 + 8),(int)&local_12,(UErrorCode *)0x2);
  }
  else {
    (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_12,2);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged(unsigned char const*, int,
   icu_76_godot::ByteSink&, unsigned int, icu_76_godot::Edits*) */

void icu_76_godot::ByteSinkUtil::appendNonEmptyUnchanged
               (uchar *param_1,int param_2,ByteSink *param_3,uint param_4,Edits *param_5)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 != (Edits *)0x0) {
    icu_76_godot::Edits::addUnchanged((int)param_5);
  }
  if ((param_4 & 0x4000) == 0) {
    if (*(code **)(*(long *)param_3 + 0x10) != CharStringByteSink::Append) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_3 + 0x10))(param_3,param_1,(UErrorCode *)(ulong)(uint)param_2);
        return;
      }
      goto LAB_00100684;
    }
    icu_76_godot::CharString::append
              (*(char **)(param_3 + 8),(int)param_1,(UErrorCode *)(ulong)(uint)param_2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100684:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ByteSinkUtil::appendUnchanged(unsigned char const*, unsigned char const*,
   icu_76_godot::ByteSink&, unsigned int, icu_76_godot::Edits*, UErrorCode&) */

undefined8
icu_76_godot::ByteSinkUtil::appendUnchanged
          (uchar *param_1,uchar *param_2,ByteSink *param_3,uint param_4,Edits *param_5,
          UErrorCode *param_6)

{
  int iVar1;
  
  if (*(int *)param_6 < 1) {
    if ((long)param_2 - (long)param_1 < 0x80000000) {
      iVar1 = (int)((long)param_2 - (long)param_1);
      if (iVar1 < 1) {
        return 1;
      }
      appendNonEmptyUnchanged(param_1,iVar1,param_3,param_4,param_5);
      return 1;
    }
    *(undefined4 *)param_6 = 8;
  }
  return 0;
}



/* icu_76_godot::CharStringByteSink::CharStringByteSink(icu_76_godot::CharString*) */

void __thiscall
icu_76_godot::CharStringByteSink::CharStringByteSink(CharStringByteSink *this,CharString *param_1)

{
  *(CharString **)(this + 8) = param_1;
  *(undefined ***)this = &PTR__CharStringByteSink_00100b90;
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
LAB_001009df:
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
      goto LAB_001009df;
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


