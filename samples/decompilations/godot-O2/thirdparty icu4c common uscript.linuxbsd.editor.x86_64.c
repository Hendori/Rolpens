
/* getCodesFromLocale(char const*, UScriptCode*, int, UErrorCode*) [clone .part.0] */

undefined8 getCodesFromLocale(char *param_1,UScriptCode *param_2,int param_3,UErrorCode *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  void *local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  void *local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  int local_80;
  void *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (void *)((long)&local_ac + 1);
  local_ac = 0;
  local_78 = (void *)((long)&local_6c + 1);
  local_6c = 0;
  local_b0 = 0x28;
  local_80 = 0;
  local_70 = 0x28;
  local_40 = 0;
  ulocimp_getSubtags_76_godot
            (param_1,(CharString *)&local_b8,(CharString *)&local_78,(CharString *)0x0,
             (CharString *)0x0,(char **)0x0,param_4);
  if (*(int *)param_4 < 1) {
    icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_c8,"ja");
    if ((local_c0 == local_80) &&
       ((local_80 == 0 || (iVar1 = memcmp(local_b8,local_c8,(long)local_80), iVar1 == 0)))) {
      uVar2 = _LC2;
      if (*(int *)param_4 < 1) {
        if (param_3 < 3) {
          *(undefined4 *)param_4 = 0xf;
        }
        else {
          *(undefined4 *)(param_2 + 8) = 0x11;
          *(undefined8 *)param_2 = uVar2;
        }
        uVar2 = 3;
        goto LAB_0010009c;
      }
    }
    else {
      icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_c8,"ko");
      if ((local_c0 == local_80) &&
         ((local_80 == 0 || (iVar1 = memcmp(local_b8,local_c8,(long)local_80), iVar1 == 0)))) {
        if (*(int *)param_4 < 1) {
          if (param_3 < 2) {
LAB_00100260:
            *(undefined4 *)param_4 = 0xf;
          }
          else {
            *(undefined8 *)param_2 = _LC4;
          }
LAB_00100251:
          uVar2 = 2;
          goto LAB_0010009c;
        }
      }
      else {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_c8,"zh");
        if ((local_c0 == local_80) &&
           (((local_80 == 0 || (iVar1 = memcmp(local_b8,local_c8,(long)local_80), iVar1 == 0)) &&
            (icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_d8,"Hant"),
            pvVar3 = local_78, local_d0 == local_40)))) {
          if ((local_40 != 0) && (iVar1 = memcmp(local_78,local_d8,(long)local_40), iVar1 != 0))
          goto LAB_00100161;
          if (*(int *)param_4 < 1) {
            if (param_3 < 2) goto LAB_00100260;
            *(undefined8 *)param_2 = _LC6;
            goto LAB_00100251;
          }
        }
        else {
          pvVar3 = local_78;
          if (local_40 != 0) {
LAB_00100161:
            iVar1 = u_getPropertyValueEnum_76_godot(0x100a,pvVar3);
            if (iVar1 != -1) {
              if (iVar1 - 0x49U < 2) {
                iVar1 = 0x11;
              }
              if (*(int *)param_4 < 1) {
                if (param_3 < 1) {
                  *(undefined4 *)param_4 = 0xf;
                }
                else {
                  *(int *)param_2 = iVar1;
                }
                uVar2 = 1;
                goto LAB_0010009c;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_0010009c:
  if ((char)local_6c != '\0') {
    uprv_free_76_godot(local_78);
  }
  if ((char)local_ac != '\0') {
    uprv_free_76_godot(local_b8);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



ulong uscript_getCode_76_godot
                (UErrorCode *param_1,UScriptCode *param_2,int param_3,UErrorCode *param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  char *local_78;
  char local_6c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    if (param_1 == (UErrorCode *)0x0) {
LAB_00100428:
      *(undefined4 *)param_4 = 1;
    }
    else {
      if (param_2 == (UScriptCode *)0x0) {
        if (param_3 != 0) goto LAB_00100428;
      }
      else if (param_3 < 0) goto LAB_00100428;
      pcVar3 = strrchr((char *)param_1,0x2d);
      if ((pcVar3 != (char *)0x0) || (pcVar3 = strrchr((char *)param_1,0x5f), pcVar3 != (char *)0x0)
         ) {
        if ((long)pcVar3 - (long)param_1 == 3) {
          sVar5 = strlen((char *)param_1);
          if (sVar5 < 9) goto LAB_0010037f;
          goto LAB_0010046a;
        }
        if (((long)pcVar3 - (long)param_1 == 7) && (sVar5 = strlen((char *)param_1), sVar5 == 0xb))
        goto LAB_0010046a;
LAB_0010037f:
        bVar1 = false;
LAB_0010038a:
        uVar4 = getCodesFromLocale((char *)param_1,param_2,param_3,param_4);
        if ((0 < *(int *)param_4) || ((int)uVar4 != 0)) goto LAB_00100431;
        ulocimp_addLikelySubtags_76_godot((char *)&local_78,param_1);
        if (*(int *)param_4 < 1) {
          uVar4 = getCodesFromLocale(local_78,param_2,param_3,param_4);
          if ((*(int *)param_4 < 1) && ((int)uVar4 == 0)) {
            if ((bVar1) ||
               ((iVar2 = u_getPropertyValueEnum_76_godot(0x100a,param_1), iVar2 == -1 ||
                (0 < *(int *)param_4)))) goto LAB_00100401;
            if (param_3 == 0) {
              *(undefined4 *)param_4 = 0xf;
            }
            else {
              *(int *)param_2 = iVar2;
            }
            uVar4 = 1;
          }
        }
        else {
LAB_00100401:
          uVar4 = 0;
        }
        if (local_6c != '\0') {
          uprv_free_76_godot(local_78);
          uVar4 = uVar4 & 0xffffffff;
        }
        goto LAB_00100431;
      }
LAB_0010046a:
      iVar2 = u_getPropertyValueEnum_76_godot(0x100a,param_1);
      if (iVar2 == -1) {
        if (*(int *)param_4 < 1) {
          bVar1 = true;
          goto LAB_0010038a;
        }
      }
      else if (*(int *)param_4 < 1) {
        if (param_3 == 0) {
          *(undefined4 *)param_4 = 0xf;
        }
        else {
          *(int *)param_2 = iVar2;
        }
        uVar4 = 1;
        goto LAB_00100431;
      }
    }
  }
  uVar4 = 0;
LAB_00100431:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
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


